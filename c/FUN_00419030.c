#include "prototype.h"


void FUN_00419030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    param_1 = param_1 + param_2 * 0x38;
    *(undefined4 *)(param_1 + 0x8c) = param_3;
    *(undefined4 *)(param_1 + 0x90) = param_4;
  }
  return;
}

