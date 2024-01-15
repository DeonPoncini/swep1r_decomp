#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e660(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004d5e00 != 0) {
    puVar2 = &DAT_00ea04e0;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_00ea02c0;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_004eb1e8 = 0;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x39;
    _DAT_00ec7bc0 = 0;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}

