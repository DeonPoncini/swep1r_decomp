#include "prototype.h"


void FUN_00492410(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x18));
  }
  return;
}

