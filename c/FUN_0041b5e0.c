#include "prototype.h"


int ** FUN_0041b5e0(int **param_1,int *param_2)

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
    if (((param_1[6] == (int *)0xa) && (param_1[7] == *ppiVar1)) && (param_1[0x150] == param_2))
    break;
    param_1 = (int **)param_1[1];
  }
  return param_1;
}

