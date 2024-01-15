#include "prototype.h"


void FUN_00416f50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x24);
  iVar3 = param_3 - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + param_2;
  *(int *)(param_1 + 0x24) = param_2;
  uVar4 = 0;
  *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + param_3;
  *(int *)(param_1 + 0x28) = param_3;
  if (*(int *)(param_1 + 0x5c) != 0) {
    piVar1 = (int *)(param_1 + 0x7c);
    do {
      piVar1[-2] = piVar1[-2] + iVar2;
      *piVar1 = *piVar1 + iVar2;
      piVar1[-1] = piVar1[-1] + iVar3;
      uVar4 = uVar4 + 1;
      piVar1[1] = piVar1[1] + iVar3;
      piVar1 = piVar1 + 0xe;
    } while (uVar4 < *(uint *)(param_1 + 0x5c));
  }
  return;
}

