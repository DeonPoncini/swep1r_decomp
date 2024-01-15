#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0045c560(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_44;
  float local_40;
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  pfVar5 = param_2;
  iVar2 = *(int *)(param_1 + 8);
  local_44 = *param_2;
  local_40 = 1600.0;
  if ((((iVar2 == 0x11) || (iVar2 == 0x12)) || ((iVar2 == 8 && (_DAT_004acfcc <= _DAT_0050c95c))))
     || ((iVar2 == 3 && (DAT_0050c944 == 0)))) {
    local_40 = 320.0;
    fVar1 = _DAT_004ad1e8;
  }
  else {
    param_2 = (float *)(_DAT_00e22a50 * _DAT_004ad1e0);
    if (iVar2 != 0x10) goto LAB_0045c5f0;
    local_40 = 80.0;
    fVar1 = _DAT_004acff0;
  }
  param_2 = (float *)(_DAT_00e22a50 * _DAT_004ad1e0 * fVar1);
LAB_0045c5f0:
  FUN_0042f7d0(local_c,param_4);
  _DAT_0050c9a4 = 0;
  fVar3 = (float)param_2 * param_6;
  FUN_0042f860(local_30,param_3,param_5);
  fVar6 = (float10)FUN_0042f8c0(local_30);
  fVar8 = (float10)_DAT_004ad118;
  FUN_0042f860(local_24,param_5,param_4);
  FUN_0042f8c0(local_24);
  FUN_0042f860(local_3c,param_3,param_4);
  fVar7 = (float10)FUN_0042f8c0(local_3c);
  fVar1 = (float)fVar7;
  fVar4 = fVar3 * _DAT_004acf98;
  if ((float)(fVar6 * fVar8) < fVar3 * _DAT_004acf98) {
    fVar4 = (float)(fVar6 * fVar8);
  }
  if ((fVar1 < fVar4) || (fVar3 <= local_44)) {
    if (((fVar1 < fVar4) || (local_44 < fVar3)) && ((fVar1 < fVar4 && (_DAT_004acf54 < fVar1)))) {
      if ((DAT_004bfedc != -1) && (*(int *)(param_1 + 8) != 0x12)) {
        return 1;
      }
      fVar8 = (float10)FUN_00480670(fVar1 / (local_40 * param_6));
      local_44 = (float)(fVar8 * (float10)(local_40 * param_6));
    }
  }
  else {
    local_44 = local_44 - param_6 * _DAT_00e22a50 * _DAT_004ad1f0;
    if (fVar3 < local_44) {
      local_44 = fVar3;
    }
  }
  if (_DAT_004acf54 < fVar1) {
    FUN_0042f9b0(local_3c);
    FUN_0042fa80(param_4,param_4,local_44 * _DAT_00e22a50,local_3c);
    FUN_0042f860(local_18,param_3,param_4);
    fVar8 = (float10)FUN_0042f890(local_3c,local_18);
    if ((float10)_DAT_004acf50 <= fVar8) {
      *pfVar5 = local_44;
      return 0;
    }
  }
  FUN_0042f7d0(param_4,param_3);
  *pfVar5 = 0.0;
  return 1;
}

