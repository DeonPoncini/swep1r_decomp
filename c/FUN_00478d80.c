#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478d80(float param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];
  
  iVar4 = (int)param_1;
  fVar7 = (float10)FUN_004783e0(param_1);
  fVar8 = (float10)FUN_004787f0(param_1);
  fVar2 = (float)(fVar8 + (float10)(float)fVar7);
  FUN_00478a70(param_1,fVar2,param_4,&local_24);
  if (((((*(uint *)((int)param_1 + 100) & 0x400) == 0) &&
       ((*(uint *)((int)param_1 + 0x60) & 0x2000000) == 0)) && (_DAT_004adc48 < local_1c)) &&
     (fVar3 = local_20 * local_20 + local_24 * local_24, fVar3 * _DAT_004add78 < local_1c * local_1c
     )) {
    fVar7 = (float10)FUN_00480670(fVar3);
    local_1c = (float)(fVar7 * (float10)_DAT_004add08);
  }
  local_24 = local_24 + *(float *)((int)param_1 + 0x1dc);
  local_20 = local_20 + *(float *)((int)param_1 + 0x1e0);
  local_1c = local_1c + *(float *)((int)param_1 + 0x1e4);
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d0) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d0));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d4) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d4));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1d8) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1d8));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1dc) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1dc));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1e0) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1e0));
  fVar7 = (float10)FUN_00480650(0x40800000,(float)_DAT_00e22a40);
  *(float *)((int)param_1 + 0x1e4) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x1e4));
  if (((*(uint *)((int)param_1 + 0x60) & 0x5000) == 0) &&
     (((_DAT_004adcbc < *(float *)((int)param_1 + 0x18c) ||
       (_DAT_004adcbc < -*(float *)((int)param_1 + 0x18c))) ||
      ((*(uint *)((int)param_1 + 0x60) & 0x2000) == 0)))) {
    pfVar1 = (float *)((int)param_1 + 0x1c4);
    fVar3 = local_24 * *(float *)((int)param_1 + 0x1c4) +
            local_20 * *(float *)((int)param_1 + 0x1c8) +
            local_1c * *(float *)((int)param_1 + 0x1cc);
    if ((fVar3 < _DAT_004adc48) ||
       (fVar7 = (float10)FUN_0042f8c0(pfVar1), fVar7 <= (float10)_DAT_004adc50)) {
      local_24 = local_24 + *pfVar1;
      local_20 = local_20 + *(float *)((int)param_1 + 0x1c8);
      local_1c = local_1c + *(float *)((int)param_1 + 0x1cc);
    }
    else {
      if ((_DAT_004adc50 < fVar2) &&
         (fVar2 = fVar3 / (fVar2 * _DAT_004add7c), _DAT_004adc48 < fVar2)) {
        fVar2 = (float)_DAT_00e22a40 * fVar2;
        *(float *)((int)param_1 + 0x1a4) = fVar2 + fVar2 + *(float *)((int)param_1 + 0x1a4);
      }
      fVar7 = ((float10)fVar3 / fVar7) * (float10)_DAT_004add80;
      param_1 = (float)fVar7;
      if (fVar7 < (float10)_DAT_004adc50) {
        param_1 = 1.0;
      }
      FUN_0042fa80(&local_24,&local_24,param_1,pfVar1);
    }
  }
  FUN_0042fa80(param_3,param_2,(float)_DAT_00e22a40,&local_24);
  if ((((float)_DAT_004adc90 <= ((float)*(int *)(iVar4 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc)
      && ((*(byte *)(iVar4 + 0x60) & 0x20) == 0)) && ((*(uint *)(iVar4 + 100) & 0x4000000) == 0)) {
    *(undefined4 *)(iVar4 + 0x154) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 0x15c) = 0;
    return;
  }
  if ((*(uint *)(iVar4 + 100) & 0x800000) != 0) {
    *(undefined4 *)(iVar4 + 0x154) = 0;
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 0x15c) = 0;
    return;
  }
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  iVar5 = FUN_0044acb0(param_3,param_2,*(undefined4 *)(iVar4 + 0x13c),local_c);
  for (iVar6 = 0; (iVar5 != 0 && (iVar6 < 6)); iVar6 = iVar6 + 1) {
    iVar5 = FUN_0044acb0(param_3,param_2,*(undefined4 *)(iVar4 + 0x13c),local_c);
  }
  if ((0 < iVar6) && ((*(byte *)(iVar4 + 0x60) & 0x80) != 0)) {
    fVar7 = (float10)FUN_00480650(0x40a00000,(float)_DAT_00e22a40);
    *(float *)(iVar4 + 0x1a4) = (float)(fVar7 * (float10)*(float *)(iVar4 + 0x1a4));
  }
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  *(float *)(iVar4 + 0x154) = *param_3 - local_18;
  *(float *)(iVar4 + 0x158) = fVar3 - local_14;
  *(float *)(iVar4 + 0x15c) = fVar2 - local_10;
  return;
}

