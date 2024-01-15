#include "prototype.h"


void FUN_00493270(float *param_1,float *param_2,float *param_3,int param_4)

{
  if (param_4 != 0) {
    do {
      *param_3 = *param_2 * *param_1 + param_2[2] * param_1[6] + param_2[1] * param_1[3] +
                 param_1[9];
      param_3[1] = param_2[2] * param_1[7] + param_2[1] * param_1[4] + param_1[1] * *param_2 +
                   param_1[10];
      param_3[2] = param_2[2] * param_1[8] + param_2[1] * param_1[5] + param_1[2] * *param_2 +
                   param_1[0xb];
      param_3 = param_3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return;
}

