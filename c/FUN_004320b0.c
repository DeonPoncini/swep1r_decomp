#include "prototype.h"


/* WARNING: Removing unreachable block (ram,0x0043213f) */

void FUN_004320b0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int local_80 [2];
  ushort *puStack_78;
  
  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_saturate_004bfd20,8);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_saturate_004bfd20);
    piVar7 = local_80;
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c);
    puVar6 = &DAT_004af208;
    (**(code **)*puVar4)();
    puVar3 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar5 = (int *)&stack0xffffff78;
    (**(code **)(*piVar7 + 100))(piVar7,0,piVar5,1);
    if (0 < (int)puVar4) {
      do {
        puVar2 = puVar6;
        if (0 < (int)puVar6) {
          do {
            *puStack_78 = *puStack_78 | 0xfff;
            puStack_78 = puStack_78 + 1;
            puVar2 = puVar2 + -1;
          } while (puVar2 != (undefined *)0x0);
        }
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        puStack_78 = puStack_78 + ((int)piVar5 - (int)puVar6);
      } while (puVar4 != (undefined4 *)0x0);
    }
    (**(code **)(*piVar5 + 0x80))(piVar5,0);
  }
  return;
}

