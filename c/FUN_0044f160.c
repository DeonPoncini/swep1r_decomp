#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f160(undefined4 *param_1,int param_2,short *param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11_00,int param_11,int param_12,uint param_13,short param_14,
                 undefined4 param_15,undefined4 param_16,uint param_17)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 extraout_ST0;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  iVar8 = DAT_0050c734;
  local_c = (int)*(short *)(param_2 + 0xe);
  uVar6 = param_13;
  switch(*(undefined *)(param_2 + 5)) {
  case 0:
    uVar6 = 0xf;
    break;
  case 1:
    uVar6 = 7;
    break;
  case 2:
    uVar6 = 3;
    break;
  case 3:
    uVar6 = 1;
  }
  local_10 = (int)*param_3 + uVar6 & ~uVar6;
  local_8 = param_17 & 0x40;
  if (local_8 != 0) {
    DAT_0050c740 = DAT_0050c740 * 2;
    DAT_0050c738 = DAT_0050c738 * 2;
  }
  iVar10 = DAT_0050c740;
  local_18 = (float)DAT_0050c740;
  local_20 = *param_1;
  if ((((param_4 < local_18) && (local_14 = (float)DAT_0050c738, param_5 < local_14)) &&
      (local_1c = (float)DAT_0050c73c, local_1c <= param_6)) &&
     (fVar13 = (float10)DAT_0050c734, fVar13 <= (float10)param_7)) {
    local_4 = param_17 & 0x400000;
    if (local_4 != 0) {
      if (param_8 < DAT_0050c73c) {
        param_8 = DAT_0050c73c * 4;
      }
      if (DAT_0050c740 < param_8) {
        param_8 = DAT_0050c740 * 4;
      }
      if (param_9 < DAT_0050c734) {
        param_9 = DAT_0050c734 * 4;
      }
      if (DAT_0050c738 < param_9) {
        param_9 = DAT_0050c738 * 4;
      }
      iVar5 = param_8 << 2;
      param_8 = param_9 << 2;
      param_9 = iVar5;
    }
    if (local_1c <= param_4) {
      iVar5 = __ftol();
      fVar13 = extraout_ST0;
    }
    else {
      iVar5 = DAT_0050c73c * 4;
    }
    if (fVar13 <= (float10)param_5) {
      iVar8 = __ftol();
    }
    else {
      iVar8 = iVar8 << 2;
    }
    if (param_6 < local_18) {
      iVar10 = __ftol();
    }
    else {
      iVar10 = iVar10 * 4;
    }
    if (param_7 < local_14) {
      iVar9 = __ftol();
    }
    else {
      iVar9 = DAT_0050c738 * 4;
    }
    if ((param_17 & 0x1000000) == 0) {
      uVar6 = ~param_17 >> 0x19 & 2;
    }
    else {
      uVar6 = 0;
    }
    if ((param_17 & 0x2000000) == 0) {
      uVar3 = ~param_17 >> 0x1a & 2;
    }
    else {
      uVar3 = 0;
    }
    if (*(int *)(param_3 + 2) != DAT_0050c744) {
      FUN_00432190(*(int *)(param_3 + 2),uVar6 == 2,uVar3 == 2);
      DAT_0050c744 = *(int *)(param_3 + 2);
    }
    if ((param_17 & 0xc00000) == 0) {
      iVar7 = iVar5 - iVar10;
      iVar4 = iVar8 - iVar9;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      fVar1 = (float)(iVar7 >> 2) * (float)param_11 * _DAT_004accd4 - _DAT_004accc8;
      fVar2 = (float)(iVar4 >> 2) * (float)param_12 * _DAT_004accd4 - _DAT_004accc8;
      if (local_8 == 0) {
        iVar10 = iVar10 >> 2;
        iVar9 = iVar9 >> 2;
        iVar5 = iVar5 >> 2;
        iVar8 = iVar8 >> 2;
      }
      else {
        iVar10 = iVar10 >> 3;
        iVar9 = iVar9 >> 3;
        iVar5 = iVar5 >> 3;
        iVar8 = iVar8 >> 3;
      }
      bVar11 = (param_17 & 0x10000000) != 0;
      bVar12 = (param_17 & 0x10) != 0;
      iVar7 = iVar5;
      if ((short)param_13 != 0) {
        iVar7 = iVar10;
        iVar10 = iVar5;
      }
      iVar5 = iVar8;
      if (param_14 == 0) {
        iVar5 = iVar9;
        iVar9 = iVar8;
      }
      if ((param_2 == DAT_0050c9fc) || (param_2 == DAT_0050ca00)) {
        FUN_004321b0(iVar10,iVar9,iVar7,iVar5,fVar1,fVar2,bVar11,bVar12,param_2);
      }
      else {
        FUN_004325b0(iVar10,iVar9,iVar7,iVar5,fVar1,fVar2,bVar11,bVar12);
      }
    }
    else {
      iVar7 = 0;
      if ((short)param_13 == 0) {
        param_13 = local_10 << 6;
        param_17 = 0;
      }
      else {
        param_13 = 0;
        param_17 = local_10 << 6;
      }
      if (param_14 == 0) {
        iVar4 = 0;
        iVar7 = local_c << 6;
      }
      else {
        iVar4 = local_c << 6;
      }
      if (local_4 == 0) {
        FUN_0044efa0(&local_20,iVar5,iVar10,iVar8,iVar9,param_17,param_13,iVar4,iVar7,param_15,
                     param_16);
      }
      else {
        FUN_00426910(&local_20,iVar5,iVar10,iVar8,iVar9,param_9,param_8,param_17,param_13,iVar4,
                     iVar7);
      }
    }
  }
  *param_1 = local_20;
  if (local_8 != 0) {
    DAT_0050c740 = DAT_0050c740 / 2;
    DAT_0050c738 = DAT_0050c738 / 2;
  }
  return;
}

