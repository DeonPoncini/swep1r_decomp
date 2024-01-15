#include "prototype.h"


int FUN_00490a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00490aa0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}

