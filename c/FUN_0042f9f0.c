#include "prototype.h"


void FUN_0042f9f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar7 = param_2[1];
  fVar8 = param_3[1];
  param_1[1] = *param_3 * param_2[2] - *param_2 * param_3[2];
  param_1[2] = fVar1 * fVar4 - fVar2 * fVar6;
  *param_1 = fVar3 * fVar7 - fVar5 * fVar8;
  return;
}

