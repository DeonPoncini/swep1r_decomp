#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b5a0(int param_1,float param_2)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x1a0) < _DAT_004ad820) {
    param_2 = _DAT_004ad750;
  }
  if (param_2 <= *(float *)(param_1 + 0x208)) {
    if ((*(float *)(param_1 + 0x208) <= param_2) ||
       (fVar1 = *(float *)(param_1 + 0x208) - (float)_DAT_00e22a40 * _DAT_004ad828,
       *(float *)(param_1 + 0x208) = fVar1, param_2 <= fVar1)) goto LAB_0046b627;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x208) - (float)_DAT_00e22a40 * _DAT_004ad824;
    *(float *)(param_1 + 0x208) = fVar1;
    if (fVar1 <= param_2) goto LAB_0046b627;
  }
  *(float *)(param_1 + 0x208) = param_2;
LAB_0046b627:
  if (param_2 == (float)_DAT_004ad830) {
    fVar1 = *(float *)(param_1 + 0x208);
    if (*(float *)(param_1 + 0x208) < _DAT_004ad750) {
      fVar1 = -fVar1;
    }
    if (fVar1 < (float)_DAT_004ad838) {
      *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x208) * (float)_DAT_004ad778;
    }
  }
  return;
}

