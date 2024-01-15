#include "prototype.h"


undefined4 FUN_0048ad10(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_0052d56c != 0) && (param_1 < DAT_0052d56c)) {
    puVar2 = &DAT_0052d870 + param_1 * 0xda;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}

