#include "prototype.h"


void FUN_00429d90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = __ftol();
  *param_1 = iVar1;
  if (iVar1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  return;
}

