#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00480dc0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                    float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_004314f0(&local_10,param_2,param_3,param_4);
  bVar4 = (param_1[1] - param_2[1]) * local_c +
          (param_1[2] - param_2[2]) * local_8 + (*param_1 - *param_2) * local_10 < _DAT_004adfb8;
  FUN_00480890(&local_10,param_1,param_6);
  fVar1 = (*param_1 - *param_6) * (*param_1 - *param_6) +
          (param_1[2] - param_6[2]) * (param_1[2] - param_6[2]) +
          (param_1[1] - param_6[1]) * (param_1[1] - param_6[1]);
  if ((_DAT_004adfb8 < param_5) && (param_5 < fVar1)) {
    return (float10)_DAT_004adfcc;
  }
  local_34 = *param_3 - *param_2;
  local_30 = param_3[1] - param_2[1];
  local_2c = param_3[2] - param_2[2];
  local_28 = *param_4 - *param_3;
  local_24 = param_4[1] - param_3[1];
  local_20 = param_4[2] - param_3[2];
  local_1c = *param_2 - *param_4;
  local_18 = param_2[1] - param_4[1];
  local_14 = param_2[2] - param_4[2];
  iVar5 = FUN_00480a70(param_6,param_2,param_3,param_4,&local_34,&local_28,&local_1c);
  if (iVar5 == 0) {
    FUN_004808f0(param_6,param_2,param_3,&local_34);
    FUN_004808f0(param_6,param_3,param_4,&local_28);
    FUN_004808f0(param_6,param_4,param_2,&local_1c);
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    *param_6 = local_34;
    param_6[1] = local_30;
    param_6[2] = local_2c;
    fVar7 = ((float10)param_1[2] - (float10)local_20) *
            (float10)(float)((float10)param_1[2] - (float10)local_20) +
            ((float10)param_1[1] - (float10)local_24) * ((float10)param_1[1] - (float10)local_24) +
            ((float10)*param_1 - (float10)local_28) *
            (float10)(float)((float10)*param_1 - (float10)local_28);
    fVar6 = ((float10)fVar3 - (float10)local_2c) *
            (float10)(float)((float10)fVar3 - (float10)local_2c) +
            ((float10)fVar2 - (float10)local_30) *
            (float10)(float)((float10)fVar2 - (float10)local_30) +
            ((float10)fVar1 - (float10)local_34) *
            (float10)(float)((float10)fVar1 - (float10)local_34);
    if (fVar7 < fVar6) {
      *param_6 = local_28;
      fVar6 = (float10)(float)fVar7;
      param_6[1] = local_24;
      param_6[2] = local_20;
    }
    fVar7 = ((float10)param_1[2] - (float10)local_14) *
            (float10)(float)((float10)param_1[2] - (float10)local_14) +
            ((float10)param_1[1] - (float10)local_18) * ((float10)param_1[1] - (float10)local_18) +
            ((float10)*param_1 - (float10)local_1c) *
            (float10)(float)((float10)*param_1 - (float10)local_1c);
    if (fVar7 < fVar6) {
      *param_6 = local_1c;
      fVar6 = (float10)(float)fVar7;
      param_6[1] = local_18;
      param_6[2] = local_14;
    }
  }
  else {
    fVar6 = (float10)fVar1;
  }
  if (bVar4) {
    *param_7 = -local_10;
    param_7[1] = -local_c;
    param_7[2] = -local_8;
    return fVar6;
  }
  *param_7 = local_10;
  param_7[1] = local_c;
  param_7[2] = local_8;
  return fVar6;
}

