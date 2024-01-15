#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047a200(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined local_4c [12];
  undefined local_40 [56];
  float local_8;
  
  fVar4 = _DAT_004adc48;
  local_58 = *param_2;
  local_54 = param_2[1];
  fVar2 = ((float)*(int *)(param_1 + 0x1998) - _DAT_004adcd8) * _DAT_004adcdc;
  local_50 = param_2[2];
  fVar3 = (float)_DAT_004adc90;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1 & 0xfffffdff;
  if (((fVar2 < fVar3) || ((*(uint *)(param_1 + 0x60) & 0x20) != 0)) || ((uVar1 & 0x4000000) != 0))
  {
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      local_64 = *param_2;
      local_60 = param_2[1];
      local_5c = param_2[2];
      FUN_00477940(param_1,param_2,param_3);
      local_64 = *(float *)(param_1 + 0x154) + (*param_2 - local_64);
      local_60 = *(float *)(param_1 + 0x158) + (param_2[1] - local_60);
      local_5c = *(float *)(param_1 + 0x15c) + (param_2[2] - local_5c);
      FUN_00479920(param_1,&local_64,param_4);
      return (float10)fVar4;
    }
    FUN_0044abc0(param_2,&local_58,*(undefined4 *)(param_1 + 0x13c),local_4c);
    fVar5 = (float10)fVar4;
  }
  else {
    if (((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) {
      FUN_0044eeb0(param_1 + 0xac,local_40,0);
      param_2[2] = local_8;
    }
    else {
      param_2[2] = 0.0;
    }
    fVar5 = (float10)_DAT_004adc9c;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0x3f800000;
    if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
      return fVar5;
    }
  }
  return fVar5;
}

