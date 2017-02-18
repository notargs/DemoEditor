#pragma once
#include <chrono>
#include <memory>
#include <thread>
#include "FileChangeMonitor.hpp"
#include "shaderProgram.hpp"
#include "shader.hpp"
#include "simpleWindow.hpp"
#include "music.hpp"

class TDF2017
{
public:
	std::unique_ptr<FileChangeMonitor> m_fileChangeMonitor;
	std::unique_ptr<SimpleWindow> m_glContext;
	std::unique_ptr<ShaderProgram> m_shaderProgram;
	std::unique_ptr<Shader> m_vertexShader;
	std::unique_ptr<Shader> m_fragmentShader;

	void CreateShaderProgram()
	{
		m_shaderProgram = std::make_unique<ShaderProgram>();
		m_shaderProgram->Use();

		m_vertexShader = std::make_unique<Shader>("shaders/vertex.glsl", GL_VERTEX_SHADER);
		m_fragmentShader = std::make_unique<Shader>("shaders/fragment.glsl", GL_FRAGMENT_SHADER);
		m_vertexShader->Bind(m_shaderProgram->GetProgram());
		m_fragmentShader->Bind(m_shaderProgram->GetProgram());

		m_shaderProgram->Link();
	}

	void Run()
	{
		m_fileChangeMonitor = FileChangeMonitor::create(L"shaders");

		m_glContext = std::make_unique<SimpleWindow>();
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

			auto changes = m_fileChangeMonitor->read_changes();
			if (changes.size() > 0)
			{
				// ‰Šú‰»
				CreateShaderProgram();
				music.Play(m_glContext->GetWindowHandle());
				startTime = std::chrono::system_clock::now();
			}

			auto timeLocation = glGetUniformLocation(m_shaderProgram->GetProgram(), "time");
			auto time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - startTime).count() / 1000.0f;
			glUniform1f(timeLocation, time);

			m_shaderProgram->Use();
			glRecti(1, 1, -1, -1);
			m_glContext->Swap();

			std::this_thread::sleep_for(std::chrono::milliseconds(16));
		}

		m_vertexShader = nullptr;
		m_fragmentShader = nullptr;
		m_shaderProgram = nullptr;
		m_glContext = nullptr;
		m_fileChangeMonitor = nullptr;
	}
};
