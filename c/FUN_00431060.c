#include "prototype.h"


void FUN_00431060(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  FUN_00430e00(param_1,param_2[3],param_2[4],param_2[5]);
  return;
}

