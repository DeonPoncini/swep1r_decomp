#include "prototype.h"


undefined4 FUN_0049cea0(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3)

{
  ATOM AVar1;
  HWND pHVar2;
  int nHeight;
  int nWidth;
  HMENU hMenu;
  LPVOID lpParam;
  WNDCLASSEXA local_30;
  
  local_30.cbSize = 0x30;
  local_30.hInstance = param_1;
  local_30.lpszClassName = s_wKernelJones3D_004d1aa4;
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpfnWndProc = FUN_0049cfd0;
  local_30.style = 0;
  local_30.hIcon = LoadIconA(param_1,s_APPICON_004d1ab4);
  if (local_30.hIcon == (HICON)0x0) {
    local_30.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  local_30.hIconSm = LoadIconA(param_1,s_APPICON_004d1ab4);
  if (local_30.hIconSm == (HICON)0x0) {
    local_30.hIconSm = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hbrBackground = (HBRUSH)GetStockObject(4);
  AVar1 = RegisterClassExA(&local_30);
  if (AVar1 == 0) {
    return 0;
  }
  pHVar2 = FindWindowA(s_wKernelJones3D_004d1aa4,param_3);
  if (pHVar2 != (HWND)0x0) {
    FUN_0049ea40(0xffffffff);
  }
  lpParam = (LPVOID)0x0;
  hMenu = (HMENU)0x0;
  pHVar2 = (HWND)0x0;
  nHeight = GetSystemMetrics(1);
  nWidth = GetSystemMetrics(0);
  DAT_00dfaa28 = CreateWindowExA(8,s_wKernelJones3D_004d1aa4,param_3,0x90000000,0,0,nWidth,nHeight,
                                 pHVar2,hMenu,param_1,lpParam);
  if (DAT_00dfaa28 == (HWND)0x0) {
    return 0;
  }
  ShowWindow(DAT_00dfaa28,1);
  UpdateWindow(DAT_00dfaa28);
  return 1;
}

