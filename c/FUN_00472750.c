#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472750(int param_1,float param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined local_40 [12];
  undefined4 local_34;
  undefined local_30 [12];
  undefined4 local_24;
  undefined local_20 [12];
  undefined4 local_14;
  undefined local_10 [12];
  undefined4 local_4;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x344) != 0) {
    if (param_2 == 1.401298e-45) {
      iVar5 = 7;
      iVar4 = 6;
      param_1 = 7;
    }
    else {
      param_1 = 9;
      iVar4 = 8;
      iVar5 = 9;
    }
    if (((byte)*(undefined4 *)(iVar3 + 0x60) & 0xf) == 2) {
      _DAT_0050caf8 = 1000.0;
    }
    param_2 = _DAT_0050caf8 - (float)(int)*(short *)(iVar3 + 4) * _DAT_004ad964;
    if (_DAT_004ad968 < param_2) {
      param_2 = param_2 * param_2;
    }
    if (param_2 < (float)_DAT_004adb48) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x344) + iVar4 * 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      FUN_00431100(iVar4 * 0x40 + 0x350 + iVar3,0,0,0xc7c35000);
      FUN_004313d0(iVar5 * 0x40 + 0x350 + iVar3);
      return;
    }
    local_5c = param_2 * _DAT_004adb50;
    if (_DAT_004ad958 < local_5c) {
      local_5c = 1.0;
    }
    param_2 = param_2 * _DAT_004ad964;
    if (_DAT_004ad958 < param_2) {
      param_2 = 1.0;
    }
    local_58 = *param_3 - *param_4;
    local_54 = param_3[1] - param_4[1];
    local_50 = param_3[2] - param_4[2];
    fVar6 = (float10)FUN_0042f8c0(&local_58);
    FUN_0042fa50(&local_58,_DAT_004ad958 / (float)fVar6,&local_58);
    local_48 = -local_58;
    local_4c = local_54;
    local_44 = 0;
    FUN_0042f9b0(&local_4c);
    FUN_0042f9f0(local_40,&local_58,&local_4c);
    FUN_0042f7d0(local_20,&local_58);
    FUN_0042f7d0(local_30,&local_4c);
    local_34 = 0;
    local_24 = 0;
    local_14 = 0;
    local_4 = 0x3f800000;
    FUN_0042fa50(local_10,0x3f000000,param_3);
    FUN_0042fa80(local_10,local_10,0x3f000000,param_4);
    iVar5 = iVar4 * 0x40 + 0x350 + iVar3;
    FUN_0044bb10(iVar5,local_40);
    FUN_004310b0(local_40,param_2 * _DAT_004ad980,param_2,local_5c * (float)fVar6 * _DAT_004adb54);
    iVar1 = param_1 * 0x40 + 0x350 + iVar3;
    FUN_0044bb10(iVar1,local_40);
    iVar2 = *(int *)(iVar4 * 4 + *(int *)(iVar3 + 0x344));
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x344) + param_1 * 4);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,iVar1);
    }
    iVar3 = *(int *)(iVar4 * 4 + *(int *)(iVar3 + 0x344));
    if (iVar3 != 0) {
      FUN_00431640(iVar3,iVar5);
    }
  }
  return;
}

