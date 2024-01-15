#include "prototype.h"


int FUN_00413c50(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,uint param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  uVar2 = param_9;
  bVar1 = false;
  local_18 = 0;
  local_14 = 0;
  uVar3 = param_10;
  if ((param_10 & 0x80000) != 0) {
    local_14 = param_10 & 0xff;
    uVar3 = 0;
  }
  iVar4 = FUN_00416d90(param_1,param_2,param_3,param_4,param_9,uVar3,0,&LAB_00417940,0);
  uVar3 = *(uint *)(iVar4 + 0x20);
  if ((uVar3 & 0x20000) == 0) {
    if ((uVar3 & 0x10000) == 0) {
      uVar6 = param_7;
      if (((uVar3 & 0x40000) != 0) &&
         (FUN_00417120(0x3f4,&local_18,&param_10), uVar6 = param_7, param_7 < local_18)) {
        uVar6 = param_7 + (local_18 >> 1);
      }
    }
    else {
      FUN_00417120(0x3f3,&local_18,&param_10);
      bVar1 = true;
      uVar6 = param_7 + local_18;
    }
  }
  else {
    FUN_00417120(0xfa3,&local_18,&param_10);
    iVar5 = param_7 + local_18;
    FUN_00417120(0x3f7,&local_18,&param_10);
    bVar1 = true;
    uVar6 = iVar5 + local_18;
  }
  FUN_00414b40(iVar4,uVar6,param_8);
  FUN_00414b60(iVar4,param_5,param_6);
  if (bVar1) {
    local_10 = *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = *(int *)(iVar4 + 0x2c);
    local_4 = *(int *)(iVar4 + 0x30);
    FUN_00412fb0(iVar4,0xffffffff,0x3f1,&local_10,1,0);
    FUN_00413090(iVar4,0,0,0,0,0x82);
  }
  FUN_00414b80(iVar4,param_4,0);
  FUN_00414420(iVar4,uVar2 & 0x20000);
  if ((*(uint *)(iVar4 + 0x20) & 0x20000) != 0) {
    FUN_00417120(0xfa3,&param_9,&param_3);
    FUN_00417120(0xfa4,&param_1,&param_2);
    local_10 = *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = (param_9 - 1) + *(int *)(iVar4 + 0x24);
    local_4 = param_3 + -1 + *(int *)(iVar4 + 0x28);
    FUN_00412fb0(iVar4,0xffffffff,0xfa3,&local_10,1,0);
    local_10 = param_9 + *(int *)(iVar4 + 0x24);
    local_c = *(undefined4 *)(iVar4 + 0x28);
    local_8 = (uVar6 - local_18) + -1 + *(int *)(iVar4 + 0x24);
    local_4 = param_2 + -1 + *(int *)(iVar4 + 0x28);
    FUN_00412fb0(iVar4,0xffffffff,0xfa4,&local_10,1,0);
  }
  FUN_00414e60(iVar4,1);
  *(undefined4 *)(iVar4 + 0x18) = 10;
  if ((*(byte *)(iVar4 + 0x20) & 0x80) == 0) {
    if (DAT_004d7c54 != 0) {
      *(undefined4 *)(iVar4 + 0x53c) = 1;
      if (local_14 == 0) {
        *(uint *)(iVar4 + 0x540) = DAT_004d7c50;
      }
      else {
        *(uint *)(iVar4 + 0x540) = local_14;
      }
      DAT_004d7c50 = DAT_004d7c50 + 1;
    }
    return iVar4;
  }
  if (DAT_004d7c54 != 0) {
    *(undefined4 *)(iVar4 + 0x53c) = 1;
    if (local_14 == 0) {
      local_14 = DAT_004d7c50;
    }
    *(uint *)(iVar4 + 0x540) = local_14;
    DAT_004d7c54 = 0;
    DAT_004d7c50 = 0;
    return iVar4;
  }
  DAT_004d7c50 = 0;
  *(undefined4 *)(iVar4 + 0x53c) = 1;
  if (local_14 == 0) {
    *(uint *)(iVar4 + 0x540) = DAT_004d7c50;
  }
  else {
    *(uint *)(iVar4 + 0x540) = local_14;
  }
  DAT_004d7c54 = DAT_004d7c54 + 1;
  DAT_004d7c50 = DAT_004d7c50 + 1;
  return iVar4;
}

