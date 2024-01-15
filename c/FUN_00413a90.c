#include "prototype.h"


int FUN_00413a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,param_6,param_7,0,&LAB_00416690,0);
  FUN_00414b60(iVar1,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x548) = param_5;
  *(undefined4 *)(iVar1 + 0x558) = 10;
  *(undefined4 *)(iVar1 + 0x544) = param_6;
  *(undefined4 *)(iVar1 + 0x18) = 6;
  FUN_00419db0(iVar1,0);
  FUN_00414e60(iVar1,1);
  return iVar1;
}

