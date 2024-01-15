#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004764e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,float param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined local_18 [4];
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0042f9f0(&local_24,param_3,param_2);
  fVar4 = (float10)FUN_0042f8c0(&local_24);
  if ((float10)_DAT_004adc44 < fVar4) {
    FUN_0042fa50(&local_24,(float)((float10)_DAT_004adc50 / fVar4),&local_24);
  }
  else {
    local_24 = *param_4;
    local_20 = param_4[1];
    local_1c = param_4[2];
  }
  FUN_0042f9f0(&local_c,param_2,&local_24);
  fVar4 = (float10)FUN_0042f8c0(&local_c);
  if ((float10)_DAT_004adc44 < fVar4) {
    FUN_0042fa50(&local_c,(float)((float10)_DAT_004adc50 / fVar4),&local_c);
  }
  else {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
  }
  FUN_00476390(&local_c,&local_24,param_5,local_18);
  if ((*(uint *)(param_1 + 100) & 0x400) != 0) {
    if (_DAT_004adc54 < local_10) {
      local_10 = 85.0;
    }
    if (local_10 < _DAT_004adc58) {
      local_10 = -85.0;
    }
  }
  fVar2 = local_14 - *(float *)(param_9 + 4);
  fVar1 = _DAT_004adc5c;
  if ((local_14 < *(float *)(param_9 + 4)) ||
     (fVar1 = _DAT_004adc60, *(float *)(param_9 + 4) < local_14)) {
    fVar2 = fVar2 * fVar1;
  }
  fVar1 = (local_10 - *(float *)(param_9 + 8)) * _DAT_004adc64;
  if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
    fVar3 = (param_7 - param_6) / (param_7 - param_8);
    if (fVar3 <= _DAT_004adc48) {
      fVar1 = *(float *)(param_9 + 8) * _DAT_004adc68;
      fVar2 = _DAT_004adc48;
      if (_DAT_004adc6c < *(float *)(param_9 + 4)) {
        fVar2 = (float)_DAT_00e22a40 * _DAT_004adc70;
      }
      if ((*(float *)(param_1 + 0x2fc) < _DAT_004adc48) && (*(float *)(param_9 + 4) < _DAT_004adc74)
         ) {
        fVar2 = fVar2 - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x2fc) * _DAT_004adc78;
      }
    }
    else if (fVar3 < _DAT_004adc50) {
      fVar2 = fVar3 * fVar2;
      fVar1 = fVar1 * fVar3;
    }
  }
  *(float *)(param_9 + 4) = fVar2 + *(float *)(param_9 + 4);
  *(float *)(param_9 + 8) = fVar1 + *(float *)(param_9 + 8);
  return;
}

