#pragma once

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <vector>
#include <queue>

using tstring = std::basic_string<TCHAR>;

#if defined(UNICODE) || defined(_UNICODE)
#define TCOUT std::wcout
#else
#define TCOUT std::cout
#endif

enum class FileActionType
{
	kAdded = FILE_ACTION_ADDED,
	kRemoved = FILE_ACTION_REMOVED,
	kModified = FILE_ACTION_MODIFIED,
	kRenamedOld = FILE_ACTION_RENAMED_OLD_NAME,
	kRenamedNew = FILE_ACTION_RENAMED_NEW_NAME,
};

struct FileAction
{
	FileActionType m_actionType;
	tstring m_fileName;
};

class FileChangeMonitor
{
	tstring m_directoryName;
	const size_t m_bufferSize = 1024 * 8;
	HANDLE m_directoryHandle = nullptr;
	HANDLE m_eventHandle = nullptr;
	std::vector<unsigned char> m_buf;
	OVERLAPPED m_olp;

	// 変更の監視を開始
	bool BeginReadChanges();

public:
	// 初期化
	bool Init(tstring directoryName);

	// 解放
	~FileChangeMonitor();

	// 変更を読み取る
	std::vector<FileAction> ReadChanges();
};