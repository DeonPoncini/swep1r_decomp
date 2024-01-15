#include "prototype.h"


undefined4 FUN_00486c60(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00513870 < param_1) {
    return 1;
  }
  puVar2 = &DAT_005117e8 + param_1 * 0x41;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}

