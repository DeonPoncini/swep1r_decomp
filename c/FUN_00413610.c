#include "prototype.h"


void FUN_00413610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (iVar2 = *(int *)(iVar1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (((byte)*(undefined4 *)(iVar2 + 0x18) & 0xc) == 0xc) {
        FUN_00440550(0x46);
        if (((*(uint *)(iVar1 + 0x508) & 0x100000) == 0) &&
           (((byte)*(undefined4 *)(iVar2 + 0x18) & 3) != 3)) {
          FUN_00412fb0(iVar2,0,0,0,0,0);
          FUN_00412fb0(iVar2,1,0,0,0,0);
          FUN_00412fb0(iVar2,2,0,0,0,0);
        }
        *(uint *)(iVar2 + 0x508) = *(uint *)(iVar2 + 0x508) & 0xfff7ffff;
      }
    }
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x508) | 0x80000;
      goto LAB_004136ce;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x508) & 0xfff7ffff;
LAB_004136ce:
  *(uint *)(param_1 + 0x508) = uVar3;
  FUN_00417ca0(*(undefined4 *)(param_1 + 8));
  return;
}

