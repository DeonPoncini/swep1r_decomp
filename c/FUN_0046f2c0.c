#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f2c0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  float local_48;
  float local_44;
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];
  
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (param_1 == 0) {
    uVar9 = *(undefined4 *)(param_2 + 0xf0);
  }
  else {
    param_2 = *(int *)(param_1 + 0x344);
    if (param_2 == 0) {
      return;
    }
    uVar9 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
    if (((*(uint *)(param_1 + 0x60) & 0x800000) != 0) || ((*(uint *)(param_1 + 100) & 0x2000) != 0))
    {
      bVar5 = true;
    }
    iVar6 = 0;
    pbVar11 = (byte *)(param_1 + 0x2a0);
    do {
      if ((*pbVar11 & 4) != 0) {
        if (iVar6 < 3) {
          bVar3 = true;
        }
        else {
          bVar4 = true;
        }
      }
      iVar6 = iVar6 + 1;
      pbVar11 = pbVar11 + 4;
    } while (iVar6 < 6);
  }
  local_48 = 0.0;
  local_44 = 0.0;
  if (_DAT_004ad968 <= param_3) {
    local_48 = param_3;
  }
  if (_DAT_004ad968 <= param_4) {
    local_44 = param_4;
  }
  if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e94 & 0x1000) != 0)) {
    local_48 = 1.0;
    local_44 = 1.0;
    bVar5 = false;
  }
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x18c);
    fVar2 = *(float *)(param_1 + 0x18c);
    if ((*(byte *)(param_1 + 100) & 8) != 0) {
      fVar1 = fVar1 * _DAT_004ad95c;
      fVar2 = fVar2 * _DAT_004ad95c;
    }
    if (bVar3) {
      fVar1 = fVar1 * _DAT_004ad980;
    }
    if (bVar4) {
      fVar2 = fVar2 * _DAT_004ad980;
    }
    local_48 = (fVar1 + *(float *)(param_1 + 0x330)) * _DAT_004ad95c;
    local_44 = (fVar2 + *(float *)(param_1 + 0x334)) * _DAT_004ad95c;
    *(float *)(param_1 + 0x330) = local_48;
    *(float *)(param_1 + 0x334) = local_44;
  }
  iVar6 = *(int *)(param_2 + 0x70);
  if (iVar6 != 0) {
    iVar7 = FUN_004816b0();
    param_3 = (float)iVar7 * _DAT_004ad970 * _DAT_004ada1c - _DAT_004ad9c0;
    FUN_004816b0();
    param_4 = (float)_DAT_00e22a38 * _DAT_004ada20;
    if (local_48 < _DAT_004ad97c) {
      param_3 = local_48 * param_3;
    }
    switch(uVar9) {
    case 4:
    case 6:
    case 0x10:
      param_3 = 1.0;
      param_4 = 0.0;
      FUN_004816b0();
      break;
    case 8:
    case 10:
      param_4 = 0.0;
    }
    FUN_00431020(local_40,0,0,param_4);
    FUN_0042fa50(local_40,param_3,local_40);
    FUN_0042fa50(local_20,param_3,local_20);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa50,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    uVar8 = __ftol();
    FUN_0042b640(iVar6,0,0,0xff,0xff,0xff,uVar8);
  }
  iVar6 = *(int *)(param_2 + 0xa8);
  if (iVar6 != 0) {
    iVar7 = FUN_004816b0();
    param_3 = (float)iVar7 * _DAT_004ad970 * _DAT_004ada1c - _DAT_004ad9c0;
    FUN_004816b0();
    param_4 = (float)_DAT_00e22a38 * _DAT_004ada20;
    if (local_44 < (float)_DAT_004ada30) {
      param_3 = local_44 * param_3;
    }
    switch(uVar9) {
    case 4:
    case 6:
    case 0x10:
      param_3 = 1.0;
      param_4 = 0.0;
      FUN_004816b0();
      break;
    case 8:
    case 10:
      param_4 = 0.0;
    }
    FUN_00431020(local_40,0,0,param_4);
    FUN_0042fa50(local_40,param_3,local_40);
    FUN_0042fa50(local_20,param_3,local_20);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa50,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    uVar9 = __ftol();
    FUN_0042b640(iVar6,0,0,0xff,0xff,0xff,uVar9);
  }
  iVar6 = *(int *)(param_2 + 0x74);
  if (iVar6 != 0) {
    iVar7 = FUN_0042b560(iVar6);
    FUN_004816b0();
    iVar10 = FUN_004816b0();
    param_3 = (float)iVar10 * _DAT_004ad970 * _DAT_004ad97c - _DAT_004ad9c0;
    FUN_004816b0();
    param_3 = local_48 * param_3;
    if (bVar5) {
      iVar10 = FUN_004816b0();
      param_3 = (float)iVar10 * _DAT_004ad970 * _DAT_004ada38 - _DAT_004ada3c;
    }
    FUN_004816b0();
    FUN_00431020(local_40,0,0,0);
    FUN_0042fa50(local_30,param_3,local_30);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa90,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    if (iVar7 != 0) {
      FUN_0042b5e0(iVar7,0,0,0xff,0xff,0xff,0xff);
      FUN_0044fc00(iVar7,0x3de147ae,0);
    }
  }
  iVar6 = *(int *)(param_2 + 0xac);
  if (iVar6 != 0) {
    iVar7 = FUN_0042b560(iVar6);
    FUN_004816b0();
    iVar10 = FUN_004816b0();
    param_3 = (float)iVar10 * _DAT_004ad970 * _DAT_004ad97c - _DAT_004ad9c0;
    FUN_004816b0();
    param_3 = local_44 * param_3;
    if (bVar5) {
      iVar10 = FUN_004816b0();
      param_3 = (float)iVar10 * _DAT_004ad970 * _DAT_004ada38 - _DAT_004ada3c;
    }
    FUN_004816b0();
    FUN_00431020(local_40,0,0,0);
    FUN_0042fa50(local_30,param_3,local_30);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xe10,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    if (iVar7 != 0) {
      FUN_0042b5e0(iVar7,0,0,0xff,0xff,0xff,0xff);
      FUN_0044fc00(iVar7,0x3de147ae,0);
    }
  }
  return;
}

