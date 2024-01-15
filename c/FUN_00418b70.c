#include "prototype.h"


void FUN_00418b70(int **param_1)

{
  int *piVar1;
  
  piVar1 = param_1[7];
  if (param_1 != (int **)0x0) {
    do {
      if (((*(byte *)(param_1 + 8) & 0x80) != 0) && ((int *)(*param_1)[7] != piVar1)) break;
      param_1 = (int **)*param_1;
    } while (param_1 != (int **)0x0);
    for (; ((param_1 != (int **)0x0 && (param_1[6] == (int *)0xa)) && (param_1[7] == piVar1));
        param_1 = (int **)param_1[1]) {
      FUN_00414420(param_1,0);
    }
  }
  return;
}

