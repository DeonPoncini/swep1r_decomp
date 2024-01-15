#include "prototype.h"


float10 FUN_0042f910(float *param_1,float *param_2)

{
  return ((float10)param_1[2] - (float10)param_2[2]) * ((float10)param_1[2] - (float10)param_2[2]) +
         ((float10)param_1[1] - (float10)param_2[1]) *
         (float10)(float)((float10)param_1[1] - (float10)param_2[1]) +
         ((float10)*param_1 - (float10)*param_2) *
         (float10)(float)((float10)*param_1 - (float10)*param_2);
}

