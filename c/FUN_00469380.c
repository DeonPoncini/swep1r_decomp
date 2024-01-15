#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float local_f4;
  float local_f0;
  undefined local_ec [48];
  undefined local_bc [8];
  float local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined local_70 [8];
  undefined4 local_68;
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [8];
  float local_8;
  
  local_f4 = DAT_00e295a0;
  local_f0 = 0.0;
  if (DAT_00e295a4 == 0) {
    local_f4 = 0.0;
  }
  local_94 = 0x42a00000;
  local_90 = 0x42960000;
  local_8c = 0x42480000;
  local_ac = 0x436b0000;
  local_a8 = 0x42c80000;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0xc2c80000;
  local_98 = 0x43c80000;
  local_7c = 0x41a00000;
  local_78 = 0x42820000;
  local_74 = 0x42200000;
  local_88 = 0x437f0000;
  local_84 = 0x437f0000;
  local_80 = 0x43480000;
  FUN_0042f860(local_70,&DAT_00e2af90,&DAT_00e298f0);
  fVar6 = (float)_DAT_004ad6c8 - local_f4;
  local_68 = 0x43c80000;
  FUN_0042fac0(local_4c,fVar6,&local_94,local_f4,&local_7c);
  FUN_0042fac0(local_58,fVar6,&local_ac,local_f4,&local_88);
  FUN_0042fac0(local_64,fVar6,&local_a0,local_f4,local_70);
  FUN_00483840(0xffffffff,local_4c,local_58,local_64);
  fVar6 = DAT_00e295a0;
  local_f4 = DAT_00e295a0;
  iVar1 = FUN_00450b30(0x456c6d6f,4);
  if (DAT_004c7078 == -1) {
    DAT_004c7078 = param_1;
    FUN_00469b50(&DAT_0050cab8,iVar1,2);
    FUN_00469b50(&DAT_0050ca98,iVar1,8);
    FUN_00469b50(&DAT_0050cac8,iVar1,4);
    FUN_00469b50(&DAT_0050caa8,iVar1,5);
  }
  DAT_0050cadc = DAT_0050cadc - _DAT_00e22a50 * _DAT_004ad6d0;
  if (_DAT_004ad5c4 < DAT_0050cadc) {
    DAT_0050cadc = DAT_0050cadc - _DAT_004ad5c4;
  }
  if (fVar6 == _DAT_004ad590) {
    DAT_0050cadc = 0.0;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 8);
  if (iVar4 != 0) {
    if (DAT_00e295a4 == 0) {
      local_f4 = 0.0;
    }
    FUN_00431020(local_ec,DAT_0050cadc,0,0);
    FUN_00431450(local_ec,0x3fc00000,0x3fc00000,0x3fc00000,local_ec);
    if (_DAT_004ad5e4 <= local_f4) {
      fVar6 = 1.0;
      fVar5 = (local_f4 - _DAT_004ad5e4) + (local_f4 - _DAT_004ad5e4);
    }
    else {
      fVar6 = local_f4 + local_f4;
      fVar5 = 0.1;
    }
    FUN_00431450(local_ec,fVar5,fVar5,fVar6,local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050cab8);
    FUN_00431640(iVar4,local_ec);
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
    iVar3 = FUN_0042b560(iVar4);
    if (iVar3 != 0) {
      FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
    }
    if (local_f4 <= _DAT_004ad590) {
      uVar7 = 3;
      uVar2 = 0xfffffffc;
    }
    else {
      uVar7 = 2;
      uVar2 = 3;
    }
    FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x20);
  if (iVar4 != 0) {
    if (DAT_00e295a8 == 0) {
      local_f4 = 0.0;
    }
    FUN_00431020(local_ec,DAT_0050cadc,0,0);
    FUN_00431450(local_ec,0x3fc00000,0x3fc00000,0x3fc00000,local_ec);
    if (_DAT_004ad5e4 <= local_f4) {
      fVar6 = 1.0;
      fVar5 = (local_f4 - _DAT_004ad5e4) + (local_f4 - _DAT_004ad5e4);
    }
    else {
      fVar6 = local_f4 + local_f4;
      fVar5 = 0.1;
    }
    FUN_00431450(local_ec,fVar5,fVar5,fVar6,local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050ca98);
    FUN_00431640(iVar4,local_ec);
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
    iVar3 = FUN_0042b560(iVar4);
    if (iVar3 != 0) {
      FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
    }
    if (local_f4 <= _DAT_004ad590) {
      uVar7 = 3;
      uVar2 = 0xfffffffc;
    }
    else {
      uVar7 = 2;
      uVar2 = 3;
    }
    FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
  }
  if (DAT_00e295a8 != 0) {
    local_f0 = DAT_00e295a0;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x14);
  if (iVar4 != 0) {
    FUN_004313d0(local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050caa8);
    local_b4 = local_b4 - (_DAT_004ad670 - local_f0) * _DAT_004ad6dc;
    FUN_00431640(iVar4,local_ec);
    iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x18);
    if (iVar4 != 0) {
      if (local_f0 <= _DAT_004ad590) {
        uVar7 = 3;
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_004816b0();
        uVar2 = __ftol();
        FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
        iVar3 = FUN_0042b560(iVar4);
        if (iVar3 != 0) {
          FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
        }
        uVar7 = 2;
        uVar2 = 3;
      }
      FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
    }
    iVar4 = FUN_00450b30(0x456c6d6f,0x1c);
    FUN_004313d0(local_40);
    FUN_004816f0((*(undefined4 **)(iVar1 + 0x30))[5],local_40,**(undefined4 **)(iVar1 + 0x30),
                 local_40);
    local_8 = local_8 - _DAT_004ad6e0;
    if (local_f0 == _DAT_004ad670) {
      FUN_0042fac0(local_10,0x3f400000,&DAT_004c4490,0x3e800000,local_10);
      local_f0 = local_f0 * _DAT_004ad620;
    }
    FUN_0044b270(*(undefined4 *)(iVar4 + 0x30),local_10);
    FUN_0044b180(*(undefined4 *)(iVar4 + 0x30),*(float *)(iVar4 + 0x94) * local_f0,
                 DAT_0050cadc * _DAT_004ad6e4);
  }
  fVar6 = DAT_00e295ac;
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x10);
  if (iVar4 != 0) {
    FUN_004313d0(local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050cac8);
    local_b4 = local_b4 - (_DAT_004ad670 - fVar6) * _DAT_004ad6dc;
    FUN_00431640(iVar4,local_ec);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x30) + 0x1c);
    if (iVar1 != 0) {
      if (_DAT_004ad590 < fVar6) {
        FUN_004816b0();
        uVar2 = __ftol();
        FUN_0042b640(iVar1,0,0,0,0xff,0,uVar2);
        iVar4 = FUN_0042b560(iVar1);
        if (iVar4 != 0) {
          FUN_0044fc00(iVar4,0x3de147ae,0x3de147ae);
        }
        FUN_00431a50(iVar1,2,3,0x10,2);
        return;
      }
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
  }
  return;
}

