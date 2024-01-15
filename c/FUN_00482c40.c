#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482c40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  DAT_00e229dc = param_5;
  DAT_0050ccd0 = 0;
  if (0x14 < param_4) {
    param_4 = 0x14;
  }
  local_4c = 0;
  local_48 = 0;
  DAT_00e229d4 = param_3[1];
  DAT_00e229d8 = param_3[2];
  _DAT_00e229d0 = *param_3;
  local_44 = 0x3f800000;
  _DAT_00e229c0 = 0;
  DAT_00e229c4 = 0;
  DAT_00e229c8 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0x3f800000;
  param_5 = 0x4cbebc20;
  DAT_0050cccc = param_4;
  local_58 = _DAT_00e229d0;
  local_54 = DAT_00e229d4;
  local_50 = DAT_00e229d8;
  FUN_00482820(param_2,param_1,&local_40,0,0,&param_5,param_3,&local_58,&local_4c);
  *param_6 = _DAT_00e229d0;
  param_6[1] = DAT_00e229d4;
  param_6[2] = DAT_00e229d8;
  *param_7 = _DAT_00e229c0;
  param_7[1] = DAT_00e229c4;
  param_7[2] = DAT_00e229c8;
  return;
}

