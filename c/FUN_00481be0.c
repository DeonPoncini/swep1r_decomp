#include "prototype.h"


void FUN_00481be0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_0048eb60(param_2 + 0x3c,param_1 + param_3 * 0xc,param_1 + param_4 * 0xc,
               param_1 + param_5 * 0xc);
  **(int **)(param_2 + 0x14) = param_3;
  *(int *)(*(int *)(param_2 + 0x14) + 4) = param_4;
  *(int *)(*(int *)(param_2 + 0x14) + 8) = param_5;
  return;
}

