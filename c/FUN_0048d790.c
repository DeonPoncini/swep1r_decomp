#include "prototype.h"


void FUN_0048d790(int param_1,int *param_2)

{
  int **ppiVar1;
  
  ppiVar1 = *(int ***)(param_1 + 4);
  *param_2 = param_1;
  param_2[1] = (int)ppiVar1;
  *(int **)(param_1 + 4) = param_2;
  if (ppiVar1 != (int **)0x0) {
    *ppiVar1 = param_2;
  }
  return;
}

