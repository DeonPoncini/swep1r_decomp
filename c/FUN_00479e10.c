#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00479e10(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [56];
  float local_48;
  undefined local_40 [56];
  float local_8;
  
  local_b0 = *param_2;
  local_ac = param_2[1];
  local_a8 = param_2[2];
  if (((((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc < (float)_DAT_004adc90)
      || ((*(uint *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)
     ) {
    if (((*(uint *)(param_1 + 100) & 0x400000) == 0) || ((*(uint *)(param_1 + 100) & 0x800000) == 0)
       ) {
      fVar5 = (float10)FUN_004772f0(param_1,param_2,param_4);
      uVar2 = *(uint *)(param_1 + 100);
      local_c0 = (float)fVar5;
      if ((uVar2 & 0x800000) == 0) {
        uVar2 = uVar2 & 0xffbfffff;
      }
      else {
        uVar2 = uVar2 | 0x400000;
      }
    }
    else {
      local_c0 = param_2[2] - *(float *)(param_1 + 0x188);
      *param_4 = *(undefined4 *)(param_1 + 0x160);
      param_4[1] = *(undefined4 *)(param_1 + 0x164);
      param_4[2] = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
      uVar2 = *(uint *)(param_1 + 100) | 0x20000000;
    }
    *(uint *)(param_1 + 100) = uVar2;
    if (((uVar2 & 0x400) != 0) && ((float)param_4[2] < _DAT_004adc7c)) {
      param_4[2] = 0x3d4ccccd;
      FUN_0042f9b0(param_4);
    }
    *(undefined4 *)(param_1 + 0x160) = *param_4;
    *(undefined4 *)(param_1 + 0x164) = param_4[1];
    *(undefined4 *)(param_1 + 0x168) = param_4[2];
    if (((*(uint *)(param_1 + 0x60) & 0x5000) == 0) &&
       (((_DAT_004adcbc < *(float *)(param_1 + 0x18c) ||
         (_DAT_004adcbc < -*(float *)(param_1 + 0x18c))) ||
        ((*(uint *)(param_1 + 0x60) & 0x2000) == 0)))) {
      if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
        FUN_004791d0(param_1,param_2,param_3,local_c0,param_4,local_98,local_a4);
      }
      else {
        FUN_00479550();
      }
    }
    if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
      FUN_004774f0(param_1,param_2,local_c0);
    }
    if (local_c0 < _DAT_004adc48) {
      local_c0 = 2.0;
    }
    if (((((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) && ((*(uint *)(param_1 + 0x60) & 0x20) == 0)
        ) && ((fVar1 = ((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc,
              (float)_DAT_004adde0 <= fVar1 && (fVar1 <= (float)_DAT_004adc90)))) {
      FUN_0044eeb0(param_1 + 0xac,local_40,0);
      param_2[2] = ((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc *
                   (local_8 - param_2[2]) + param_2[2];
    }
    if ((*(uint *)(param_1 + 100) & 0x800000) == 0) {
      if ((*(byte *)(param_1 + 0x60) & 0x20) == 0) {
        FUN_0044abc0(param_2,&local_b0,*(undefined4 *)(param_1 + 0x13c),local_8c);
      }
      else {
        local_bc = *param_2;
        local_b8 = param_2[1];
        local_b4 = param_2[2];
        FUN_00477940(param_1,param_2,param_3);
        local_bc = *(float *)(param_1 + 0x154) + (*param_2 - local_bc);
        local_b8 = *(float *)(param_1 + 0x158) + (param_2[1] - local_b8);
        local_b4 = *(float *)(param_1 + 0x15c) + (param_2[2] - local_b4);
        FUN_00479920(param_1,&local_bc,param_4);
      }
    }
    if ((float)_DAT_004adc90 <= ((float)*(int *)(param_1 + 0x1998) - _DAT_004adc84) * _DAT_004adc88)
    {
      puVar3 = (undefined4 *)(param_1 + 0x12c8);
      iVar4 = 4;
      do {
        *puVar3 = 0xc7c35000;
        puVar3 = puVar3 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
      fVar5 = (float10)FUN_00476740(param_1,param_2,*(undefined4 *)(param_5 + 8),local_c0,param_4);
      local_c0 = (float)fVar5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20000000;
    if (((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) {
      FUN_0044eeb0(param_1 + 0xac,local_80,0);
      param_2[2] = local_48;
    }
    local_c0 = 2.0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0x3f800000;
    if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
    }
  }
  *(float *)(param_1 + 0x184) = local_c0;
  return (float10)local_c0;
}

