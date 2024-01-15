#include "prototype.h"


void FUN_0041b470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00414d90(param_1,4);
  if (iVar1 != 0) {
    FUN_00414e60(iVar1,param_2);
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  }
  iVar1 = FUN_00414d90(param_1,2);
  if (iVar1 != 0) {
    FUN_00414e60(iVar1,param_3);
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  }
  return;
}

