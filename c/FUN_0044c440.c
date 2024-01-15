#include "prototype.h"


uint FUN_0044c440(byte param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_1 & 8) != 0) && (DAT_004c3b98 != 0)) {
    DAT_004c3b98 = 0;
    uVar1 = 8;
  }
  if ((param_1 & 1) != 0) {
    DAT_0050c6d0 = (uint)(DAT_0050c6d0 == 0);
    uVar1 = uVar1 | 1;
  }
  if (((param_1 & 4) != 0) && (DAT_0050c704 == 0)) {
    DAT_0050c704 = 1;
    DAT_0050c70c = 1;
    DAT_0050c708 = param_2 + 1;
    DAT_004c3c10 = *(undefined4 *)(&DAT_004c3ba0 + param_2 * 4);
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}

