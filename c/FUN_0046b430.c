#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b430(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50 [4];
  int local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  
  local_60 = 1.0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  iVar3 = FUN_00450e70(0x54657374,param_1 + 0x50,0x451c4000,param_1,4,local_50,&local_30,local_40);
  if (0 < iVar3) {
    FUN_0042f9f0(&local_5c,(float *)(param_1 + 0x30),&local_30);
    fVar4 = (float10)FUN_00480670(local_50[0]);
    fVar1 = (_DAT_004ad810 - (float)fVar4) * _DAT_004ad814;
    fVar2 = fVar1 * fVar1 * _DAT_004ad818 * _DAT_004ad81c;
    fVar1 = *(float *)(param_1 + 0x198) * local_58 +
            *(float *)(param_1 + 0x19c) * local_54 + *(float *)(param_1 + 0x194) * local_5c;
    if (((iVar3 == 1) && ((*(byte *)(local_40[0] + 0x60) & 0x20) != 0)) &&
       (*(float *)(param_1 + 0x38) * local_28 +
        *(float *)(param_1 + 0x34) * local_2c + local_30 * *(float *)(param_1 + 0x30) <
        _DAT_004ad750)) {
      local_60 = -1.0;
    }
    if (_DAT_004ad750 < fVar1) {
      *(float *)(param_1 + 0x1f0) = local_60 * fVar2 + *(float *)(param_1 + 0x1f0);
      return;
    }
    if (fVar1 < _DAT_004ad750) {
      *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) - local_60 * fVar2;
    }
  }
  return;
}

