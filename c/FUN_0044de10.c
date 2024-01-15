#include "prototype.h"


void FUN_0044de10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_00e67c04 = param_1;
  if ((DAT_0050c6b0 == 0) && (DAT_0050c6b4 == (undefined4 *)0x0)) {
    DAT_0050c6b0 = FUN_00408e40(0x90);
    FUN_0048ee10(DAT_0050c6b0);
    *(undefined4 *)(DAT_0050c6b0 + 0x40) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x68) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x6c) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 100) = 1;
    DAT_00e37bf0 = DAT_0050c6b0 + 0x44 + *(int *)(DAT_0050c6b0 + 0x70) * 8;
    FUN_00409270();
    uVar1 = FUN_00408e40(0xd8cc0);
    *(undefined4 *)(DAT_00e37bf0 + 4) = uVar1;
    puVar3 = *(undefined4 **)(DAT_00e37bf0 + 4);
    for (iVar2 = 0x36330; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_0050c6b4 = (undefined4 *)FUN_00490b70(0);
    *DAT_0050c6b4 = 1;
    DAT_0050c6b4[5] = 1;
    DAT_0050c6b4[1] = DAT_0050c6b0;
    DAT_0050c6b4[0xb] = 0xffffffff;
    DAT_0050c6b4[0xc] = 4;
    DAT_0050c6b4[2] = 4;
    DAT_0050c6b4[9] = 0;
    DAT_0050c6b4[8] = 0;
    uVar1 = FUN_00408e40(0x1abbc0);
    *(undefined4 *)(DAT_0050c6b0 + 0x78) = uVar1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x80) = 0;
    puVar3 = *(undefined4 **)(DAT_0050c6b0 + 0x78);
    *puVar3 = DAT_004c3c20;
    *(undefined *)(puVar3 + 1) = DAT_004c3c24;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x98) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x94) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x90) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x84) = 1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x88) = 0xffffffff;
    puVar3 = &DAT_004af880;
    puVar4 = (undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0xc0);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x74) = 1;
  FUN_00408f70(DAT_0050c6b0);
  DAT_0050c6e0 = 0;
  FUN_0044dae0(*(undefined4 *)(param_1 + 0x168));
  return;
}

