#include "prototype.h"


void FUN_0044c4c0(byte param_1)

{
  if ((param_1 & 1) != 0) {
    DAT_0050c6d0 = (uint)(DAT_0050c6d0 == 0);
  }
  if ((param_1 & 8) != 0) {
    DAT_004c3b98 = 1;
  }
  if ((param_1 & 4) != 0) {
    DAT_0050c704 = 0;
    DAT_0050c70c = 0;
    FUN_00409510(0,1);
  }
  return;
}

