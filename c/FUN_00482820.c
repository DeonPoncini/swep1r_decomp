#include "prototype.h"


void FUN_00482820(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int local_8c;
  float local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = FUN_00431b00(param_2,2);
  if (iVar5 == 0) {
    return;
  }
  uVar6 = FUN_00431770(param_2);
  if (param_2 == param_1) {
    param_4 = 1;
  }
  FUN_0044bb10(local_40,param_3);
  if ((int)uVar6 < 0x5065) {
    if (uVar6 != 0x5064) {
      if (uVar6 != 0x3064) {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      FUN_00482690(param_2,local_40,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  else {
    if (0xd065 < (int)uVar6) {
      return;
    }
    if ((int)uVar6 < 0xd064) {
      if (uVar6 == 0x5065) {
        iVar7 = FUN_00431780(param_2);
        iVar5 = *(int *)(param_2 + 0x1c);
        if (iVar5 == -2) {
          return;
        }
        if (iVar5 == -1) {
          local_8c = 0;
          if (iVar7 < 1) {
            return;
          }
          do {
            iVar5 = *(int *)(*(int *)(param_2 + 0x18) + local_8c * 4);
            if (iVar5 != 0) {
              FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
            }
            local_8c = local_8c + 1;
          } while (local_8c < iVar7);
          return;
        }
        iVar5 = *(int *)(*(int *)(param_2 + 0x18) + iVar5 * 4);
        if (iVar5 == 0) {
          return;
        }
        FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
        return;
      }
      if (uVar6 != 0x5066) {
        return;
      }
      iVar5 = FUN_004827b0(param_2);
      if (iVar5 == -1) {
        return;
      }
      iVar5 = *(int *)(*(int *)(param_2 + 0x18) + iVar5 * 4);
      if (iVar5 == 0) {
        return;
      }
      FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  uVar8 = uVar6 & 0x8000;
  if (uVar8 != 0) {
    if (-1 < DAT_0050ccd0) {
      if (DAT_0050ccd0 < DAT_0050cccc + -1) {
        (&DAT_00e229e0)[DAT_0050ccd0] = param_2;
      }
      DAT_0050ccd0 = DAT_0050ccd0 + 1;
    }
    uVar10 = uVar8;
    if (uVar6 == 0xd065) {
      uVar10 = param_2;
    }
    local_84[1] = *(float *)(undefined4 *)(param_2 + 0x1c);
    local_84[2] = *(float *)(param_2 + 0x20);
    local_84[3] = *(float *)(param_2 + 0x24);
    local_70 = *(undefined4 *)(param_2 + 0x28);
    local_6c = *(undefined4 *)(param_2 + 0x2c);
    local_68 = *(float *)(param_2 + 0x30);
    pfVar9 = (float *)(param_2 + 0x34);
    local_60 = *(undefined4 *)(param_2 + 0x34);
    local_5c = *(undefined4 *)(param_2 + 0x38);
    local_58 = *(undefined4 *)(param_2 + 0x3c);
    local_74 = 0;
    local_50 = *(undefined4 *)(param_2 + 0x40);
    local_4c = *(undefined4 *)(param_2 + 0x44);
    local_48 = *(undefined4 *)(param_2 + 0x48);
    local_64 = 0;
    local_54 = 0;
    local_44 = 0x3f800000;
    if ((*(byte *)(param_2 + 0xc) & 0x10) != 0) {
      iVar5 = 3;
      pfVar11 = (float *)(uVar10 + 0x4c);
      do {
        pfVar1 = pfVar9 + -6;
        pfVar2 = pfVar9 + -3;
        fVar4 = *pfVar9;
        pfVar3 = (float *)(((int)&local_68 - (int)(undefined4 *)(param_2 + 0x1c)) + (int)pfVar9);
        pfVar9 = pfVar9 + 1;
        iVar5 = iVar5 + -1;
        *pfVar3 = *pfVar11 +
                  -(fVar4 * *(float *)(uVar10 + 0x54)) +
                  -(*pfVar1 * *(float *)(uVar10 + 0x4c)) + -(*pfVar2 * *(float *)(uVar10 + 0x50)) +
                  *pfVar3;
        pfVar11 = pfVar11 + 1;
      } while (iVar5 != 0);
    }
    FUN_0042fb70(local_40,(undefined4 *)((int)register0x00000010 + -0x80),param_3);
  }
  iVar5 = FUN_00431780(param_2);
  local_8c = 0;
  if (0 < iVar5) {
    do {
      iVar7 = *(int *)(*(int *)(param_2 + 0x18) + local_8c * 4);
      if (iVar7 != 0) {
        FUN_00482820(param_1,iVar7,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
      }
      local_8c = local_8c + 1;
    } while (local_8c < iVar5);
  }
  if ((uVar8 != 0) && (-1 < DAT_0050ccd0)) {
    DAT_0050ccd0 = DAT_0050ccd0 + -1;
  }
  return;
}

