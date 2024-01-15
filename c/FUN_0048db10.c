#include "prototype.h"


int * FUN_0048db10(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0049f270(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = param_1 + 8;
  piVar1[1] = 0;
  return piVar1 + 2;
}

