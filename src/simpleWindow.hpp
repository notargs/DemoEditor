#pragma once
#include <ios>
#include <windows.h>

class SimpleWindow
{
	const int kScreenWidth = 1280;
	const int kScreenHeight = 720;

	HDC m_deviceContext;
	HWND m_windowHandle;
	HGLRC m_glResourceContext;

public:

	HWND GetWindowHandle() const
	{
		return m_windowHandle;
	}

	SimpleWindow()
	{
		m_windowHandle = CreateWindow(L"edit", nullptr, WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, kScreenWidth, kScreenHeight, nullptr, nullptr, nullptr, nullptr);
		m_deviceContext = GetDC(m_windowHandle);

		static const PIXELFORMATDESCRIPTOR g_pixelFormatDescriptor =
		{
			0, 1, PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER, 32, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0
		};
		SetPixelFormat(m_deviceContext, ChoosePixelFormat(m_deviceContext, &g_pixelFormatDescriptor), &g_pixelFormatDescriptor);
		m_glResourceContext = wglCreateContext(m_deviceContext);
		wglMakeCurrent(m_deviceContext, m_glResourceContext);
	}

	~SimpleWindow()
	{
		wglMakeCurrent(nullptr, nullptr);
		wglDeleteContext(m_glResourceContext);

		ReleaseDC(m_windowHandle, m_deviceContext);
	}

	static bool Update()
	{
		MSG msg;
		PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE);
		if (msg.message == WM_NCLBUTTONDOWN && msg.wParam == HTCLOSE)
		{
			return false;
		}
		DispatchMessage(&msg);
		return !GetAsyncKeyState(VK_ESCAPE);
	}

	void Swap() const
	{
		SwapBuffers(m_deviceContext);
	}

};
