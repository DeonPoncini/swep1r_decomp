#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar5 = param_5;
  bVar4 = false;
  if ((param_5[1] - param_2[1]) * param_1[1] +
      (param_5[2] - param_2[2]) * param_1[2] + (*param_5 - *param_2) * *param_1 < _DAT_004aca50) {
    if (DAT_004c1778 == 0) {
      return;
    }
    bVar4 = true;
  }
  FUN_00480890(param_1,param_5,&local_30);
  fVar2 = (param_5[2] - local_28) * (param_5[2] - local_28) +
          (param_5[1] - local_2c) * (param_5[1] - local_2c) +
          (*param_5 - local_30) * (*param_5 - local_30);
  if (fVar2 <= _DAT_00e98e6c) {
    local_24 = *param_3 - *param_2;
    local_20 = param_3[1] - param_2[1];
    local_1c = param_3[2] - param_2[2];
    local_18 = *param_4 - *param_3;
    local_14 = param_4[1] - param_3[1];
    local_10 = param_4[2] - param_3[2];
    local_c = *param_2 - *param_4;
    local_8 = param_2[1] - param_4[1];
    local_4 = param_2[2] - param_4[2];
    iVar6 = FUN_00441040(&local_30,param_2,param_3,param_4,&local_24,&local_18,&local_c);
    if (iVar6 == 0) {
      FUN_004808f0(&local_30,param_2,param_3,&local_24);
      FUN_004808f0(&local_30,param_3,param_4,&local_18);
      FUN_004808f0(&local_30,param_4,param_2,&local_c);
      fVar2 = *param_5;
      pfVar7 = param_5 + 1;
      pfVar1 = param_5 + 2;
      param_5 = (float *)((param_5[2] - local_1c) * (param_5[2] - local_1c) +
                         (param_5[1] - local_20) * (param_5[1] - local_20) +
                         (*param_5 - local_24) * (*param_5 - local_24));
      fVar2 = (*pfVar1 - local_10) * (*pfVar1 - local_10) +
              (*pfVar7 - local_14) * (*pfVar7 - local_14) + (fVar2 - local_18) * (fVar2 - local_18);
      local_2c = local_20;
      local_30 = local_24;
      local_28 = local_1c;
      if (fVar2 < (float)param_5) {
        local_30 = local_18;
        local_2c = local_14;
        local_28 = local_10;
        param_5 = (float *)fVar2;
      }
      fVar3 = (pfVar5[2] - local_4) * (pfVar5[2] - local_4) +
              (pfVar5[1] - local_8) * (pfVar5[1] - local_8) +
              (*pfVar5 - local_c) * (*pfVar5 - local_c);
      fVar2 = (float)param_5;
      if (fVar3 < (float)param_5) {
        local_30 = local_c;
        local_2c = local_8;
        local_28 = local_4;
        fVar2 = fVar3;
      }
    }
    param_5 = (float *)fVar2;
    if ((DAT_0050c5d8 != 0) && (DAT_0050c5d4 < 0x3f)) {
      iVar6 = DAT_0050c5d4 * 0xc;
      DAT_0050c5d4 = DAT_0050c5d4 + 1;
      *(float *)(&DAT_00e982a0 + iVar6) = local_30;
      *(float *)(&DAT_00e982a4 + iVar6) = local_2c;
      *(float *)(&DAT_00e982a8 + iVar6) = local_28;
    }
    if ((float)param_5 <= DAT_00e98258) {
      if (DAT_00e98e1c == 3) {
        pfVar7 = param_3;
        if (bVar4) {
          *param_1 = -*param_1;
          param_1[1] = -param_1[1];
          param_1[2] = -param_1[2];
          pfVar7 = param_4;
          param_4 = param_3;
        }
        FUN_00441810(&local_30,param_2,pfVar7,param_4,pfVar5,param_5,param_1);
        return;
      }
      DAT_00e98258 = (float)param_5;
      DAT_00e98254 = DAT_00e98284;
      DAT_00e98250 = 1;
      _DAT_00e98e60 = local_30;
      DAT_00e98e64 = local_2c;
      DAT_00e98e68 = local_28;
    }
  }
  return;
}

