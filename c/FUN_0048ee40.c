#include "prototype.h"


void FUN_0048ee40(int param_1)

{
  if (param_1 != 0) {
    if (DAT_00df7f04 != (code *)0x0) {
      (*DAT_00df7f04)();
      return;
    }
    FUN_0048ee70(param_1);
    (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  }
  return;
}

