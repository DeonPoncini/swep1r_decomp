#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00469b90(float param_1)

{
  DAT_00e295a0 = param_1 * _DAT_00e22a50 + DAT_00e295a0;
  if (_DAT_004ad670 < DAT_00e295a0) {
    DAT_00e295a0 = 1.0;
  }
  if (DAT_00e295a0 < _DAT_004ad590) {
    DAT_00e295a0 = 0.0;
  }
  return (float10)DAT_00e295a0;
}

