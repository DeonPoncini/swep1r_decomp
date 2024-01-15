#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004259b0(float *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_4 * 4 + 4;
  if (*(float *)(*(int *)(param_2 + 0x11c) + iVar2) < param_3) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + iVar2);
    return;
  }
  iVar1 = param_4 * 4;
  if (param_3 <= *(float *)(iVar1 + *(int *)(param_2 + 0x11c))) {
    *param_1 = *(float *)(*(int *)(param_2 + 0x120) + iVar1);
    return;
  }
  fVar3 = (float10)FUN_00425980(param_2,param_3,param_4);
  *param_1 = (_DAT_004ac450 - (float)fVar3) * *(float *)(iVar1 + *(int *)(param_2 + 0x120)) +
             *(float *)(*(int *)(param_2 + 0x120) + iVar2) * (float)fVar3;
  return;
}

