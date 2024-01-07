#ifndef PLATFORM_USER32_H
#define PLATFORM_USER32_H

// this is used for the functions required from USER32.DLL
// This is the windows UI toolkit

#include "types.h"

int __cdecl wsprintfA(LPSTR param_1, LPCSTR param_2, ...);
int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize);
BOOL __stdcall GetCursorPos(LPPOINT lpPoint);
BOOL __stdcall SetCursorPos(int X, int Y);
int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType);
BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow);
BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect);
BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect);
INT_PTR __stdcall DialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex);
BOOL __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString);
BOOL __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck);
LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong);
LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem);
BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult);
UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton);
BOOL __stdcall TranslateMessage(MSG * lpMsg);
BOOL __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);
HWND __stdcall GetDesktopWindow(void);
int __stdcall ShowCursor(BOOL bShow);
BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint);
int __stdcall GetSystemMetrics(int nIndex);
HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName);
void __stdcall PostQuitMessage(int nExitCode);
LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName);
HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName);
ATOM __stdcall RegisterClassExA(WNDCLASSEXA * param_1);
HWND __stdcall CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
BOOL __stdcall UpdateWindow(HWND hWnd);
BOOL __stdcall SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags);
BOOL __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
LRESULT __stdcall DispatchMessageA(MSG * lpMsg);

#endif
