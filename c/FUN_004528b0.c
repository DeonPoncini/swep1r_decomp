#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004528b0(float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_58 [20];
  undefined4 local_44;
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [8];
  float local_8;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)((int)param_1 + 0xf4);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + 0x60);
    *(undefined4 *)((int)param_1 + 0x2b0) = 0x42c80000;
    if (*(int *)((int)param_1 + 0x7c) == 5) {
      *(undefined4 *)((int)param_1 + 0x2b0) = 0x42f00000;
    }
    FUN_0044bb10(local_40,iVar3 + 0x20);
    local_8 = *(float *)(iVar3 + 0x250) + local_8;
    piVar1 = (int *)((int)param_1 + 0x7c);
    param_1 = (*(float *)(iVar3 + 0xa8) - _DAT_004ace6c) * _DAT_004acdc8;
    if ((*piVar1 != 5) &&
       (param_1 = param_1 * _DAT_004ace70, **(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 0xe)) {
      param_1 = param_1 * _DAT_004ace74;
    }
    if (**(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 0xe) {
      FUN_0042fa80(local_10,local_10,param_1,local_20);
    }
    else if ((uVar4 & 0x6000000) == 0) {
      local_8 = *(float *)(iVar3 + 0x48) * param_1 + local_8;
    }
    if (**(int **)(*(int *)(iVar3 + 0x1e70) + 0x18) == 10) {
      FUN_0042fa80(local_10,local_10,0x40400000,local_30);
    }
    if ((*(uint *)(iVar3 + 100) & 0x18000) != 0) {
      FUN_00430b80(iVar3 + 0x490,local_58);
      FUN_00431390(local_40,local_44,0,0x3f800000,0,local_40);
    }
    iVar2 = iVar5 + 0x20;
    FUN_0044bb10(iVar2,local_40);
    FUN_0044bb10(iVar5 + 0x108,local_40);
    if ((*(uint *)(iVar3 + 0x60) & 0x100000) != 0) {
      FUN_0042fa80(iVar5 + 0x138,local_10,0xbf800000,local_30);
      FUN_0042fa50(iVar5 + 0x30,0xbf800000,iVar5 + 0x30);
      FUN_0042fa50(iVar2,0xbf800000,iVar2);
      return;
    }
    FUN_0042fa80(iVar5 + 0x138,local_10,0x3f800000,local_30);
  }
  return;
}

