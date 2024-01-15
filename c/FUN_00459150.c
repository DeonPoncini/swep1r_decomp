#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459150(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  short sVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  local_7c = 0x462be000;
  local_70 = 0x41200000;
  local_64 = _DAT_004c3fb8;
  FUN_00428820(0x3800);
  DAT_0050c930 = 0;
  DAT_00e295a4 = 0;
  DAT_00e295a8 = 0;
  DAT_00e295ac = 0;
  DAT_00e295a0 = 0;
  DAT_00e295b0 = 0;
  DAT_00e295b4 = 0;
  DAT_00e295b8 = 0;
  DAT_00e295bc = 0;
  DAT_00e295c0 = 0;
  DAT_00e295c4 = 0;
  local_54 = 0x42a00000;
  local_50 = 0x42960000;
  local_4c = 0x42480000;
  local_3c = 0x437f0000;
  local_38 = 0x437f0000;
  local_34 = 0x43480000;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0xc71c4000;
  FUN_0042f7b0(local_30,0,0x3f800000,0);
  FUN_0042f7b0(local_24,0,0,0);
  FUN_0042f7b0(local_18,0,0x3f800000,0);
  FUN_0042f7b0(local_c,0,0,0);
  FUN_00431060(&DAT_00e2af00,local_30);
  FUN_00431060(&DAT_00e298c0,local_30);
  FUN_00431060(&DAT_00e2af60,local_18);
  FUN_0044e0c0(0);
  *(undefined4 *)(param_1 + 0x34) = 0x24;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  sVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      iVar2 = FUN_00450b30(0x456c6d6f,sVar5 + 0x1c);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < *(char *)(param_1 + 0x70));
  }
  if ((*(int *)(param_1 + 0x38) == 3) && (*(int *)(param_1 + 0x3c) != 3)) {
    FUN_0042f7d0(&local_60,&DAT_004c457c);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * _DAT_004acfa8 * _DAT_004ad050;
    FUN_00468800(0x38,0x11,&local_60,&local_60,fVar1,fVar1);
    FUN_004816b0();
    iVar2 = __ftol();
    FUN_0042f7d0(&local_60,&DAT_004c4510 + (10 - iVar2) * 3);
    iVar3 = FUN_00450b30(0x456c6d6f,0x39);
    if (*(int *)(iVar3 + 8) == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x11;
    }
    FUN_00468800(0x39,uVar8,&local_60,&local_60,fVar1,fVar1);
    do {
      FUN_004816b0();
      iVar3 = __ftol();
      iVar3 = 10 - iVar3;
    } while (iVar3 == 10 - iVar2);
    *(char *)(param_1 + 0x50) = (char)iVar3 + -9;
    FUN_0042f7d0(&local_60,&DAT_004c4510 + iVar3 * 3);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * _DAT_004acfa8 * _DAT_004ad050;
    FUN_00468800(0x17,0x2e,&local_60,&local_60,fVar1,fVar1);
    FUN_0042f7d0(&local_60,&DAT_004c4570);
    FUN_00468800(0x16,0x2a,&local_60,&local_60,0x433e147b,0x433e147b);
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 4:
    local_70 = 0x3f4ccccd;
    local_54 = 0x42f00000;
    local_50 = 0x43070000;
    local_4c = 0x430c0000;
    *(undefined4 *)(param_1 + 0x34) = 4;
    sVar5 = 4;
    do {
      if ((&DAT_004c4028)[sVar5 * 0x10] == 4) {
        *(int *)(param_1 + 0x34) = (int)sVar5;
        break;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < 0x13);
    sVar5 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      do {
        iVar3 = (int)sVar5;
        FUN_0042f7b0(&local_60,(float)_DAT_004ad0f8 - (float)iVar3 * (float)_DAT_004ad0d0,0xc40e4000
                     ,0xc3110000);
        FUN_0045cb80(param_1,iVar3);
        iVar2 = *(int *)(param_1 + 0x34) * 0x20;
        fVar7 = (float10)FUN_0042f560(*(float *)(&DAT_004c401c + iVar2) -
                                      *(float *)(&DAT_004c4010 + iVar2),
                                      *(float *)(iVar2 + 0x4c4014) -
                                      *(float *)(&DAT_004c4020 + iVar2));
        FUN_00468800(iVar3 + 0x1c,0x14,&local_60,&DAT_00e298a0,(float)fVar7,
                     (float)(fVar7 - (float10)_DAT_004ad100));
        sVar5 = sVar5 + 1;
      } while (sVar5 < *(char *)(param_1 + 0x70));
    }
    FUN_0042f7d0(&local_60,&DAT_004c407c);
    local_58 = 0xc2fa0000;
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c454c);
    fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    FUN_00468800(0x15,0x1e,&local_60,&DAT_00e298a0,(float)fVar7,
                 (float)(fVar7 - (float10)_DAT_004ad108));
    FUN_0042f7b0(&local_60,0,0,0);
    sVar5 = 0;
    if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
      iVar2 = 0;
      do {
        FUN_00468800(iVar2 + 0x34,0,&local_60,&local_60,0,0);
        sVar5 = sVar5 + 1;
        iVar2 = (int)sVar5;
      } while (iVar2 < (int)(4 - (DAT_00e35aa0 & 0xff)));
    }
    FUN_0042f7d0(&local_60,&DAT_004c45c4);
    iVar2 = FUN_004409d0(&DAT_00e35a60,&DAT_004c484c);
    if (iVar2 == 0) {
      iVar2 = FUN_004409d0(&DAT_00e35a60,&DAT_004c4848);
      if (iVar2 != 0) {
        local_5c = local_5c - _DAT_004ad090;
        FUN_00468800(0x14,0x29,&local_60,&local_60,0x43400000,0x43400000);
      }
    }
    else {
      FUN_00468800(0x13,0x28,&local_60,&local_60,0x43340000,0x43340000);
    }
    break;
  case 7:
    local_70 = 0x40a00000;
    if (DAT_0050c47c == 2) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else if (DAT_0050c47c == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
    if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 0x34) = 2;
    }
    FUN_0042f7d0(&local_60,&DAT_004c4540);
    FUN_0042f7d0(&DAT_00e298a0,&local_60);
    fVar7 = (float10)FUN_0042f560(local_60 - _DAT_004acfa0,_DAT_004ad0c0 - local_5c);
    fVar1 = (float)fVar7;
    uVar8 = 0x1d;
    if (*(int *)(param_1 + 0xc) == 4) {
      FUN_0042f7d0(&local_60,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
      local_58 = 0xc2200000;
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
      uVar8 = 0x1e;
    }
    local_80 = (float)fVar7;
    FUN_00468800(0x15,uVar8,&local_60,&DAT_00e298a0,local_80,fVar1);
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c4540);
    FUN_004816b0();
    iVar2 = __ftol();
    if (iVar2 == 0) {
      FUN_0042f7d0(&local_60,&DAT_004c45ac);
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
      iVar2 = FUN_004816b0();
      fVar7 = (float10)(float)fVar7 -
              (float10)iVar2 * (float10)_DAT_004acfa8 * (float10)_DAT_004ad0c8;
    }
    else {
      FUN_0042f7d0(&local_60,&DAT_004c45b8);
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    }
    FUN_004816b0();
    iVar2 = __ftol();
    if ((uint)-iVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x004596e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_0045a028)[-iVar2])();
      return;
    }
    FUN_00468800(-iVar2 + 0x17,uVar8,&local_60,&local_60,(float)fVar7,(float)fVar7);
    sVar5 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      do {
        FUN_0042f7b0(&local_60,(float)_DAT_004ad0d8 - (float)(int)sVar5 * (float)_DAT_004ad0d0,
                     0xc3480000,0xc2700000);
        if (*(int *)(param_1 + 0xc) == 4) {
          FUN_0042f7d0(&local_60,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
        }
        local_58 = 0xc2700000;
        FUN_0042f7b0(&local_60,0xc1a00000,0xc2c80000,0xc2700000);
        FUN_0042f7b0(&DAT_00e298a0,0,0,0xc2700000);
        fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
        FUN_00468800(sVar5 + 0x1c,0x13,&local_60,&DAT_00e298a0,(float)fVar7,(float)fVar7);
        sVar5 = sVar5 + 1;
      } while (sVar5 < *(char *)(param_1 + 0x70));
    }
    sVar5 = 0;
    if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
      iVar2 = 0;
      do {
        FUN_0042f380((float)((0x1d - iVar2) * 10),&local_6c,&local_68);
        FUN_0042f7b0(&local_60,_DAT_004acfa0 - local_68 * _DAT_004ad0e4,
                     _DAT_004ad0c0 - local_6c * _DAT_004ad0e4,0xc2700000);
        fVar7 = (float10)FUN_0042f560(local_60 - _DAT_004acfa0,_DAT_004ad0c0 - local_5c);
        FUN_00468800(iVar2 + 0x34,5,&local_60,&local_60,(float)fVar7,(float)fVar7);
        sVar5 = sVar5 + 1;
        iVar2 = (int)sVar5;
      } while (iVar2 < (int)(4 - (DAT_00e35aa0 & 0xff)));
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x34) = 0x14;
    local_7c = 0x47a41000;
    DAT_00e295cc = 7;
    break;
  case 9:
    if (*(int *)(param_1 + 0xc) == 0xc) {
      *(undefined4 *)(param_1 + 0x34) = 0x25;
    }
    DAT_00e295a4 = 1;
    DAT_00e295a8 = 1;
    break;
  case 0xc:
    bVar6 = *(int *)(param_1 + 0xc) == 0xd;
    goto LAB_004594aa;
  case 0xd:
    bVar6 = *(int *)(param_1 + 0xc) == 0xc;
