#include "stdafx.h"
#include <ios>
#include <iostream>
#include "FileChangeMonitor.h"
#include <thread>
#include <windows.h>
#include <GL/gl.h>
#include "glext.h"
#include "glextImpl.h"
#include <fstream>
#include <Mmreg.h>

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")

class Shader
{
	GLuint m_shader;
public:

	Shader(std::string fileName, GLenum shaderType)
	{
		std::ifstream fileStream(fileName);
		std::string text((std::istreambuf_iterator<char>(fileStream)), std::istreambuf_iterator<char>());
		auto pText = text.c_str();
		m_shader = glCreateShader(shaderType);
		glShaderSource(m_shader, 1, &pText, nullptr);
		glCompileShader(m_shader);

		// ログを取得
		GLsizei bufSize;

		glGetShaderiv(m_shader, GL_INFO_LOG_LENGTH, &bufSize);

		if (bufSize > 1) {
			auto infoLog = static_cast<GLchar *>(malloc(bufSize));

			if (infoLog != nullptr) {
				GLsizei length;

				glGetShaderInfoLog(m_shader, bufSize, &length, infoLog);
				std::cout << infoLog << std::endl;
				free(infoLog);
			}
		}
	}

	~Shader()
	{
		glDeleteShader(m_shader);
	}

	void Bind(GLuint program) const
	{
		glAttachShader(program, m_shader);
	}
};

class ShaderProgram
{
	GLuint m_program;
public:

	ShaderProgram()
	{
		m_program = glCreateProgram();
	}

	~ShaderProgram()
	{
		glDeleteProgram(m_program);
	}

	void Link() const
	{
		glLinkProgram(m_program);
	}

	void Use()
	{
		glUseProgram(m_program);
	}

	GLuint GetProgram() const
	{
		return m_program;
	}
};

class Music
{
	const int m_duration = 22;
	const int m_rate = 44100;
	const int m_numChannels = 2;

	const int m_numSamples = m_duration * m_rate;
	const int m_numSampleEsc = m_numSamples * m_numChannels;
	HWAVEOUT h_wave_out = 0;

	std::vector<float> m_buffer;
public:
	Music()
	{
		m_buffer.resize(m_numSampleEsc);
	}

	std::vector<float> MakeSound(HWND hWnd)
	{
		GLuint	vbo;
		glGenBuffers(1, &vbo);
		glBindBuffer(GL_ARRAY_BUFFER, vbo);
		glBufferData(GL_ARRAY_BUFFER, m_numSampleEsc * sizeof(float), nullptr, GL_DYNAMIC_COPY);

		ShaderProgram shaderProgram;
		const char* varyings[] = { "out_sample" };
		glTransformFeedbackVaryings(shaderProgram.GetProgram(), 1, varyings, GL_INTERLEAVED_ATTRIBS);
		auto vertexShader = Shader("Test/sound.glsl", GL_VERTEX_SHADER);
		vertexShader.Bind(shaderProgram.GetProgram());
		shaderProgram.Link();
		shaderProgram.Use();

		glEnable(GL_RASTERIZER_DISCARD);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER, 0, vbo);

		glBeginTransformFeedback(GL_POINTS);
		glDrawArrays(GL_POINTS, 0, m_numSamples);
		glEndTransformFeedback();

		glGetBufferSubData(GL_TRANSFORM_FEEDBACK_BUFFER, 0, m_numSampleEsc * sizeof(float), &m_buffer[0]);
		glDisable(GL_RASTERIZER_DISCARD);

		WAVEFORMATEX wave_format =
		{
			WAVE_FORMAT_IEEE_FLOAT,
			m_numChannels,
			m_rate,
			m_rate * sizeof(float) * m_numChannels,
			sizeof(float)*m_numChannels,
			sizeof(float) * 8,
			0
		};
		WAVEHDR wave_hdr =
		{
			reinterpret_cast<LPSTR>(&m_buffer[0]),
			m_buffer.size() * sizeof(float),
			0,
			0,
			0,
			0,
			nullptr,
			0
		};

		if (h_wave_out != nullptr)
		{
			waveOutReset(h_wave_out);
		}

		waveOutOpen(&h_wave_out, WAVE_MAPPER, &wave_format, reinterpret_cast<DWORD_PTR>(hWnd), 0, CALLBACK_WINDOW);
		waveOutPrepareHeader(h_wave_out, &wave_hdr, sizeof(wave_hdr));
		waveOutWrite(h_wave_out, &wave_hdr, sizeof(wave_hdr));

		return m_buffer;
	}

	void Play(HWND hwnd)
	{
		MakeSound(hwnd);
	}
};

