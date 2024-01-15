#include "prototype.h"


void FUN_0042fac0(float *param_1,float param_2,float *param_3,float param_4,float *param_5)

{
  *param_1 = *param_5 * param_4 + *param_3 * param_2;
  param_1[1] = param_5[1] * param_4 + param_3[1] * param_2;
  param_1[2] = param_5[2] * param_4 + param_3[2] * param_2;
  return;
}

