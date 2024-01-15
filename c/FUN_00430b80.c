#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430b80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  local_18 = -*param_1;
  local_14 = -param_1[1];
  local_10 = -param_1[2];
  local_1c = _DAT_004ac678;
  local_24 = fVar1;
  local_20 = fVar2;
  fVar5 = (float10)FUN_0042f8c0(&local_24);
  fVar4 = (float)fVar5;
  if ((float10)_DAT_004ac6c0 <= fVar5) {
    if (local_20 / fVar4 <= _DAT_004ac67c) {
      fVar5 = (float10)FUN_0042f540(local_20 / fVar4);
      if (_DAT_004ac678 < fVar1) {
        fVar5 = -fVar5;
      }
    }
    else {
      fVar5 = (float10)_DAT_004ac678;
    }
    param_2[3] = (float)fVar5;
  }
  else {
    fVar5 = (float10)FUN_0042f540(-local_18);
    if (_DAT_004ac678 < local_14 == _DAT_004ac678 < fVar3) {
      fVar5 = -fVar5;
    }
    param_2[5] = (float)fVar5;
    param_2[3] = 0.0;
  }
  if ((float)_DAT_004ac6c0 <= fVar4) {
    fVar1 = (local_1c * fVar3 + local_20 * fVar2 + local_24 * fVar1) / fVar4;
    if (fVar1 < _DAT_004ac67c) {
      fVar5 = (float10)FUN_0042f540(fVar1);
      param_2[4] = (float)fVar5;
    }
    else {
      param_2[4] = 0.0;
    }
  }
  else {
    param_2[4] = 90.0;
  }
  if (fVar3 < _DAT_004ac678) {
    param_2[4] = -param_2[4];
  }
  local_c = -local_20;
  local_8 = local_24;
  local_4 = 0.0;
  fVar5 = (float10)FUN_0042f8c0(&local_c);
  if ((float)_DAT_004ac6c0 <= fVar4) {
    fVar1 = (float)(((float10)local_4 * (float10)local_10 +
                    (float10)local_8 * (float10)local_14 + (float10)local_c * (float10)local_18) /
                   fVar5);
    if (fVar1 < _DAT_004ac67c) {
      if (_DAT_004ac6c8 < fVar1) {
        fVar5 = (float10)FUN_0042f540(fVar1);
        param_2[5] = (float)fVar5;
      }
      else {
        param_2[5] = 180.0;
      }
    }
    else {
      param_2[5] = 0.0;
    }
    if (local_10 < _DAT_004ac678) {
      param_2[5] = -param_2[5];
      return;
    }
  }
  return;
}

