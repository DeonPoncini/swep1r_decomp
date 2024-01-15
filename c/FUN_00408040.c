#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00408040(int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 < 0) {
    fVar2 = (float10)param_3;
  }
  else {
    fVar2 = (float10)FUN_004856e0(param_1);
  }
  if (param_2 == 0) {
    if ((float10)_DAT_004ac308 > fVar2) {
      if (-fVar2 <= (float10)param_4) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if ((float10)_DAT_004ac308 <= fVar2) {
      iVar1 = 1;
    }
    else {
      iVar1 = -1;
    }
    if (iVar1 != param_2) {
      return 0;
    }
    if (fVar2 < (float10)_DAT_004ac308) {
      fVar2 = -fVar2;
    }
  }
  if (fVar2 <= (float10)param_4) {
    return 0;
  }
  return 1;
}

