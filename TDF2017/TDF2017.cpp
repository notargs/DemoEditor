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

#pragma comment(lib, "opengl32.lib")

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
		glUseProgram(m_program);
	}

	GLuint GetProgram() const
	{
		return m_program;
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

		auto startTime = GetTickCount();

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
				CreateShaderProgram();
			}

			auto timeLocation = glGetUniformLocation(m_shaderProgram->GetProgram(), "time");
			glUniform1i(timeLocation, startTime - static_cast<int>(GetTickCount()));

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
