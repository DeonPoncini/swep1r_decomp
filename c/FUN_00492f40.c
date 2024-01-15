#include "prototype.h"


void FUN_00492f40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_2[6];
  fVar2 = param_2[3];
  pfVar4 = param_1;
  pfVar5 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  *param_1 = local_30[0] * *param_2 + fVar2 * local_30[1] + fVar1 * local_30[2];
  param_1[1] = param_2[4] * local_30[1] + param_2[7] * local_30[2] + param_2[1] * local_30[0];
  param_1[2] = param_2[2] * local_30[0] + param_2[8] * local_30[2] + param_2[5] * local_30[1];
  param_1[3] = local_30[3] * *param_2 + param_2[3] * local_20 + param_2[6] * local_1c;
  param_1[4] = param_2[4] * local_20 + param_2[7] * local_1c + param_2[1] * local_30[3];
  param_1[5] = param_2[2] * local_30[3] + param_2[8] * local_1c + param_2[5] * local_20;
  param_1[6] = local_18 * *param_2 + param_2[3] * local_14 + param_2[6] * local_10;
  param_1[7] = param_2[4] * local_14 + param_2[7] * local_10 + param_2[1] * local_18;
  param_1[8] = param_2[2] * local_18 + param_2[8] * local_10 + param_2[5] * local_14;
  param_1[9] = local_c * *param_2 + param_2[3] * local_8 + param_2[6] * local_4 + param_2[9];
  param_1[10] = param_2[4] * local_8 + param_2[7] * local_4 + param_2[1] * local_c + param_2[10];
  param_1[0xb] = param_2[2] * local_c + param_2[8] * local_4 + param_2[5] * local_8 + param_2[0xb];
  return;
}

