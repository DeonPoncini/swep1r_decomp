#include "prototype.h"


void FUN_00417f00(int *param_1,int *param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_1 < *param_2) {
      *param_1 = *param_2;
    }
    if (param_1[1] < param_2[1]) {
      param_1[1] = param_2[1];
    }
    if (param_2[2] < param_1[2]) {
      param_1[2] = param_2[2];
    }
    if (param_2[3] < param_1[3]) {
      param_1[3] = param_2[3];
    }
  }
  return;
}

