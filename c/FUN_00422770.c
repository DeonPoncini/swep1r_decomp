#include "prototype.h"


undefined4 FUN_00422770(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_0049f270(param_1 * 0x4c);
  *(undefined4 *)(PTR_DAT_004b6d34 + 0x28) = uVar1;
  if (*(undefined4 **)(PTR_DAT_004b6d34 + 0x28) == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(PTR_DAT_004b6d34 + 0x28);
  for (uVar2 = param_1 * 0x13 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(int *)(PTR_DAT_004b6d34 + 0x24) = param_1;
  *(undefined4 *)(PTR_DAT_004b6d34 + 0x20) = 0;
  return 1;
}

