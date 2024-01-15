#include "prototype.h"


void FUN_0046e750(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar3 = param_1;
  if ((DAT_00e27130 < 10) && (param_1 != 0)) {
    iVar2 = FUN_00431770(param_1);
    if (iVar2 == 0x3064) {
      piVar5 = (int *)(param_1 + 0x14);
      param_1 = 0;
      uVar6 = DAT_00e27130;
      if (0 < *piVar5) {
        while (uVar6 < 10) {
          iVar2 = **(int **)(*(int *)(iVar3 + 0x18) + param_1 * 4);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
            bVar1 = false;
            iVar4 = 0;
            piVar5 = &DAT_00e27140;
            do {
              if ((int)uVar6 <= iVar4) break;
              if (*(int *)(*piVar5 + 8) == *(int *)(iVar2 + 8)) {
                bVar1 = true;
              }
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
              uVar6 = DAT_00e27130;
            } while (!bVar1);
            if (!bVar1) {
              (&DAT_00e27140)[uVar6] = iVar2;
              uVar6 = uVar6 + 1;
              DAT_00e27130 = uVar6;
            }
          }
          param_1 = param_1 + 1;
          if (*(int *)(iVar3 + 0x14) <= param_1) {
            return;
          }
        }
      }
    }
    else {
      uVar6 = FUN_00431770(param_1);
      if ((uVar6 & 0x4000) != 0) {
        iVar2 = 0;
        iVar3 = FUN_00431780(param_1);
        if (0 < iVar3) {
          do {
            FUN_0046e750(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4));
            iVar2 = iVar2 + 1;
            iVar3 = FUN_00431780(param_1);
          } while (iVar2 < iVar3);
        }
      }
    }
  }
  return;
}

