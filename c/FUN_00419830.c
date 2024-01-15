#include "prototype.h"


void FUN_00419830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (param_1 != 0) {
    if ((param_2 == 0) || (iVar4 = 0xc1c, param_2 != 1)) {
      iVar4 = 3000;
    }
    FUN_00417120(iVar4 + 1,&local_24,&local_18);
    FUN_00417120(iVar4,&param_1,&local_2c);
    FUN_00417120(iVar4 + 2,&local_1c,&local_28);
    if (iVar2 == 1) {
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28) + 4;
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_4 = *(int *)(iVar1 + 0x30) + -3;
    }
    else {
      local_10 = *(int *)(iVar1 + 0x24) + 10;
      local_c = *(int *)(iVar1 + 0x28) + 10;
      local_8 = *(int *)(iVar1 + 0x2c) + -10;
      local_4 = *(int *)(iVar1 + 0x30) + -10;
    }
    FUN_00412fb0(iVar1,0,0x3f1,&local_10,1,0);
    FUN_00413090(iVar1,0,0,0,0,0x96);
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = *(int *)(iVar1 + 0x28);
    local_8 = param_1 + -1 + local_10;
    local_4 = local_2c + -1 + local_c;
    FUN_00412fb0(iVar1,1,iVar4,&local_10,1,0x200000);
    local_8 = *(int *)(iVar1 + 0x24);
    iVar2 = ((*(int *)(iVar1 + 0x2c) + param_1 * -2) - local_8) + 1;
    if (DAT_00ec86c4 != 0x280) {
      iVar2 = iVar2 + local_1c * 2;
    }
    local_10 = param_1 + local_8;
    local_c = *(int *)(iVar1 + 0x28);
    local_8 = param_1 + iVar2 + -1 + local_8;
    local_4 = local_28 + -1 + local_c;
    FUN_00412fb0(iVar1,2,iVar4 + 2,&local_10,1,0x200000);
    local_8 = *(int *)(iVar1 + 0x2c);
    local_c = *(int *)(iVar1 + 0x28);
    local_10 = (local_8 - param_1) + 1;
    local_4 = local_2c + -1 + local_c;
    FUN_00412fb0(iVar1,3,iVar4,&local_10,1,0x600000);
    local_4 = *(int *)(iVar1 + 0x28);
    iVar5 = ((*(int *)(iVar1 + 0x30) + local_2c * -2) - local_4) + 1;
    if (DAT_00ec86c4 != 0x280) {
      iVar5 = iVar5 + local_18 * 2;
    }
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = local_2c + local_4;
    local_8 = local_24 + -1 + local_10;
    local_4 = iVar5 + local_2c + -1 + local_4;
    FUN_00412fb0(iVar1,4,iVar4 + 1,&local_10,1,0);
    local_8 = *(int *)(iVar1 + 0x2c) - param_1;
    local_10 = local_8 + 1;
    local_c = local_2c + *(int *)(iVar1 + 0x28);
    local_8 = local_24 + local_8;
    local_4 = iVar5 + local_2c + -1 + *(int *)(iVar1 + 0x28);
    FUN_00412fb0(iVar1,5,iVar4 + 1,&local_10,1,0x400000);
    local_4 = *(int *)(iVar1 + 0x30);
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = (local_4 - local_2c) + 1;
    local_8 = param_1 + -1 + local_10;
    FUN_00412fb0(iVar1,6,iVar4,&local_10,1,0);
    local_10 = param_1 + *(int *)(iVar1 + 0x24);
    local_4 = *(int *)(iVar1 + 0x30);
    local_c = (local_4 - local_28) + 1;
    local_8 = iVar2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
    FUN_00412fb0(iVar1,7,iVar4 + 2,&local_10,1,0);
    local_8 = *(int *)(iVar1 + 0x2c);
    local_10 = (local_8 - param_1) + 1;
    local_28 = *(int *)(iVar1 + 0x30) - local_28;
    local_c = local_28 + 1;
    local_4 = local_2c + local_28;
    FUN_00412fb0(iVar1,8,iVar4,&local_10,1,0x400000);
    iVar2 = param_3;
    if (param_2 == 0) {
      FUN_00414e30(iVar1,param_3);
      if (iVar2 == 0) {
        uVar6 = 0xbbb;
        uVar3 = 0xbbc;
      }
      else {
        uVar6 = 0xbbd;
        uVar3 = 0xbbe;
      }
      FUN_00417120(uVar6,&param_2,&local_20);
      FUN_00417120(uVar3,local_14,&param_3);
      *(undefined4 *)(iVar1 + 0x54) = 9;
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_8 = param_2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28);
      local_4 = local_20 + -1 + local_c;
      FUN_00412fb0(iVar1,9,uVar6,&local_10,1,0);
      local_10 = param_2 + param_1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28);
      local_8 = (*(int *)(iVar1 + 0x2c) - param_1) - param_2;
      local_4 = param_3 + -1 + local_c;
      FUN_00412fb0(iVar1,10,uVar3,&local_10,1,0);
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_10 = (local_8 - param_2) + 1;
      local_c = *(int *)(iVar1 + 0x28);
      local_4 = param_3 + -1 + local_c;
      FUN_00412fb0(iVar1,0xb,uVar6,&local_10,1,0x400000);
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_4 = *(int *)(iVar1 + 0x30) - param_3;
      local_c = local_4 + 1;
      local_4 = local_20 + local_4;
      local_8 = param_2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
      FUN_00412fb0(iVar1,0xc,uVar6,&local_10,1,0);
      local_10 = param_2 + param_1 + *(int *)(iVar1 + 0x24);
      local_4 = *(int *)(iVar1 + 0x30);
      local_c = (local_4 - param_3) + 1;
      local_8 = (*(int *)(iVar1 + 0x2c) - param_1) - param_2;
      FUN_00412fb0(iVar1,0xd,uVar3,&local_10,1,0);
      local_4 = *(int *)(iVar1 + 0x30);
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_10 = (local_8 - param_2) + 1;
      local_c = (local_4 - param_3) + 1;
      FUN_00412fb0(iVar1,0xe,uVar6,&local_10,1,0x400000);
      *(int *)(iVar1 + 0x58) = 0xf - *(int *)(iVar1 + 0x54);
    }
  }
  return;
}

