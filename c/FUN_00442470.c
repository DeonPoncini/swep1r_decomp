#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00442470(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2[4] * (float10)param_1[1] +
          (float10)param_2[5] * (float10)param_1[2] + (float10)*param_1 * (float10)param_2[3];
  if (((float10)_DAT_004aca68 <= fVar1) && (fVar1 <= (float10)_DAT_004aca70)) {
    return (float10)_DAT_004aca78;
  }
  fVar1 = fVar1 / ((float10)param_1[3] -
                  ((float10)*param_1 * (float10)*param_2 +
                  (float10)param_1[1] * (float10)param_2[1] +
                  (float10)param_1[2] * (float10)param_2[2]));
  if (fVar1 < (float10)_DAT_004aca50) {
    return (float10)_DAT_004aca78;
  }
  if ((float10)param_2[6] < fVar1) {
    return (float10)_DAT_004aca78;
  }
  *param_3 = (float)(fVar1 * (float10)param_2[3]);
  param_3[1] = (float)(fVar1 * (float10)param_2[4]);
  param_3[2] = (float)(fVar1 * (float10)param_2[5]);
  *param_3 = *param_3 + *param_2;
  param_3[1] = param_2[1] + param_3[1];
  param_3[2] = param_2[2] + param_3[2];
  return fVar1;
}

