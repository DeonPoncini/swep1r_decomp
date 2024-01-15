#include "prototype.h"


void FUN_00430310(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_2[6] * param_2[6] + param_2[5] * param_2[5] + param_2[4] * param_2[4];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8];
  param_1[1] = param_2[4] / fVar4;
  param_1[2] = param_2[8] / fVar5;
  param_1[6] = param_2[9] / fVar5;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_1[4] = param_2[1] / fVar1;
  param_1[8] = param_2[2] / fVar1;
  param_1[9] = param_2[6] / fVar4;
  *param_1 = *param_2 / fVar1;
  param_1[5] = param_2[5] / fVar4;
  fVar1 = param_2[10];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[10] = fVar1 / fVar5;
  fVar2 = param_2[0xc];
  fVar1 = param_2[0xe];
  fVar3 = param_2[0xd];
  param_1[0xc] = -(*param_1 * fVar2 + fVar3 * param_1[4] + fVar1 * param_1[8]);
  param_1[0xd] = -(fVar3 * param_1[5] + fVar2 * param_1[1] + fVar1 * param_1[9]);
  param_1[0xe] = -(fVar1 * param_1[10] + fVar3 * param_1[6] + fVar2 * param_1[2]);
  return;
}

