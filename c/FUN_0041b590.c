#include "prototype.h"


int ** FUN_0041b590(int **param_1)

{
  int **ppiVar1;
  
  if (param_1 == (int **)0x0) {
    return (int **)0x0;
  }
  ppiVar1 = param_1 + 7;
  do {
    if (((*(byte *)(param_1 + 8) & 0x80) != 0) && ((int *)(*param_1)[7] != *ppiVar1)) break;
    param_1 = (int **)*param_1;
  } while (param_1 != (int **)0x0);
  while( true ) {
    if (param_1 == (int **)0x0) {
      return (int **)0x0;
    }
    if ((param_1[6] == (int *)0xa) && (((uint)param_1[8] & 0x20000) != 0)) break;
    param_1 = (int **)param_1[1];
  }
  return param_1;
}

