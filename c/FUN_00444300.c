#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00444300(float *param_1,float param_2,float *param_3,float param_4,float param_5,float *param_6,
            float *param_7,float *param_8)

{
  float10 fVar1;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  if (_DAT_00e98e6c <= DAT_00e98258) {
    return 0;
  }
  *param_6 = _DAT_00e98290;
  param_6[1] = DAT_00e98294;
  param_6[2] = DAT_00e98298;
  local_78 = *param_1 - _DAT_00e98e60;
  local_74 = param_1[1] - DAT_00e98e64;
  local_70 = param_1[2] - DAT_00e98e68;
  FUN_0042f9b0(&local_78);
  FUN_0042f9f0(local_24,&local_78,param_3);
  FUN_0042f9f0(local_54,local_24,param_3);
  fVar1 = (float10)FUN_0042f8c0(local_54);
  if ((float10)_DAT_004aca64 <= fVar1) {
    FUN_0042fa50(local_54,(float)((float10)_DAT_004aca80 / fVar1),local_54);
    fVar1 = (float10)FUN_00480670(_DAT_00e98e6c - param_4 * param_4,local_54);
    FUN_0042fa50(local_18,(float)fVar1);
    FUN_0042fa80(&local_48,local_18,param_4,param_3);
    fVar1 = (float10)FUN_00480670(_DAT_00e98e6c - param_5 * param_5,local_54);
    FUN_0042fa50(local_c,(float)fVar1);
    FUN_0042fa80(&local_6c,local_c,param_5,param_3);
    FUN_0042f9f0(&local_30,&local_48,&local_78);
    FUN_0042f9f0(&local_3c,&local_6c,&local_78);
    if (_DAT_004aca50 <= local_34 * local_28 + local_38 * local_2c + local_3c * local_30) {
      if (_DAT_004aca50 < *param_6 * *param_3 + param_3[1] * param_6[1] + param_3[2] * param_6[2]) {
        local_44 = local_68;
        local_40 = local_64;
        local_48 = local_6c;
      }
      local_60 = *param_1 + local_48;
      local_5c = local_44 + param_1[1];
      local_58 = local_40 + param_1[2];
      *param_7 = local_6c;
      param_7[1] = local_68;
      param_7[2] = local_64;
      FUN_0042f9b0(param_7);
      FUN_0042fa80(param_1,param_1,
                   (*param_6 * _DAT_00e98e60 + DAT_00e98e68 * param_6[2] + DAT_00e98e64 * param_6[1]
                   ) - (*param_6 * local_60 + local_5c * param_6[1] + local_58 * param_6[2]),param_6
                  );
    }
    else {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,&local_78);
      FUN_0042fa50(&local_78,(float)((float10)param_2 - fVar1));
      *param_1 = *param_1 + local_78;
      param_1[1] = local_74 + param_1[1];
      param_1[2] = local_70 + param_1[2];
      *param_7 = -*param_6;
      param_7[1] = -param_6[1];
      param_7[2] = -param_6[2];
    }
  }
  else {
    if (_DAT_004aca50 <= param_3[2] * local_70 + param_3[1] * local_74 + *param_3 * local_78) {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,param_6);
      fVar1 = (float10)-param_5 - fVar1;
    }
    else {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,param_6);
      fVar1 = -((float10)param_4 - fVar1);
    }
    FUN_0042fa50(&local_78,(float)fVar1);
    *param_1 = *param_1 + local_78;
    param_1[1] = local_74 + param_1[1];
    param_1[2] = local_70 + param_1[2];
    *param_7 = -*param_6;
    param_7[1] = -param_6[1];
    param_7[2] = -param_6[2];
  }
  *param_8 = _DAT_00e98e60;
  param_8[1] = DAT_00e98e64;
  param_8[2] = DAT_00e98e68;
  if (DAT_00e98254 != 0) {
    DAT_0050c5d0 = DAT_00e98254;
  }
  return 1;
}

