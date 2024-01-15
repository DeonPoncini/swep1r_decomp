#include "prototype.h"


void FUN_0045b210(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  iVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x72)) {
    puVar5 = &DAT_00e29bc8;
    iVar1 = 0;
    do {
      if ((puVar5[-1] == 0x4c6f636c) || (iVar3 = iVar1, (*(byte *)puVar5 & 0x20) != 0)) {
        local_18 = puVar5[0x1f];
        iVar3 = iVar1 + 1;
        local_20 = 0x4e41736e;
        local_1c = iVar3;
        uVar2 = FUN_00450aa0(0x634d616e,iVar1,&local_20);
        FUN_00450c00(uVar2);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x22;
      iVar1 = iVar3;
    } while (iVar4 < *(char *)(param_1 + 0x72));
  }
  return;
}

