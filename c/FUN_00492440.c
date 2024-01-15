#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492440(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(*param_1 * *param_1 + param_1[2] * param_1[2] + param_1[1] * param_1[1]);
  if (fVar1 != _DAT_004af92c) {
    fVar1 = _DAT_004af938 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
  }
  return;
}

