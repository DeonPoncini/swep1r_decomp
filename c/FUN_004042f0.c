#include "prototype.h"


int FUN_004042f0(int param_1)

{
  if (DAT_004b2910 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return -1;
  }
  return **(int **)(param_1 + 0x2c) / 100;
}

