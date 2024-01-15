#include "prototype.h"


undefined4 FUN_00489d50(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < DAT_0052d44c) {
    puVar2 = (undefined4 *)(&DAT_005295f8 + param_1 * 0x50);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 1;
}

