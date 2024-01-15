#include "prototype.h"


uint FUN_0045e120(uint param_1)

{
  int iVar1;
  
  if ((DAT_0050ca3c != 0) && (DAT_0050ca44 == 0)) {
    return 0;
  }
  if (DAT_0050ca18 < 2) {
    param_1 = param_1 & DAT_00e98eb0;
  }
  else {
    iVar1 = FUN_00445690();
    if (iVar1 != 0) {
      return (&DAT_00e98eb0)[DAT_0050ca4c] & param_1;
    }
    if ((param_1 & DAT_00e98eb0) != 0) {
      DAT_0050ca4c = 0;
      return 1;
    }
    if ((DAT_00e98eb4 & param_1) != 0) {
      DAT_0050ca4c = 1;
      return 1;
    }
  }
  return param_1;
}

