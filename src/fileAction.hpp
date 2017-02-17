#pragma once

#include "fileActionType.hpp"
#include "tstring.hpp"

class FileAction
{
	FileActionType m_actionType;
	tstring m_fileName;

	FileActionType getActionType() const { return m_actionType; }
	tstring getFileName() const { return m_fileName; }

public:

	FileAction(FileActionType actionType, tstring fileName)
	{
		m_actionType = actionType;
		m_fileName = fileName;
	}
};
