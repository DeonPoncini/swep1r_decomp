#include "prototype.h"


void FUN_00493190(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 * *param_3 + param_2[1] * param_3[3] + param_2[2] * param_3[6];
  param_1[1] = param_3[1] * *param_2 + param_3[7] * param_2[2] + param_2[1] * param_3[4];
  param_1[2] = param_3[2] * *param_2 + param_3[8] * param_2[2] + param_2[1] * param_3[5];
  return;
}

