#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047f810(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_0044e620(param_1,0);
  fVar1 = *(float *)(param_1 + 8) * *(float *)(&DAT_00e22a64 + iVar2 * 8) +
          (float)(&DAT_00e22a60)[iVar2 * 2];
  if (DAT_004c7be4 < 0) {
    if (fVar1 < _DAT_004adf4c) {
      fVar3 = (float10)fVar1;
    }
    else {
      fVar3 = (float10)_DAT_004adf60;
    }
  }
  else if (fVar1 <= _DAT_004adf4c) {
    fVar3 = (float10)fVar1;
  }
  else {
    fVar3 = (float10)_DAT_004adf4c;
  }
  return fVar3;
}

