#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449330(float *param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1] * _DAT_004acaa0;
  fVar2 = (float10)FUN_00480670(param_2[3]);
  param_1[2] = (float)((float10)_DAT_004acaa8 - fVar2 * (float10)_DAT_004acaa4);
  param_1[3] = (param_2[4] - _DAT_004acaac) * _DAT_004acab0;
  fVar2 = (float10)FUN_00480670(param_2[5] * _DAT_004acab4);
  iVar1 = 7;
  param_1[4] = (float)((float10)_DAT_004acab8 / fVar2 - (float10)_DAT_004acabc);
  param_1[5] = param_2[9] * _DAT_004acac0;
  param_1[6] = param_2[0xb];
  do {
    if (*param_1 < _DAT_004acac4) {
      *param_1 = 0.05;
    }
    if (_DAT_004acaa8 < *param_1) {
      *param_1 = 1.0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

