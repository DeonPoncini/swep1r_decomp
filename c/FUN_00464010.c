#include "prototype.h"


void FUN_00464010(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  iVar5 = param_1;
  if (1 < DAT_0050ca18) {
    FUN_0042d510();
    return;
  }
  if ((param_1 == 7) || (param_1 == 5)) goto LAB_004643d8;
  uVar2 = FUN_00446fb0(0x1c);
  FUN_004282f0(0x41,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x49,uVar2);
  }
  uVar2 = FUN_00446fb0(0x6d);
  FUN_004282f0(0x42,uVar2);
  FUN_004282f0(0x43,uVar2);
  FUN_004282f0(0x44,uVar2);
  FUN_004282f0(0x45,uVar2);
  FUN_004282f0(0x46,uVar2);
  FUN_004282f0(0x47,uVar2);
  FUN_004282f0(0x48,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x4a,uVar2);
    FUN_004282f0(0x4b,uVar2);
    FUN_004282f0(0x4c,uVar2);
    FUN_004282f0(0x4d,uVar2);
    FUN_004282f0(0x4e,uVar2);
    FUN_004282f0(0x4f,uVar2);
    FUN_004282f0(0x50,uVar2);
  }
  uVar2 = FUN_00446fb0(0x56);
  FUN_004282f0(0x3f,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x40,uVar2);
  }
  FUN_004287e0(0x3f,0x1e00);
  FUN_00428800(0x3f,1);
  iVar4 = 0x41;
  do {
    FUN_004287e0(iVar4,0x1e00);
    FUN_00428800(iVar4,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x49);
  if (param_1 == 0) {
    FUN_004287e0(0x40,0x1e00);
    FUN_00428800(0x40,1);
    iVar4 = 0x49;
    do {
      FUN_004287e0(iVar4,0x1e00);
      FUN_00428800(iVar4,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x51);
  }
  local_10 = 0xff;
  if (param_1 == 0) {
    local_c = 0xc3b40000;
    local_8 = 0x44000000;
    local_4 = 0x43480000;
    FUN_0042c2e0(1,0x40,&local_c,0x3f666667,0xffffffff,0xffffffdc,0xffffffbe,0xffffffff);
    FUN_00463ec0(1,0x49,0x3f666667);
    local_c = 0xc35c0000;
    local_8 = 0x44000000;
    local_4 = 0x43820000;
    local_14 = 0x3f99999a;
    local_18 = 0xff;
    param_2 = 0xfd;
    param_1 = 0xe1;
  }
  else if (param_1 == 1) {
    local_c = 0x438b10a4;
    local_8 = 0xc2f2051f;
    local_4 = 0x43550ccd;
    local_14 = 0x3e99999a;
    local_18 = 0xcd;
    param_2 = 0xf0;
LAB_0046439c:
    param_1 = 0xff;
  }
  else if (param_1 == 2) {
    local_c = 0;
    local_8 = 0x44000000;
    local_4 = 0x43660000;
    local_14 = 0x3f99999a;
    local_18 = 0xff;
    param_2 = 0xf4;
    param_1 = 0xbe;
  }
  else if (param_1 == 3) {
    local_c = 0x438b10a4;
    local_8 = 0xc2f2051f;
    local_4 = 0x43550ccd;
    local_14 = 0x3fb851ec;
    local_18 = 0xff;
    param_2 = 0xda;
    param_1 = 0xcc;
  }
  else {
    if (param_1 != 4) {
      if (param_1 == 6) {
        local_c = 0xc311147b;
        local_8 = 0x428a4ccd;
        local_4 = 0x42fdf0a4;
        local_14 = 0x3e75c290;
        local_18 = 0xf0;
        param_2 = 0xf0;
      }
      else {
        local_c = 0;
        local_8 = 0x44000000;
        local_4 = 0x43660000;
        local_14 = 0x3f99999a;
        local_18 = 0xff;
        param_2 = 0xff;
      }
      goto LAB_0046439c;
    }
    bVar6 = param_2 != 3;
    local_c = 0xc310e666;
    local_8 = 0x42a80000;
    local_4 = 0x420c0000;
    local_14 = 0x3fb851ec;
    local_18 = 0xff;
    param_2 = 0xe6;
    param_1 = 0xb4;
    if (bVar6) {
      local_10 = 100;
      local_14 = 0x3ef5c290;
      local_18 = 0x80;
      param_2 = 0x73;
      param_1 = 0x5a;
    }
  }
  FUN_0042c2e0(0,0x3f,&local_c,local_14,local_18,param_2,param_1,local_10);
  FUN_00463ec0(0,0x41,local_14);
LAB_004643d8:
  if ((DAT_0050ca18 < 2) && (((iVar5 == 1 || (iVar5 == 4)) && (iVar1 != 3)))) {
    FUN_0042d450();
    FUN_0042d430(0x3f800000);
    FUN_0042d410(0);
    uVar2 = FUN_00446fb0(0x6d);
    iVar4 = 0x51;
    do {
      FUN_004282f0(iVar4,uVar2);
      FUN_004287e0(iVar4,0x1e00);
      FUN_00428800(iVar4,1);
      FUN_0042d460(iVar4 + -0x51,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x8d);
    if (iVar5 == 1) {
      iVar4 = 0x8d;
      do {
        FUN_004282f0(iVar4,uVar2);
        FUN_004287e0(iVar4,0x1e00);
        FUN_00428800(iVar4,1);
        FUN_0042d460(iVar4 + -0x51,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xa1);
      FUN_0042d3e0(0xffffffe6,0xffffffe6,0xffffffff,0xffffffc8);
      if (iVar1 == 0) {
        FUN_0042d410(0);
      }
      else if (iVar1 == 1) {
        FUN_0042d3c0(0x41c80000,0x42340000);
        FUN_0042d410(0x14);
      }
      else if (iVar1 == 2) {
        FUN_0042d3c0(0x41a00000,0x42700000);
        FUN_0042d410(0x28);
        FUN_0042c2d0(0,0xffffff80);
      }
    }
    else {
      FUN_0042d3e0(0xffffffff,0xffffffff,0xffffffff,0x28);
      FUN_0042d430(0x40e00000);
      if (iVar1 == 0) {
        FUN_0042d410(0x14);
        FUN_0042d3c0(0x41200000,0x43960000);
      }
      else {
        FUN_0042d3c0(0x42480000,0x447a0000);
        FUN_0042d410(0x3c);
      }
    }
  }
  else {
    FUN_0042d440();
  }
  if ((iVar5 != 1) || (iVar1 == 3)) {
    uVar2 = FUN_00446fb0(0x7f);
    uVar3 = FUN_00446fb0(0x80);
    iVar5 = 0x97;
    do {
      iVar1 = iVar5 + -10;
      FUN_004282f0(iVar1,uVar3);
      FUN_004287e0(iVar1,0x1f00);
      FUN_00428800(iVar1,1);
      FUN_004282f0(iVar5,uVar2);
      FUN_004287e0(iVar5,0x1f00);
      FUN_00428800(iVar5,1);
      FUN_0042c4e0(iVar5 + -0x97,iVar1,iVar5);
      iVar1 = iVar5 + -0x96;
      iVar5 = iVar5 + 1;
    } while (iVar1 < 10);
  }
  return;
}

