#include "prototype.h"


void FUN_0048eb00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if ((iVar2 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x88) != 0)) {
    do {
      FUN_0048aa40(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x90));
  }
  return;
}

