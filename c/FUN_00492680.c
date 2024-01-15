#include "prototype.h"


void FUN_00492680(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_2[5] * param_2[5] + param_2[4] * param_2[4] + param_2[3] * param_2[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = param_2[8] * param_2[8] + param_2[7] * param_2[7] + param_2[6] * param_2[6];
  param_1[1] = param_2[3] / fVar4;
  param_1[2] = param_2[6] / fVar5;
  param_1[5] = param_2[7] / fVar5;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_1[3] = param_2[1] / fVar1;
  param_1[6] = param_2[2] / fVar1;
  param_1[7] = param_2[5] / fVar4;
  *param_1 = *param_2 / fVar1;
  param_1[4] = param_2[4] / fVar4;
  param_1[8] = param_2[8] / fVar5;
  fVar3 = param_2[9];
  fVar1 = param_2[10];
  fVar2 = param_2[0xb];
  param_1[9] = -(fVar3 * *param_1 + fVar1 * param_1[3] + fVar2 * param_1[6]);
  param_1[10] = -(fVar2 * param_1[7] + fVar1 * param_1[4] + fVar3 * param_1[1]);
  param_1[0xb] = -(fVar2 * param_1[8] + fVar1 * param_1[5] + fVar3 * param_1[2]);
  return;
}

