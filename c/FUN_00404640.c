#include "prototype.h"


int ** FUN_00404640(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  int iVar2;
  
  if (DAT_004b2910 == 0) {
    return (int **)0x0;
  }
  ppiVar1 = *(int ***)(param_1 + 4);
  if (ppiVar1 == (int **)0x0) {
    return ppiVar1;
  }
  iVar2 = (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,param_2);
  return (int **)(uint)(-1 < iVar2);
}

