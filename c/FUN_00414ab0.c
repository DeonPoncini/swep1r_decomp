#include "prototype.h"


void FUN_00414ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4f8),param_2);
  *(undefined4 *)(param_1 + 0x4f8) = uVar1;
  *(undefined4 *)(param_1 + 0x4fc) = param_3;
  return;
}

