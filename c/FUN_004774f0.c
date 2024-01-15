#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004774f0(float param_1,float *param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  iVar6 = (int)param_1;
  fVar5 = _DAT_004adce8;
  uVar7 = *(uint *)((int)param_1 + 100);
  if ((uVar7 & 0x400) == 0) {
    local_2c = *(float *)((int)param_1 + 0x194);
    local_28 = *(float *)((int)param_1 + 0x198);
    local_24 = *(float *)((int)param_1 + 0x19c);
  }
  else {
    local_2c = -*(float *)((int)param_1 + 0x160);
    local_28 = -*(float *)((int)param_1 + 0x164);
    local_24 = -*(float *)((int)param_1 + 0x168);
  }
  fVar3 = param_3 - *(float *)((int)param_1 + 0xa4);
  fVar4 = *(float *)((int)param_1 + 0x94) - *(float *)((int)param_1 + 0xa4);
  fVar1 = *(float *)((int)param_1 + 0x28);
  if (*(float *)((int)param_1 + 0x28) < _DAT_004adc48) {
    fVar1 = -fVar1;
  }
  fVar1 = *(float *)((int)param_1 + 0xa8) * fVar1;
  param_1 = fVar3;
  if (_DAT_004adce8 < fVar1) {
    param_1 = fVar3 - (fVar1 - _DAT_004adce8);
  }
  if (param_3 <= _DAT_004adcec) {
    *(undefined4 *)(iVar6 + 0x2c8) = 0;
  }
  else {
    fVar1 = (float)_DAT_00e22a40 + *(float *)(iVar6 + 0x2c8);
    *(float *)(iVar6 + 0x2c8) = fVar1;
    if (fVar5 < fVar1) {
      *(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) | 0x1000;
    }
  }
  fVar5 = _DAT_004adcf4;
  if (param_3 <= _DAT_004adcf0) {
    uVar7 = uVar7 & 0xfffffdff;
  }
  else {
    uVar7 = uVar7 | 0x200;
  }
  *(uint *)(iVar6 + 100) = uVar7;
  if (param_1 <= fVar5) {
    fVar5 = (_DAT_004adc50 - (_DAT_004adcf4 - param_1) / (_DAT_004adcf4 - fVar4)) *
            (float)_DAT_00e22a40 + *(float *)(iVar6 + 0x1b4);
    *(float *)(iVar6 + 0x1b4) = fVar5;
    if ((fVar4 < param_1) && (fVar5 < _DAT_004adc48)) {
      fVar8 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
      *(float *)(iVar6 + 0x1b4) = (float)(fVar8 * (float10)*(float *)(iVar6 + 0x1b4));
    }
  }
  else if (*(float *)(iVar6 + 0x1a0) < _DAT_004adc48) {
    *(float *)(iVar6 + 0x1b4) =
         *(float *)(iVar6 + 0x1b4) - (float)_DAT_00e22a40 * (float)_DAT_004adcf8;
  }
  else {
    *(float *)(iVar6 + 0x1b4) = *(float *)(iVar6 + 0x1b4) + (float)_DAT_00e22a40;
  }
  bVar2 = *(float *)(iVar6 + 0x2fc) < _DAT_004adc48;
  fVar5 = (float)_DAT_00e22a40 * *(float *)(iVar6 + 400) * *(float *)(iVar6 + 0x1b4) * _DAT_004adcf0
  ;
  *(float *)(iVar6 + 0x1b0) = fVar5;
  if (((bVar2) && (_DAT_004adc48 <= *(float *)(iVar6 + 0x1a0))) && (_DAT_004adc48 < fVar5)) {
    *(float *)(iVar6 + 0x1b0) = (*(float *)(iVar6 + 0x2fc) * _DAT_004add00 - _DAT_004adce4) * fVar5;
  }
  fVar5 = _DAT_004adc48;
  if (*(float *)(iVar6 + 0x1b0) <= param_1) {
    uVar7 = *(uint *)(iVar6 + 0x60) & 0xfeffffff;
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x1b0);
    fVar3 = (float)_DAT_00e22a40;
    fVar4 = *(float *)(iVar6 + 0x1b4) * _DAT_004add04;
    *(float *)(iVar6 + 0x1b0) = param_1;
    if (fVar5 < *(float *)(iVar6 + 0x1b4)) {
      *(float *)(iVar6 + 0x1b4) = -(*(float *)(iVar6 + 0x1b4) * _DAT_004add08);
    }
    if ((_DAT_004add0c < fVar4) && ((*(uint *)(iVar6 + 0x60) & 0x1000000) == 0)) {
      local_18 = (fVar1 / fVar3) * _DAT_004adc60;
      local_20 = 0x48697474;
      local_1c = 0x426f746d;
      FUN_00450c00(iVar6,&local_20);
    }
    uVar7 = *(uint *)(iVar6 + 0x60) | 0x1000000;
  }
  *(uint *)(iVar6 + 0x60) = uVar7;
  *param_2 = *(float *)(iVar6 + 0x1b0) * local_2c + *param_2;
  param_2[1] = *(float *)(iVar6 + 0x1b0) * local_28 + param_2[1];
  param_2[2] = *(float *)(iVar6 + 0x1b0) * local_24 + param_2[2];
  return;
}

