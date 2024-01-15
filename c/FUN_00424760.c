#include "prototype.h"


undefined4 FUN_00424760(HWND param_1,undefined4 param_2,UINT *param_3)

{
  HWND hDlg;
  UINT *dwNewLong;
  HWND pHVar1;
  WPARAM WVar2;
  LPCSTR pCVar3;
  
  dwNewLong = param_3;
  hDlg = param_1;
  FUN_00425820(param_1);
  pHVar1 = GetDlgItem(param_1,0x406);
  param_1 = (HWND)0x0;
  if (*DAT_0050b5ac != 0) {
    param_3 = (UINT *)0x0;
    do {
      if (*(int *)(DAT_0050b5ac[1] + (int)param_3 + 0x104) == 1) {
        FUN_0049eb80(&DAT_00ecbc20,&DAT_004b2304,DAT_0050b5ac[1] + (int)param_3 + 0x80);
        WVar2 = SendMessageA(pHVar1,0x143,0,0xecbc20);
        SendMessageA(pHVar1,0x151,WVar2,(LPARAM)param_1);
        if (param_1 == (HWND)dwNewLong[4]) {
          SendMessageA(pHVar1,0x14e,WVar2,0);
        }
      }
      param_1 = (HWND)((int)param_1 + 1);
      param_3 = (UINT *)((int)param_3 + 0x2b4);
    } while (param_1 < *DAT_0050b5ac);
  }
  pHVar1 = GetDlgItem(hDlg,0x3f0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d84);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d78);
  SendMessageA(pHVar1,0x151,WVar2,2);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d70);
  SendMessageA(pHVar1,0x151,WVar2,3);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d68);
  SendMessageA(pHVar1,0x151,WVar2,4);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  pHVar1 = GetDlgItem(hDlg,0x3f1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d60);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d5c);
  SendMessageA(pHVar1,0x151,WVar2,0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d54);
  SendMessageA(pHVar1,0x151,WVar2,2);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d4c);
  SendMessageA(pHVar1,0x151,WVar2,3);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  pHVar1 = GetDlgItem(hDlg,0x3f4);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d60);
  SendMessageA(pHVar1,0x151,WVar2,0);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d40);
  SendMessageA(pHVar1,0x14e,WVar2,0);
  SendMessageA(pHVar1,0x151,WVar2,1);
  WVar2 = SendMessageA(pHVar1,0x143,0,0x4b7d34);
  SendMessageA(pHVar1,0x151,WVar2,2);
  FUN_00424e50(hDlg,dwNewLong);
  SetWindowLongA(hDlg,8,(LONG)dwNewLong);
  CheckDlgButton(hDlg,0x3ea,*dwNewLong);
  CheckDlgButton(hDlg,0x3ee,dwNewLong[1]);
  CheckDlgButton(hDlg,0x3ef,dwNewLong[2]);
  CheckDlgButton(hDlg,0x3f5,dwNewLong[3]);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0525_Racer_Display_S_004b7d08);
  SetDlgItemTextA(hDlg,0x65,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0526_Graphics_Hardw_004b7ce4);
  SetDlgItemTextA(hDlg,0x408,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0527_3D_Device_004b7cc8);
  SetDlgItemTextA(hDlg,0x409,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0528_Display_Mode_004b7ca8);
  SetDlgItemTextA(hDlg,0x40a,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0529__Accept_004b7c8c);
  SetDlgItemTextA(hDlg,1,pCVar3);
  pCVar3 = (LPCSTR)FUN_00421360(s__MONDOTEXT_H_0530__Cancel_004b7c70);
  SetDlgItemTextA(hDlg,2,pCVar3);
  return 1;
}

