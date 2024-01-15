#include "prototype.h"


void FUN_0048b4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 != (undefined4 *)0x0) && (DAT_0052e640 != (int *)0x0)) && (DAT_0052e618 != 0)) {
    puVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[3] = 0xffffffff;
    (**(code **)(*DAT_0052e640 + 0x28))(DAT_0052e640,DAT_0052e618 + 0x238,FUN_0048b500,param_1);
  }
  return;
}

