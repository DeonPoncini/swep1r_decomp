#include "prototype.h"


void FUN_00411170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined local_100 [256];
  
  if (param_5 == 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0388__sQuit_004b5d90);
  }
  else if (param_5 == 1) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0034__sCancel_004b2670);
  }
  else {
    if (param_5 != 2) goto LAB_004111ca;
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0371__sBack_004b5dac);
  }
  FUN_0049eb80(local_100,uVar1);
LAB_004111ca:
  FUN_004132a0(param_1,param_2,6,local_100,param_3,param_4,0xb4,0x19,0x1020000,0);
  return;
}

