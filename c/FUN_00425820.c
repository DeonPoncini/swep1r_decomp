#include "prototype.h"


undefined4 FUN_00425820(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  tagRECT *lpRect;
  tagRECT local_30;
  tagRECT tStack_20;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_30);
  GetClientRect(param_1,&local_10);
  iVar1 = local_30.right - local_30.left;
  lpRect = &tStack_20;
  iVar2 = local_30.bottom - local_30.top;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  local_30.top = (((tStack_20.bottom - local_30.bottom) - local_30.top) - tStack_20.top) / 2;
  local_30.left = (((tStack_20.right - local_30.right) - local_30.left) - tStack_20.left) / 2;
  local_30.bottom = iVar2 + local_30.top;
  local_30.right = iVar1 + local_30.left;
  MoveWindow(param_1,local_30.left,local_30.top,local_30.right - local_30.left,
             local_30.bottom - local_30.top,1);
  return 1;
}

