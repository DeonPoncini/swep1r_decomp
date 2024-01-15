#include "prototype.h"


undefined4 FUN_004887c0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int unaff_retaddr;
  HDC hdc;
  LPCSTR local_4;
  
  hdc = DAT_00ec8e00;
  iVar2 = (**(code **)(DAT_00ec8e00->unused + 0x44))(DAT_00ec8e00,&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  SetBkMode(hdc,1);
  SelectObject(hdc,DAT_00529510);
  SetTextColor(hdc,0xffff);
  uVar3 = 0xffffffff;
  pCVar4 = local_4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  TextOutA(hdc,unaff_retaddr,param_1,local_4,~uVar3 - 1);
  (**(code **)(DAT_00ec8e00->unused + 0x68))(DAT_00ec8e00,hdc);
  return 1;
}

