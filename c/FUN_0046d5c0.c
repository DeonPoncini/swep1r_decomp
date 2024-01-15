#include "prototype.h"


void FUN_0046d5c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    FUN_00426810(iVar2,0x10000000);
    FUN_00426840(*param_1,0);
    FUN_00426880(*param_1,param_2);
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return;
}

