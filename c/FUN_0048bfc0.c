#include "prototype.h"


undefined4 FUN_0048bfc0(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (param_1 + -1 < 3) {
    return 1;
  }
  do {
    if (param_1 % iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1 + -1);
  return 1;
}

