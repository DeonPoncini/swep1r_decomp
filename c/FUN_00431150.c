#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431150(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_20 [8];
  
  FUN_0042f380(param_2,local_20,&param_2);
  if (param_5 < _DAT_004ac6cc) {
    if (_DAT_004ac6d0 < param_5) {
      fVar1 = param_3 * param_3;
      fVar2 = param_4 * param_4;
      fVar3 = fVar2 * param_2;
      fVar6 = (_DAT_004ac67c - fVar1) - fVar2;
      fVar5 = fVar1 * param_2;
      fVar4 = _DAT_004ac67c - fVar6;
      param_2 = _DAT_004ac67c - param_2;
      *param_1 = (fVar5 * fVar6 + fVar3) / fVar4 + fVar1;
      fVar1 = param_4 * param_3 * param_2;
      param_1[5] = (fVar3 * fVar6 + fVar5) / fVar4 + fVar2;
      fVar2 = param_5 * param_3 * param_2;
      param_2 = param_5 * param_4 * param_2;
      param_1[10] = fVar5 + fVar3 + fVar6;
      param_1[1] = local_20[0] * param_5 + fVar1;
      param_1[4] = fVar1 - local_20[0] * param_5;
      param_1[2] = fVar2 - local_20[0] * param_4;
      param_1[8] = local_20[0] * param_4 + fVar2;
      param_1[6] = local_20[0] * param_3 + param_2;
      param_1[9] = param_2 - local_20[0] * param_3;
    }
    else {
      *param_1 = param_2;
      param_1[5] = param_2;
      param_1[1] = -local_20[0];
      param_1[4] = local_20[0];
      param_1[2] = 0.0;
      param_1[6] = 0.0;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      param_1[10] = 1.0;
    }
  }
  else {
    *param_1 = param_2;
    param_1[5] = param_2;
    param_1[4] = -local_20[0];
    param_1[1] = local_20[0];
    param_1[2] = 0.0;
    param_1[6] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 1.0;
  }
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

