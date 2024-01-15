#include "prototype.h"


int FUN_0041af00(uint param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  FUN_00417120(0x3f4,&local_18,local_14);
  iVar2 = *(int *)(param_1 + 0x24);
  param_1 = (local_18 + 10) * param_4 - 10;
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  else {
    iVar2 = iVar2 + ((param_3 >> 1) - (param_1 >> 1));
  }
  FUN_00417120(0x44e,&local_1c,&local_20);
  local_8 = iVar2 + -1 + param_1;
  local_4 = local_20 + -1 + param_2;
  local_c = param_2;
  local_10 = iVar2;
  FUN_00412fb0(iVar1,0,0x44e,&local_10,1,0);
  FUN_00419030(iVar1,0,0,0);
  FUN_00417120(0x44d,&local_1c,&local_20);
  local_c = param_2;
  local_8 = iVar2 + -5 + local_1c;
  local_4 = local_20 + -1 + param_2;
  local_10 = iVar2 + -4;
  FUN_00412fb0(iVar1,1,0x44d,&local_10,1,0);
  FUN_00419030(iVar1,1,0,0);
  *param_5 = ((iVar2 + -4) - (local_18 >> 1)) + 2;
  iVar3 = 1;
  if (param_4 == 4) {
    uVar4 = (param_1 + local_18 * -3) / 3;
    FUN_00417120(0x44c,&local_1c,&local_20);
    iVar3 = uVar4 + 5 + iVar2;
    local_10 = (local_18 >> 1) + iVar3;
    local_c = param_2;
    local_8 = (local_1c - 1) + local_10;
    local_4 = local_20 + -1 + param_2;
    FUN_00412fb0(iVar1,2,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,2,0,0);
    param_5[1] = iVar3 + 6;
    iVar3 = iVar3 + uVar4 + local_18;
    local_10 = (local_18 >> 1) + iVar3;
    local_8 = (local_1c - 1) + local_10;
    local_4 = local_20 + -1 + param_2;
    local_c = param_2;
    FUN_00412fb0(iVar1,3,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,3,0,0);
    param_5[2] = iVar3 + 4;
    iVar3 = 3;
  }
  else if (param_4 == 3) {
    FUN_00417120(0x44c,&local_1c,&local_20);
    local_c = param_2;
    local_10 = (iVar2 + (param_1 >> 1)) - (local_1c >> 1);
    local_8 = local_10 + -1 + local_1c;
    local_4 = local_20 + -1 + param_2;
    FUN_00412fb0(iVar1,2,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,2,0,0);
    iVar3 = 2;
    param_5[1] = (iVar2 - (local_18 >> 1)) + -6 + (param_1 >> 1);
  }
  FUN_00417120(0x44d,&local_1c,&local_20);
  local_c = param_2;
  iVar2 = (iVar2 - local_1c) + 4 + param_1;
  local_8 = iVar2 + -1 + local_1c;
  local_4 = local_20 + -1 + param_2;
  local_10 = iVar2;
  FUN_00412fb0(iVar1,iVar3 + 1,0x44d,&local_10,1,0x400000);
  FUN_00419030(iVar1,iVar3 + 1,0,0);
  param_5[iVar3] = ((local_1c >> 1) - (local_18 >> 1)) + iVar2;
  return local_20 + 4;
}

