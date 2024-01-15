#include "prototype.h"


void FUN_004314f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_3 - *param_2;
  local_c = *param_4 - *param_3;
  local_8 = param_4[1] - param_3[1];
  local_4 = param_4[2] - param_3[2];
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  FUN_0042f9f0(param_1,&local_18,&local_c);
  FUN_0042f9b0(param_1);
  param_1[3] = *param_2 * *param_1 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
  return;
}

