#include "windows.h"
#include <iostream>
#include <string>
#include <stack>

#define MAX_POPUP_WND 7

BOOL MyRegClass(WNDPROC, HINSTANCE, WNDCLASS, TCHAR*);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK PopupProc(HWND, UINT, WPARAM, LPARAM);

std::stack<HWND> popSt;
int popX = 10;
int popY = 10;

TCHAR mainClassName[] = L"Evgen Class";
TCHAR popupClassName[] = L"Evgen popup";

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd){
	HWND hWnd;
	MSG msg;
	WNDCLASS wcl;
	WNDCLASS popupcl;

 	memset(&wcl, 0, sizeof(WNDCLASS));
 	memset(&popupcl, 0, sizeof(WNDCLASS));

	if (!MyRegClass(WndProc, hInstance, wcl, mainClassName))
		return FALSE;
	if (!MyRegClass(PopupProc, hInstance, popupcl, popupClassName))
		return FALSE;

	hWnd = CreateWindow(mainClassName, L"This is Evgen window",
		WS_OVERLAPPEDWINDOW, 300, 200, 400, 280, NULL, NULL, hInstance, NULL);
	ShowWindow(hWnd, nShowCmd);
	UpdateWindow(hWnd);

	while (GetMessage(&msg, NULL, 0, 0)){
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	};
	return msg.wParam;
};

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wparam, LPARAM lparam){
	switch (msg){
	case WM_KEYDOWN:
		if ((int)popSt.size() > 0){
			popX -= 50;
			popY -= 50;
			DestroyWindow(popSt.top());
			popSt.pop();
		};
		break;
	case WM_RBUTTONDOWN:
		SetWindowText(hWnd, L"Right click");
		break;
	case WM_LBUTTONDOWN:
		if ((int)popSt.size() < MAX_POPUP_WND){
			HWND popupWnd = CreateWindow(popupClassName, std::to_wstring(popSt.size()).c_str(),
				WS_CAPTION | WS_VISIBLE, popX, popY, 400, 100, NULL, 0, 0, 0);
			popX += 50;
			popY += 50;
			popSt.push(popupWnd);
		};
		break;
	case WM_LBUTTONDBLCLK:
		SetWindowPos(hWnd, NULL, 200, 200, 200, 150, 0);
		break;
	case WM_CLOSE:
		if (MessageBox(hWnd, L"Exit?", L"Close", MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON2) == IDOK){
			PostQuitMessage(0);
		};
		break;
	default:
		return DefWindowProc(hWnd, msg, wparam, lparam);
		break;
	};
	return 0;
};

LRESULT CALLBACK PopupProc(HWND hWnd, UINT msg, WPARAM wparam, LPARAM lparam){
	return DefWindowProc(hWnd, msg, wparam, lparam);
};

BOOL MyRegClass(WNDPROC proc, HINSTANCE hInstance, WNDCLASS wcl, TCHAR* className){
	wcl.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
	wcl.lpfnWndProc = proc;
	wcl.hInstance = hInstance;
	wcl.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wcl.lpszClassName = className;

	return RegisterClass(&wcl);
};