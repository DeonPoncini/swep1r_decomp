#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048fdc0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    fVar2 = (float)(*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) * _DAT_004af7b8;
    fVar3 = (float)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14)) * _DAT_004af7b8;
    *(float *)(param_1[0x12] + 0xc) = -(fVar2 / (float)param_1[0x11]);
    *(float *)(param_1[0x12] + 0x10) = (fVar3 / (float)param_1[0x11]) / (float)param_1[0x10];
    *(float *)(param_1[0x12] + 0x14) = fVar2 / (float)param_1[0x11];
    *(float *)(param_1[0x12] + 0x18) = -(fVar3 / (float)param_1[0x11]) / (float)param_1[0x10];
    param_1[0xf] = 0;
    *(undefined4 *)(param_1[0x12] + 0x1c) = 0;
    *(undefined4 *)(param_1[0x12] + 0x20) = 0;
    *(undefined4 *)(param_1[0x12] + 0x24) = 0;
    *(undefined4 *)(param_1[0x12] + 0x28) = 0;
  }
  else if (*param_1 == 1) {
    fVar3 = (float)(*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) * _DAT_004af7b8;
    fVar4 = (float)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14)) * _DAT_004af7b8;
    fVar6 = (float10)FUN_0048cd50((float)param_1[0xe] * _DAT_004af7b8);
    fVar2 = fVar3 / (float)fVar6;
    iVar1 = param_1[0x12];
    param_1[0xf] = (int)fVar2;
    fVar5 = fVar2 / *(float *)(iVar1 + 4);
    param_1[0x15] = (int)fVar5;
    param_1[0x16] = (int)(_DAT_004af7b4 / (fVar2 / *(float *)(iVar1 + 8) - fVar5));
    *(float *)(iVar1 + 0x1c) = (float)param_1[0x10] / (fVar4 / fVar2);
    *(float *)(param_1[0x12] + 0x24) = -fVar3 / (float)param_1[0xf];
    *(float *)(param_1[0x12] + 0x20) = (-fVar4 / (float)param_1[0xf]) / (float)param_1[0x10];
    fVar2 = fVar4 - _DAT_004af7bc;
    *(float *)(param_1[0x12] + 0x28) = fVar3 / (float)param_1[0xf];
    fVar5 = fVar3 - _DAT_004af7bc;
    *(float *)(param_1[0x12] + 0x2c) = (fVar2 / (float)param_1[0xf]) / (float)param_1[0x10];
    *(float *)(param_1[0x12] + 0x30) = -fVar5 / (float)param_1[0xf];
    FUN_0048ffc0(param_1,param_1[0x12],fVar3 + fVar3,fVar4 + fVar4);
    return 1;
  }
  return 1;
}

