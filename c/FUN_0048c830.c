#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048c830(float param_1)

{
  float10 fVar1;
  float local_c;
  
  if (_DAT_004af6c8 <= param_1) {
    if (param_1 < _DAT_004af6cc) goto LAB_0048c8e1;
    fVar1 = (float10)FUN_0048c8f0(param_1 / _DAT_004af6cc);
    local_c = (float)((float10)param_1 - fVar1 * (float10)_DAT_004af6cc);
  }
  else {
    param_1 = -param_1;
    if (_DAT_004af6cc <= param_1) {
      fVar1 = (float10)FUN_0048c8f0(param_1 / _DAT_004af6cc);
      local_c = (float)((float10)_DAT_004af6cc - ((float10)param_1 - fVar1 * (float10)_DAT_004af6cc)
                       );
    }
    else {
      local_c = _DAT_004af6cc - param_1;
    }
  }
  param_1 = local_c;
  if (local_c == 360.0) {
    local_c = 0.0;
    param_1 = local_c;
  }
LAB_0048c8e1:
  return (float10)param_1;
}

