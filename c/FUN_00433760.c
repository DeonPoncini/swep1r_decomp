#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433760(void)

{
  undefined4 uVar1;
  
  if (DAT_004d5e00 != 0) {
    uVar1 = FUN_00414d90(0,0x186b8);
    FUN_00414e60(uVar1,0);
    FUN_00411820(0x30d41);
    uVar1 = FUN_00414d90(0,0x30d41);
    FUN_00414e60(uVar1,0);
    _DAT_00ea0180 = 0;
  }
  DAT_004bfedc = 0xffffffff;
  DAT_0050c944 = 0xffffffff;
  return;
}

