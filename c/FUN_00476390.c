#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476390(float *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_4 = 0;
  param_4[2] = 0;
  fVar1 = (float10)FUN_0042f540(*param_1 * *param_3 +
                                param_3[2] * param_1[2] + param_3[1] * param_1[1]);
  param_4[1] = (float)(fVar1 - (float10)_DAT_004adc40);
  FUN_0042f9f0(&local_18,param_3,param_1);
  FUN_0042f9f0(&local_c,param_2,&local_18);
  fVar1 = (float10)FUN_0042f8c0(&local_18);
  if (fVar1 <= (float10)_DAT_004adc44) {
    return;
  }
  fVar1 = (float10)FUN_0042f540((float)(((float10)param_2[2] * (float10)local_10 +
                                        (float10)param_2[1] * (float10)local_14 +
                                        (float10)local_18 * (float10)*param_2) / fVar1));
  if (_DAT_004adc48 < local_c * *param_1 + local_4 * param_1[2] + local_8 * param_1[1]) {
    param_4[2] = -(float)fVar1;
    return;
  }
  param_4[2] = (float)fVar1;
  return;
}

