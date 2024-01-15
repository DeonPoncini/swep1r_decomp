#include "prototype.h"


undefined4 FUN_00422d10(int param_1)

{
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 8) == 0) {
    FUN_004850a0(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    DAT_004eb44c = DAT_004eb44c - *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
    return 1;
  }
  if (DAT_004eb418 == param_1) {
    (**(code **)(DAT_00ecc420 + 0x34))(DAT_004eb404);
    DAT_004eb404 = 0;
    DAT_004eb40c = 0;
    DAT_004eb418 = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  return 1;
}

