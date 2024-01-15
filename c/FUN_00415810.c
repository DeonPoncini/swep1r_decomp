#include "prototype.h"


void FUN_00415810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e0) = param_2;
    *(undefined4 *)(param_1 + 0x4e4) = param_3;
    *(undefined4 *)(param_1 + 0x4e8) = param_4;
    *(undefined4 *)(param_1 + 0x4ec) = param_5;
  }
  return;
}

