#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441810(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined local_3c [12];
  undefined local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  undefined local_18 [12];
  undefined local_c [12];
  
  pfVar6 = param_3;
  pfVar8 = param_2;
  pfVar5 = param_1;
  fVar2 = param_1[2] * _DAT_00e985a8 + param_1[1] * _DAT_00e985a4 + _DAT_00e985a0 * *param_1;
  if ((DAT_00e98e00 < fVar2) && (fVar2 < DAT_00e9827c)) {
    FUN_00441390(param_6,param_5,param_1,param_7);
    return;
  }
  fVar2 = _DAT_00e985a0 * *param_2 + _DAT_00e985a4 * param_2[1] + _DAT_00e985a8 * param_2[2];
  pfVar7 = param_3 + 2;
  pfVar1 = param_3 + 1;
  param_2._0_2_ = 0;
  param_6._0_2_ = 0;
  param_3._0_2_ = 0;
  fVar3 = _DAT_00e985a0 * *pfVar6 + _DAT_00e985a4 * *pfVar1 + _DAT_00e985a8 * *pfVar7;
  fVar4 = _DAT_00e985a0 * *param_4 + _DAT_00e985a4 * param_4[1] + _DAT_00e985a8 * param_4[2];
  if (DAT_00e98e00 <= fVar2) {
    if (DAT_00e9827c < fVar2) {
      param_2._0_2_ = 2;
    }
  }
  else {
    param_2._0_2_ = -1;
  }
  if (DAT_00e98e00 <= fVar3) {
    if (DAT_00e9827c < fVar3) {
      param_6._0_2_ = 2;
    }
  }
  else {
    param_6._0_2_ = -1;
  }
  if (DAT_00e98e00 <= fVar4) {
    if (DAT_00e9827c < fVar4) {
      param_3._0_2_ = 2;
    }
  }
  else {
    param_3._0_2_ = -1;
  }
  param_1 = (float *)DAT_00e9827c;
  switch((int)(short)param_6 + (int)(short)param_3 + 3 + (int)(short)param_2) {
  default:
    return;
  case 1:
    param_1 = (float *)DAT_00e98e00;
    break;
  case 2:
    param_1 = (float *)DAT_00e98e00;
  case 5:
    if ((short)param_2 != 0) {
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,param_1);
      FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,param_1);
      FUN_004414e0(pfVar5,local_30,pfVar6,local_3c,param_5,param_7);
      FUN_004414e0(pfVar5,local_3c,pfVar6,param_4,param_5,param_7);
      return;
    }
    if ((short)param_6 == 0) {
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,param_1);
      FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,param_1);
      FUN_004414e0(pfVar5,local_30,pfVar8,local_3c,param_5,param_7);
      FUN_004414e0(pfVar5,local_3c,pfVar8,pfVar6,param_5,param_7);
      return;
    }
    FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,local_30,param_4,local_3c,param_5,param_7);
    FUN_004414e0(pfVar5,local_3c,param_4,pfVar8,param_5,param_7);
    return;
  case 3:
  case 6:
    if ((short)param_6 == (short)param_3) {
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,pfVar8,param_4,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar8;
      pfVar8 = pfVar6;
    }
    else if ((short)param_3 == (short)param_2) {
      FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar6;
      pfVar8 = param_4;
    }
    else {
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,param_4,pfVar6,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = param_4;
    }
    FUN_00441710(local_18,pfVar7,pfVar8,&DAT_00e985a0,DAT_00e98e00);
    FUN_004414e0(pfVar5,local_30,local_3c,&local_24,param_5,param_7);
    FUN_004414e0(pfVar5,local_30,&local_24,local_18,param_5,param_7);
    return;
  case 4:
    if ((short)param_2 == 0) {
      local_24 = *pfVar8;
      local_20 = pfVar8[1];
      local_1c = pfVar8[2];
      FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,pfVar6,param_4,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar8;
      if ((short)param_6 == 2) {
        FUN_00441710(local_3c,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = param_4;
      }
      else {
        FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = pfVar6;
      }
    }
    else if ((short)param_6 == 0) {
      local_24 = *pfVar6;
      local_20 = pfVar6[1];
      local_1c = pfVar6[2];
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,param_4,pfVar8,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar6;
      if ((short)param_3 == 2) {
        FUN_00441710(local_3c,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      }
      else {
        FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = param_4;
      }
    }
    else {
      local_24 = *param_4;
      local_20 = param_4[1];
      local_1c = param_4[2];
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = param_4;
      if ((short)param_2 == 2) {
        FUN_00441710(local_3c,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = pfVar6;
      }
      else {
        FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      }
    }
    FUN_00441710(local_18,pfVar7,pfVar8,&DAT_00e985a0,DAT_00e98e00);
    FUN_004414e0(pfVar5,local_30,local_3c,&local_24,param_5,param_7);
    FUN_004414e0(pfVar5,local_30,&local_24,local_c,param_5,param_7);
    FUN_004414e0(pfVar5,&local_24,local_18,local_c,param_5,param_7);
    return;
  case 7:
    break;
  }
  if ((short)param_2 == 0) {
    FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,pfVar8,local_30,local_3c,param_5,param_7);
    return;
  }
  if ((short)param_6 != 0) {
    FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,param_4,local_30,local_3c,param_5,param_7);
    return;
  }
  FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,param_1);
  FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,param_1);
  FUN_004414e0(pfVar5,pfVar6,local_30,local_3c,param_5,param_7);
  return;
}

