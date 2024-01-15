#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bd80(int param_1,uint param_2,uint param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if ((param_1 != 0) && (uVar2 = FUN_00431770(param_1), (uVar2 & 0x4000) != 0)) {
    iVar3 = FUN_00431770(param_1);
    if (iVar3 == 0xd065) {
      iVar3 = FUN_00426740(param_1,8);
      fVar1 = _DAT_004ade50;
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0x100) = ~param_2 & *(uint *)(iVar3 + 0x100) | param_3;
        fVar5 = param_4;
        if (fVar1 < *(float *)(iVar3 + 0x110)) {
          fVar5 = -param_4;
        }
        FUN_00426880(iVar3,fVar5);
      }
      iVar3 = FUN_00426740(param_1,9);
      fVar1 = _DAT_004ade50;
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0x100) = ~param_2 & *(uint *)(iVar3 + 0x100) | param_3;
        fVar5 = param_4;
        if (fVar1 < *(float *)(iVar3 + 0x110)) {
          fVar5 = -param_4;
        }
        FUN_00426880(iVar3,fVar5);
      }
    }
    iVar4 = 0;
    iVar3 = FUN_00431780(param_1);
    if (0 < iVar3) {
      do {
        FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4),param_2,param_3,param_4);
        iVar4 = iVar4 + 1;
        iVar3 = FUN_00431780(param_1);
      } while (iVar4 < iVar3);
    }
  }
  return;
}

