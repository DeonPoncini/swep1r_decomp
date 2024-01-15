#include "prototype.h"


int FUN_004132a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                uint param_9,undefined4 param_10)

{
  int iVar1;
  
  iVar1 = FUN_00416d90(param_1,param_2,param_3,param_4,param_9,param_10,0,&LAB_00415ca0,0);
  FUN_00414b40(iVar1,param_7,param_8);
  FUN_00414b60(iVar1,param_5,param_6);
  *(uint *)(iVar1 + 0x4f0) = param_9 & 0xffff0000;
  FUN_00414b80(iVar1,param_4,0x40000);
  FUN_00418cb0(iVar1,0);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 2;
  return iVar1;
}

