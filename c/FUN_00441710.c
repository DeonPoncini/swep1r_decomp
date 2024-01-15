#include "prototype.h"


void FUN_00441710(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_3 - *param_2;
  local_8 = param_3[1] - param_2[1];
  local_4 = param_3[2] - param_2[2];
  FUN_0042f9b0(&local_c);
  fVar1 = (local_c * *param_4 + local_8 * param_4[1] + local_4 * param_4[2]) /
          (param_5 - (*param_2 * *param_4 + param_4[1] * param_2[1] + param_4[2] * param_2[2]));
  *param_1 = local_c * fVar1;
  param_1[1] = local_8 * fVar1;
  param_1[2] = local_4 * fVar1;
  *param_1 = *param_2 + local_c * fVar1;
  param_1[1] = param_2[1] + local_8 * fVar1;
  param_1[2] = param_2[2] + local_4 * fVar1;
  return;
}

