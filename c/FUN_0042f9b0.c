#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f9b0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0042f8c0(param_1);
  if ((float10)_DAT_004ac6a8 <= fVar1) {
    *param_1 = (float)((float10)*param_1 / fVar1);
    param_1[1] = (float)((float10)param_1[1] / fVar1);
    param_1[2] = (float)((float10)param_1[2] / fVar1);
  }
  return;
}

