#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425a60(float *param_1,int param_2,float param_3,int param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  float local_4;
  
  if (*(float *)(*(int *)(param_2 + 0x11c) + 4 + param_4 * 4) < param_3) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + (param_4 * 3 + 3) * 4);
    param_1[1] = *(float *)(*(int *)(param_2 + 0x120) + 0x10 + param_4 * 0xc);
    param_1[2] = *(float *)(*(int *)(param_2 + 0x120) + 0x14 + param_4 * 0xc);
    return;
  }
  if (param_3 <= *(float *)(*(int *)(param_2 + 0x11c) + param_4 * 4)) {
    param_4 = param_4 * 0xc;
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + param_4);
    param_1[1] = *(float *)(*(int *)(param_2 + 0x120) + 4 + param_4);
    param_1[2] = *(float *)(*(int *)(param_2 + 0x120) + 8 + param_4);
    return;
  }
  fVar5 = (float10)FUN_00425980(param_2,param_3,param_4);
  fVar2 = (float)fVar5;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x120) + param_4 * 0xc);
  fVar4 = _DAT_004ac450 - fVar2;
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  local_8 = (float)puVar1[4];
  fVar3 = *(float *)(*(int *)(param_2 + 0x120) + (param_4 * 3 + 3) * 4);
  local_4 = (float)puVar1[5];
  param_1[1] = fVar2 * local_8;
  param_1[2] = fVar2 * local_4;
  *param_1 = fVar3 * fVar2;
  FUN_0042fa80(param_1,param_1,fVar4,&local_18);
  return;
}

