#include "prototype.h"


int FUN_00486c10(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00513868 < param_1) {
    return 1;
  }
  puVar2 = &DAT_00510260 + param_1 * 0x46;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 * 0x23;
}

