#ifndef PLATFORM_GDI_H
#define PLATFORM_GDI_H

// this is used for functions required from GDI.DLL
// This is the windows graphics device interface

#include "types.h"

BOOL __stdcall DeleteObject(HGDIOBJ ho);
HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h);
int __stdcall SetBkMode(HDC hdc, int mode);
COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color);
HGDIOBJ __stdcall GetStockObject(int i);
HFONT __stdcall CreateFontA(int cHeight, int cWidth, int cEscapement, int cOrientation, int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut, DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision, DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName);
BOOL __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c);

#endif
