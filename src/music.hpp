#pragma once
#include <Mmreg.h>
#include "shaderProgram.hpp"

class Music
{
	const int m_duration = 32;
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