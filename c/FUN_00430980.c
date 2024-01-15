#include "prototype.h"


void FUN_00430980(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_3[6];
  fVar2 = param_3[10];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_3[4];
  fVar6 = param_2[2];
  fVar7 = param_3[8];
  fVar8 = *param_2;
  fVar9 = *param_3;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = *param_2;
  param_1[1] = param_3[1] * *param_2 + param_3[9] * param_2[2] + param_3[5] * param_2[1];
  param_1[2] = fVar3 * fVar8 + fVar2 * fVar6 + fVar1 * fVar4;
  *param_1 = fVar9 * fVar12 + fVar7 * fVar11 + fVar5 * fVar10;
  return;
}

