#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004856e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (DAT_0050feb4 == 0) {
    return (float10)_DAT_004ae2d0;
  }
  iVar3 = param_1 * 0x18;
  if (((&DAT_0050f0a8)[param_1 * 6] & 2) == 0) {
    return (float10)_DAT_004ae2d0;
  }
  iVar1 = (&DAT_0050d568)[param_1] - *(int *)(&DAT_0050f0b4 + iVar3);
  if (iVar1 == 0) {
    return (float10)_DAT_004ae2d0;
  }
  if ((((&DAT_0050f0a8)[param_1 * 6] & 8) == 0) && (*(int *)(&DAT_0050f0b8 + iVar3) != 0)) {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    if (iVar2 < *(int *)(&DAT_0050f0b8 + iVar3)) {
      return (float10)_DAT_004ae2d0;
    }
  }
  fVar5 = (float10)iVar1 * (float10)*(float *)(&DAT_0050f0bc + iVar3);
  fVar4 = fVar5;
  if (fVar5 < (float10)_DAT_004ae2d0) {
    fVar4 = -fVar5;
  }
  if (fVar4 <= (float10)_DAT_004ae2d4) {
    fVar5 = (float10)_DAT_004ae2d0;
  }
  if ((DAT_0050feb0 != 0) && (fVar5 != (float10)_DAT_004ae2d0)) {
    DAT_0050feb0 = 0;
  }
  return fVar5;
}

