#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470ae0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined local_12c [48];
  undefined local_fc [8];
  float local_f4;
  float local_ec;
  int local_e8;
  undefined local_e4 [16];
  float local_d4;
  float local_d0;
  float local_cc;
  undefined local_c4 [16];
  undefined local_b4 [16];
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];
  
  local_e8 = 0;
  FUN_0044bb10(local_e4,param_1 + 0x20);
  if (DAT_0050ca3c != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000;
  }
  uVar6 = *(uint *)(param_1 + 0x60) & 0x84000;
  if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e90 & 0x1000) != 0)) {
    uVar6 = 1;
  }
  iVar4 = (int)local_ec;
  if (DAT_0050ccf0 != 0) {
    iVar4 = FUN_0045d350();
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = FUN_0045d3d0(*(undefined4 *)(param_1 + 0x1e70));
    }
  }
  if (*(int **)(param_1 + 0x344) == (int *)0x0) {
    FUN_00431450(param_1 + 0x15d0,0x3b83126f,0x3b83126f,0x3b83126f,local_e4);
    if ((uVar6 == 0) || ((*(uint *)(param_1 + 0x60) & 0x5800) == 0)) {
      if (*(int *)(param_1 + 0x348) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x348),2,3,0x10,2);
      }
      iVar5 = *(int *)(param_1 + 0x34c);
      if (iVar5 == 0) goto LAB_00470c11;
      uVar10 = 2;
      uVar9 = 3;
    }
    else {
      if (*(int *)(param_1 + 0x348) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x348),2,0xfffffffc,0x10,3);
      }
      iVar5 = *(int *)(param_1 + 0x34c);
      if (iVar5 == 0) goto LAB_00470c11;
      uVar10 = 3;
      uVar9 = 0xfffffffc;
    }
    FUN_00431a50(iVar5,2,uVar9,0x10,uVar10);
