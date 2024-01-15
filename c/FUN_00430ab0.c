#include "prototype.h"


void FUN_00430ab0(float *param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = param_3[10];
  fVar2 = param_3[0xe];
  fVar3 = param_3[0xb];
  fVar4 = param_3[0xf];
  fVar5 = param_2[2];
  fVar6 = param_3[6];
  fVar7 = param_2[3];
  fVar8 = param_2[2];
  fVar9 = param_3[7];
  fVar10 = param_2[1];
  fVar11 = param_2[3];
  fVar12 = param_3[8];
  fVar13 = param_3[2];
  fVar14 = *param_2;
  fVar15 = param_3[0xc];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar18 = param_3[3];
  fVar19 = *param_2;
  fVar20 = param_2[3];
  fVar21 = param_3[4];
  fVar22 = param_2[1];
  fVar23 = *param_3;
  fVar24 = *param_2;
  param_1[1] = param_3[1] * *param_2 +
               param_3[5] * param_2[1] + param_3[0xd] * param_2[3] + param_3[9] * param_2[2];
  param_1[2] = fVar13 * fVar14 + fVar6 * fVar10 + fVar2 * fVar7 + fVar1 * fVar5;
  param_1[3] = fVar18 * fVar19 + fVar9 * fVar16 + fVar4 * fVar11 + fVar3 * fVar8;
  *param_1 = fVar23 * fVar24 + fVar21 * fVar22 + fVar15 * fVar20 + fVar12 * fVar17;
  return;
}

