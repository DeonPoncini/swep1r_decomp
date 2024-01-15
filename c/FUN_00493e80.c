#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00493e80(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined local_84 [36];
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54 [12];
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar3 = param_1;
  local_40 = 0;
  local_3c = 0;
  iVar1 = *(int *)((int)param_1 + 4);
  local_48 = &DAT_00df83a0;
  FUN_00492b70(local_84,DAT_00df7f2c + 8,param_2);
  local_34 = 0;
  local_30 = *(undefined4 *)(iVar1 + 0x40);
  local_2c = 0;
  FUN_00493200(&local_28,&local_34,local_84);
  _DAT_00df83a0 = local_28 - *(float *)(iVar1 + 0x48);
  _DAT_00df83a4 = local_24 - _DAT_004af990;
  _DAT_00df83a8 = local_20 - *(float *)(iVar1 + 0x48);
  _DAT_00df83ac = local_28 + *(float *)(iVar1 + 0x48);
  _DAT_00df83b4 = local_20 - *(float *)(iVar1 + 0x48);
  _DAT_00df83b8 = local_28 + *(float *)(iVar1 + 0x48);
  _DAT_00df83c0 = local_20 + *(float *)(iVar1 + 0x48);
  _DAT_00df83c4 = local_28 - *(float *)(iVar1 + 0x48);
  _DAT_00df83cc = local_20 + *(float *)(iVar1 + 0x48);
  local_44 = *(undefined4 *)(iVar1 + 0xe8);
  _DAT_00df83b0 = _DAT_00df83a4;
  _DAT_00df83bc = _DAT_00df83a4;
  _DAT_00df83c8 = _DAT_00df83a4;
  FUN_004941d0(fVar3,iVar1 + 0x9c,&DAT_00df83a0,local_54);
  _DAT_00df83a0 = local_60 - *(float *)(iVar1 + 0x44);
  _DAT_00df83a4 = local_5c - _DAT_004af990;
  _DAT_00df83a8 = local_58 - *(float *)(iVar1 + 0x44);
  _DAT_00df83ac = local_60 + *(float *)(iVar1 + 0x44);
  _DAT_00df83b4 = local_58 - *(float *)(iVar1 + 0x44);
  _DAT_00df83b8 = local_60 + *(float *)(iVar1 + 0x44);
  _DAT_00df83c0 = local_58 + *(float *)(iVar1 + 0x44);
  _DAT_00df83c4 = local_60 - *(float *)(iVar1 + 0x44);
  _DAT_00df83cc = local_58 + *(float *)(iVar1 + 0x44);
  local_44 = *(undefined4 *)(iVar1 + 0xe8);
  _DAT_00df83b0 = _DAT_00df83a4;
  _DAT_00df83bc = _DAT_00df83a4;
  _DAT_00df83c8 = _DAT_00df83a4;
  FUN_004941d0(fVar3,iVar1 + 0x9c,&DAT_00df83a0,local_54);
  local_14 = local_28 - local_60;
  local_18 = local_20 - local_58;
  local_10 = SQRT(local_18 * local_18 + local_14 * local_14);
  local_8 = local_10;
  fVar4 = (float10)FUN_0048d010(-local_14 / local_10);
  local_8 = (float)fVar4;
  if (local_18 < _DAT_004af98c) {
    if (local_14 <= _DAT_004af98c) {
      local_8 = -(local_8 - _DAT_004af998);
    }
    else {
      local_8 = _DAT_004af994 - local_8;
    }
  }
  FUN_0048c950(local_8,&param_2,&param_1);
  local_1c = -*(float *)(iVar1 + 0x44);
  fVar2 = local_10 * param_2;
  local_c = *(float *)(iVar1 + 0x44);
  _DAT_00df83a4 = local_24;
  _DAT_00df83b0 = local_24;
  _DAT_00df83bc = local_5c;
  _DAT_00df83a0 = (*(float *)(iVar1 + 0x48) * param_1 - fVar2) + local_60;
  local_10 = local_10 * param_1;
  _DAT_00df83a8 = *(float *)(iVar1 + 0x48) * param_2 + local_10 + local_58;
  local_14 = 0.0;
  _DAT_00df83ac = (-*(float *)(iVar1 + 0x48) * param_1 - fVar2) + local_60;
  _DAT_00df83b4 = -*(float *)(iVar1 + 0x48) * param_2 + local_10 + local_58;
  _DAT_00df83b8 = (local_1c * param_1 - _DAT_004af98c) + local_60;
  _DAT_00df83c0 = local_1c * param_2 + 0.0 + local_58;
  _DAT_00df83c4 = (local_c * param_1 - _DAT_004af98c) + local_60;
  _DAT_00df83c8 = local_5c;
  _DAT_00df83cc = local_c * param_2 + 0.0 + local_58;
  local_44 = *(undefined4 *)(iVar1 + 0xe4);
  FUN_004941d0(fVar3,iVar1 + 0x54,&DAT_00df83a0,local_54);
  return 1;
}

