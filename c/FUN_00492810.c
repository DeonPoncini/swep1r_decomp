#include "prototype.h"


void FUN_00492810(float *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  puVar1 = param_2;
  FUN_0048c950(*param_2,&param_2,&local_1c);
  FUN_0048c950(puVar1[1],&local_14,&local_10);
  FUN_0048c950(puVar1[2],&local_18,local_c);
  *param_1 = -(local_18 * local_14) * (float)param_2 + local_c[0] * local_10;
  param_1[1] = local_18 * local_10 * (float)param_2 + local_c[0] * local_14;
  param_1[2] = -local_18 * local_1c;
  param_1[3] = -local_14 * local_1c;
  param_1[4] = local_10 * local_1c;
  param_1[5] = (float)param_2;
  param_1[6] = local_c[0] * local_14 * (float)param_2 + local_18 * local_10;
  param_1[7] = -(float)param_2 * local_c[0] * local_10 + local_18 * local_14;
  param_1[8] = local_c[0] * local_1c;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return;
}

