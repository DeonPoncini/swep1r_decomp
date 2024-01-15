#include "prototype.h"


int FUN_00484880(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < param_1) {
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (1 < param_1);
  }
  return iVar1;
}

