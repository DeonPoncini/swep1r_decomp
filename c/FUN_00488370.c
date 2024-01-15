#include "prototype.h"


undefined4 FUN_00488370(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return 1;
    }
    if (((param_1[0x33] & 0x20U) != 0) && ((param_1[0x33] & 0x200000U) != 0)) {
      return 0;
    }
    iVar1 = FUN_00489a00(param_1 + 0x18);
    param_1[0x16] = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}

