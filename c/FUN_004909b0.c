#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004909b0(void)

{
  int iVar1;
  
  if (DAT_00df7f30 == 0) {
    return 0;
  }
  if (DAT_00df7f34 != 0) {
    return 1;
  }
  iVar1 = FUN_00493e40();
  if (iVar1 != 0) {
    return 0;
  }
  DAT_00ecc430 = 4;
  DAT_00ecc424 = 3;
  _DAT_00ecc438 = 1;
  DAT_00df7f34 = 1;
  return 1;
}

