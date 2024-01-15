#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449040(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00e98200 = FUN_0049f270(0x800000);
  DAT_00e981e4 = DAT_00e98200 + 0x800000;
  puVar2 = &DAT_00e98204;
  _DAT_00e98234 = DAT_00e98200;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00448f40();
  FUN_00449000();
  FUN_00445b90();
  return;
}

