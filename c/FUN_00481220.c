#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481220(float *param_1,float *param_2,undefined4 param_3,float *param_4,float param_5)

{
  float fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  local_c = *param_2 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  fVar2 = (float10)FUN_0042f8c0(&local_c);
  if (fVar2 <= (float10)_DAT_004adfbc) {
    FUN_00431100(param_3,*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_0042fa50(&local_c,(float)((float10)_DAT_004adfa8 / fVar2),&local_c);
  fVar2 = (float10)FUN_0042f3e0(local_4);
  param_4[4] = (float)fVar2;
  fVar1 = (float)_DAT_004adfd8;
  param_4[5] = param_5;
  if ((fVar1 <= local_8) || (local_8 <= (float)_DAT_004adfe0)) {
    fVar2 = (float10)FUN_0042f560(-local_c,local_8);
    param_4[3] = (float)fVar2;
    FUN_00431060(param_3,param_4);
    return;
  }
  if (local_c < (float)_DAT_004adfe0) {
    param_4[3] = 90.0;
    FUN_00431060(param_3,param_4);
    return;
  }
  if ((float)_DAT_004adfd8 < local_c) {
    param_4[3] = -90.0;
    FUN_00431060(param_3,param_4);
    return;
  }
  param_4[3] = 0.0;
  FUN_00431060(param_3,param_4);
  return;
}

