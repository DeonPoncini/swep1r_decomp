#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044acb0(float *param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = *param_1 - *param_2;
  local_c = param_1[1] - param_2[1];
  local_8 = param_1[2] - param_2[2];
  uVar2 = 0;
  fVar3 = (float10)FUN_0042f8c0(&local_10);
  local_4 = (float)fVar3;
  if ((float10)_DAT_004acc00 < fVar3) {
    fVar1 = _DAT_004acc04 / local_4;
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = local_10 * fVar1;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
    fVar3 = (float10)FUN_00444d10(param_3,&local_1c,&local_38,&local_2c);
    if ((float10)_DAT_004acc08 <= fVar3) {
      uVar2 = 1;
      fVar1 = ((local_24 * local_30 + local_28 * local_34 + local_2c * local_38) -
              (*param_1 * local_2c + local_24 * param_1[2] + local_28 * param_1[1])) - _DAT_004acc0c
      ;
      *param_1 = local_2c * fVar1 + *param_1;
      param_1[1] = local_28 * fVar1 + param_1[1];
      param_1[2] = local_24 * fVar1 + param_1[2];
      *param_4 = local_2c;
      param_4[1] = local_28;
      param_4[2] = local_24;
    }
  }
  return uVar2;
}

