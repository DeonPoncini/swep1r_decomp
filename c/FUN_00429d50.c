#include "prototype.h"


void FUN_00429d50(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = param_3 * param_2 + *param_1;
  *param_1 = fVar1;
  if (fVar1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  return;
}

