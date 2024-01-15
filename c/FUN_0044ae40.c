#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ae40(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  if (*param_1 <= param_3) {
    if (fVar1 < _DAT_004acc08) {
      param_4 = param_4 * _DAT_004acc10;
    }
    fVar1 = param_4 * (float)_DAT_00e22a40 + *param_1;
    *param_1 = fVar1;
    if (param_3 < fVar1) {
      *param_1 = param_3;
    }
  }
  else {
    if (fVar1 >= _DAT_004acc08 && fVar1 != _DAT_004acc08) {
      param_4 = param_4 * _DAT_004acc10;
    }
    fVar1 = *param_1 - param_4 * (float)_DAT_00e22a40;
    *param_1 = fVar1;
    if (fVar1 < param_3) {
      *param_1 = param_3;
    }
  }
  if ((_DAT_004acc08 < param_5) && (*param_1 < _DAT_004acc08)) {
    *param_1 = 0.0;
  }
  if ((param_5 < _DAT_004acc08) && (_DAT_004acc08 < *param_1)) {
    *param_1 = 0.0;
  }
  fVar2 = _DAT_004acc14;
  fVar1 = (*param_1 + param_6 + param_5) * (float)_DAT_00e22a40 + *param_2;
  *param_2 = fVar1;
  if (fVar2 < fVar1) {
    *param_2 = fVar1 - _DAT_004acc18;
  }
  if (*param_2 < _DAT_004acc1c) {
    *param_2 = *param_2 - _DAT_004acc20;
  }
  return;
}

