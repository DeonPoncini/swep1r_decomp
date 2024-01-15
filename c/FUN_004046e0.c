#include "prototype.h"


void FUN_004046e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_1 + 0x2c) = param_1 + 0x3c;
  puVar2 = (undefined4 *)(param_1 + 0x13c);
  *(int *)(param_1 + 0x28) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 8) = 0x34;
  *(undefined4 *)(param_1 + 0xc) = 0x71;
  *(undefined4 *)(param_1 + 0x24) = 0x20;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *puVar2 = 0x14;
  if (*(int *)(param_1 + 0x150) != 0) {
    (**(code **)(DAT_00ecc420 + 0x24))(*(int *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}

