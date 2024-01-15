#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00476740(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_154;
  float local_150;
  float local_14c;
  float local_148 [6];
  undefined local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float afStack_f0 [18];
  float local_a8 [18];
  undefined4 local_60 [3];
  undefined local_54 [12];
  float local_48 [3];
  undefined local_3c [60];
  
  iVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18);
  FUN_0042f7b0(local_60,0,0,0);
  iVar8 = iVar8 * 0x6c;
  FUN_0042f7d0(local_54,&DAT_004c7094 + iVar8);
  FUN_0042f7d0(local_48,&DAT_004c7094 + iVar8);
  local_48[0] = -local_48[0];
  FUN_0042f7d0(local_3c,&DAT_004c7088 + iVar8);
  pfVar7 = local_148;
  iVar8 = 0;
  do {
    FUN_0042fa50(&local_154,*(undefined4 *)((int)local_60 + iVar8),param_1 + 0x20);
    FUN_0042fa80(&local_154,&local_154,*(undefined4 *)((int)local_60 + iVar8 + 4),param_1 + 0x30);
    FUN_0042fa80(&local_154,&local_154,*(undefined4 *)((int)local_60 + iVar8 + 8),param_1 + 0x40);
    FUN_0042f830((int)local_a8 + iVar8,param_2,&local_154);
    if ((_DAT_004adc7c <= param_5[2]) || (param_5[2] <= _DAT_004adc80)) {
      fVar1 = *param_5;
      fVar2 = param_5[1];
      fVar4 = param_5[1];
      fVar5 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8) = *param_5;
      fVar3 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8 + 4) = fVar4;
      *(float *)((int)afStack_f0 + iVar8 + 8) = fVar5;
      fVar2 = (-(local_154 * fVar1) - local_150 * fVar2) / fVar3 - local_14c;
      fVar1 = *(float *)((int)local_a8 + iVar8 + 8);
      *pfVar7 = param_4 - fVar2;
      *(float *)((int)local_a8 + iVar8 + 8) = (fVar2 + fVar1) - param_4;
    }
    else {
      fVar1 = *(float *)((int)local_a8 + iVar8 + 8);
      fVar2 = param_5[1];
      fVar3 = param_5[2];
      *(float *)((int)afStack_f0 + iVar8) = *param_5;
      *(float *)((int)afStack_f0 + iVar8 + 4) = fVar2;
      *(float *)((int)local_a8 + iVar8 + 8) = fVar1 - param_4;
      *(float *)((int)afStack_f0 + iVar8 + 8) = fVar3;
      *pfVar7 = param_4;
    }
    iVar8 = iVar8 + 0xc;
    pfVar7 = pfVar7 + 1;
  } while (iVar8 < 0x30);
  if ((float)_DAT_004adc90 <= ((float)*(int *)(param_1 + 0x1998) - _DAT_004adc84) * _DAT_004adc88) {
    puVar6 = (undefined4 *)(param_1 + 0x12c8);
    iVar8 = 4;
    do {
      *puVar6 = 0xc7c35000;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    pfVar7 = local_148;
    iVar8 = param_1 + 0x1290;
    iVar9 = 0;
    do {
      if (*pfVar7 <= _DAT_004adc48) {
        *(undefined4 *)(iVar8 + 0x38) = 0xc7c35000;
      }
      else {
        FUN_004313d0(local_130);
        local_110 = *(undefined4 *)((int)afStack_f0 + iVar9);
        local_10c = *(undefined4 *)((int)afStack_f0 + iVar9 + 4);
        local_108 = *(undefined4 *)((int)afStack_f0 + iVar9 + 8);
        local_120 = *(undefined4 *)(param_1 + 0x30);
        local_11c = *(undefined4 *)(param_1 + 0x34);
        local_118 = *(undefined4 *)(param_1 + 0x38);
        FUN_0042f9f0(local_130,&local_120,&local_110);
        FUN_0042f9f0(&local_120,&local_110,local_130);
        local_100 = *(undefined4 *)((int)local_a8 + iVar9);
        local_fc = *(undefined4 *)((int)local_a8 + iVar9 + 4);
        local_f8 = *(undefined4 *)((int)local_a8 + iVar9 + 8);
        FUN_0044bb10(iVar8,local_130);
        FUN_00431450(iVar8,0x3b83126f,0x3b83126f,0x3b83126f,iVar8);
      }
      iVar9 = iVar9 + 0xc;
      pfVar7 = pfVar7 + 1;
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < 0x30);
  }
  fVar10 = (float10)local_148[1];
  if ((_DAT_004adc48 < local_148[2]) && (local_148[2] < local_148[1])) {
    fVar10 = (float10)local_148[2];
  }
  if ((float10)_DAT_004adc48 <= fVar10) {
    return fVar10 - (float10)_DAT_004adc9c;
  }
  if (_DAT_004adc48 <= param_4) {
    return (float10)param_4;
  }
  return (float10)_DAT_004adc98;
}

