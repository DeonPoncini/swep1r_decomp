#include "gdi.h"

#ifndef _WIN32
BOOL __stdcall DeleteObject(HGDIOBJ ho) {
    return 0;
}
HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h) {
    return 0;
}
int __stdcall SetBkMode(HDC hdc, int mode) {
    return 0;
}
COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color) {
    return 0;
}
HGDIOBJ __stdcall GetStockObject(int i) {
    return 0;
}
HFONT __stdcall CreateFontA(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName) {
    return 0;
}
BOOL __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c) {
    return 0;
}
#endif
