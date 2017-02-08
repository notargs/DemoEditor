#pragma once

#include "fileActionType.hpp"
#include "tstring.hpp"

struct FileAction
{
	FileActionType m_actionType;
	tstring m_fileName;
};
