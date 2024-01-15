#include "prototype.h"


void FUN_00431950(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_2[1];
  *(undefined4 *)(param_1 + 0xb8) = param_2[2];
  *(undefined4 *)(param_1 + 0xbc) = param_2[3];
  *(undefined4 *)(param_1 + 0xc0) = param_2[4];
  *(undefined4 *)(param_1 + 0xc4) = param_2[5];
  *(undefined4 *)(param_1 + 200) = param_2[6];
  *(undefined4 *)(param_1 + 0xcc) = param_2[7];
  *(undefined4 *)(param_1 + 0xd0) = param_2[8];
  *(undefined4 *)(param_1 + 0xd4) = param_2[9];
  *(undefined4 *)(param_1 + 0xd8) = param_2[10];
  *(undefined4 *)(param_1 + 0xdc) = param_2[0xb];
  *(undefined4 *)(param_1 + 0xe0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xe4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe8) = param_2[0xe];
  *(undefined4 *)(param_1 + 0xec) = param_2[0xf];
  FUN_0042fb70(param_1 + 0x70,param_1 + 0x30,(undefined4 *)(param_1 + 0xb0));
  return;
}

