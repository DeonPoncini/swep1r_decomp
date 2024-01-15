#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00485840(undefined4 param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004856e0(param_1);
  if (fVar1 < (float10)_DAT_004ae2d0) {
    fVar1 = -fVar1;
  }
  if ((float10)_DAT_004ae2d8 < fVar1) {
    return 1;
  }
  return 0;
}

