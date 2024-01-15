#include "prototype.h"


undefined4 FUN_00488080(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < DAT_0052d444) {
    puVar2 = &DAT_0052a9f8 + param_1 * 0xa9;
    for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 1;
}

