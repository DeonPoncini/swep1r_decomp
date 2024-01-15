#include "prototype.h"


float10 FUN_0048ec50(float *param_1,float *param_2,float *param_3)

{
  return ((float10)*param_1 - (float10)*param_3) * (float10)*param_2 +
         ((float10)param_1[2] - (float10)param_3[2]) * (float10)param_2[2] +
         ((float10)param_1[1] - (float10)param_3[1]) * (float10)param_2[1];
}

