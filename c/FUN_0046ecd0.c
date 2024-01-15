#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ecd0(float param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (**(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18) != 0xe) {
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    FUN_0042f860(&local_18,&local_24,(int)param_1 + 0x3c0);
    FUN_0042f860(&local_c,&local_24,(int)param_1 + 0x400);
    iVar4 = (int)param_1 + 0x390;
    iVar1 = (int)param_1 + 0x3d0;
    fVar2 = *(float *)((int)param_1 + 0x398) * local_10 +
            *(float *)((int)param_1 + 0x394) * local_14 +
            local_18 * *(float *)((int)param_1 + 0x390);
    fVar3 = *(float *)((int)param_1 + 0x3d8) * local_4 +
            *(float *)((int)param_1 + 0x3d4) * local_8 + local_c * *(float *)((int)param_1 + 0x3d0);
    if (fVar3 * fVar3 <= fVar2 * fVar2) {
      param_1 = -(*(float *)((int)param_1 + 0x1e64) * _DAT_004ad95c + fVar3);
      iVar4 = iVar1;
      if (param_1 <= _DAT_004ad968) {
        return;
      }
    }
    else {
      param_1 = -(fVar2 - *(float *)((int)param_1 + 0x1e64) * _DAT_004ad95c);
      if (_DAT_004ad968 <= param_1) {
        return;
      }
    }
    FUN_0042fa80(param_3,&local_24,param_1,iVar4);
  }
  return;
}

