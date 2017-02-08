#pragma once

#include <ios>
#include <iostream>
#include "glextImpl.hpp"
#include <fstream>

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

		// ƒƒO‚ðŽæ“¾
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
