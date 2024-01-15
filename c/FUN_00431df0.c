#include "prototype.h"


void FUN_00431df0(char *param_1)

{
  int iVar1;
  int unaff_EBX;
  int *unaff_EBP;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_80 [2];
  ushort *puStack_78;
  
  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_invcol_004bfd10,5);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_invcol_004bfd10);
    puVar2 = local_80;
    puVar6 = &DAT_004af208;
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c))
              (*(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c));
    puVar4 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*unaff_EBP + 100))(unaff_EBP,0,&stack0xffffff78,1);
    if (((uint)puVar6 & 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)unaff_EBP / 2;
    }
    if (0 < (int)puVar2) {
      do {
        puVar3 = puStack_78;
        iVar5 = unaff_EBX;
        if (0 < unaff_EBX) {
          do {
            puStack_78 = puVar3 + 1;
            iVar5 = iVar5 + -1;
            *puVar3 = *puVar3 & 0xf000 | ~(*puVar3 & 0xfff);
            puVar3 = puStack_78;
          } while (iVar5 != 0);
        }
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puStack_78 = puStack_78 + (iVar1 - unaff_EBX);
      } while (puVar2 != (undefined4 *)0x0);
    }
    (**(code **)(iRam00000000 + 0x80))(0,0);
  }
  return;
}

