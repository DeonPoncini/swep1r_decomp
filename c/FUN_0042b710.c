#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b710(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_00e375b0;
  local_14 = DAT_00e375ac;
  local_40 = _DAT_00e37580;
  local_3c = _DAT_00e37584;
  local_38 = _DAT_00e37588;
  local_34 = _DAT_00e3758c;
  iVar7 = (int)*(short *)(param_1 + 0x10) / 2;
  iVar6 = (int)*(short *)(param_1 + 0x12) / 2;
  local_30 = _DAT_00e37590;
  local_2c = _DAT_00e37594;
  fVar3 = (float)iVar7 * _DAT_004ac568;
  fVar4 = (float)iVar6 * _DAT_004ac568;
  local_28 = _DAT_00e37598;
  local_24 = _DAT_00e3759c;
  fVar1 = (float)((int)((int)*(short *)(param_1 + 0x18) +
                       ((int)*(short *)(param_1 + 0x18) >> 0x1f & 3U)) >> 2) - fVar3;
  fVar2 = (float)((int)((int)*(short *)(param_1 + 0x1a) +
                       ((int)*(short *)(param_1 + 0x1a) >> 0x1f & 3U)) >> 2) - fVar4;
  local_1c = DAT_00e375a4;
  local_18 = DAT_00e375a8;
  local_20 = _DAT_00e375a0;
  local_c = _DAT_00e375b4;
  local_8 = _DAT_00e375b8;
  local_4 = _DAT_00e375bc;
  *param_3 = -1000.0;
  *param_4 = -1000.0;
  if (param_7 == 0) {
    local_5c = *param_2 - _DAT_0050c6e8;
    local_58 = param_2[1] - _DAT_0050c6ec;
    local_54 = param_2[2] - _DAT_0050c6f0;
    param_2 = &local_5c;
  }
  FUN_00480690(&local_50,param_2,&local_40);
  if ((DAT_00e996dc & 0x4000) != 0) {
    local_50 = -local_50;
  }
  if ((float)_DAT_004ac570 < local_44) {
    fVar5 = fVar1 - _DAT_004ac580;
    fVar3 = (local_50 / local_44 - _DAT_004ac578) * fVar3 + fVar1;
    fVar4 = (_DAT_004ac57c - local_4c / local_44) * fVar4 + fVar2;
    *param_5 = local_48 / local_44;
    *param_6 = local_44;
    if ((((fVar5 < fVar3) && (fVar3 < (fVar1 + (float)iVar7) - _DAT_004ac584)) &&
        (fVar2 - _DAT_004ac580 < fVar4)) && (fVar4 < (fVar2 + (float)iVar6) - _DAT_004ac584)) {
      *param_3 = fVar3;
      *param_4 = fVar4;
    }
  }
  return;
}

