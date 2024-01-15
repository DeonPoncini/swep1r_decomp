#include "prototype.h"


undefined4 FUN_004157f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(param_1 + 0x500) = param_2;
  return uVar1;
}

