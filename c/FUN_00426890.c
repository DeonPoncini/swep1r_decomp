#include "prototype.h"


void FUN_00426890(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x20000000;
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x118);
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = param_2;
  uVar1 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return;
}

