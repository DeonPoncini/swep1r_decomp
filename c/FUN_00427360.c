#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00427360(int param_1,int param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    if (_DAT_004ac47c < (float)(&DAT_0050b600)[param_1]) {
      return 1;
    }
  }
  else if (_DAT_004ac47c < (float)(&DAT_0050b620)[param_2]) {
    return 1;
  }
  return 0;
}

