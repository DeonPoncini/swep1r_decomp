#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048d010(float param_1)

{
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_18;
  float local_8;
  
  bVar2 = _DAT_004af6c8 <= param_1;
  if (bVar2) {
    local_18 = param_1;
  }
  else {
    local_18 = -param_1;
  }
  if (local_18 <= _DAT_004af6e8) {
    fVar5 = (float10)FUN_0048c7f0(local_18,3);
    fVar4 = (float10)_DAT_004af6f8;
    fVar6 = (float10)FUN_0048c7f0(local_18,5);
    fVar3 = (float10)_DAT_004af700;
    fVar7 = (float10)FUN_0048c7f0(local_18,7);
    fVar4 = (fVar7 * (float10)_DAT_004af704 +
            (float10)(float)(fVar6 * fVar3 + (float10)(float)(fVar5 / fVar4 + (float10)local_18))) *
            (float10)_DAT_004af6f4;
  }
  else {
    fVar4 = (float10)FUN_0048cff0(_DAT_004af6ec - local_18 * local_18);
    fVar1 = (float)fVar4;
    fVar5 = (float10)FUN_0048c7f0(fVar1,3);
    fVar4 = (float10)_DAT_004af6f8;
    fVar6 = (float10)FUN_0048c7f0(fVar1,5);
    fVar3 = (float10)_DAT_004af700;
    fVar7 = (float10)FUN_0048c7f0(fVar1,7);
    fVar4 = (float10)_DAT_004af6d8 -
            (fVar7 * (float10)_DAT_004af704 +
            (float10)(float)(fVar6 * fVar3 + (float10)(float)(fVar5 / fVar4 + (float10)fVar1))) *
            (float10)_DAT_004af6f4;
  }
  local_8 = (float)fVar4;
  if (bVar2) {
    fVar4 = (float10)local_8;
  }
  else {
    fVar4 = -(float10)local_8;
  }
  return fVar4;
}

