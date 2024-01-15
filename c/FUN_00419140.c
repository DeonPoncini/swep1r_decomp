#include "prototype.h"


void FUN_00419140(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 0x58);
    uVar7 = *(uint *)(param_1 + 0x54);
    if (iVar5 == 0) {
      iVar5 = 0x14;
    }
    uVar1 = *(uint *)(param_1 + 0x5c);
    if (uVar7 <= uVar1) {
      if (uVar1 < iVar5 + uVar7) {
        iVar5 = uVar1 - uVar7;
      }
      FUN_004816b0();
      iVar4 = __ftol();
      uVar1 = iVar5 + uVar7;
      if (uVar7 < uVar1) {
        uVar3 = __ftol();
        param_1._1_3_ = (undefined3)((uint)(100 - iVar4) >> 8);
        param_1 = CONCAT31(param_1._1_3_,uVar3);
        puVar6 = (undefined *)(iVar2 + 0x95 + uVar7 * 0x38);
        do {
          FUN_00413090(iVar2,uVar7,CONCAT31(param_1._1_3_,puVar6[-1]),*puVar6,puVar6[1],param_1);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x38;
        } while (uVar7 < uVar1);
        return;
      }
    }
  }
  return;
}

