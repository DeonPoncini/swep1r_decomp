#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00480a70(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  float local_48 [6];
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24 = *param_2 - *param_1;
  local_20 = param_2[1] - param_1[1];
  local_1c = param_2[2] - param_1[2];
  local_18 = *param_3 - *param_1;
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  local_c = *param_4 - *param_1;
  local_8 = param_4[1] - param_1[1];
  local_4 = param_4[2] - param_1[2];
  FUN_0042f9f0(local_48,param_5,param_6);
  if (((local_48[0] != _DAT_004adfb8) || (local_48[1] != _DAT_004adfb8)) ||
     (local_48[2] != _DAT_004adfb8)) {
    FUN_0042f9f0(local_48,local_48 + 9,param_5);
    FUN_0042f9f0(local_48 + 3,&local_18,param_6);
    FUN_0042f9f0(local_48 + 6,&local_c,param_7);
    if (_DAT_004adfb8 <= local_48[0]) {
      param_3 = (float *)local_48[0];
    }
    else {
      param_3 = (float *)-local_48[0];
    }
    if (_DAT_004adfb8 <= local_48[1]) {
      param_2 = (float *)local_48[1];
    }
    else {
      param_2 = (float *)-local_48[1];
    }
    if (local_48[2] < _DAT_004adfb8) {
      local_48[2] = -local_48[2];
    }
    if (local_48[2] + (float)param_2 + (float)param_3 <= _DAT_004adfbc) {
      if (_DAT_004adfb8 <= local_48[3]) {
        param_3 = (float *)local_48[3];
      }
      else {
        param_3 = (float *)-local_48[3];
      }
      if (_DAT_004adfb8 <= local_48[4]) {
        param_2 = (float *)local_48[4];
      }
      else {
        param_2 = (float *)-local_48[4];
      }
      if (local_48[5] < _DAT_004adfb8) {
        local_48[5] = -local_48[5];
      }
      if (local_48[5] + (float)param_2 + (float)param_3 < _DAT_004adfc8) {
        return 1;
      }
      if ((float)param_2 <= (float)param_3) {
        if (local_48[5] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[5] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if ((float)_DAT_004adfc0 <= local_48[iVar1 + 3]) {
        if (_DAT_004adfb8 <= local_48[iVar1 + 6]) {
          return 1;
        }
      }
      else if (local_48[iVar1 + 6] <= _DAT_004adfb8) {
        return 1;
      }
    }
    else {
      if ((float)param_2 <= (float)param_3) {
        if (local_48[2] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[2] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if ((float)_DAT_004adfc0 <= local_48[iVar1]) {
        if ((_DAT_004adfb8 <= local_48[iVar1 + 3]) && (_DAT_004adfb8 <= local_48[iVar1 + 6])) {
          return 1;
        }
      }
      else if ((local_48[iVar1 + 3] <= _DAT_004adfb8) && (local_48[iVar1 + 6] <= _DAT_004adfb8)) {
        return 1;
      }
    }
  }
  return 0;
}

