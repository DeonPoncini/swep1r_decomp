#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a56b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_00dfac88;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  DAT_00dfae90 = 0;
  _DAT_00ecd4e4 = 0;
  DAT_00dfae94 = 0;
  _DAT_00dfae98 = 0;
  _DAT_00dfae9c = 0;
  _DAT_00dfaea0 = 0;
  return;
}

