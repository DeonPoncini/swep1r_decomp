#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0048c910(undefined4 param_1_00,undefined4 param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)FUN_0048c830(param_1,param_1_00);
  fVar2 = (float)fVar1;
  if ((float10)_DAT_004af6d0 < fVar1) {
    fVar2 = -(_DAT_004af6cc - fVar2);
  }
  return (float10)fVar2;
}

