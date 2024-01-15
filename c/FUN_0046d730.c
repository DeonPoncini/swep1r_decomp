#include "prototype.h"


float10 FUN_0046d730(float param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)(param_5 + param_2) < fVar1) {
    fVar1 = (float10)(param_5 + param_2);
  }
  if (fVar1 < (float10)(param_2 - param_6)) {
    fVar1 = (float10)(param_2 - param_6);
  }
  if (fVar1 < (float10)param_3) {
    fVar1 = (float10)param_3;
  }
  if ((float10)param_4 < fVar1) {
    fVar1 = (float10)param_4;
  }
  return fVar1;
}

