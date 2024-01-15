#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044db70(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  DAT_00e374c0 = *param_1;
  DAT_00e67c04 = param_2;
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
    puVar4 = *(undefined4 **)(DAT_00e37bf0 + 4);
    for (iVar3 = 0x36330; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
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
    puVar4 = *(undefined4 **)(DAT_0050c6b0 + 0x78);
    *puVar4 = DAT_004c3c20;
    *(undefined *)(puVar4 + 1) = DAT_004c3c24;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x98) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x94) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x90) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x84) = 1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x88) = 0xffffffff;
    puVar4 = &DAT_004af880;
    puVar5 = (undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0xc0);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x74) = 1;
  FUN_00408f70(DAT_0050c6b0);
  DAT_0050c6e0 = 0;
  FUN_0044bb40();
  DAT_0050c6c0 = DAT_0050c6c0 + 1;
  puVar4 = &DAT_00e374e0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0050c6bc = 0;
  DAT_0050c6d0 = DAT_00e996dc >> 0xe & 1;
  FUN_0044d7c0(*(undefined4 *)(param_2 + 0x168));
  piVar2 = &DAT_00e374e4;
  do {
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    DAT_00e374e0 = DAT_00e374e0 + iVar3;
  } while ((int)piVar2 < 0xe37520);
  FUN_00490c80(DAT_0050c6b4,&DAT_004af880,(DAT_00e996dc & 0x4000) != 0,DAT_00ec86c4);
  *param_1 = DAT_00e374c0;
  return;
}

