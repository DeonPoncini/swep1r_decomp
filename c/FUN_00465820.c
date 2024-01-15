#include "prototype.h"


void FUN_00465820(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return;
}

