#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473e40(undefined4 *param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0044eeb0(param_2 + 0xac,local_40,0x3f800000);
  FUN_0042fa80(&local_80,&local_10,0x42480000,local_40);
  local_78 = local_78 - _DAT_004adb98;
  local_5c = local_80;
  local_58 = local_7c;
  local_44 = 0x44bb8000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0xbf800000;
  local_54 = local_78;
  fVar1 = (float10)FUN_00444d10(*(undefined4 *)(param_2 + 0x13c),&local_5c,&local_74,local_68);
  if (fVar1 < (float10)_DAT_004adba0) {
    *param_1 = local_10;
    param_1[1] = local_c;
    param_1[2] = local_8;
    return;
  }
  local_6c = local_6c - _DAT_004adba8;
  *param_1 = local_74;
  param_1[1] = local_70;
  param_1[2] = local_6c;
  return;
}

