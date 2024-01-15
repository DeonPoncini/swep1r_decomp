#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046a9f0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  
  iVar1 = 0;
  fVar3 = (float10)_DAT_004ad750;
  pfVar2 = (float *)(param_1 + 0x288);
  do {
    if ((float)_DAT_004ad758 < *pfVar2) {
      if (iVar1 < 3) {
        fVar3 = fVar3 - (float10)_DAT_004ad760;
      }
      else {
        fVar3 = fVar3 - (float10)_DAT_004ad764;
      }
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 6);
  return fVar3;
}

