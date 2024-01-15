#include "prototype.h"


uint FUN_004043d0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x18) / 100;
}

