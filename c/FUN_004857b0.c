#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004857b0(int param_1)

{
  uint uVar1;
  
  if (DAT_0050feb4 == 0) {
    return (float10)_DAT_004ae2d0;
  }
  uVar1 = (&DAT_0050e028)[param_1];
  if (((&DAT_0050e028)[param_1] == 0) && (uVar1 = DAT_0050fed8, (&DAT_0050e868)[param_1] == 0)) {
    return (float10)_DAT_004ae2d0;
  }
  if (DAT_0050fed8 <= uVar1) {
    uVar1 = DAT_0050fed8;
  }
  if ((DAT_0050feb0 != 0) &&
     ((float10)(ulonglong)uVar1 * (float10)_DAT_004c8174 != (float10)_DAT_004ae2d0)) {
    DAT_0050feb0 = 0;
  }
  return (float10)(ulonglong)uVar1 * (float10)_DAT_004c8174;
}

