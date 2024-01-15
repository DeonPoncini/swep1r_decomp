#include "prototype.h"


void FUN_004a22b0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    param_1 = FUN_004a17f0(param_1,param_2);
  }
  else {
    *(char *)*param_2 = (char)param_1;
    param_1 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (param_1 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

