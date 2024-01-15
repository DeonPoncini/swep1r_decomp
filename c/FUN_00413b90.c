#include "prototype.h"


int FUN_00413b90(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,0,param_7,0,FUN_00415850,param_6);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  FUN_00414b40(iVar1,(param_3[2] - *param_3) + 1,(param_3[3] - param_3[1]) + 1);
  FUN_00414b60(iVar1,*param_3,param_3[1]);
  FUN_00412fb0(iVar1,0,param_4,param_3,1,param_5);
  FUN_00413090(iVar1,0,0xff,0xff,0xff,0xff);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 7;
  return iVar1;
}