LAB_00470c11:
    if ((DAT_0050ccf0 != 0) && (-1 < iVar4)) {
      if ((*(uint *)(param_1 + 0x60) & 0x84000) == 0x80000) {
        (&DAT_0050ccf8)[iVar4] = *(undefined4 *)(param_1 + 0x348);
        (&DAT_0050cd00)[iVar4] = *(undefined4 *)(param_1 + 0x34c);
      }
      else {
        (&DAT_0050ccf8)[iVar4] = 0;
        (&DAT_0050cd00)[iVar4] = 0;
      }
    }
    iVar4 = FUN_0041d6b0();
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x348) != 0) {
      FUN_00431a50(*(int *)(param_1 + 0x348),2,3,0x10,2);
    }
    if (*(int *)(param_1 + 0x34c) == 0) {
      return;
    }
    FUN_00431a50(*(int *)(param_1 + 0x34c),2,3,0x10,2);
    return;
  }
  iVar5 = **(int **)(param_1 + 0x344);
  if (uVar6 == 0) {
    if (iVar5 != 0) {
      uVar10 = 2;
      uVar9 = 3;
      goto LAB_00470cc6;
    }
  }
  else if (iVar5 != 0) {
    uVar10 = 3;
    uVar9 = 0xfffffffc;
LAB_00470cc6:
    FUN_00431a50(iVar5,2,uVar9,0x10,uVar10);
  }
  if (DAT_0050ccf0 != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x84000) == 0x80000) {
      (&DAT_0050ccf8)[iVar4] = **(undefined4 **)(param_1 + 0x344);
    }
    else {
      (&DAT_0050ccf8)[iVar4] = 0;
    }
  }
  local_ec = _DAT_004ad958 - *(float *)(param_1 + 0x1a0) * _DAT_004adae8;
  if ((*(uint *)(param_1 + 0x60) & 0x6000000) != 0) {
    local_ec = _DAT_004ad968;
  }
  if (local_ec < _DAT_004ad968) {
    local_ec = _DAT_004ad968;
  }
  if (_DAT_004ad958 < local_ec) {
    local_ec = _DAT_004ad958;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
  local_ec = local_ec * local_ec;
  if (iVar4 != 0) {
    FUN_00431a50(iVar4,2,3,0x10,2);
  }
  bVar7 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe;
  piVar2 = *(int **)(param_1 + 0x344);
  if ((piVar2[3] != 0) && (piVar2[4] != 0)) {
    local_e8 = 1;
  }
  if (*piVar2 != 0) {
    FUN_00431740(*piVar2,0);
  }
  uVar6 = (*(int *)(param_1 + 0x1e3c) + 1U) % 0x12;
  *(undefined4 *)(param_1 + 0x1e40) = 0x10;
  *(undefined4 *)(param_1 + 0x1e44) = 10;
  *(uint *)(param_1 + 0x1e3c) = uVar6;
  FUN_0044bb10(uVar6 * 0x40 + 0x19bc + param_1,local_e4);
  if (((0x4b < *(int *)(param_1 + 0x1998)) || (*(int *)(param_1 + 0x344) == 0)) || (bVar7)) {
    FUN_0044bb10(local_40,local_e4);
    FUN_0044bb10(local_80,local_e4);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e40);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_40,iVar4 * 0x40 + 0x19bc + param_1);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e44);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_80,iVar4 * 0x40 + 0x19bc + param_1);
    uVar6 = (*(int *)(param_1 + 0x1e3c) + 1U) % 0x12;
    *(uint *)(param_1 + 0x1e3c) = uVar6;
    FUN_0044bb10(uVar6 * 0x40 + 0x19bc + param_1,local_e4);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e40);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_40,iVar4 * 0x40 + 0x19bc + param_1);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e44);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_80,iVar4 * 0x40 + 0x19bc + param_1);
    FUN_0042fa80(local_40,local_40,0x3dcccccd,local_e4);
    FUN_0042fa80(local_30,local_30,0x3dcccccd,&local_d4);
    FUN_0042fa80(local_20,local_20,0x3dcccccd,local_c4);
    FUN_0042f9f0(local_40,local_30,local_20);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    FUN_0042fa80(local_80,local_80,0x3e4ccccd,local_e4);
    FUN_0042fa80(local_70,local_70,0x3e4ccccd,&local_d4);
    FUN_0042fa80(local_60,local_60,0x3e4ccccd,local_c4);
    FUN_0042f9f0(local_80,local_70,local_60);
    FUN_0042f9f0(local_60,local_80,local_70);
    FUN_0042f9b0(local_80);
    FUN_0042f9b0(local_70);
    FUN_0042f9b0(local_60);
  }
  if (bVar7) {
    puVar11 = local_e4;
    iVar4 = param_1 + 0x490;
  }
  else {
    iVar5 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c;
    FUN_0042f7d0(&local_138,&DAT_004c7088 + iVar5);
    FUN_0042f830(&local_138,&local_138,param_1 + 0x164c);
    FUN_0044bb10(local_12c,local_80);
    FUN_0042f7d0(local_fc,local_b4);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    fVar3 = local_d0 * *(float *)(param_1 + 0x198) +
            local_cc * *(float *)(param_1 + 0x19c) + local_d4 * *(float *)(param_1 + 0x194);
    FUN_0042fa80(local_fc,local_fc,(fVar3 - *(float *)(param_1 + 0x1e60)) * _DAT_004ad950,local_c4);
    *(float *)(param_1 + 0x1e60) = fVar3;
    FUN_0042f860(local_a4,local_fc,local_b4);
    iVar4 = param_1 + 0x1e48;
    FUN_0042f860(local_8c,local_a4,iVar4);
    fVar8 = (float10)FUN_0042f8c0(local_8c);
    FUN_0042f9b0(local_8c);
    pfVar1 = (float *)(param_1 + 0x1e54);
    FUN_0042fa80(pfVar1,pfVar1,(float)_DAT_00e22a40 * (float)fVar8 * _DAT_004adaec,local_8c);
    fVar8 = (float10)FUN_00480650(0x41200000,(float)_DAT_00e22a40,pfVar1);
    FUN_0042fa50(pfVar1,(float)fVar8);
    FUN_0042fa80(local_98,iVar4,(float)_DAT_00e22a40,pfVar1);
    if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
      FUN_0042f7d0(local_98,local_a4);
      FUN_0042f7b0(pfVar1,0,0,0);
    }
    FUN_0042f860(local_fc,local_fc,local_a4);
    FUN_0042f830(local_fc,local_fc,local_98);
    FUN_0042f7d0(iVar4,local_98);
    local_13c = (*pfVar1 * *(float *)(param_1 + 0x194) +
                *(float *)(param_1 + 0x1e5c) * *(float *)(param_1 + 0x19c) +
                *(float *)(param_1 + 0x1e58) * *(float *)(param_1 + 0x198)) * _DAT_004ada40;
    if ((float)_DAT_004adaf0 < local_13c) {
      local_13c = 50.0;
    }
    if (local_13c < (float)_DAT_004adaf8) {
      local_13c = -50.0;
    }
    FUN_00431390(local_12c,local_13c,0x3f800000,0,0,local_12c);
    fVar3 = (*(float *)(param_1 + 0x12c8) - local_f4) * local_ec;
    if (_DAT_004adb04 < fVar3) {
      fVar3 = _DAT_004adb04;
    }
    if (fVar3 < _DAT_004adb08) {
      fVar3 = _DAT_004adb08;
    }
    local_f4 = fVar3 * (float)_DAT_004ad9d8 + local_f4;
    *(float *)(param_1 + 0x19b4) = fVar3 * (float)_DAT_004ad9d8;
    FUN_0044bb10(param_1 + 0x490,local_12c);
    FUN_0042f7d0(&local_138,&DAT_004c7094 + iVar5);
    FUN_0042f830(&local_138,&local_138,param_1 + 0x161c);
    fVar3 = *(float *)(param_1 + 0x204) * _DAT_004ad9e4;
    FUN_0044bb10(local_12c,local_e4);
    FUN_00431390(local_12c,fVar3,0,0x3f800000,0,local_12c);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    FUN_0044bb10(param_1 + 0x390,local_12c);
    iVar4 = local_e8;
    if (local_e8 != 0) {
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a40,local_e4);
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a44,&local_d4);
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a48,local_c4);
      FUN_0044bb10(param_1 + 0x410,local_12c);
    }
    FUN_0042f7d0(&local_138,&DAT_004c7094 + iVar5);
    local_138 = -local_138;
    FUN_0042f830(&local_138,&local_138,param_1 + 0x1628);
    fVar3 = *(float *)(param_1 + 0x204) * _DAT_004ad9e4;
    FUN_0044bb10(local_12c,local_e4);
    FUN_00431390(local_12c,fVar3,0,0x3f800000,0,local_12c);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    FUN_0044bb10(param_1 + 0x3d0,local_12c);
    if (iVar4 == 0) goto LAB_0047174a;
    FUN_0042fa80(local_fc,local_fc,-DAT_004c7a40,local_e4);
    FUN_0042fa80(local_fc,local_fc,DAT_004c7a44,&local_d4);
    FUN_0042fa80(local_fc,local_fc,DAT_004c7a48,local_c4);
    puVar11 = local_12c;
    iVar4 = param_1 + 0x450;
  }
  FUN_0044bb10(iVar4,puVar11);
LAB_0047174a:
  FUN_0046e2c0(param_1);
  return;
}

