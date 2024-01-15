#include "prototype.h"


void FUN_00426d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_004b8554;
  uVar1 = DAT_004b8550;
  DAT_004b8550 = param_8;
  DAT_004b8554 = param_9;
  FUN_00426d80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  DAT_004b8550 = uVar1;
  DAT_004b8554 = uVar2;
  return;
}

