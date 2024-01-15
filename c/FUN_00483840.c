#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483840(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  float local_8;
  float local_4;
  
  fVar1 = (float10)FUN_0042f8c0(param_4);
  if ((float10)_DAT_004ae094 <= fVar1) {
    local_8 = (float)((float10)*(float *)(param_4 + 4) * ((float10)_DAT_004ae0d0 / fVar1));
    local_4 = (float)((float10)*(float *)(param_4 + 8) * ((float10)_DAT_004ae0d0 / fVar1));
  }
  else {
    local_8 = 0.0;
    local_4 = -1.0;
  }
  local_14 = __ftol();
  local_12 = __ftol();
  local_10 = __ftol();
  local_1c = __ftol();
  local_1a = __ftol();
  local_18 = __ftol();
  local_24 = __ftol();
  local_22 = __ftol();
  local_20 = __ftol();
  if (param_1 == -1) {
    FUN_0044e140(&local_14,&local_1c,&local_24);
    return;
  }
  FUN_0044e190(param_1,&local_14,&local_1c,&local_24);
  return;
}

