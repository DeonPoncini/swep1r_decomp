#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004772f0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_1;
  if ((*(uint *)((int)param_1 + 100) & 0x400) == 0) {
    local_4c = *(float *)((int)param_1 + 0x194);
    local_48 = *(float *)((int)param_1 + 0x198);
    local_44 = *(float *)((int)param_1 + 0x19c);
  }
  else {
    local_4c = -*(float *)((int)param_1 + 0x160);
    local_48 = -*(float *)((int)param_1 + 0x164);
    local_44 = -*(float *)((int)param_1 + 0x168);
  }
  FUN_0042fa80(&local_34,param_2,0xc0000000,&local_4c);
  local_10 = local_4c;
  local_c = local_48;
  local_8 = local_44;
  local_4 = 0x461c4000;
  local_1c = local_34;
  local_18 = local_30;
  local_14 = local_2c;
  FUN_00441020();
  if ((*(byte *)((int)param_1 + 100) & 0x80) == 0) {
    fVar4 = (float10)FUN_00444f10(*(undefined4 *)((int)param_1 + 0xec),&local_1c,local_28,&local_40)
    ;
    param_1 = (float)fVar4;
  }
  else {
    param_1 = -1.0;
  }
  if (param_1 < _DAT_004adc48) {
    fVar4 = (float10)FUN_00444d10(*(undefined4 *)(iVar2 + 0x13c),&local_1c,local_28,&local_40);
    param_1 = (float)fVar4;
  }
  if (((*(uint *)(iVar2 + 100) & 0x400) != 0) && (param_1 < _DAT_004adc48)) {
    local_48 = *(float *)(iVar2 + 0x198);
    local_44 = *(float *)(iVar2 + 0x19c);
    local_4c = *(float *)(iVar2 + 0x194);
    local_10 = local_4c;
    local_c = local_48;
    local_8 = local_44;
    fVar4 = (float10)FUN_00444d10(*(undefined4 *)(iVar2 + 0x13c),&local_1c,local_28,&local_40);
    param_1 = (float)fVar4;
  }
  uVar3 = FUN_00441030();
  bVar1 = param_1 < _DAT_004adc48;
  *(undefined4 *)(iVar2 + 0x140) = uVar3;
  if (bVar1) {
    fVar4 = (float10)_DAT_004adc98;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x188) = 0xc61c4000;
    return fVar4;
  }
  fVar4 = (float10)_DAT_004adc9c;
  *param_3 = local_40;
  param_3[1] = local_3c;
  param_3[2] = local_38;
  *(undefined4 *)(iVar2 + 0x188) = local_20;
  return (float10)param_1 - fVar4;
}

