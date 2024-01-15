#include "prototype.h"


undefined4 FUN_00489d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0052d450 != (undefined4 *)0x0) {
    puVar2 = DAT_0052d450;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  return 1;
}

