#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047aee0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                    undefined4 param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_7 = *param_2 - *param_1;
  param_7[1] = param_2[1] - param_1[1];
  *param_8 = *param_4 - *param_3;
  fVar1 = param_4[1];
  fVar2 = param_3[1];
  param_8[1] = fVar1 - fVar2;
  fVar3 = *param_7 - *param_8;
  fVar1 = param_7[1] - (fVar1 - fVar2);
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if ((fVar2 < _DAT_004add54) && (-fVar2 < _DAT_004add54)) {
    return (float10)_DAT_004adce4;
  }
  param_2 = (float *)(-(fVar1 * (param_1[1] - param_3[1]) + fVar3 * (*param_1 - *param_3)) / fVar2);
  if ((float)param_2 < _DAT_004adc48) {
    param_2 = (float *)0x0;
  }
  if (_DAT_004adc50 < (float)param_2) {
    param_2 = (float *)0x3f800000;
  }
  FUN_0042f720(param_5,param_1,param_2,param_7);
  FUN_0042f720(param_6,param_3,param_2,param_8);
  return (float10)(float)param_2;
}

