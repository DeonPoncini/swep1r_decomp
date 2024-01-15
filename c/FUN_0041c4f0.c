#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041c4f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_004e9eac = DAT_004e9eac | 1;
  puVar2 = &DAT_004ea8a0;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004eb1d4 = 0;
  DAT_004e9eb0 = DAT_004e9eb0 | 1;
  _DAT_004eb1d0 = 0;
  DAT_004eb1f8 = 0;
  FUN_0041b920();
  DAT_00ea05a0 = 0;
  DAT_00ea05a4 = 0;
  DAT_00ea05a8 = 0;
  DAT_00ea05ac = 0;
  DAT_00ea05b0 = 0;
  FUN_0041bd60();
  DAT_004b6714 = 0xffffffff;
  return 1;
}

