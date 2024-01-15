#include "prototype.h"


undefined4 FUN_004880c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0052d444 != 0) {
    puVar2 = &DAT_0052a9f8 + DAT_00529514 * 0xa9;
    for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  return 1;
}

