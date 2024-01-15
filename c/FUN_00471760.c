#include "prototype.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471760(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float local_ec;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined local_bc [8];
  float local_b4;
  undefined local_b0 [8];
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];
  
  bVar7 = false;
  local_a4 = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    FUN_0044bb10(local_40,param_1 + 0x20);
    bVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe;
    if (bVar8) {
      local_a4 = 1;
    }
    if ((*(int *)(*(int *)(param_1 + 0x344) + 0xc) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x344) + 0x10) != 0)) {
      bVar7 = true;
    }
    if (!bVar8) {
      FUN_0042f7d0(local_bc,param_1 + 0x3c0);
      FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
      local_d8 = -local_d8;
      FUN_00430980(&local_d8,&local_d8,param_1 + 0x390);
      FUN_0042f830(local_bc,&local_d8,local_bc);
      if (bVar7) {
        FUN_0042f7d0(local_b0,param_1 + 0x480);
        FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c)
        ;
        FUN_00430980(&local_d8,&local_d8,param_1 + 0x450);
        FUN_0042f830(local_b0,&local_d8,local_b0);
        local_b4 = local_b4 + *(float *)(param_1 + 0x250);
        local_a8 = local_a8 + *(float *)(param_1 + 0x250);
        FUN_00472750(param_1,2,local_bc,local_b0);
        FUN_0042f7d0(local_bc,param_1 + 0x440);
        FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c)
        ;
        local_d8 = -local_d8;
        FUN_00430980(&local_d8,&local_d8,param_1 + 0x410);
        FUN_0042f830(local_bc,&local_d8,local_bc);
      }
      FUN_0042f7d0(local_b0,param_1 + 0x400);
      FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
      FUN_00430980(&local_d8,&local_d8,param_1 + 0x3d0);
      FUN_0042f830(local_b0,&local_d8,local_b0);
      local_b4 = local_b4 + *(float *)(param_1 + 0x250);
      local_a8 = local_a8 + *(float *)(param_1 + 0x250);
      FUN_00472750(param_1,1,local_bc,local_b0);
    }
    local_cc = *(float *)(param_1 + 0x1a0) * _DAT_004adb0c;
    if (_DAT_004ad958 < local_cc) {
      local_cc = 1.0;
    }
    if (local_cc < _DAT_004ad968) {
      local_cc = 0.0;
    }
    local_a0 = FUN_0042b560(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x114));
    local_9c = FUN_0042b560(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x118));
    FUN_0044bb10(local_98,param_1 + 0x390);
    FUN_0042f7d0(&local_d8,&DAT_004c70dc + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
    FUN_00430980(&local_d8,&local_d8,local_98);
    local_68 = local_d8 + local_68;
    local_64 = local_d4 + local_64;
    local_60 = local_d0 + local_60;
    local_88 = *(undefined4 *)(param_1 + 0x3b0);
    local_84 = *(undefined4 *)(param_1 + 0x3b4);
    local_80 = *(undefined4 *)(param_1 + 0x3b8);
    local_78 = *(undefined4 *)(param_1 + 0x3a0);
    local_74 = *(undefined4 *)(param_1 + 0x3a4);
    local_70 = *(undefined4 *)(param_1 + 0x3a8);
    FUN_0044bb10(param_1 + 0x1410,local_98);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1410);
    }
    FUN_0044bb10(local_98,param_1 + 0x3d0);
    FUN_0042f7d0(&local_d8,&DAT_004c70dc + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
    local_d8 = local_d8 * _DAT_004ad9c0;
    FUN_00430980(&local_d8,&local_d8,local_98);
    local_68 = local_d8 + local_68;
    local_64 = local_d4 + local_64;
    local_60 = local_d0 + local_60;
    local_88 = *(undefined4 *)(param_1 + 0x3f0);
    local_84 = *(undefined4 *)(param_1 + 0x3f4);
    local_80 = *(undefined4 *)(param_1 + 0x3f8);
    local_78 = *(undefined4 *)(param_1 + 0x3e0);
    local_74 = *(undefined4 *)(param_1 + 0x3e4);
    local_70 = *(undefined4 *)(param_1 + 1000);
    FUN_0044bb10(param_1 + 0x1450,local_98);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1450);
    }
    fVar3 = *(float *)(&DAT_004c70e8 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c) *
            _DAT_004ad9c4;
    fVar1 = -((local_cc * _DAT_004ada44 - _DAT_004adb14) * _DAT_004ad9c4);
    local_c0 = fVar1;
    FUN_004310b0(param_1 + 0x1490,fVar3,fVar3,fVar1);
    FUN_004310b0(param_1 + 0x14d0,fVar3,fVar3,fVar1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x114);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1490);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x118);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x14d0);
    }
    iVar2 = local_a0;
    pfVar5 = (float *)(param_1 + 0x294);
    iVar6 = 3;
    local_e8 = _DAT_004ad958 - *(float *)(param_1 + 0x218) * _DAT_004ada18;
    fVar1 = local_e8;
    do {
      if (local_e8 < pfVar5[-3]) {
        local_e8 = pfVar5[-3];
      }
      if (fVar1 < *pfVar5) {
        fVar1 = *pfVar5;
      }
      if ((*(byte *)(pfVar5 + 3) & 8) != 0) {
        local_e8 = 1.0;
      }
      if ((*(byte *)(pfVar5 + 6) & 8) != 0) {
        fVar1 = _DAT_004ad958;
      }
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_e8 = (local_e8 - _DAT_004ad95c) + (local_e8 - _DAT_004ad95c);
    if (local_e8 < _DAT_004ad968) {
      local_e8 = 0.0;
    }
    else if (_DAT_004ad958 < local_e8) {
      local_e8 = 1.0;
    }
    fVar1 = local_e8 * _DAT_004adad4;
    if (_DAT_004ad958 < local_e8 * _DAT_004adad4) {
      fVar1 = _DAT_004ad958;
    }
    local_c0 = *(float *)(param_1 + 0x1a0) * _DAT_004adb30;
    local_c4 = fVar1 * _DAT_004adb28 - _DAT_004adb28;
    if ((*(uint *)(param_1 + 100) & 0x4000) != 0) {
      local_c4 = 0.0;
    }
    local_c8 = local_c4;
    if (_DAT_004ad968 <= local_c4) {
      if (_DAT_004ada2c < local_c4) {
        local_c4 = 255.0;
      }
    }
    else {
      local_c4 = 0.0;
    }
    if (local_c8 < _DAT_004ad968) {
      local_c8 = 0.0;
    }
    else if (_DAT_004ada2c < local_c8) {
      local_c8 = 255.0;
    }
    if (local_a0 != 0) {
      uVar4 = __ftol();
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0042b5e0(iVar2,0,0,uVar4);
      FUN_0044fc00(iVar2,0,(local_cc * _DAT_004adb34 - _DAT_004ad9e4) * (float)_DAT_00e22a40);
    }
    iVar2 = local_9c;
    if (local_9c != 0) {
      uVar4 = __ftol();
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0042b5e0(iVar2,0,0,uVar4);
      FUN_0044fc00(iVar2,0,(local_cc * _DAT_004adb34 - _DAT_004ad9e4) * (float)_DAT_00e22a40);
    }
    if (DAT_00ec86b4 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
    }
    if (DAT_00ec86b4 == 1) {
      bVar7 = (*(uint *)(param_1 + 0x60) & 0x80) != 0;
      FUN_0046fd60(param_1,param_1 + 0x1310,0x3dcccccd,0xbdcccccd,0xbdcccccd,0x41200000,bVar7);
      FUN_0046fd60(param_1,param_1 + 0x12d0,0x3dcccccd,0xbdcccccd,0x3dcccccd,0x41200000,bVar7);
    }
    if (((local_a4 == 0) && (*(int *)(param_1 + 0x1998) < 0x4c)) && (*(int *)(param_1 + 0x344) != 0)
       ) {
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x28) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x390,0x3f800000,0x3f800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x5d0);
        *(float *)(param_1 + 0x608) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x608);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x28),param_1 + 0x5d0);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x2c) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x3d0,0xbf800000,0x3f800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x610);
        *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x648);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x2c),param_1 + 0x610);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x30) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x410,0x3f800000,0xbf800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x650);
        *(float *)(param_1 + 0x688) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x688);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x30),param_1 + 0x650);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x34) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x450,0xbf800000,0xbf800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x690);
        *(float *)(param_1 + 0x6c8) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x6c8);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x34),param_1 + 0x690);
      }
      if ((*(int *)(param_1 + 0x1998) < 0x33) && (*(int *)(param_1 + 0x344) != 0)) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x1000000;
        FUN_0042f7b0(local_4c,0,0,0);
        FUN_0042f7b0(local_58,0,0,0);
        fVar1 = *(float *)(param_1 + 0x1ec) * _DAT_004adb38;
        local_ec = 0.3;
        if ((float)_DAT_004adb20 < fVar1) {
          local_ec = fVar1 * _DAT_004ad988;
        }
        if ((float)_DAT_004adb20 < local_ec) {
          local_ec = 1.0;
        }
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x28),local_4c,local_58,local_ec,
                     0x3f800000,(float)*(int *)(param_1 + 0x1998),0x42480000,0);
        FUN_0042f7b0(local_4c,0,0,0);
        FUN_0042f7b0(local_58,0,0,0);
        fVar1 = *(float *)(param_1 + 0x1ec) * _DAT_004adb3c;
        local_ec = 0.3;
        if ((float)_DAT_004adb20 < fVar1) {
          local_ec = fVar1 * _DAT_004ad988;
        }
        if ((float)_DAT_004adb20 < local_ec) {
          local_ec = 1.0;
        }
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x2c),local_4c,local_58,local_ec,
                     0x3f800000,(float)*(int *)(param_1 + 0x1998),0x42480000,0);
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x28);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x2c);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
    }
  }
  return;
}

