#include "prototype.h"


void FUN_00413090(int param_1,int param_2,undefined param_3,undefined param_4,undefined param_5,
                 undefined param_6)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    param_1 = param_1 + param_2 * 0x38;
    *(undefined *)(param_1 + 0x94) = param_3;
    *(undefined *)(param_1 + 0x95) = param_4;
    *(undefined *)(param_1 + 0x96) = param_5;
    *(undefined *)(param_1 + 0x97) = param_6;
  }
  return;
}

