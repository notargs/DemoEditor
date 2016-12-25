#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <array>
#include <thread>
#include <iostream>
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
	FileActionType action_type_;
	tstring file_name_;
};

class FileChangeMonitor
{
	tstring directory_name_;
	const size_t buffer_size_ = 1024 * 8;
	HANDLE directory_handle_ = nullptr;
	HANDLE event_handle_ = nullptr;
	std::vector<unsigned char> buf_;
	OVERLAPPED olp_;
	std::queue<FileAction> fileActions_;

public:

	bool init(tstring directory_name)
	{
		directory_name_ = directory_name;

		directory_handle_ = CreateFile(directory_name_.c_str(), FILE_LIST_DIRECTORY, 
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr,
			OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED, nullptr);

		if (directory_handle_ == INVALID_HANDLE_VALUE)
		{
			return false;
		}

		buf_.resize(buffer_size_);

		event_handle_ = CreateEvent(nullptr, TRUE, FALSE, nullptr);

		return true;
	}

	void run()
	{
		init(L"Test");
		begin_read_changes();
		while (true)
		{
			while(wait())
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(500));
			} 
			read_changes();
			while (fileActions_.size() > 0)
			{
				auto file_action = fileActions_.front();
				fileActions_.pop();
				tstring action_type = L"";
				
				switch (file_action.action_type_)
				{
				case FileActionType::kAdded:
					action_type = L"Added";
					break;
				case FileActionType::kRemoved:
					action_type = L"Removed";
					break;
				case FileActionType::kModified:
					action_type = L"Modified";
					break;
				case FileActionType::kRenamedOld:
					action_type = L"RenamedOld";
					break;
				case FileActionType::kRenamedNew:
					action_type = L"RenamedNew";
					break;
				default: 
					break;
				}
				_tprintf_s(L"%s\n", file_action.file_name_.c_str());
				_tprintf_s(L"%s\n", action_type.c_str());
				
			}
			begin_read_changes();
		}

		release();
	}

	void release() const
	{
		CloseHandle(event_handle_);
		CloseHandle(directory_handle_);
	}

	bool begin_read_changes()
	{
		ResetEvent(event_handle_);

		olp_ = { 0 };
		olp_.hEvent = event_handle_;

		const DWORD filter =
			FILE_NOTIFY_CHANGE_FILE_NAME |
			FILE_NOTIFY_CHANGE_DIR_NAME |
			FILE_NOTIFY_CHANGE_ATTRIBUTES |
			FILE_NOTIFY_CHANGE_SIZE |
			FILE_NOTIFY_CHANGE_LAST_WRITE;
		if (!ReadDirectoryChangesW(directory_handle_, &buf_[0], buffer_size_, TRUE, filter, nullptr, &olp_, nullptr))
		{
			return false;
		}

		return true;
	}

	bool wait() const
	{
		auto waitResult = WaitForSingleObject(event_handle_, 0);
		if (waitResult != WAIT_TIMEOUT)
		{
			return false;
		}
		return true;
	}

	void read_changes()
	{
		DWORD retsize = 0;
		if (!GetOverlappedResult(directory_handle_, &olp_, &retsize, FALSE))
		{
			return;
		}

		if (retsize == 0)
		{
			return;
		}
		auto pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(&buf_[0]);

		while (true)
		{
			FileAction action;
			action.action_type_ = static_cast<FileActionType>(pData->Action);
			action.file_name_ = tstring(pData->FileName).substr(0, pData->FileNameLength / sizeof(TCHAR));

			fileActions_.push(action);

			if (pData->NextEntryOffset == 0)
			{
				return;
			}
			pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
				reinterpret_cast<unsigned char*>(pData) + pData->NextEntryOffset);
		}
	}

	void break_event() const
	{
		CancelIo(directory_handle_);
		WaitForSingleObject(event_handle_, INFINITE);
	}
};

// メインエントリ
int main(void)
{
	// コンソール出力を日本語可能に
	setlocale(LC_ALL, "");

	FileChangeMonitor().run();
	return 0;
}
