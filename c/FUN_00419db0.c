#include "prototype.h"


void FUN_00419db0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_48;
  int local_44;
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
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = param_1;
  if (param_1 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (param_2 == 0) {
    if ((uVar4 & 0x10000) == 0) {
      uVar3 = 5000;
      uVar5 = 0x1389;
      uVar6 = 5000;
    }
    else {
      uVar3 = 0x1392;
      uVar5 = 0x1393;
      uVar6 = 0x1392;
    }
  }
  else if ((uVar4 & 0x10000) == 0) {
    uVar3 = 0x138a;
    uVar5 = 0x138b;
    uVar6 = 0x138a;
  }
  else {
    uVar3 = 0x1394;
    uVar5 = 0x1395;
    uVar6 = 0x1394;
  }
  if ((uVar4 & 0x20000) == 0) {
    local_48 = 0x138f;
    local_44 = 0x138e;
  }
  else {
    local_44 = 0x138f;
    local_48 = 0x138e;
  }
  if ((uVar4 & 0x10000) == 0) {
    FUN_00417120(uVar6,&param_1,&param_2);
    local_20 = *(int *)(uVar1 + 0x24);
    local_1c = *(int *)(uVar1 + 0x28);
    local_18 = (param_1 - 1) + local_20;
    local_14 = param_2 + -1 + local_1c;
    FUN_00417120(uVar3,&param_1,&param_2);
    local_8 = *(int *)(uVar1 + 0x548) + *(int *)(uVar1 + 0x24);
    local_10 = local_8 - param_1;
    local_c = *(int *)(uVar1 + 0x28);
    local_8 = local_8 + -1;
    local_4 = param_2 + -1 + local_c;
    FUN_00417120(uVar5,&param_1,&param_2);
    local_2c = *(int *)(uVar1 + 0x28);
    local_30 = local_18 + 1;
    local_28 = local_10 + -1;
    local_24 = param_2 + -1 + local_2c;
  }
  else {
    FUN_00417120(uVar6,&param_1,&param_2);
    local_20 = *(int *)(uVar1 + 0x24);
    local_1c = *(int *)(uVar1 + 0x28);
    local_18 = (param_1 - 1) + local_20;
    local_14 = param_2 + -1 + local_1c;
    FUN_00417120(uVar3,&param_1,&param_2);
    local_10 = *(int *)(uVar1 + 0x24);
    local_4 = *(int *)(uVar1 + 0x548) + *(int *)(uVar1 + 0x28);
    local_c = local_4 - param_2;
    local_4 = local_4 + -1;
    local_8 = (param_1 - 1) + local_10;
    FUN_00417120(uVar5,&param_1,&param_2);
    local_30 = *(int *)(uVar1 + 0x24);
    local_28 = (param_1 - 1) + local_30;
    local_2c = local_14 + 1;
    local_24 = local_c + -1;
  }
  if ((*(byte *)(uVar1 + 0x22) & 1) == 0) {
    local_3c = local_2c + 0xf;
    local_34 = local_24 + -0xf;
    local_40 = local_30 + -7;
    local_38 = local_28 + 7;
  }
  else {
    local_3c = local_2c + -7;
    local_34 = local_24 + 7;
    local_40 = local_30 + 0xf;
    local_38 = local_28 + -0xf;
  }
  FUN_00412fb0(uVar1,0,0x3f1,&local_40,1,0);
  FUN_00413090(uVar1,0,0,0,0,0x82);
  FUN_00412fb0(uVar1,1,uVar6,&local_20,1,0);
  FUN_00412fb0(uVar1,2,uVar5,&local_30,1,0);
  iVar7 = 4;
  FUN_00412fb0(uVar1,3,uVar3,&local_10,1,
               (-(uint)((*(uint *)(uVar1 + 0x20) & 0x10000) != 0) & 0xffe00000) + 0x400000);
  if ((*(uint *)(uVar1 + 0x20) & 0x200100) == 0) {
    FUN_00417150(local_48,&local_40);
    FUN_0041a9a0(&local_40,&local_20,1,1);
    FUN_00412fb0(uVar1,4,local_48,&local_40,1,0);
    iVar2 = local_44;
    FUN_00417150(local_44,&local_40);
    FUN_0041a9a0(&local_40,&local_10,1,1);
    iVar7 = 6;
    FUN_00412fb0(uVar1,5,iVar2,&local_40,1,0);
  }
  if ((*(uint *)(uVar1 + 0x20) & 0x80000) != 0) {
    if ((*(uint *)(uVar1 + 0x20) & 0x100000) == 0) {
      uVar4 = (uint)(((local_28 - local_30) + 1) * *(int *)(uVar1 + 0x54c)) / 100;
      FUN_00417120(0x138d,0,&local_44);
      local_40 = local_30;
      local_38 = (uVar4 - 1) + local_30;
      local_34 = local_44 + -1;
      local_3c = 0;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) != 0) {
        FUN_00417900(&local_40,(local_28 - local_38) + local_40,local_3c);
      }
      FUN_00412fb0(uVar1,iVar7,0x138d,&local_40,1,(*(uint *)(uVar1 + 0x20) & 0x20000) << 5);
      if ((*(uint *)(uVar1 + 0x20) & 0x40000) == 0) goto LAB_0041a5e5;
      FUN_00417120(0x1390,&param_1,&param_2);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) == 0) {
        local_38 = uVar4 - (param_1 >> 1);
        local_40 = local_30 + local_38;
        local_38 = param_1 + local_30 + -1 + local_38;
      }
      else {
        local_40 = ((local_28 - uVar4) - (param_1 >> 1)) + 1;
        local_38 = ((param_1 - uVar4) + local_28) - (param_1 >> 1);
      }
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      iVar2 = iVar7 + 2;
      FUN_00412fb0(uVar1,iVar7 + 1,0x1390,&local_40,1,(*(uint *)(uVar1 + 0x20) & 0x20000) << 5);
      FUN_00417120(0x1391,&param_1,&param_2);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) == 0) {
        local_38 = uVar4 - (param_1 >> 1);
        local_40 = local_30 + local_38;
        local_38 = param_1 + local_30 + -1 + local_38;
      }
      else {
        local_40 = ((local_28 - uVar4) - (param_1 >> 1)) + 1;
        local_38 = ((param_1 - uVar4) + local_28) - (param_1 >> 1);
      }
      local_34 = param_2 + -1 + local_2c;
      local_3c = local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      iVar7 = (*(uint *)(uVar1 + 0x20) & 0x20000) << 5;
      uVar3 = 0x1391;
    }
    else {
      FUN_00417120(0x1390,&param_1,&param_2);
      local_38 = ((local_28 - local_30) + 1 >> 1) - (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      FUN_00412fb0(uVar1,iVar7,0x1390,&local_40,1,0);
      local_38 = (uint)(((local_28 - local_30) + 1) * (*(int *)(uVar1 + 0x554) + 100)) / 200 -
                 (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      FUN_00412fb0(uVar1,iVar7 + 1,0x1391,&local_40,1,0);
      FUN_00417120(0x138c,&param_1,&param_2);
      iVar2 = ((local_28 - local_30) + 1 >> 1) - (param_1 >> 1);
      local_40 = local_30 + iVar2;
      local_38 = param_1 + local_30 + -1 + iVar2;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      uVar4 = (uint)(*(int *)(uVar1 + 0x550) * (iVar2 + -4)) / 100;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,-4 - uVar4,0);
      iVar2 = iVar7 + 3;
      FUN_00412fb0(uVar1,iVar7 + 2,0x138c,&local_40,1,0);
      local_38 = ((local_28 - local_30) + 1 >> 1) + (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,uVar4 - 0xf,0);
      iVar7 = 0x400000;
      uVar3 = 0x138c;
    }
    FUN_00412fb0(uVar1,iVar2,uVar3,&local_40,1,iVar7);
  }
LAB_0041a5e5:
  local_40 = local_20;
  local_38 = local_8;
  local_34 = local_14;
  if ((*(uint *)(uVar1 + 0x20) & 0x10000) != 0) {
    local_38 = local_18;
    local_34 = local_4;
  }
  local_3c = local_1c;
  FUN_00414b40(uVar1,(local_38 - local_20) + 1,(local_34 - local_1c) + 1);
  return;
}

