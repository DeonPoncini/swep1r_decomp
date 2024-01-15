#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0042f3e0(float param_1)

{
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_4;
  
  if (_DAT_004ac660 < param_1) {
    return (float10)_DAT_004ac664;
  }
  if (param_1 < _DAT_004ac668) {
    return (float10)_DAT_004ac66c;
  }
  if ((_DAT_004ac670 <= param_1) || (param_1 <= _DAT_004ac674)) {
    local_4 = param_1;
    bVar2 = true;
    fVar1 = _DAT_004ac67c - param_1 * param_1;
    if (_DAT_004ac678 <= param_1) {
      fVar3 = (float10)FUN_00480670(fVar1);
    }
    else {
      fVar3 = (float10)FUN_00480670(fVar1);
      fVar3 = -fVar3;
    }
    param_1 = (float)fVar3;
  }
  else {
    bVar2 = false;
  }
  if ((_DAT_004ac680 <= param_1) || (param_1 <= _DAT_004ac684)) {
    fVar1 = (float)((float10)param_1 * (float10)param_1);
    fVar3 = (float10)param_1 * (float10)param_1 * (float10)param_1;
    fVar4 = fVar3 * (float10)fVar1;
    fVar5 = fVar4 * (float10)fVar1;
    fVar3 = (float10)param_1 -
            ((float10)(float)fVar5 * (float10)_DAT_004ac694 +
            fVar4 * (float10)_DAT_004ac690 +
            fVar3 * (float10)_DAT_004ac68c + fVar5 * (float10)fVar1 * (float10)_DAT_004ac688);
  }
  else {
    fVar3 = (float10)param_1;
  }
  fVar3 = fVar3 * (float10)_DAT_004ac698 * (float10)_DAT_004ac6a0;
  if (bVar2) {
    if (local_4 < _DAT_004ac678) {
      return (float10)_DAT_004ac66c - fVar3;
    }
    fVar3 = (float10)_DAT_004ac664 - fVar3;
  }
  return fVar3;
}

