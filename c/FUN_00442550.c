#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442550(float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  bVar2 = false;
  if (*(float *)(param_5 + 0xc) * *param_1 +
      *(float *)(param_5 + 0x14) * param_1[2] + *(float *)(param_5 + 0x10) * param_1[1] <=
      _DAT_004aca50) {
    if (DAT_004c1774 == 0) {
      return;
    }
  }
  else {
    if (DAT_0050c5cc == 0) {
      return;
    }
    bVar2 = true;
  }
  fVar4 = (float10)FUN_00442470(param_1,param_5,&local_30);
  fVar1 = (float)fVar4;
  if (((float10)_DAT_004aca50 <= fVar4) && (fVar1 < DAT_00e98258)) {
    local_24 = *param_3 - *param_2;
    local_20 = param_3[1] - param_2[1];
    local_1c = param_3[2] - param_2[2];
    local_18 = *param_4 - *param_3;
    local_14 = param_4[1] - param_3[1];
    local_10 = param_4[2] - param_3[2];
    local_c = *param_2 - *param_4;
    local_8 = param_2[1] - param_4[1];
    local_4 = param_2[2] - param_4[2];
    iVar3 = FUN_00441040(&local_30,param_2,param_3,param_4,&local_24,&local_18,&local_c);
    if (iVar3 != 0) {
      DAT_00e98258 = fVar1;
      _DAT_00e98e60 = local_30;
      DAT_00e98250 = 1;
      DAT_00e98e64 = local_2c;
      DAT_00e98e68 = local_28;
      DAT_00e98254 = DAT_00e98284;
      if (bVar2) {
        _DAT_00e98290 = -*param_1;
        DAT_00e98294 = -param_1[1];
        DAT_00e98298 = -param_1[2];
        return;
      }
      _DAT_00e98290 = *param_1;
      DAT_00e98294 = param_1[1];
      DAT_00e98298 = param_1[2];
    }
  }
  return;
}

