#pragma once
#include <GL/gl.h>
#include "glextImpl.hpp"

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
