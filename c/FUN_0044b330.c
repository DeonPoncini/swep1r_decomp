#include "prototype.h"


void FUN_0044b330(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      FUN_00426880(iVar2,param_2);
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}

