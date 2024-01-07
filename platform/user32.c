#include "user32.h"

int __cdecl wsprintfA(LPSTR param_1, LPCSTR param_2, ...) {
    return 0;
}
int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize) {
    return 0;
}
BOOL __stdcall GetCursorPos(LPPOINT lpPoint) {
    return 0;
}
BOOL __stdcall SetCursorPos(int X, int Y) {
    return 0;
}
int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType) {
    return 0;
}
UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType) {
    return 0;
}
BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow) {
    return 0;
}
BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect) {
    return 0;
}
BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect) {
    return 0;
}
INT_PTR __stdcall DialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam) {
    return 0;
}
LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex) {
    return 0;
}
BOOL __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString) {
    return 0;
}
BOOL __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck) {
    return 0;
}
LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong) {
    return 0;
}
LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    return 0;
}
HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem) {
    return 0;
}
BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult) {
    return 0;
}
UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton) {
    return 0;
}
BOOL __stdcall TranslateMessage(MSG * lpMsg) {
    return 0;
}
BOOL __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint) {
    return 0;
}
HWND __stdcall GetDesktopWindow(void) {
    return 0;
}
int __stdcall ShowCursor(BOOL bShow) {
    return 0;
}
BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint) {
    return 0;
}
int __stdcall GetSystemMetrics(int nIndex) {
    return 0;
}
HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName) {
    return 0;
}
void __stdcall PostQuitMessage(int nExitCode) { }
LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    return 0;
}
HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName) {
    return 0;
}
HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName) {
    return 0;
}
ATOM __stdcall RegisterClassExA(WNDCLASSEXA * param_1) {
    return 0;
}
HWND __stdcall CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam) {
    return 0;
}
BOOL __stdcall UpdateWindow(HWND hWnd) {
    return 0;
}
BOOL __stdcall SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags) {
    return 0;
}
BOOL __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
    return 0;
}
BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax) {
    return 0;
}
LRESULT __stdcall DispatchMessageA(MSG * lpMsg) {
    return 0;
}