LAB_004594aa:
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x34) = 0x25;
      DAT_00e295a0 = 0x3f800000;
    }
    DAT_00e295a4 = 1;
    break;
  case 0xf:
    local_7c = 0x47a41000;
    *(undefined4 *)(param_1 + 0x34) = 0x14;
    iVar3 = 0x1c;
    local_78 = 0;
    local_74 = 0xb4;
    iVar2 = 2;
    do {
      FUN_0042f7b0(&DAT_00e298a0,0x43480000,0xc3960000,0xc31d0000);
      _DAT_00e298a4 = _DAT_00e298a4 - (float)local_78;
      FUN_00468800(iVar3,0x14,&DAT_00e298a0,&DAT_00e298a0,(float)local_74,(float)local_74);
      local_78 = local_78 + 200;
      local_74 = local_74 + -0xb4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    break;
  case 0x10:
    local_7c = 0x47a41000;
    sVar5 = 0;
    do {
      FUN_0042f7b0(&DAT_00e298a0,0,(float)(int)sVar5 * _DAT_004ad10c,0);
      if (sVar5 == 2) {
        _DAT_00e298a4 = _DAT_00e298a4 - _DAT_004ad110;
      }
      FUN_00468800(sVar5 + 0x1c,0x1c,&DAT_00e298a0,&DAT_00e298a0,0xc2b40000,0xc2b40000);
      sVar5 = sVar5 + 1;
    } while (sVar5 < 3);
    break;
  case 0x11:
    local_7c = 0x47a41000;
    *(undefined4 *)(param_1 + 0x34) = 0x1a;
    FUN_0042f7b0(&local_60,0,0xc47a0000,0xc31d0000);
    FUN_00468800(0x34,0x10,&local_60,&local_60,0,0);
    break;
  case 0x12:
    if (*(char *)(param_1 + 0x6c) == '\0') {
      uVar4 = 0x38;
      uVar8 = 0x39;
    }
    else {
      uVar4 = 0x39;
      uVar8 = 0x38;
    }
    *(undefined4 *)(param_1 + 0x34) = 0x27;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    DAT_00e295a0 = 0x3f800000;
    DAT_00e295a4 = 1;
    FUN_0042f7d0(&local_60,&DAT_004c4490);
    FUN_0042fac0(&local_60,0x3f19999a,&DAT_004c4490,0x3ecccccd,&DAT_004c449c);
    local_58 = 0xc2700000;
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c449c);
    fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    fVar1 = (float)fVar7;
    iVar2 = FUN_00450b30(0x456c6d6f,uVar4);
    if (*(int *)(iVar2 + 8) == 1) {
      FUN_00468800(uVar4,2,&local_60,&local_60,fVar1,fVar1);
    }
    else {
      FUN_00468800(uVar4,0x11,&local_60,&local_60,fVar1,fVar1);
      *(undefined4 *)(iVar2 + 0xac) = 0x42c80000;
    }
    FUN_0042f7d0(&local_60,&DAT_004c457c);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * _DAT_004acfa8 * _DAT_004ad050;
    iVar2 = FUN_00450b30(0x456c6d6f,uVar8);
    if (*(int *)(iVar2 + 8) == 1) {
      FUN_00468800(uVar8,0,&local_60,&local_60,fVar1,fVar1);
    }
    else {
      FUN_00468800(uVar8,0x11,&local_60,&local_60,fVar1,fVar1);
    }
  }
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_004831d0(DAT_004c3fb0,8,8,0x138,0xe8);
  uVar8 = local_64;
  FUN_00483230(DAT_004c3fb0,local_64);
  uVar4 = FUN_004318d0(DAT_004c3fb0);
  FUN_00428b40(uVar8,uVar4);
  FUN_00428a60(CONCAT22(extraout_var,DAT_004c3fb4),1,&DAT_00e2af00,0);
  FUN_00428a60(CONCAT22(extraout_var_00,DAT_004c3fb8),2,&DAT_00e298c0,0);
  FUN_00428b10(CONCAT22(extraout_var_01,DAT_004c3fb8),&DAT_00e2af60,0);
  FUN_00483590(DAT_004c3fb0,0x42340000,0xbf800000,local_70,local_7c,0xbf800000);
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_0042f7d0(&DAT_00e298f0,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
    FUN_0042f7d0(&DAT_00e2af90,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
  }
  FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e29b60,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
  FUN_0044bb10(&DAT_00e2b440,&DAT_00e2af60);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e29ba0);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e2b420);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e2b200);
  if (*(int *)(param_1 + 0x38) != 3) {
    FUN_00483840(0xffffffff,&local_54,&local_3c,&local_48);
  }
  return;
}

