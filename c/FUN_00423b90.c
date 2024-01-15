#include "prototype.h"


void FUN_00423b90(HWND param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  tagRECT local_20;
  tagRECT tStack_10;
  
  GetWindowRect(param_1,&local_20);
  GetClientRect(param_1,&tStack_10);
  tStack_10.right = (local_20.right - local_20.left) - tStack_10.right;
  tStack_10.bottom = (local_20.bottom - local_20.top) - tStack_10.bottom;
  switch(param_2) {
  case 1:
  case 2:
    iVar2 = (param_3[2] - tStack_10.right) - *param_3;
    param_1 = (HWND)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    param_1 = (HWND)(((param_3[3] - param_3[1]) - tStack_10.bottom) / 3);
  }
  DAT_004eb550 = (int)param_1 * 3;
  DAT_0050b594 = (int)param_1 * 4;
  iVar2 = DAT_004eb550;
  if (DAT_004eb550 < 0x50) {
    iVar2 = 0x50;
  }
  iVar1 = DAT_0050b594;
  if (DAT_0050b594 < 0x3c) {
    iVar1 = 0x3c;
  }
  param_3[3] = param_3[1] + iVar2 + tStack_10.bottom;
  param_3[2] = *param_3 + iVar1 + tStack_10.right;
  DAT_0050b5a8 = 1;
  return;
}

