#include "prototype.h"


void FUN_00493160(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x24) = *param_2 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = param_2[1] + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2c) = param_2[2] + *(float *)(param_1 + 0x2c);
  return;
}

