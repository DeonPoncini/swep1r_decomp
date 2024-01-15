#include "prototype.h"


void FUN_0046bb70(int param_1)

{
  undefined4 local_20;
  int local_1c;
  
  if (DAT_0050ca3c != 0) {
    local_20 = 0x536e6170;
    local_1c = 2;
    FUN_00450c00(param_1,&local_20);
  }
  if (((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) {
    FUN_0046a990(param_1,1);
    if (((DAT_00e98e90 & 0x800) != 0) || ((DAT_00e98e90 & 0x400) != 0)) {
      local_1c = (-(uint)((DAT_00e98e90 & 0x800) != 0) & 0xfffffffe) + 1;
      local_20 = 0x536e6170;
      FUN_00450c00(param_1,&local_20);
    }
  }
  if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
    FUN_0046af20(param_1);
    if ((*(uint *)(param_1 + 0x60) & 0x4000) != 0) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      return;
    }
    if ((*(byte *)(param_1 + 100) & 0x20) != 0) {
      FUN_0046b5a0(param_1,0x3f800000);
      return;
    }
    FUN_0046b5a0(param_1,0);
  }
  return;
}

