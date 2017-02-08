#pragma once

#include <windows.h>
#include <vector>
#include <memory>
#include "privateConstructors.hpp"
#include "fileAction.hpp"
#include "tstring.hpp"

class FileChangeMonitor : PrivateConstructors
{
	tstring m_directoryName;
	const size_t m_bufferSize = 1024 * 8;
	HANDLE m_directoryHandle = nullptr;
	HANDLE m_eventHandle = nullptr;
	std::vector<unsigned char> m_buf;
	OVERLAPPED m_olp;

	// 変更の監視を開始
	bool begin_read_changes()
	{
		ResetEvent(m_eventHandle);

		m_olp = {0};
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

	// 初期化
	bool init(tstring directoryName)
	{
		m_directoryName = directoryName;

		m_directoryHandle = CreateFile(L"test", FILE_LIST_DIRECTORY,
		                               FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr,
		                               OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED, nullptr);

		if (m_directoryHandle == INVALID_HANDLE_VALUE)
		{
			return false;
		}

		m_buf.resize(m_bufferSize);

		m_eventHandle = CreateEvent(nullptr, TRUE, FALSE, nullptr);

		begin_read_changes();

		return true;
	}

public:

	static std::unique_ptr<FileChangeMonitor> create(tstring directoryName)
	{
		auto instance = std::make_unique<FileChangeMonitor>();
		if (!instance->init(directoryName)) return nullptr;
		return instance;
	}


	// 解放
	~FileChangeMonitor()
	{
		CancelIo(m_directoryHandle);
		WaitForSingleObject(m_eventHandle, INFINITE);

		CloseHandle(m_eventHandle);
		CloseHandle(m_directoryHandle);
	}

	// 変更を読み取る
	std::vector<FileAction> read_changes()
	{
		std::vector<FileAction> fileActions;

		while (true)
		{
			auto waitResult = WaitForSingleObject(m_eventHandle, 0);
			if (waitResult == WAIT_TIMEOUT)
			{
				return fileActions;
			}

			DWORD retsize = 0;
			if (!GetOverlappedResult(m_directoryHandle, &m_olp, &retsize, FALSE))
			{
				begin_read_changes();
				continue;
			}

			if (retsize == 0)
			{
				begin_read_changes();
				continue;
			}
			auto pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(&m_buf[0]);

			while (true)
			{
				FileAction action;
				action.m_actionType = static_cast<FileActionType>(pData->Action);
				action.m_fileName = tstring(pData->FileName).substr(0, pData->FileNameLength / sizeof(TCHAR));

				fileActions.push_back(action);

				if (pData->NextEntryOffset == 0)
				{
					begin_read_changes();
					break;
				}
				pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
					reinterpret_cast<unsigned char*>(pData) + pData->NextEntryOffset);
			}
		}
	}
};
