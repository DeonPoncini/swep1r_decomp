#include "prototype.h"


void FUN_0041a640(int param_1,UINT param_2)

{
  uint uVar1;
  int iVar2;
  UINT UVar3;
  UINT UVar4;
  
  UVar3 = MapVirtualKeyA(0xc,1);
  UVar4 = MapVirtualKeyA(0xd,1);
  if ((param_2 == 0x6d) || (param_2 == UVar3)) {
    FUN_00440550(0x48);
    uVar1 = *(uint *)(param_1 + 0x558);
    if (uVar1 < *(uint *)(param_1 + 0x54c)) {
      *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x54c) - uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x54c) = 0;
    }
    if (uVar1 < *(uint *)(param_1 + 0x550)) {
      *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) - uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x550) = 0;
    }
    FUN_004151a0(*(undefined4 *)(param_1 + 8),2000,*(undefined4 *)(param_1 + 0x1c),param_1);
    FUN_00419db0(param_1,1);
  }
  if ((param_2 == 0x6b) || (param_2 == UVar4)) {
    FUN_00440550(0x48);
    iVar2 = *(int *)(param_1 + 0x558);
    if (*(uint *)(param_1 + 0x54c) < 100U - iVar2) {
      *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x54c) + iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x54c) = 100;
    }
    if (*(uint *)(param_1 + 0x550) < 100U - iVar2) {
      *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) + iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x550) = 100;
    }
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0x7d1,*(undefined4 *)(param_1 + 0x1c),param_1);
    FUN_00419db0(param_1,1);
  }
  return;
}

