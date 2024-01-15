#include "prototype.h"


void FUN_004a2900(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      FUN_004a2710(param_1,param_2,param_4);
      return;
    }
    FUN_004a2840(param_1,param_2,param_4,param_5);
    return;
  }
  FUN_004a2590(param_1,param_2,param_4,param_5);
  return;
}

