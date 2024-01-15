#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045d410(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 0x84) + 0xe8);
  fVar2 = fVar1 - (float10)*(float *)(*(int *)(param_1 + 0x84) + 0xe0);
  if (fVar2 < (float10)_DAT_004ad218) {
    fVar2 = -fVar2;
  }
  if ((float10)_DAT_004ad228 < fVar2) {
    fVar2 = (float10)_DAT_004ad22c - fVar2;
  }
  fVar2 = ((float10)*(int *)(param_1 + 0x78) + fVar1) - fVar2;
  if (fVar2 < (float10)_DAT_004ad218) {
    fVar2 = (float10)_DAT_004ad218;
  }
  return fVar2;
}

