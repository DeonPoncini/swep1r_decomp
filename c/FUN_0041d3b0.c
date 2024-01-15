#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d3b0(int param_1)

{
  int iVar1;
  
  if (DAT_004d5e00 != 0) {
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_004ea020 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea024 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea028 + iVar1) = 0;
    *(undefined4 *)(&DAT_004ea020 + iVar1) = 1;
    if (DAT_004eb1c8 != 0) {
      DAT_00ec7bc8 = param_1;
      _DAT_00ec7ba4 = 0;
      DAT_00ec7bc4 = 0x2c;
      _DAT_00ec7bc0 = 4;
      FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
    }
  }
  return;
}

