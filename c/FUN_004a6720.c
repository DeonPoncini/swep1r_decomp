#include "prototype.h"


void FUN_004a6720(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  
  sVar1 = FUN_004a9750(param_1,param_2);
  if (sVar1 == -1) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

