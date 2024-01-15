#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492960(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  
  fVar1 = *param_1;
  fVar3 = param_1[3];
  fVar4 = param_1[4];
  fVar6 = -param_1[1];
  fVar2 = param_1[2];
  fVar5 = param_1[5];
  fVar7 = fVar4 * fVar4 + fVar3 * fVar3;
  fVar8 = SQRT(fVar7);
  if (_DAT_004af958 <= fVar8) {
    fVar9 = (float10)FUN_0048d010(fVar4 / fVar8);
    fVar9 = (float10)_DAT_004af95c - fVar9;
    if (_DAT_004af940 < fVar3) {
      fVar9 = -fVar9;
    }
    param_2[1] = (float)fVar9;
  }
  else {
    fVar9 = (float10)FUN_0048d010(--fVar1);
    fVar9 = (float10)_DAT_004af95c - fVar9;
    if (((_DAT_004af940 < fVar6) && (_DAT_004af940 < fVar5)) ||
       ((fVar6 < _DAT_004af940 && (fVar5 < _DAT_004af940)))) {
      fVar9 = -fVar9;
    }
    param_2[2] = (float)fVar9;
    param_2[1] = 0.0;
  }
  if (_DAT_004af958 <= fVar8) {
    fVar7 = fVar7 / fVar8;
    if (fVar7 < _DAT_004af944) {
      fVar9 = (float10)FUN_0048d010(fVar7);
      *param_2 = (float)((float10)_DAT_004af95c - fVar9);
    }
    else {
      *param_2 = 0.0;
    }
  }
  else {
    *param_2 = 90.0;
  }
  if (fVar5 < _DAT_004af940) {
    *param_2 = -*param_2;
  }
  fVar4 = -fVar4;
  if (_DAT_004af958 <= fVar8) {
    fVar1 = (fVar4 * -fVar1 + fVar6 * fVar3) / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar1 < _DAT_004af944) {
      if (_DAT_004af948 < fVar1) {
        fVar9 = (float10)FUN_0048d010(fVar1);
        param_2[2] = (float)((float10)_DAT_004af95c - fVar9);
      }
      else {
        param_2[2] = 180.0;
      }
    }
    else {
      param_2[2] = 0.0;
    }
    if (-fVar2 < _DAT_004af940) {
      param_2[2] = -param_2[2];
      return;
    }
  }
  return;
}

