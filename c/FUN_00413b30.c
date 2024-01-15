#include "prototype.h"


void FUN_00413b30(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x55c) = param_2;
    FUN_00419db0(param_1,*(uint *)(param_1 + 0x20) >> 0xc & 1);
  }
  return;
}

