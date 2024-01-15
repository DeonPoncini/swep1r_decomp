#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fd60(float param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float local_5c;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  bVar10 = false;
  bVar2 = false;
  bVar13 = false;
  bVar7 = false;
  bVar8 = false;
  bVar9 = false;
  bVar11 = false;
  bVar12 = false;
  if (param_1 == 0.0) {
    return;
  }
  if ((*(uint *)((int)param_1 + 0x60) & 0x2007800) != 0) {
    return;
  }
  if (_DAT_004ad95c < *(float *)((int)param_1 + 0x1e8)) {
    return;
  }
  if ((*(int *)((int)param_1 + 0x140) != 0) &&
     (pbVar4 = (byte *)FUN_004318b0(*(int *)((int)param_1 + 0x140)), pbVar4 != (byte *)0x0)) {
    if ((*pbVar4 & 0x20) != 0) {
      return;
    }
    uVar1 = *(uint *)(pbVar4 + 0x2c);
    bVar7 = (uVar1 & 0x2000) != 0;
    if ((uVar1 & 0x4000) != 0) {
      return;
    }
    bVar8 = (uVar1 & 0x8000) != 0;
    bVar9 = (uVar1 & 0x100) != 0;
    bVar10 = (uVar1 & 0x200) != 0;
    bVar11 = (uVar1 & 0x400) != 0;
    bVar12 = (uVar1 & 0x1000) != 0;
    bVar13 = (uVar1 & 0x80) != 0;
    if ((uVar1 & 0x40) != 0) {
      bVar2 = true;
    }
  }
  if (param_7 != 0) {
    local_44 = local_44 | 1;
  }
  FUN_004313d0(&local_40);
  local_10 = param_2[0xc];
  local_c = param_2[0xd];
  local_8 = param_2[0xe];
  local_30 = param_2[8];
  local_2c = param_2[9];
  local_28 = param_2[10];
  local_40 = param_2[4];
  local_3c = param_2[5];
  local_38 = param_2[6];
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_0042f9b0(&local_40);
  FUN_0042f9b0(&local_30);
  FUN_0042f9b0(&local_20);
  local_5c = (*(float *)((int)param_1 + 0x1a0) - _DAT_004ad9e0) * _DAT_004ada48;
  if (local_5c <= _DAT_004ad968) {
    return;
  }
  if (_DAT_004ad958 < local_5c) {
    local_5c = 1.0;
  }
  param_1 = 0.0;
  switch(DAT_0050ca8c) {
  case 0:
    if (!bVar2) {
      if (bVar10) {
        param_1 = 255.0;
        break;
      }
      if (!bVar11) {
        param_1 = 200.0;
        break;
      }
    }
    goto LAB_0047005f;
  case 1:
    if (bVar13) {
      param_1 = 255.0;
      break;
    }
    if (bVar2) {
      param_1 = 150.0;
      break;
    }
    if (bVar12) {
      param_1 = 0.0;
      break;
    }
    if (bVar8) {
      param_1 = 0.0;
      break;
    }
    goto LAB_004701ce;
  case 2:
    if (!bVar9) {
      if (bVar2) {
        param_1 = 64.0;
      }
      else {
        param_1 = 16.0;
      }
      break;
    }
LAB_0047005f:
    param_1 = 255.0;
    break;
  case 4:
    if (bVar2) {
      param_1 = 255.0;
      break;
    }
    if (bVar10) {
      param_1 = 255.0;
      break;
    }
    if (bVar11) {
      param_1 = 255.0;
      break;
    }
    if (bVar9) {
      param_1 = 255.0;
      break;
    }
    if (bVar7) {
      param_1 = 255.0;
      break;
    }
LAB_004701ce:
    param_1 = 50.0;
    break;
  case 5:
    if (bVar2) {
      param_1 = 200.0;
    }
    else if (bVar10) {
      param_1 = 255.0;
    }
    else {
      param_1 = 16.0;
    }
    break;
  case 6:
    if (bVar2) {
      param_1 = 150.0;
    }
    else if (bVar10) {
      param_1 = 255.0;
    }
    else {
      param_1 = 75.0;
    }
    break;
  case 7:
    if (bVar9) {
      param_1 = 255.0;
    }
    else {
      param_1 = 255.0;
      if (!bVar10) {
        param_1 = 128.0;
      }
    }
  }
  if (_DAT_004adac8 < local_28) {
    if (bVar9) {
      param_6 = _DAT_004ad968;
    }
    FUN_0042fa80(&local_10,&local_10,-param_6,&local_40);
    param_1 = param_1 * local_5c;
    local_40 = local_40 * param_3;
    local_3c = local_3c * param_3;
    local_38 = local_38 * param_3;
    local_30 = local_30 * param_4;
    local_2c = local_2c * param_4;
    local_28 = local_28 * param_4;
    local_20 = local_20 * param_5;
    local_1c = local_1c * param_5;
    local_18 = local_18 * param_5;
    fVar3 = _DAT_004ad958;
    if ((_DAT_004ad958 <= param_1) && (fVar3 = param_1, _DAT_004adacc < param_1)) {
      fVar3 = _DAT_004adacc;
    }
    if (_DAT_004ad968 < fVar3) {
      uVar5 = __ftol(0x3e4ccccd,local_44);
      uVar5 = __ftol(uVar5);
      uVar5 = __ftol(uVar5);
      uVar5 = __ftol(uVar5);
      iVar6 = FUN_0047bc40(&local_40,uVar5);
      if ((iVar6 != 0) && (bVar11 || bVar9)) {
        FUN_00426c80(0x45,7,local_5c * _DAT_004ad964 * _DAT_004ad97c,0x3f800000,1);
        return;
      }
    }
  }
  return;
}

