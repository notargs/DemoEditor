#pragma once
#include <Mmreg.h>
#include "shaderProgram.hpp"

class Music
{
	const int m_duration = 128;
	const int m_rate = 44100;
	const int m_numChannels = 2;

	const int m_numSamples = m_duration * m_rate;
	const int m_numSampleEsc = m_numSamples * m_numChannels;
	HWAVEOUT h_wave_out = nullptr;

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
		auto vertexShader = Shader("Shaders/sound.glsl", GL_VERTEX_SHADER);
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

		WAVEFORMATEX wave_format = { 0 };
		wave_format.wFormatTag = WAVE_FORMAT_IEEE_FLOAT;
		wave_format.nChannels = m_numChannels;
		wave_format.nSamplesPerSec = m_rate;
		wave_format.nAvgBytesPerSec = m_rate * sizeof(float) * m_numChannels;
		wave_format.nBlockAlign = sizeof(float)*m_numChannels;
		wave_format.wBitsPerSample = sizeof(float) * 8;

		WAVEHDR wave_hdr = { nullptr };
		wave_hdr.lpData = reinterpret_cast<LPSTR>(&m_buffer[0]);
		wave_hdr.dwBufferLength = m_buffer.size() * sizeof(float);

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