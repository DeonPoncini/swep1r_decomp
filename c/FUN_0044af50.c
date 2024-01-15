#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044af50(float *param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  param_5 = -(param_2 / param_4) * param_5;
  if (_DAT_004acc24 < param_5) {
    param_5 = _DAT_004acc24;
  }
  if (param_5 < _DAT_004acc28) {
    param_5 = _DAT_004acc28;
  }
  *param_1 = *param_1 - (param_5 - *param_1) * (float)_DAT_00e22a40 * (float)_DAT_004acc30;
  return;
}

