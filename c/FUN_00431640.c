#include "prototype.h"


void FUN_00431640(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = param_2[5];
  *(undefined4 *)(param_1 + 0x30) = param_2[6];
  *(undefined4 *)(param_1 + 0x34) = param_2[8];
  *(undefined4 *)(param_1 + 0x38) = param_2[9];
  *(undefined4 *)(param_1 + 0x3c) = param_2[10];
  *(undefined4 *)(param_1 + 0x40) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x44) = param_2[0xd];
  uVar1 = param_2[0xe];
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 3;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}

