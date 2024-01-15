#include "prototype.h"


int FUN_0048bf90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048bfc0(param_1);
  while (iVar1 == 0) {
    param_1 = param_1 + 1;
    iVar1 = FUN_0048bfc0(param_1);
  }
  return param_1;
}

