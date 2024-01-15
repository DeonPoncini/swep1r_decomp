#include "prototype.h"


bool FUN_0048bb50(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar3 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      if (*(int *)(iVar3 + 0x88) == DAT_004c98b4) break;
      piVar1 = (int *)(iVar3 + 0x90);
      if (*(uint *)(iVar3 + 0x84) == param_1) {
        (**(code **)(**(int **)(iVar3 + 0x80) + 8))(*(int **)(iVar3 + 0x80));
        *(undefined4 *)(iVar3 + 0x80) = 0;
        FUN_0048ba90(iVar3);
        return true;
      }
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
  }
  iVar3 = DAT_004c98b4;
  iVar5 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      if (param_1 <= uVar4) break;
      iVar2 = *(int *)(iVar5 + 0x90);
      if (*(int *)(iVar5 + 0x88) != iVar3) {
        (**(code **)(**(int **)(iVar5 + 0x80) + 8))(*(int **)(iVar5 + 0x80));
        *(undefined4 *)(iVar5 + 0x80) = 0;
        uVar4 = uVar4 + *(int *)(iVar5 + 0x84);
        FUN_0048ba90(iVar5);
        iVar3 = DAT_004c98b4;
      }
      iVar5 = iVar2;
    } while (iVar2 != 0);
  }
  return uVar4 != 0;
}

