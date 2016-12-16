#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <array>
#include <thread>
#include <iostream>
#include <vector>

// エラーの表示
static void ShowError(LPCTSTR msg)
{
	DWORD errcode = GetLastError();
	_tprintf(_T("%s errorcode: %lx\r\n"), msg, errcode);
}

class FileChangeMonitor
{
public:
	void Run()
	{
		// オプション引数の値を保持する
		auto m_directory_name = _T("Test");
		size_t m_buffer_size = 1024 * 8;
		auto waittime = 0;

		HANDLE m_directoryHandle = CreateFile(m_directory_name, FILE_LIST_DIRECTORY, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr,
			OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED, nullptr);
		if (m_directoryHandle == INVALID_HANDLE_VALUE)
		{
			ShowError(_T("CreateFileでの失敗"));
			return;
		}

		DWORD filter = FILE_NOTIFY_CHANGE_FILE_NAME | FILE_NOTIFY_CHANGE_DIR_NAME |
			FILE_NOTIFY_CHANGE_ATTRIBUTES |  FILE_NOTIFY_CHANGE_SIZE |  FILE_NOTIFY_CHANGE_LAST_WRITE;

		std::vector<unsigned char> buf(m_buffer_size);
		void* pBuf = &buf[0];

		HANDLE m_eventHandle = CreateEvent(nullptr, TRUE, FALSE, nullptr);

		for (;;)
		{
			const auto mx = waittime * 10;
			for (auto idx = 0; idx < mx; idx++)
			{
				_tprintf(_T("sleep... %d/%d \r"), idx + 1, mx);
				Sleep(100);
			}
			_tprintf(_T("\r\nstart.\r\n"));

			ResetEvent(m_eventHandle);

			OVERLAPPED olp = {0};
			olp.hEvent = m_eventHandle;

			if (!ReadDirectoryChangesW(m_directoryHandle, pBuf, m_buffer_size, TRUE, filter, nullptr, &olp, nullptr))
			{
				ShowError(_T("ReadDirectoryChangesWでの失敗"));
				break;
			}

			while (true)
			{
				DWORD waitResult = WaitForSingleObject(m_eventHandle, 500);
				if (waitResult != WAIT_TIMEOUT)
				{
					break;
				}
				_tprintf(_T("."));
			}
			_tprintf(_T("\r\n"));

			if (false)
			{
				CancelIo(m_directoryHandle);
				WaitForSingleObject(m_eventHandle, INFINITE);
				break;
			}

			DWORD retsize = 0;
			if (!GetOverlappedResult(m_directoryHandle, &olp, &retsize, FALSE))
			{
				ShowError(_T("GetOverlappedResultでの失敗"));
				break;
			}

			_tprintf(_T("returned size=%ld\r\n"), retsize);

			if (retsize == 0)
			{
				_tprintf(_T("buffer overflow!!\r\n"));
			}
			else
			{
				FILE_NOTIFY_INFORMATION* pData =
					reinterpret_cast<FILE_NOTIFY_INFORMATION*>(pBuf);

				for (;;)
				{
					TCHAR* pActionMsg = _T("UNKNOWN");
					switch (pData->Action)
					{
					case FILE_ACTION_ADDED:
						pActionMsg = _T("Added");
						break;
					case FILE_ACTION_REMOVED:
						pActionMsg = _T("Removed");
						break;
					case FILE_ACTION_MODIFIED:
						pActionMsg = _T("Modified");
						break;
					case FILE_ACTION_RENAMED_OLD_NAME:
						pActionMsg = _T("Rename Old");
						break;
					case FILE_ACTION_RENAMED_NEW_NAME:
						pActionMsg = _T("Rename New");
						break;
					}

					DWORD lenBytes = pData->FileNameLength;
					std::vector<WCHAR> fileName(lenBytes / sizeof(WCHAR) + 1);
					memcpy(&fileName[0], pData->FileName, lenBytes);

					_tprintf(_T("[%s]<%s>\r\n"), pActionMsg, &fileName[0]);

					if (pData->NextEntryOffset == 0)
					{
						break;
					}
					pData = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
						reinterpret_cast<unsigned char*>(pData) + pData->NextEntryOffset);
				}
			}
		}

		CloseHandle(m_eventHandle);
		CloseHandle(m_directoryHandle);
	}
};

// メインエントリ
int main(int argc, _TCHAR* argv[])
{
	// コンソール出力を日本語可能に
	setlocale(LC_ALL, "");

	FileChangeMonitor().Run();
	return 0;
}
