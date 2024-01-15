#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416cc0(float param_1,float param_2,undefined4 *param_3,undefined4 *param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
    if (_DAT_004ac3d0 <= param_1) {
      if (param_1 <= _DAT_004ac3f0) {
        *param_3 = 2;
      }
      else {
        *param_3 = 1;
      }
    }
    else if (_DAT_004ac3ec <= param_1) {
      *param_3 = 0xffffffff;
    }
    else {
      *param_3 = 0xfffffffe;
    }
    if (param_2 < _DAT_004ac3d0) {
      if (param_2 < _DAT_004ac3ec) {
        *param_4 = 0xfffffffe;
        return;
      }
      *param_4 = 0xffffffff;
      return;
    }
    if (_DAT_004ac3f0 < param_2) {
      *param_4 = 1;
      return;
    }
    *param_4 = 2;
  }
  return;
}

