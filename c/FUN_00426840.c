#include "prototype.h"


void FUN_00426840(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x114) = param_2;
  uVar1 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x1000000;
  return;
}

