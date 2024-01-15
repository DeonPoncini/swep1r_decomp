#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ce30(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  if (((*(uint *)(param_1 + 0x60) & 0x20) == 0) || (*(int *)(*(int *)(param_1 + 0x1e70) + 0xc) == 0)
     ) {
    if ((*(uint *)(param_1 + 0x60) & 0x80) != 0) {
      FUN_0046b670(param_1);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
      return;
    }
    *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
    iVar3 = FUN_0045d350();
    if ((1 < iVar3) && (_DAT_004ad750 < *(float *)(param_1 + 0x130))) {
      fVar4 = (float10)FUN_0047e870();
      fVar2 = _DAT_004ad948;
      fVar1 = (*(float *)(param_1 + 0x130) * _DAT_004ad93c) /
              (float)((float10)_DAT_004ad850 / fVar4) - _DAT_004ad80c;
      *(float *)(param_1 + 0x22c) = fVar1;
      if (fVar2 < fVar1) {
        *(undefined4 *)(param_1 + 0x22c) = 0x3fa00000;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
  return;
}

