#include "prototype.h"


void FUN_00424a90(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  HWND pHVar3;
  WPARAM WVar4;
  uint uVar5;
  UINT UVar6;
  OLECHAR aOStack_208 [130];
  CHAR aCStack_104 [260];
  
  puVar2 = (uint *)GetWindowLongA(param_1,8);
  if (0x3e9 < param_2) {
    if (param_2 == 0x405) {
      if (param_4 == 1) {
        pHVar3 = GetDlgItem(param_1,0x405);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        puVar2[5] = uVar5;
      }
    }
    else if (param_2 == 0x406) {
      if (param_4 == 1) {
        pHVar3 = GetDlgItem(param_1,0x406);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        puVar2[4] = uVar5;
        FUN_00424e50(param_1,puVar2);
        return;
      }
    }
    else if ((param_2 == 0x407) && (param_4 == 1)) {
      pHVar3 = GetDlgItem(param_1,0x407);
      WVar4 = SendMessageA(pHVar3,0x147,0,0);
      uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
      puVar2[6] = uVar5;
      return;
    }
    return;
  }
  if (param_2 == 0x3e9) {
    if (param_4 != 2) {
      return;
    }
    param_2 = 1;
  }
  else if (param_2 != 1) {
    if (param_2 != 2) {
      return;
    }
    param_2 = 2;
    goto LAB_00424d42;
  }
  pHVar3 = GetDlgItem(param_1,0x407);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[6] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x405);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[5] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x3f0);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[8] = uVar5;
  if (uVar5 == 2) {
    puVar2[10] = 1;
  }
  pHVar3 = GetDlgItem(param_1,0x3f1);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[9] = uVar5;
  pHVar3 = GetDlgItem(param_1,0x3f4);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  uVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
  puVar2[7] = uVar5;
  iVar1 = *(int *)(DAT_0050b5ac + 4) + puVar2[4] * 0x2b4;
  FUN_0049d250(s_Display_004b7c20,iVar1 + 0x80);
  FUN_0049d250(s_3D_Device_004b7c14,
               *(int *)(*(int *)(DAT_0050b5ac + 4) + 0x2b0 + puVar2[4] * 0x2b4) + 0xb4 +
               puVar2[6] * 0x368);
  FUN_0049d100(s_Display_Width_004b7c04,
               *(undefined4 *)(puVar2[5] * 0x50 + 4 + *(int *)(iVar1 + 0x2a8)));
  FUN_0049d100(s_Display_Height_004b7bf4,
               *(undefined4 *)(puVar2[5] * 0x50 + 8 + *(int *)(iVar1 + 0x2a8)));
  StringFromGUID2((GUID *)(*(int *)(DAT_0050b5ac + 4) + 0x294 + puVar2[4] * 0x2b4),aOStack_208,0x104
                 );
  WideCharToMultiByte(0,0,aOStack_208,-1,aCStack_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_0049d250(&DAT_004b7d90,aCStack_104);
  UVar6 = IsDlgButtonChecked(param_1,0x3ea);
  *puVar2 = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3ee);
  puVar2[1] = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3ef);
  puVar2[2] = (uint)(UVar6 == 1);
  UVar6 = IsDlgButtonChecked(param_1,0x3f5);
  puVar2[3] = (uint)(UVar6 == 1);
LAB_00424d42:
  EndDialog(param_1,param_2);
  FUN_0049ea40(0);
  return;
}

