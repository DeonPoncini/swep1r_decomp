#include "prototype.h"


void FUN_00416890(int *param_1)

{
  FUN_004168f0(param_1);
  if (param_1 == *(int **)(param_1[2] + 0xc)) {
    *(int *)(param_1[2] + 0xc) = param_1[1];
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

