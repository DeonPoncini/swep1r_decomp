#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048ed20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *param_1;
  local_18 = *param_3 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  FUN_00492440(&local_c);
  FUN_00492440(&local_18);
  fVar1 = local_10 * local_4 + local_14 * local_8 + local_18 * local_c;
  if (fVar1 < _DAT_004af784) {
    fVar1 = -fVar1;
  }
  if ((_DAT_004af794 <= fVar1) && (fVar1 <= _DAT_004af798)) {
    return 1;
  }
  return 0;
}

