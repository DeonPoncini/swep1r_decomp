#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484d40(float param_1)

{
  if (param_1 < _DAT_004ae190) {
    _DAT_004c7d7c = 0.0;
    return;
  }
  if (param_1 <= _DAT_004ae194) {
    _DAT_004c7d7c = param_1;
    return;
  }
  _DAT_004c7d7c = 10.0;
  return;
}

