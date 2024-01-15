#include "prototype.h"


void FUN_004841e0(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_004a0ec0(*(undefined4 *)(param_1 + 0x88));
    }
    if (param_1 != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1);
    }
  }
  return;
}

