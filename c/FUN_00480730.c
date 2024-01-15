#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480730(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_0042f8c0(param_1);
  fVar2 = _DAT_004adfa8 / (float)fVar3;
  *param_4 = (float)fVar3;
  *param_3 = *param_1 * fVar2;
  param_3[1] = param_1[1] * fVar2;
  fVar1 = param_1[2];
  param_3[3] = 0.0;
  param_3[2] = fVar1 * fVar2;
  fVar3 = (float10)FUN_0042f8c0(param_1 + 4);
  fVar2 = _DAT_004adfa8 / (float)fVar3;
  param_4[1] = (float)fVar3;
  param_3[4] = param_1[4] * fVar2;
  param_3[5] = param_1[5] * fVar2;
  fVar1 = param_1[6];
  param_3[7] = 0.0;
  param_3[6] = fVar1 * fVar2;
  fVar3 = (float10)FUN_0042f8c0(param_1 + 8);
  fVar2 = _DAT_004adfa8 / (float)fVar3;
  param_4[2] = (float)fVar3;
  param_3[8] = param_1[8] * fVar2;
  param_3[9] = param_1[9] * fVar2;
  fVar1 = param_1[10];
  param_3[0xb] = 0.0;
  param_3[10] = fVar1 * fVar2;
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  param_3[0xe] = 0.0;
  param_3[0xf] = 1.0;
  return;
}

