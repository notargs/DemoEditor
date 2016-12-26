#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <thread>
#include <vector>
#include <queue>
#include <iostream>
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
	std::queue<FileAction> m_fileActions;

	// 変更の監視を開始
	bool beginReadChanges()
	{
		ResetEvent(m_eventHandle);

		m_olp = { 0 };
		m_olp.hEvent = m_eventHandle;

		const DWORD filter =
			FILE_NOTIFY_CHANGE_FILE_NAME |
			FILE_NOTIFY_CHANGE_DIR_NAME |
			FILE_NOTIFY_CHANGE_ATTRIBUTES |
			FILE_NOTIFY_CHANGE_SIZE |
			FILE_NOTIFY_CHANGE_LAST_WRITE;
		if (!ReadDirectoryChangesW(m_directoryHandle, &m_buf[0], static_cast<DWORD>(m_bufferSize), TRUE, filter, nullptr, &m_olp, nullptr))
		{
			return false;
		}

		return true;
	}

public:

	// ファイル変更履歴キューの要素数を数える
	size_t getFileAcctionStackCount() const
	{
		return m_fileActions.size();
	}

	// ファイル変更履歴キューから情報を取り出す
	FileAction popFileAcctionStack()
	{
		auto file_action = m_fileActions.front();
		m_fileActions.pop();
		return file_action;
	}

	// 初期化
	bool init(tstring directoryName)
	{
		m_directoryName = directoryName;

		m_directoryHandle = CreateFile(m_directoryName.c_str(), FILE_LIST_DIRECTORY, 
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr,
			OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED, nullptr);

		if (m_directoryHandle == INVALID_HANDLE_VALUE)
		{
			return false;
		}

		m_buf.resize(m_bufferSize);

		m_eventHandle = CreateEvent(nullptr, TRUE, FALSE, nullptr);

		beginReadChanges();

		return true;
	}

	// 解放
	void release() const
	{
		CancelIo(m_directoryHandle);
		WaitForSingleObject(m_eventHandle, INFINITE);

		CloseHandle(m_eventHandle);
		CloseHandle(m_directoryHandle);
	}

	// 変更を読み取る
	void readChanges()
	{
		auto waitResult = WaitForSingleObject(m_eventHandle, 0);
		if (waitResult == WAIT_TIMEOUT)
		{
			return;
		}

		DWORD retsize = 0;
		if (!GetOverlappedResult(m_directoryHandle, &m_olp, &retsize, FALSE))
		{
			beginReadChanges();
			return;
		}

		if (retsize == 0)
		{
			beginReadChanges();
			return;
		}
		auto pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(&m_buf[0]);

		while (true)
		{
			FileAction action;
			action.m_actionType = static_cast<FileActionType>(pData->Action);
			action.m_fileName = tstring(pData->FileName).substr(0, pData->FileNameLength / sizeof(TCHAR));

			m_fileActions.push(action);

			if (pData->NextEntryOffset == 0)
			{
				beginReadChanges();
				return;
			}
			pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
				reinterpret_cast<unsigned char*>(pData) + pData->NextEntryOffset);
		}
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

	// 初期化
	auto fileChangeMonitor = FileChangeMonitor();
	fileChangeMonitor.init(L"Test");

	// 変更を監視する
	while (true)
	{
		// 状況を更新
		fileChangeMonitor.readChanges();

		// 変更があればログとして吐き出す
		while (fileChangeMonitor.getFileAcctionStackCount() > 0)
		{
			auto fileAction = fileChangeMonitor.popFileAcctionStack();
			tstring actionType = L"";

			switch (fileAction.m_actionType)
			{
			case FileActionType::kAdded:
				actionType = L"Added";
				break;
			case FileActionType::kRemoved:
				actionType = L"Removed";
				break;
			case FileActionType::kModified:
				actionType = L"Modified";
				break;
			case FileActionType::kRenamedOld:
				actionType = L"RenamedOld";
				break;
			case FileActionType::kRenamedNew:
				actionType = L"RenamedNew";
				break;
			default:
				break;
			}
			TCOUT << actionType.c_str() << ": " << fileAction.m_fileName.c_str() << std::endl;
		}

		// 500ミリ秒待機
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}

	// 解放する
	fileChangeMonitor.release();
	return 0;
}
