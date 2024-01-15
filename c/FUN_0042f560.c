#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0042f560(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((_DAT_004ac6a8 <= param_2) || (param_2 < _DAT_004ac6ac)) {
    if ((_DAT_004ac6a8 <= param_1) || (param_1 < _DAT_004ac6ac)) {
      fVar2 = param_1;
      if (param_1 < _DAT_004ac678) {
        fVar2 = -param_1;
      }
      fVar4 = param_2;
      if (param_2 < _DAT_004ac678) {
        fVar4 = -param_2;
      }
      fVar1 = fVar4;
      fVar3 = fVar2;
      if (fVar4 < fVar2) {
        fVar1 = fVar2;
        fVar3 = fVar4;
      }
      fVar3 = fVar3 / fVar1;
      if ((_DAT_004ac6a8 <= fVar3) || (fVar3 < _DAT_004ac6ac)) {
        fVar1 = (float)((float10)fVar3 * (float10)fVar3);
        fVar5 = (float10)fVar3 * (float10)fVar3 * (float10)fVar3;
        fVar6 = fVar5 * (float10)fVar1;
        fVar7 = fVar6 * (float10)fVar1;
        fVar5 = (((((float10)fVar3 - fVar5 * (float10)_DAT_004ac6b0) -
                  fVar6 * (float10)_DAT_004ac6b4) - (float10)(float)fVar7 * (float10)_DAT_004ac6b8)
                - fVar7 * (float10)fVar1 * (float10)_DAT_004ac6bc) * (float10)_DAT_004ac698 *
                (float10)_DAT_004ac6a0;
      }
      else {
        fVar5 = (float10)_DAT_004ac678;
      }
      if (fVar4 < fVar2) {
        fVar5 = (float10)_DAT_004ac664 - fVar5;
      }
    }
    else {
      fVar5 = (float10)_DAT_004ac678;
    }
  }
  else {
    fVar5 = (float10)_DAT_004ac664;
  }
  if (param_2 < _DAT_004ac6ac) {
    fVar5 = (float10)_DAT_004ac698 - fVar5;
  }
  if (param_1 < _DAT_004ac6ac) {
    fVar5 = -fVar5;
  }
  return fVar5;
}

