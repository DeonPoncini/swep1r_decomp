#include "prototype.h"


void FUN_00417090(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *local_4;
  
  local_4 = &DAT_004d79f8;
  piVar2 = &DAT_004d7c68;
  do {
    if ((*local_4 != 0) && (iVar1 = *piVar2, iVar1 != 0)) {
      uVar4 = 0;
      if (*(short *)(iVar1 + 0xc) != 0) {
        puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x10) + 4);
        do {
          FUN_0048eac0(*puVar3);
          puVar3 = puVar3 + 2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(int)*(short *)(iVar1 + 0xc));
      }
      FUN_0049f200(*(undefined4 *)(iVar1 + 0x10));
      FUN_0049f200(iVar1);
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    *local_4 = 0;
    piVar2 = piVar2 + 2;
    local_4 = local_4 + 1;
  } while ((int)piVar2 < 0x4d8110);
  return;
}

