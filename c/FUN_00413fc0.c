#include "prototype.h"


int FUN_00413fc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_4;
  
  local_24 = 0;
  if (param_8 == 0x20000) {
    uVar4 = 4000;
    local_2c = 0xfa1;
    local_28 = 0xfa2;
  }
  else if (param_8 == 0x40000) {
    uVar4 = 0xfa3;
    local_2c = 0xfa4;
    local_28 = 0xfa3;
    local_24 = 0x400000;
  }
  else if (param_8 == 0x80000) {
    uVar4 = 4000;
    local_2c = 0xfa1;
    local_28 = 4000;
    local_24 = 0x400000;
  }
  else {
    uVar4 = 0xfa3;
    local_2c = 0xfa4;
    local_28 = 0xfa5;
  }
  iVar3 = FUN_00416d90(param_1,param_2,param_3,param_4,param_10,param_11,0,FUN_00417be0,0);
  iVar2 = param_6;
  iVar1 = param_5;
  FUN_00414b60(iVar3,param_5,param_6);
  local_c = *(int *)(iVar3 + 0x28);
  local_4 = *(int *)(iVar3 + 0x30);
  FUN_00417120(uVar4,&param_11,&param_3);
  FUN_00417120(local_2c,&param_1,&param_2);
  FUN_00417120(local_28,&param_10,&param_4);
  if ((param_8 == 0x10000) || (param_8 == 0x20000)) {
    local_18 = param_11 + -1 + iVar1;
    local_14 = param_3 + -1 + iVar2;
    local_20 = iVar1;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,uVar4,&local_20,1,0);
    iVar5 = param_7;
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = param_11 + iVar1;
    local_18 = (param_7 - param_10) + -1 + iVar1;
    local_14 = param_2 + -1 + iVar2;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_2c,&local_20,1,0);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = (iVar5 - param_10) + iVar1;
    local_18 = iVar5 + -1 + iVar1;
    local_14 = param_4 + -1 + iVar2;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_28,&local_20,1,local_24);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    if (param_9 != 0) {
      FUN_00414b60(iVar3,(iVar1 - iVar5) + -2,iVar2 - param_4);
    }
    iVar5 = iVar5 + param_10 + param_11;
  }
  else {
    local_18 = param_11 + -1 + iVar1;
    local_14 = param_3 + -1 + iVar2;
    local_20 = iVar1;
    local_1c = iVar2;
    FUN_00412fb0(iVar3,0xffffffff,uVar4,&local_20,1,0);
    iVar5 = param_7;
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_20 = param_11 + iVar1;
    local_1c = iVar2;
    local_18 = param_11 + param_7 + -1 + iVar1;
    local_14 = param_2 + -1 + iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_2c,&local_20,1,0);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    local_1c = iVar2;
    local_20 = param_11 + iVar5 + iVar1;
    local_18 = param_10 + param_11 + iVar5 + -1 + iVar1;
    local_14 = param_4 + -1 + iVar2;
    FUN_00412fb0(iVar3,0xffffffff,local_28,&local_20,1,local_24);
    if (local_1c <= local_c) {
      local_c = local_1c;
    }
    if (local_4 <= local_14) {
      local_4 = local_14;
    }
    if (param_9 != 0) {
      FUN_00414b60(iVar3,(iVar1 - iVar5) + -2,iVar2 - param_4);
    }
    iVar5 = iVar5 + param_10 + param_11;
  }
  *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 4;
  FUN_00414b40(iVar3,iVar5,(local_4 - local_c) + 1);
  local_20 = *(int *)(iVar3 + 0x24);
  local_1c = *(undefined4 *)(iVar3 + 0x28);
  local_18 = *(undefined4 *)(iVar3 + 0x2c);
  local_14 = *(undefined4 *)(iVar3 + 0x30);
  uVar4 = FUN_00412fb0(iVar3,0xffffffff,0x3f1,&local_20,1,0);
  FUN_00413090(iVar3,uVar4,0,0,0,0x82);
  FUN_00414e60(iVar3,1);
  *(undefined4 *)(iVar3 + 0x18) = 0xb;
  return iVar3;
}

