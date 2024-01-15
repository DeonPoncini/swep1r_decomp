#include "prototype.h"


float10 FUN_00425980(int param_1,float param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 0x11c) + param_3 * 4);
  return ((float10)param_2 - fVar1) /
         ((float10)*(float *)(*(int *)(param_1 + 0x11c) + 4 + param_3 * 4) - fVar1);
}

