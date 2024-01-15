#include "prototype.h"


void FUN_0041a9a0(int *param_1,int *param_2,int param_3,int param_4)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_3 != 0) {
      FUN_00417900(param_1,(((param_2[2] - param_1[2]) + *param_1) - *param_2 >> 1) + *param_2,
                   param_1[1]);
    }
    if (param_4 != 0) {
      FUN_00417900(param_1,*param_1,
                   (((param_1[1] + param_2[3]) - param_1[3]) - param_2[1] >> 1) + param_2[1]);
    }
  }
  return;
}

