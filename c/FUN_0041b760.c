#include "prototype.h"


undefined4 FUN_0041b760(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  param_3 = param_3 & DAT_004e9eac;
  uVar1 = 1;
  if (param_3 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = DAT_004eb3b4;
  if ((param_3 & 1) == 0) goto LAB_0041b7dc;
  if (param_4 == 0) {
LAB_0041b7ca:
    *(undefined2 *)(param_1 + 0x26) = 0;
  }
  else {
    if (DAT_004b6710 == 0) {
      DAT_004b6710 = 1;
    }
    *(short *)(param_1 + 0x26) = DAT_004b6710;
    DAT_004b6710 = DAT_004b6710 + 1;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    FUN_0041b950(param_1);
    if (*(int *)(param_1 + 0x14) == 0) goto LAB_0041b7ca;
  }
  uVar1 = FUN_004047b0(param_1,param_2);
LAB_0041b7dc:
  if ((param_3 & 4) != 0) {
    FUN_00426910(param_1);
  }
  return uVar1;
}

