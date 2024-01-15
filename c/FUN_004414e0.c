#include "prototype.h"


void FUN_004414e0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 param_6)

{
  float fVar1;
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
  float local_4;
  
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = *param_4 - *param_3;
  local_20 = param_4[1] - param_3[1];
  local_1c = param_4[2] - param_3[2];
  local_18 = *param_2 - *param_4;
  local_14 = param_2[1] - param_4[1];
  local_10 = param_2[2] - param_4[2];
  FUN_004808f0(param_1,param_2,param_3,&local_30);
  FUN_004808f0(param_1,param_3,param_4,&local_24);
  FUN_004808f0(param_1,param_4,param_2,&local_18);
  param_3 = (float *)((param_5[2] - local_28) * (param_5[2] - local_28) +
                     (param_5[1] - local_2c) * (param_5[1] - local_2c) +
                     (*param_5 - local_30) * (*param_5 - local_30));
  fVar1 = (param_5[2] - local_1c) * (param_5[2] - local_1c) +
          (param_5[1] - local_20) * (param_5[1] - local_20) +
          (*param_5 - local_24) * (*param_5 - local_24);
  local_c = local_30;
  local_8 = local_2c;
  local_4 = local_28;
  if (fVar1 < (float)param_3) {
    local_c = local_24;
    local_8 = local_20;
    local_4 = local_1c;
    param_3 = (float *)fVar1;
  }
  fVar1 = (param_5[2] - local_10) * (param_5[2] - local_10) +
          (param_5[1] - local_14) * (param_5[1] - local_14) +
          (*param_5 - local_18) * (*param_5 - local_18);
  if (fVar1 < (float)param_3) {
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    param_3 = (float *)fVar1;
  }
  if ((float)param_3 <= DAT_00e98258) {
    FUN_00441390(param_3,param_5,&local_c,param_6);
  }
  return;
}