class GLContext
{
	const int kScreenWidth = 1280;
	const int kScreenHeight = 720;

	HDC m_deviceContext;
	HWND m_windowHandle;
	HGLRC m_glResourceContext;

public:

	HWND GetWindowHandle() const
	{
		return m_windowHandle;
	}

	GLContext()
	{
		m_windowHandle = CreateWindow(L"edit", nullptr, WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, kScreenWidth, kScreenHeight, nullptr, nullptr, nullptr, nullptr);
		m_deviceContext = GetDC(m_windowHandle);

		static const PIXELFORMATDESCRIPTOR g_pixelFormatDescriptor =
		{
			0, 1, PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, 32, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0
		};
		SetPixelFormat(m_deviceContext, ChoosePixelFormat(m_deviceContext, &g_pixelFormatDescriptor), &g_pixelFormatDescriptor);
		m_glResourceContext = wglCreateContext(m_deviceContext);
		wglMakeCurrent(m_deviceContext, m_glResourceContext);
	}

	~GLContext()
	{
		wglMakeCurrent(nullptr, nullptr);
		wglDeleteContext(m_glResourceContext);

		ReleaseDC(m_windowHandle, m_deviceContext);
	}

	static bool Update()
	{
		MSG msg;
		PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE);
		if (msg.message == WM_NCLBUTTONDOWN && msg.wParam == HTCLOSE)
		{
			return false;
		}
		DispatchMessage(&msg);
		return !GetAsyncKeyState(VK_ESCAPE);
	}

	void Swap() const
	{
		SwapBuffers(m_deviceContext);
	}

};

class TDF2017
{
public:
	std::unique_ptr<FileChangeMonitor> m_fileChangeMonitor;
	std::unique_ptr<GLContext> m_glContext;
	std::unique_ptr<ShaderProgram> m_shaderProgram;
	std::unique_ptr<Shader> m_vertexShader;
	std::unique_ptr<Shader> m_fragmentShader;

	void CreateShaderProgram()
	{
		m_shaderProgram = std::make_unique<ShaderProgram>();
		m_shaderProgram->Use();

		m_vertexShader = std::make_unique<Shader>("Test/vertex.glsl", GL_VERTEX_SHADER);
		m_fragmentShader = std::make_unique<Shader>("Test/fragment.glsl", GL_FRAGMENT_SHADER);
		m_vertexShader->Bind(m_shaderProgram->GetProgram());
		m_fragmentShader->Bind(m_shaderProgram->GetProgram());

		m_shaderProgram->Link();
	}
	
	void Run()
	{

		m_fileChangeMonitor = std::make_unique<FileChangeMonitor>();
		m_fileChangeMonitor->Init(_T("Test"));

		m_glContext = std::make_unique<GLContext>();
		CreateShaderProgram();

		Music music;
		music.Play(m_glContext->GetWindowHandle());

		auto startTime = std::chrono::system_clock::now();

		while (m_glContext->Update())
		{
			RECT rect;
			GetClientRect(m_glContext->GetWindowHandle(), &rect);
			glViewport(0, 0, rect.right, rect.bottom);

			auto resolutionLocation = glGetUniformLocation(m_shaderProgram->GetProgram(), "resolution");
			glUniform2f(resolutionLocation, rect.right, rect.bottom);

			auto changes = m_fileChangeMonitor->ReadChanges();
			if (changes.size() > 0)
			{
				// 初期化
				CreateShaderProgram();
				music.Play(m_glContext->GetWindowHandle());
				startTime = std::chrono::system_clock::now();
			}

			auto timeLocation = glGetUniformLocation(m_shaderProgram->GetProgram(), "time");
			auto time = std::chrono::duration_cast<std::chrono::milliseconds>(startTime - std::chrono::system_clock::now()).count() / 1000.0f;
			glUniform1f(timeLocation, time);

			m_shaderProgram->Use();
			glRecti(1, 1, -1, -1);
			m_glContext->Swap();
		}

		m_vertexShader = nullptr;
		m_fragmentShader = nullptr;

		m_shaderProgram = nullptr;

		m_glContext = nullptr;

		m_fileChangeMonitor = nullptr;
	}
};

int main(void)
{
	// ロケールを設定
	std::ios_base::sync_with_stdio(false);
	std::locale default_loc("");
	std::locale::global(default_loc);
	std::locale ctype_default(std::locale::classic(), default_loc, std::locale::ctype); //※
	std::wcout.imbue(ctype_default);
	std::wcin.imbue(ctype_default);

	// 実行
	TDF2017 screen;
	screen.Run();
	return 0;
}
