#include "prototype.h"


int FUN_004883c0(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[1] == 0) {
      return 0;
    }
    iVar1 = FUN_00489a60(param_1 + 0x18);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1[1] = param_1[1] + -1;
    return 0;
  }
  return 1;
}

