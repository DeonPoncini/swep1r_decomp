#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424e50(HWND param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  HWND hWnd;
  HWND hWnd_00;
  WPARAM WVar4;
  uint lParam;
  int iVar5;
  
  hWnd = GetDlgItem(param_1,0x405);
  hWnd_00 = GetDlgItem(param_1,0x407);
  lParam = 0;
  SendMessageA(hWnd,0x14b,0,0);
  SendMessageA(hWnd_00,0x14b,0,0);
  bVar3 = false;
  iVar1 = *(int *)(DAT_0050b5ac + 4) + *(int *)(param_2 + 0x10) * 0x2b4;
  if (*(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2ac + *(int *)(param_2 + 0x10) * 0x2b4) != 0) {
    param_1 = (HWND)0x0;
    do {
      FUN_0049eb80(&DAT_00ecbc20,&DAT_004b2304,(int)param_1 + 0xb4 + *(int *)(iVar1 + 0x2b0));
      WVar4 = SendMessageA(hWnd_00,0x143,0,0xecbc20);
      SendMessageA(hWnd_00,0x151,WVar4,lParam);
      if (*(uint *)(param_2 + 0x18) == lParam) {
        SendMessageA(hWnd_00,0x14e,WVar4,0);
        bVar3 = true;
      }
      lParam = lParam + 1;
      param_1 = (HWND)((int)param_1 + 0x368);
    } while (lParam < *(uint *)(iVar1 + 0x2ac));
  }
  if (!bVar3) {
    SendMessageA(hWnd_00,0x14e,0,0);
  }
  _DAT_004eb51c = 0x10;
  iVar5 = 0;
  param_1 = (HWND)0x0;
  if (*(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 + *(int *)(param_2 + 0x10) * 0x2b4) != 0) {
    do {
      iVar2 = iVar5 + *(int *)(iVar1 + 0x2a8);
      FUN_0049eb80(&DAT_00ecbc20,s__dx_d__dbpp_004b7d98,*(undefined4 *)(iVar2 + 4),
                   *(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar5 + 0x1c + *(int *)(iVar1 + 0x2a8)));
      if (*(int *)(iVar5 + 0x1c + *(int *)(iVar1 + 0x2a8)) == 0x10) {
        WVar4 = SendMessageA(hWnd,0x143,0,0xecbc20);
        SendMessageA(hWnd,0x151,WVar4,(LPARAM)param_1);
        if ((*(int *)(iVar5 + 4 + *(int *)(iVar1 + 0x2a8)) == DAT_004eb504) &&
           (*(int *)(iVar5 + *(int *)(iVar1 + 0x2a8) + 8) == DAT_004eb508)) {
          SendMessageA(hWnd,0x14e,WVar4,0);
        }
      }
      param_1 = (HWND)((int)param_1 + 1);
      iVar5 = iVar5 + 0x50;
    } while (param_1 < *(uint *)(*(int *)(DAT_0050b5ac + 4) + 0x2a4 +
                                *(int *)(param_2 + 0x10) * 0x2b4));
  }
  return;
}

