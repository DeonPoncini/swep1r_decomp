#include "prototype.h"


undefined4 FUN_00490950(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00df7f30 != 0) {
    return 1;
  }
  DAT_00ecc428 = param_1;
  FUN_0048db40();
  iVar1 = FUN_00493df0();
  if (iVar1 != 0) {
    return 0;
  }
  DAT_00df7f30 = 1;
  return 1;
}

