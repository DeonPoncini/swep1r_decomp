#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478a70(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  fVar1 = *param_3;
  if (param_2 <= _DAT_004adc48) {
    fVar1 = -fVar1;
    fVar2 = -param_3[1];
    fVar3 = -param_3[2];
  }
  else {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
  }
  fVar5 = fVar3 * *(float *)((int)param_1 + 0x1c0) +
          fVar2 * *(float *)((int)param_1 + 0x1bc) + fVar1 * *(float *)((int)param_1 + 0x1b8);
  if (fVar5 < _DAT_004adc48) {
    fVar5 = -fVar5;
    *(float *)((int)param_1 + 0x1b8) = fVar1 * fVar5 + *(float *)((int)param_1 + 0x1b8);
    *(float *)((int)param_1 + 0x1bc) = fVar2 * fVar5 + *(float *)((int)param_1 + 0x1bc);
    *(float *)((int)param_1 + 0x1c0) = fVar3 * fVar5 + *(float *)((int)param_1 + 0x1c0);
  }
  FUN_0042fa50(param_4,param_2,param_3);
  fVar1 = *(float *)((int)param_1 + 0x6c) * *(float *)((int)param_1 + 0x248) *
          *(float *)((int)param_1 + 0x24c);
  fVar1 = (_DAT_004adc50 - fVar1 * fVar1) * _DAT_004add68;
  if (_DAT_004adc50 < *(float *)((int)param_1 + 0x22c)) {
    if (*(float *)((int)param_1 + 0x22c) <= _DAT_004adc9c) {
      fVar1 = (_DAT_004adc9c - *(float *)((int)param_1 + 0x22c)) * fVar1;
    }
    else {
      param_1 = 0.0;
      fVar1 = param_1;
    }
  }
  param_1 = fVar1;
  fVar3 = (float)_DAT_00e22a40;
  fVar5 = _DAT_004adc50 - param_1;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *(float *)(iVar6 + 0x1b8) =
       (_DAT_004adc50 / fVar3) *
       (*param_4 * fVar3 * fVar5 + fVar3 * *(float *)(iVar6 + 0x1b8) * param_1);
  *(float *)(iVar6 + 0x1bc) =
       (_DAT_004adc50 / (float)_DAT_00e22a40) *
       (fVar3 * fVar1 * fVar5 + fVar3 * *(float *)(iVar6 + 0x1bc) * param_1);
  *(float *)(iVar6 + 0x1c0) =
       (_DAT_004adc50 / (float)_DAT_00e22a40) *
       (fVar3 * fVar2 * fVar5 + fVar3 * *(float *)(iVar6 + 0x1c0) * param_1);
  *param_4 = *(float *)(iVar6 + 0x1b8);
  param_4[1] = *(float *)(iVar6 + 0x1bc);
  param_4[2] = *(float *)(iVar6 + 0x1c0);
  FUN_0042f9b0(param_4);
  if (param_2 < _DAT_004adc48) {
    param_2 = -param_2;
  }
  FUN_0042fa50(param_4,param_2,param_4);
  uVar4 = *(uint *)(iVar6 + 100);
  if ((uVar4 & 0x10) == 0) {
    fVar1 = _DAT_004adc50;
    if ((uVar4 & 4) != 0) {
      fVar1 = _DAT_004add6c;
    }
    if ((uVar4 & 8) != 0) {
      fVar1 = fVar1 * _DAT_004add70;
    }
    if (*(float *)(iVar6 + 0x24c) <= fVar1) {
      if ((*(float *)(iVar6 + 0x24c) < fVar1) &&
         (fVar2 = *(float *)(iVar6 + 0x24c) - (float)_DAT_00e22a40 * _DAT_004add74,
         *(float *)(iVar6 + 0x24c) = fVar2, fVar1 < fVar2)) {
        *(float *)(iVar6 + 0x24c) = fVar1;
        return;
      }
    }
    else {
      fVar2 = *(float *)(iVar6 + 0x24c) - ((float)_DAT_00e22a40 + (float)_DAT_00e22a40);
      *(float *)(iVar6 + 0x24c) = fVar2;
      if (fVar2 < fVar1) {
        *(float *)(iVar6 + 0x24c) = fVar1;
        return;
      }
    }
  }
  return;
}

