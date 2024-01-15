#include "prototype.h"


void FUN_00417150(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 3;
    piVar2 = param_2 + 2;
    param_2[1] = 0;
    *param_2 = 0;
    *piVar1 = 0;
    *piVar2 = 0;
    FUN_00417120(param_1,piVar2,piVar1);
    *piVar2 = *piVar2 + -1;
    *piVar1 = *piVar1 + -1;
  }
  return;
}

