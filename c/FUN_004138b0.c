#include "prototype.h"


void FUN_004138b0(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  if (param_1 != 0) {
    *(undefined *)(param_1 + 0x4c4) = param_2;
    *(undefined *)(param_1 + 0x4c5) = param_3;
    *(undefined *)(param_1 + 0x4c6) = param_4;
    *(undefined *)(param_1 + 0x4c7) = param_5;
    FUN_00418bc0(param_1);
  }
  return;
}

