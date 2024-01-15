#include "prototype.h"


int FUN_004131c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_7,param_8,0,&LAB_00415b80,0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  uVar2 = FUN_0042df70(param_4,(&DAT_00e99720)[*(int *)(iVar1 + 0x4dc)]);
  uVar2 = FUN_0042de30(param_4,(&DAT_00e99720)[*(int *)(iVar1 + 0x4dc)],uVar2);
  FUN_00414b40(iVar1,uVar2);
  if ((*(uint *)(iVar1 + 0x20) & 0x10000) != 0) {
    param_5 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x2c)) + 0x27f >> 1;
  }
  if ((*(uint *)(iVar1 + 0x20) & 0x20000) != 0) {
    param_6 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30)) + 0x1df >> 1;
  }
  FUN_00414b60(iVar1,param_5,param_6);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x200;
  return iVar1;
}

