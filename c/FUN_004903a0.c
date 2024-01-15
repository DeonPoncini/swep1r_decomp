#include "prototype.h"


void FUN_004903a0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = param_2[1];
  *(undefined4 *)(param_1 + 100) = param_2[2];
  *(undefined4 *)(param_1 + 0x68) = param_2[3];
  return;
}

