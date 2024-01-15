#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448d40(void)

{
  int iVar1;
  
  iVar1 = FUN_00445b40();
  _DAT_00e34a60 = iVar1 + 0x3fU & 0xffffffc0;
  FUN_00445b20(iVar1 + 0x4b040);
  return;
}

