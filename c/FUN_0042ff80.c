#include "prototype.h"


void FUN_0042ff80(float *param_1,float *param_2)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_1[8];
  fVar2 = param_1[0xc];
  fVar3 = param_1[4];
  fVar4 = *param_1;
  fVar9 = param_1[9];
  fVar5 = param_1[5];
  fVar10 = param_1[0xd];
  fVar11 = param_1[10];
  *param_1 = *param_2 * fVar4 + fVar3 * param_2[1] + fVar2 * param_2[3] + fVar1 * param_2[2];
  fVar12 = param_1[0xe];
  fVar6 = param_1[1];
  fVar7 = param_1[6];
  fVar13 = param_1[3];
  param_1[1] = *param_2 * fVar6 + fVar5 * param_2[1] + fVar10 * param_2[3] + fVar9 * param_2[2];
  fVar14 = param_1[7];
  fVar8 = param_1[2];
  fVar15 = param_1[0xb];
  fVar16 = param_1[0xf];
  param_1[2] = *param_2 * fVar8 + fVar7 * param_2[1] + fVar12 * param_2[3] + fVar11 * param_2[2];
  param_1[3] = *param_2 * fVar13 + fVar14 * param_2[1] + fVar16 * param_2[3] + fVar15 * param_2[2];
  param_1[4] = fVar4 * param_2[4] + fVar2 * param_2[7] + fVar1 * param_2[6] + fVar3 * param_2[5];
  param_1[5] = fVar6 * param_2[4] + fVar10 * param_2[7] + fVar9 * param_2[6] + fVar5 * param_2[5];
  param_1[6] = fVar8 * param_2[4] + fVar12 * param_2[7] + fVar11 * param_2[6] + fVar7 * param_2[5];
  param_1[7] = fVar13 * param_2[4] + fVar16 * param_2[7] + fVar15 * param_2[6] + fVar14 * param_2[5]
  ;
  param_1[8] = fVar1 * param_2[10] + fVar3 * param_2[9] + fVar4 * param_2[8] + fVar2 * param_2[0xb];
  param_1[9] = fVar9 * param_2[10] + fVar5 * param_2[9] + fVar6 * param_2[8] + fVar10 * param_2[0xb]
  ;
  param_1[10] = fVar11 * param_2[10] +
                fVar7 * param_2[9] + fVar8 * param_2[8] + fVar12 * param_2[0xb];
  param_1[0xb] = fVar15 * param_2[10] +
                 fVar14 * param_2[9] + fVar13 * param_2[8] + fVar16 * param_2[0xb];
  param_1[0xc] = fVar3 * param_2[0xd] +
                 fVar4 * param_2[0xc] + fVar2 * param_2[0xf] + fVar1 * param_2[0xe];
  param_1[0xd] = fVar5 * param_2[0xd] +
                 fVar6 * param_2[0xc] + fVar10 * param_2[0xf] + fVar9 * param_2[0xe];
  param_1[0xe] = fVar7 * param_2[0xd] +
                 fVar8 * param_2[0xc] + fVar12 * param_2[0xf] + fVar11 * param_2[0xe];
  param_1[0xf] = fVar14 * param_2[0xd] +
                 fVar13 * param_2[0xc] + fVar16 * param_2[0xf] + fVar15 * param_2[0xe];
  return;
}

