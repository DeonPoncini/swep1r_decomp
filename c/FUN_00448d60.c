#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448d60(void)

{
  int iVar1;
  
  iVar1 = FUN_00445b40();
  _DAT_00e98238 = iVar1 + 0x3fU & 0xffffffc0;
  _DAT_00e98230 = _DAT_00e98238 + 0x10000;
  FUN_00445b20(iVar1 + 0x10040);
  return;
}

