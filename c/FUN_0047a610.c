#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a610(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_7c;
  float local_78;
  float local_74;
  undefined local_70 [12];
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(float *)(param_1 + 0x104) < _DAT_004adc44) {
    *(undefined4 *)(param_1 + 0x104) = 0x3c23d70a;
  }
  if (_DAT_004adc9c < *(float *)(param_1 + 0x104)) {
    *(undefined4 *)(param_1 + 0x104) = 0x40000000;
  }
  FUN_0044eeb0(param_1 + 0xac,local_40,0);
  local_78 = local_c;
  local_7c = local_10;
  local_74 = local_8;
  FUN_0044eeb0(param_1 + 0xac,local_40,*(undefined4 *)(param_1 + 0x104));
  fVar4 = (local_74 - local_8) * (local_74 - local_8) +
          (local_78 - local_c) * (local_78 - local_c) +
          (local_7c - local_10) * (local_7c - local_10);
  if (_DAT_004ade08 <= fVar4) {
    if (fVar4 <= _DAT_004ade10) goto LAB_0047a72e;
    fVar4 = *(float *)(param_1 + 0x104) - _DAT_004adc44;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x104) - _DAT_004ade0c;
  }
  *(float *)(param_1 + 0x104) = fVar4;
LAB_0047a72e:
  local_74 = local_8;
  local_7c = local_10;
  local_78 = local_c;
  FUN_0042f860(local_70,&local_7c,param_1 + 0x50);
  FUN_0042f9b0(local_70);
  iVar1 = param_1 + 0x30;
  FUN_0042f860(local_64,local_70,iVar1);
  FUN_0042fa80(local_58,iVar1,0x3e4ccccd,local_64);
  if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
    fVar4 = (float)_DAT_00e22a40 * *(float *)(param_1 + 0x1f0);
    fVar4 = *(float *)(param_1 + 0x21c) - (fVar4 + fVar4);
    *(float *)(param_1 + 0x21c) = fVar4;
    fVar4 = fVar4 - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x208) * _DAT_004ade18;
    fVar5 = (float)_DAT_004ade20;
    *(float *)(param_1 + 0x21c) = fVar4;
    if (fVar5 < fVar4) {
      *(undefined4 *)(param_1 + 0x21c) = 0x43340000;
    }
    if (*(float *)(param_1 + 0x21c) < (float)_DAT_004ade28) {
      *(undefined4 *)(param_1 + 0x21c) = 0xc3340000;
    }
    fVar4 = *(float *)(param_1 + 0x21c) * _DAT_004ade30;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x2ec) * _DAT_004ade14;
  }
  *(float *)(param_1 + 0x21c) = fVar4;
  FUN_0042f7d0(local_4c,param_2);
  FUN_0042f7d0(iVar1,local_58);
  iVar2 = param_1 + 0x40;
  iVar3 = param_1 + 0x20;
  FUN_0042f9f0(iVar3,iVar1,iVar2);
  FUN_0042f9f0(iVar2,iVar3,iVar1);
  FUN_0042f9b0(iVar3);
  FUN_0042f9b0(iVar1);
  FUN_0042f9b0(iVar2);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x1ec) * _DAT_004add20,0,0,
               0x3f800000,iVar3);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x220) * _DAT_004add20,0x3f800000,0
               ,0,iVar3);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x21c),0,0x3f800000,0,iVar3);
  FUN_0042f7d0(param_1 + 0x50,local_4c);
  *(undefined4 *)(param_1 + 0x204) = 0;
  return;
}

