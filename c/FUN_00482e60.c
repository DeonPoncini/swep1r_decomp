#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00482e60(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  float10 fVar4;
  
  uVar1 = param_1;
  iVar2 = 1;
  if (0 < DAT_0050ccec) {
    fVar4 = (float10)FUN_0042f910(param_1,&DAT_00e22820);
    param_1 = (float)fVar4;
    if (1 < DAT_0050ccec) {
      puVar3 = &DAT_00e2282c;
      do {
        fVar4 = (float10)FUN_0042f910(uVar1,puVar3);
        if (fVar4 < (float10)param_1) {
          param_1 = (float)fVar4;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0xc;
      } while (iVar2 < DAT_0050ccec);
    }
    fVar4 = (float10)FUN_00480670(param_1);
    return fVar4;
  }
  return (float10)_DAT_004ae088;
}

