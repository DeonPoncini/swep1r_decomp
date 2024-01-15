#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479920(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  local_30 = param_3[2];
  local_34 = param_3[1];
  local_38 = *param_3;
  bVar8 = false;
  fVar3 = local_38 * *param_2 + local_30 * param_2[2] + local_34 * param_2[1];
  fVar9 = (float10)FUN_0042f8c0(param_2);
  if ((float10)_DAT_004adcbc <= fVar9) {
    fVar9 = (float10)_DAT_004addd4 - (float10)fVar3 / fVar9;
  }
  else {
    fVar9 = (float10)_DAT_004adc48;
  }
  if ((float10)_DAT_004adc48 <= fVar9) {
    local_4c = (float)(fVar9 * (float10)_DAT_004addd8);
  }
  else {
    local_4c = 0.0;
  }
  fVar3 = -fVar3;
  local_44 = local_38 * fVar3 + *param_2;
  local_40 = local_34 * fVar3 + param_2[1];
  local_3c = local_30 * fVar3 + param_2[2];
  *param_2 = local_44;
  param_2[1] = local_40;
  param_2[2] = local_3c;
  fVar9 = (float10)FUN_0042f8c0(&local_44);
  if (fVar9 < (float10)_DAT_004adc44) {
    return;
  }
  fVar3 = _DAT_004adc50 / (float)fVar9;
  local_44 = local_44 * fVar3;
  local_40 = local_40 * fVar3;
  local_3c = local_3c * fVar3;
  fVar4 = *(float *)(param_1 + 0x38) * local_3c +
          *(float *)(param_1 + 0x34) * local_40 + local_44 * *(float *)(param_1 + 0x30);
  FUN_0042f9f0(&local_2c,param_1 + 0x194,(float *)(param_1 + 0x30));
  FUN_0042f9b0(&local_2c);
  fVar5 = local_4c * fVar4 * fVar4;
  fVar3 = local_24 * local_3c + local_28 * local_40 + local_2c * local_44;
  if (_DAT_004addd4 < fVar5) {
    uVar1 = *(uint *)(param_1 + 0x60);
    bVar8 = true;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffffffef;
    if ((uVar1 & 0x7000) == 0) {
      *(undefined4 *)(param_1 + 0x264) = 0x3dcccccd;
    }
  }
  fVar6 = fVar5 * *(float *)(param_1 + 0x1a0) * _DAT_004add20;
  *(float *)(param_1 + 0x1d0) = local_44 * fVar6 + *(float *)(param_1 + 0x1d0);
  *(float *)(param_1 + 0x1d4) = local_40 * fVar6 + *(float *)(param_1 + 0x1d4);
  *(float *)(param_1 + 0x1d8) = local_3c * fVar6 + *(float *)(param_1 + 0x1d8);
  fVar6 = _DAT_004adc48;
  if ((*(uint *)(param_1 + 100) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 500) = 0;
    goto LAB_00479c1f;
  }
  if (_DAT_004adc48 <= fVar4) {
LAB_00479c03:
    *(undefined4 *)(param_1 + 500) = 0;
  }
  else if (_DAT_004adc48 <= fVar3) {
    fVar6 = ((fVar3 - fVar4) - _DAT_004adc50) * _DAT_004addc8;
    bVar2 = fVar6 < _DAT_004adc48;
    *(float *)(param_1 + 500) = fVar6;
    if (bVar2) goto LAB_00479c03;
  }
  else {
    fVar7 = ((fVar3 + fVar4) - _DAT_004adce4) * _DAT_004addc8;
    *(float *)(param_1 + 500) = fVar7;
    if (fVar6 < fVar7) goto LAB_00479c03;
  }
  *(float *)(param_1 + 500) = local_4c * _DAT_004adddc * *(float *)(param_1 + 500);
LAB_00479c1f:
  if (((float)_DAT_004adde0 < fVar5) && ((float)_DAT_004adde8 < *(float *)(param_1 + 0x1a0))) {
    fVar10 = (float10)FUN_00480650(0x42480000,(float)_DAT_00e22a40);
    fVar6 = _DAT_004adc7c;
    *(float *)(param_1 + 0x1a4) = (float)(fVar10 * (float10)*(float *)(param_1 + 0x1a4));
    if (fVar6 < fVar5) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40000;
    }
    local_20 = 0x48697474;
    if (bVar8) {
      local_1c = 0x4b506f77;
    }
    else {
      if (fVar4 < _DAT_004adc48) {
        fVar4 = -fVar4;
      }
      fVar5 = fVar3;
      if (fVar3 < _DAT_004adc48) {
        fVar5 = -fVar3;
      }
      if (fVar4 <= fVar5) {
        local_1c = 0x52745364;
        if ((float)_DAT_004adde0 <= fVar3) {
          local_1c = 0x4c745364;
        }
      }
      else if ((float)_DAT_004adde0 <= fVar3) {
        local_1c = 0x4c744674;
      }
      else {
        local_1c = 0x52744674;
      }
    }
    local_18 = (float)fVar9 / (float)_DAT_00e22a40;
    FUN_00450c00(param_1,&local_20);
  }
  return;
}

