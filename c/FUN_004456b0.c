#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004456b0(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_0050c5f4 == 0) {
    if (DAT_004d5e00 != 0) {
      _DAT_004c4a58 = 0x3f800000;
      return;
    }
    FUN_00449e50();
    FUN_00426c80(0x4e,6,0x3e800000,0x3f800000,0);
    DAT_0050c5f0 = 2;
    local_10 = 0x50617773;
    local_c = 1;
    FUN_00450c50(0x416c6c21,&local_10);
    FUN_0042ad60();
    FUN_0040a120(1);
  }
  return;
}

