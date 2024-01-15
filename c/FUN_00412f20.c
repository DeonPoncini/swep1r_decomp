#include "prototype.h"


int FUN_00412f20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00417010(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00417040();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004282f0(iVar2,iVar1);
  return iVar2;
}

