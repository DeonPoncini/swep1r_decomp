#include "prototype.h"


uint FUN_004044a0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10) / 1000;
}

