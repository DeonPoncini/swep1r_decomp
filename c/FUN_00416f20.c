#include "prototype.h"


void FUN_00416f20(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x34) = param_2;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x24) + -1 + param_2;
  *(int *)(param_1 + 0x38) = param_3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x28) + -1 + param_3;
  return;
}

