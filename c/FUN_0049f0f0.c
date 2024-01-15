#include "prototype.h"


undefined4 FUN_0049f0f0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  FUN_004a1710(param_1);
  uVar1 = FUN_0049f130(param_1);
  FUN_004a1780(param_1);
  return uVar1;
}

