#include "prototype.h"


undefined4 FUN_004157d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + 0x4dc) = param_2;
  return uVar1;
}

