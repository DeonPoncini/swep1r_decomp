#include "prototype.h"


void FUN_0044c3b0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0xf4) = *puVar1;
  *(undefined4 *)(param_2 + 0xf8) = puVar1[1];
  *(undefined4 *)(param_2 + 0xfc) = puVar1[2];
  *(undefined4 *)(param_2 + 0x100) = puVar1[4];
  *(undefined4 *)(param_2 + 0x104) = puVar1[5];
  *(undefined4 *)(param_2 + 0x108) = puVar1[6];
  *(undefined4 *)(param_2 + 0x10c) = puVar1[8];
  *(undefined4 *)(param_2 + 0x110) = puVar1[9];
  *(undefined4 *)(param_2 + 0x114) = puVar1[10];
  *(undefined4 *)(param_2 + 0x118) = puVar1[0xc];
  *(undefined4 *)(param_2 + 0x11c) = puVar1[0xd];
  *(undefined4 *)(param_2 + 0x120) = puVar1[0xe];
  *(undefined4 *)(param_2 + 0xf0) = param_3;
  return;
}

