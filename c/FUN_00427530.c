#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427530(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0044a930(param_3);
  if (-1 < param_1) {
    if (param_1 < 2) {
      (&DAT_0050b620)[param_2] = (float)(fVar1 - (float10)_DAT_004ac470);
      *(int *)(&DAT_0050b680 + param_2 * 4) = param_1;
      return;
    }
    if (param_1 == 2) {
      _DAT_0050b608 = *(float *)(&DAT_004b85e4 + param_4 * 4) - _DAT_004ac4a4;
      return;
    }
  }
  (&DAT_0050b600)[param_1] = (float)(fVar1 - (float10)_DAT_004ac470);
  return;
}

