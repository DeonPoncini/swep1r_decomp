#include "prototype.h"


void FUN_0046e850(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((DAT_00e27134 < 5) && (param_1 != 0)) {
    iVar2 = FUN_00431770(param_1);
    if (iVar2 == 0x3064) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
          if (*piVar1 != 0) {
            DAT_0050cb10 = (DAT_0050cb10 + 1) % DAT_00e27130;
            *piVar1 = (&DAT_00e27140)[DAT_0050cb10];
            DAT_00e27134 = DAT_00e27134 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x14));
        return;
      }
    }
    else {
      uVar3 = FUN_00431770(param_1);
      if ((uVar3 & 0x4000) != 0) {
        iVar4 = 0;
        iVar2 = FUN_00431780(param_1);
        if (0 < iVar2) {
          do {
            FUN_0046e850(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4));
            iVar4 = iVar4 + 1;
            iVar2 = FUN_00431780(param_1);
          } while (iVar4 < iVar2);
        }
      }
    }
  }
  return;
}

