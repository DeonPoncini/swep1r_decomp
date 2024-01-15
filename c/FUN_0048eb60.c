#include "prototype.h"


void FUN_0048eb60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_3 - *param_2;
  local_18 = *param_4 - *param_2;
  local_8 = param_3[1] - param_2[1];
  local_4 = param_3[2] - param_2[2];
  local_14 = param_4[1] - param_2[1];
  local_10 = param_4[2] - param_2[2];
  FUN_00492440(&local_c);
  FUN_00492440(&local_18);
  *param_1 = local_10 * local_8 - local_14 * local_4;
  param_1[1] = local_18 * local_4 - local_10 * local_c;
  param_1[2] = local_14 * local_c - local_18 * local_8;
  FUN_00492440(param_1);
  FUN_0048ec90(param_1,0x358637bd);
  return;
}

