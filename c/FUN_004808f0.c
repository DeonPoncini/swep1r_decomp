#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004808f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_3 - *param_2;
  fVar4 = param_3[1] - param_2[1];
  fVar1 = param_3[2] - param_2[2];
  fVar3 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (fVar3 <= (float)_DAT_004adfb0) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return;
  }
  fVar3 = ((fVar2 * *param_1 + param_1[2] * fVar1 + param_1[1] * fVar4) -
          (fVar4 * param_2[1] + fVar1 * param_2[2] + fVar2 * *param_2)) / fVar3;
  if (fVar3 <= _DAT_004adfb8) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return;
  }
  if (_DAT_004adfa8 <= fVar3) {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    return;
  }
  *param_4 = fVar2 * fVar3;
  param_4[1] = fVar4 * fVar3;
  param_4[2] = fVar1 * fVar3;
  *param_4 = *param_2 + fVar2 * fVar3;
  param_4[1] = param_2[1] + fVar4 * fVar3;
  param_4[2] = param_2[2] + fVar1 * fVar3;
  return;
}

