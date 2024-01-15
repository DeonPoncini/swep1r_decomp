#include "prototype.h"


int FUN_004146c0(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_00416d90(param_1,0,0,0,0,0,0,&LAB_00416820,param_9);
  FUN_004176f0(&local_40,param_4,6);
  iVar6 = local_34 - local_3c;
  iVar7 = (local_38 - local_40) + 1;
  iVar8 = 0;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  FUN_00417740(&local_30,param_5,0);
  local_2c = local_24 - local_2c;
  iVar7 = (local_28 - local_30) + 1;
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar2 = FUN_004177b0(&local_20,param_6,param_7,param_8,0);
  iVar6 = iVar6 + local_2c + 4 + (local_1c * 0x7fffffff + local_14) * 2;
  iVar7 = (local_18 - local_20) + 1;
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  FUN_00414b40(iVar1,iVar8,iVar6);
  if (param_2 == -1) {
    param_2 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x2c)) + 0x27f >> 1;
  }
  if (param_3 == -1) {
    param_3 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30)) + 0x1df >> 1;
  }
  FUN_00414b60(iVar1,param_2,param_3);
  local_10 = 0x280U - iVar8 >> 1;
  local_c = 0x1e0U - iVar6 >> 1;
  local_8 = iVar8 + -1 + local_10;
  local_4 = iVar6 + -1 + local_c;
  FUN_00412fb0(iVar1,0xffffffff,0x3f1,&local_10,1,0);
  FUN_00413090(iVar1,0,0,0,0,0x82);
  FUN_00417900(&local_40,
               (((local_40 - local_38) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x28) + local_3c);
  FUN_00417900(&local_30,
               (((local_30 - local_28) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),local_34);
  FUN_00417900(&local_20,
               (((local_20 - local_18) + *(int *)(iVar1 + 0x2c)) - *(int *)(iVar1 + 0x24) >> 1) +
               *(int *)(iVar1 + 0x24),local_24);
  FUN_004131c0(iVar1,0,6,param_4,local_40 + 10,local_3c + 10,0,0);
  uVar3 = FUN_00413520(iVar1,0,&local_30,0,0x100000,0);
  FUN_00417fe0(uVar3,param_5,1);
  iVar6 = 0;
  iVar7 = local_1c + 10;
  iVar8 = local_20 + 10;
  param_4 = 0;
  if (param_6 != 0) {
    iVar4 = FUN_0042de30(param_6,DAT_00e99720);
    param_4 = iVar4 * 3;
  }
  if (param_7 != 0) {
    iVar4 = FUN_0042de30(param_7,DAT_00e99720);
    if (param_4 <= (uint)(iVar4 * 3)) {
      param_4 = iVar4 * 3;
    }
  }
  if (param_8 != 0) {
    iVar4 = FUN_0042de30(param_8,DAT_00e99720);
    if (param_4 <= (uint)(iVar4 * 3)) {
      param_4 = iVar4 * 3;
    }
  }
  if (param_4 < 0x97) {
    param_4 = 0x96;
  }
  if (param_6 != 0) {
    iVar4 = FUN_0042df70(param_6,DAT_00e99720);
    iVar6 = 1;
    FUN_004132a0(iVar1,0,0,param_6,iVar8,iVar7,param_4,iVar4 * 3,0x100000,0);
    if (param_8 == 0) {
      iVar8 = local_20 + 0x1e + iVar2;
    }
    else {
      iVar7 = local_1c + 0x14 + iVar4 * 3;
    }
  }
  iVar4 = iVar6;
  if (param_7 != 0) {
    iVar5 = FUN_0042df70(param_7,DAT_00e99720);
    iVar4 = iVar6 + 1;
    FUN_004132a0(iVar1,iVar6,0,param_7,iVar8,iVar7,param_4,iVar5 * 3,0x100000,0);
    iVar8 = iVar8 + 0x14 + iVar2;
  }
  if (param_8 != 0) {
    iVar6 = FUN_0042df70(param_8,DAT_00e99720);
    FUN_004132a0(iVar1,iVar4,0,param_8,iVar8,iVar7,param_4,iVar6 * 3,0x100000,0);
  }
  FUN_00414e60(iVar1,1);
  return iVar1;
}

