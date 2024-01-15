#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479550(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float *param_5;
  float *param_6;
  undefined4 param_7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];
  
  pfVar4 = param_6;
  fVar3 = param_5[2] * *(float *)(param_1 + 0x19c) +
          param_5[1] * *(float *)(param_1 + 0x198) + *param_5 * *(float *)(param_1 + 0x194);
  if ((fVar3 < (float)_DAT_004add88) || ((float)_DAT_004add90 < fVar3)) {
    FUN_0042f7b0(param_6,0,0,0);
    iVar1 = param_1 + 0x1c4;
    FUN_0042fa50(iVar1,0x3f666666,iVar1);
    FUN_0042f7d0(param_7,iVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    return;
  }
  FUN_0042f9f0(&local_18,param_5,(float *)(param_1 + 0x194));
  FUN_0042f9b0(&local_18);
  FUN_0042f9f0(param_6,param_5,&local_18);
  fVar3 = param_6[1] * *(float *)(param_1 + 0x198) +
          *param_6 * *(float *)(param_1 + 0x194) + param_6[2] * *(float *)(param_1 + 0x19c);
  fVar5 = (float10)FUN_0042f3e0(fVar3);
  param_6 = (float *)(float)(fVar5 * (float10)_DAT_004addb0);
  if (_DAT_004adcb4 <= *(float *)(param_1 + 0x1a0)) {
    if (_DAT_004addb4 <= *(float *)(param_1 + 0x1a0)) {
      if (_DAT_004add2c <= *(float *)(param_1 + 0x1a0)) {
        if (_DAT_004addc4 <= *(float *)(param_1 + 0x1a0)) {
          param_6 = (float *)(((float)param_6 - _DAT_004add34) * _DAT_004addcc);
        }
        else {
          param_6 = (float *)(((float)param_6 - _DAT_004add7c) * _DAT_004addc8);
        }
      }
      else {
        param_6 = (float *)(((float)param_6 - _DAT_004adc84) * _DAT_004addc0);
      }
    }
    else {
      param_6 = (float *)(((float)param_6 - _DAT_004addb8) * _DAT_004addbc);
    }
  }
  if ((float)param_6 < _DAT_004adc48) {
    param_6 = (float *)0x0;
  }
  if ((float10)_DAT_004addd0 < fVar5) {
    param_6 = (float *)((float)param_6 + (float)param_6);
  }
  FUN_0042fa50(local_c,-(float)param_6,pfVar4);
  FUN_0042fa80(param_7,param_1 + 0x1c4,(float)_DAT_00e22a40 + (float)_DAT_00e22a40,local_c);
  fVar6 = (float10)FUN_0042f8c0(param_7);
  fVar5 = fVar6;
  if (fVar6 < (float10)_DAT_004adc48) {
    fVar5 = -fVar6;
  }
  fVar2 = (float)param_6;
  if ((float)param_6 < _DAT_004adc48) {
    fVar2 = -(float)param_6;
  }
  if ((float10)fVar2 < fVar5) {
    fVar6 = (float10)(float)param_6 / fVar6;
    if (fVar6 < (float10)_DAT_004adc48) {
      fVar6 = -fVar6;
    }
    FUN_0042fa50(param_7,(float)fVar6,param_7);
  }
  FUN_0042f7d0(param_1 + 0x1c4,param_7);
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_24 = *(float *)(param_1 + 0x30);
  local_20 = *(float *)(param_1 + 0x34);
  local_28 = _DAT_004adc48;
  local_1c = _DAT_004adc48;
  fVar5 = (float10)FUN_0042f9b0(&local_30);
  if (fVar5 < (float10)_DAT_004adc44) {
    local_30 = -*param_5;
    local_2c = -param_5[1];
    local_28 = -param_5[2];
  }
  FUN_0042f9b0(&local_24);
  fVar2 = local_28 * local_1c + local_2c * local_20 + local_30 * local_24;
  if (_DAT_004adc48 <= fVar2) {
    if (local_1c * local_10 + local_20 * local_14 + local_24 * local_18 <= _DAT_004adc48) {
      fVar5 = (float10)FUN_0042f3e0(fVar2);
      *(float *)(param_1 + 0x1f8) = (float)-(fVar5 * (float10)fVar3);
      return;
    }
    fVar5 = (float10)FUN_0042f3e0(fVar2);
    *(float *)(param_1 + 0x1f8) = (float)-(-fVar5 * (float10)fVar3);
    return;
  }
  *(float *)(param_1 + 0x1f8) = -(_DAT_004adc48 * fVar3);
  return;
}

