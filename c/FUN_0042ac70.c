#include "prototype.h"


undefined4
FUN_0042ac70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (DAT_0050c07c == 0) {
    uVar1 = FUN_0042a580(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (DAT_0050c07c == 1) {
    uVar1 = FUN_00429dc0(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (DAT_0050c07c == 2) {
    uVar1 = FUN_0042a840(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return param_5;
}

