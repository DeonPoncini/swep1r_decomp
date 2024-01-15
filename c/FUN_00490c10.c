#include "prototype.h"


void FUN_00490c10(int *param_1)

{
  if (*param_1 == 1) {
    if (param_1[7] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[7]);
      param_1[7] = 0;
    }
    if (param_1[8] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[9]);
      param_1[9] = 0;
    }
  }
  if (param_1[4] != 0) {
    FUN_00490b50(param_1[4]);
    param_1[4] = 0;
  }
  return;
}

