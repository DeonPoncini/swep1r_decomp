#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481100(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[0xc] = *param_3 * param_5 + *param_2;
  param_1[0xd] = param_5 * param_3[1] + param_2[1];
  param_1[0xe] = param_5 * param_3[2] + param_2[2];
  fVar2 = param_3[2] * param_4[2] + param_4[1] * param_3[1] + *param_3 * *param_4;
  if ((_DAT_004adfd0 <= fVar2) || (fVar2 <= _DAT_004adfd4)) {
    param_1[4] = *param_3 * _DAT_004adfcc;
    param_1[5] = param_3[1] * _DAT_004adfcc;
    fVar2 = param_3[2] * _DAT_004adfcc;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    param_1[6] = fVar2;
  }
  else {
    param_1[4] = *param_3 * _DAT_004adfcc;
    param_1[5] = param_3[1] * _DAT_004adfcc;
    param_1[6] = param_3[2] * _DAT_004adfcc;
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
  }
  pfVar1 = param_1 + 8;
  FUN_0042f9f0(pfVar1,param_1,param_1 + 4);
  FUN_0042f9f0(param_1,param_1 + 4,pfVar1);
  FUN_0042f9b0(param_1);
  FUN_0042f9b0(pfVar1);
  return;
}

