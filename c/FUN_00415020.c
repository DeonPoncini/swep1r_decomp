#include "prototype.h"


void FUN_00415020(undefined *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_004d87a0 != 0) {
    FUN_00412630();
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  iVar3 = 0;
  for (puVar1 = param_1; puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 4)) {
    if (((*(uint *)(puVar1 + 0x20) & 0x40) != 0) && ((*(uint *)(puVar1 + 0x20) & 1) != 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  uVar4 = 0;
  for (puVar1 = param_1; puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 4)) {
    if ((puVar1[0x20] & 0x40) != 0) {
      uVar2 = FUN_00416930(puVar1);
      uVar4 = uVar4 | uVar2;
      FUN_004151f0(puVar1);
      FUN_004151a0(puVar1,9,0,0);
    }
  }
  if (((uVar4 == 0) && (iVar3 != 0)) && (*(int *)(param_1 + 8) != 0)) {
    FUN_004151a0(*(int *)(param_1 + 8),0x48,0,0);
  }
  for (; param_1 != (undefined *)0x0; param_1 = *(undefined **)(param_1 + 4)) {
    if (((param_1[0x20] & 0x40) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_00415020(*(int *)(param_1 + 0xc));
    }
  }
  return;
}

