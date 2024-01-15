#include "prototype.h"


void FUN_00417900(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = (param_1[2] - iVar2) + param_2;
    param_1[3] = (param_1[3] - iVar1) + param_3;
  }
  return;
}

