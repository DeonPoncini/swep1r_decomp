#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452aa0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float *pfVar12;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [48];
  float local_74;
  float local_70;
  float local_6c;
  undefined local_64 [16];
  float local_54 [2];
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined local_24 [8];
  float local_1c;
  undefined local_18 [20];
  float local_4;
  
  iVar5 = *(int *)(param_1 + 0xf4);
  if (iVar5 != 0) {
    uVar8 = *(uint *)(iVar5 + 0x60) & 0x20;
    local_c0 = (undefined4 *)(uint)(uVar8 == 0);
    if ((uVar8 != 0) && (*(float *)(iVar5 + 0x1a0) < _DAT_004acdac)) {
      FUN_0042fa80(param_1 + 0x254,param_1 + 0x254,(float)_DAT_00e22a40 * (float)_DAT_004ace78,
                   iVar5 + 0x30);
    }
    bVar10 = (*(uint *)(iVar5 + 0x60) & 0x6000000) == 0;
    local_d0 = (float)(uint)!bVar10;
    *(undefined4 *)(param_1 + 0x2b0) = 0x42c80000;
    iVar9 = **(int **)(*(int *)(iVar5 + 0x1e70) + 0x18);
    if (bVar10) {
      iVar9 = iVar9 * 0x6c;
      local_dc = *(float *)(&DAT_004c70d4 + iVar9);
      fVar4 = *(float *)(iVar5 + 0x19b4) * (float)_DAT_004acdf0 + *(float *)(&DAT_004c70d8 + iVar9);
    }
    else {
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(&DAT_004c70d4 + iVar9 * 0x6c);
      fVar4 = *(float *)(&DAT_004c70d8 + **(int **)(*(int *)(iVar5 + 0x1e70) + 0x18) * 0x6c);
      *(float *)(param_1 + 0x14c) = fVar4;
      fVar4 = fVar4 + *(float *)(iVar5 + 0x19b4) * (float)_DAT_004acdf0;
      *(float *)(param_1 + 0x14c) = fVar4;
      local_dc = *(float *)(param_1 + 0x148);
    }
    fVar11 = fVar4;
    local_d8 = fVar4;
    if (*(int *)(param_1 + 0x7c) == 2) {
      local_dc = local_dc + local_dc;
      if (_DAT_004ace68 < local_dc) {
        local_dc = 30.0;
      }
      fVar11 = _DAT_004ace84;
      local_d8 = fVar4 + fVar4;
      if (_DAT_004ace80 < fVar4 + fVar4) {
        local_d8 = _DAT_004ace80;
      }
    }
    fVar4 = (*(float *)(iVar5 + 0x1a0) - _DAT_004acdd0) * (float)_DAT_004ace88;
    if (fVar4 < (float)_DAT_004ace50) {
      fVar4 = _DAT_004acda0;
    }
    if ((float)_DAT_004ace00 < fVar4) {
      fVar4 = _DAT_004acdc0;
    }
    fVar4 = fVar4 * (float)_DAT_004acde8 - (float)_DAT_004ace90;
    local_dc = local_dc * fVar4;
    local_d8 = local_d8 * fVar4;
    fVar11 = fVar11 * fVar4;
    iVar9 = FUN_0045d350();
    if (iVar9 == 2) {
      local_dc = local_dc * _DAT_004ace98;
    }
    local_b0 = *(float *)(param_1 + 0x294) - *(float *)(param_1 + 0x254);
    local_ac = *(float *)(param_1 + 0x298) - *(float *)(param_1 + 600);
    local_a8 = *(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x25c);
    FUN_0042f9b0(&local_b0);
    iVar9 = *(int *)(param_1 + 0xf4);
    local_dc = ((_DAT_004acdc0 -
                (*(float *)(iVar9 + 0x34) * local_ac +
                *(float *)(iVar9 + 0x30) * local_b0 + *(float *)(iVar9 + 0x38) * local_a8)) *
                _DAT_004acdc8 - _DAT_004acd90) * local_dc;
    if (bVar10) {
      local_dc = (local_dc + *(float *)(param_1 + 0x148)) * _DAT_004acdc8;
      local_d8 = (local_d8 + *(float *)(param_1 + 0x14c)) * _DAT_004acdc8;
      *(float *)(param_1 + 0x148) = local_dc;
      *(float *)(param_1 + 0x14c) = local_d8;
    }
    FUN_0044bb10(local_64,*(int *)(param_1 + 0xf4) + 0x20);
    local_2c = local_2c + *(float *)(iVar5 + 0x250);
    FUN_0044bb10(local_a4,local_64);
    FUN_0042f860(&local_cc,param_1 + 0x254,&local_74);
    if (local_d0 == 0.0) {
      local_c4 = local_d0;
      FUN_0042f8c0(&local_cc);
      FUN_0042f9b0(&local_cc);
      if (local_c0 == (undefined4 *)0x0) {
        FUN_0042fa80(&local_74,&local_74,local_dc,&local_cc);
        local_6c = local_d8 + local_6c;
      }
      else {
        fVar4 = _DAT_004acea8;
        if ((DAT_0050c8a4 == 0) ||
           ((fVar6 = _DAT_004acea4, DAT_0050c8a4 != 1 &&
            (fVar6 = _DAT_004ace9c, fVar4 = _DAT_004acea0, DAT_0050c8a4 == 2)))) {
          local_6c = local_d8 + local_6c;
          local_74 = local_74 - local_dc * fVar4;
        }
        else {
          local_6c = local_d8 + local_6c;
          local_70 = local_70 - local_dc * fVar6;
        }
      }
      FUN_0042f7d0(local_24,&local_74);
      local_b4 = fVar11 + local_2c;
      local_bc = local_34;
      local_b8 = local_30;
      pfVar12 = local_54;
      fVar11 = *(float *)(iVar5 + 0x1e8) * (float)_DAT_004aceb0;
    }
    else {
      FUN_0042fa80(&local_cc,&local_cc,
                   -(local_c4 * local_3c + local_c8 * local_40 + local_cc * local_44),&local_44);
      FUN_0042f8c0(&local_cc);
      FUN_0042f9b0(&local_cc);
      FUN_0042fa80(&local_74,&local_74,local_dc,&local_cc);
      FUN_0042fa80(&local_74,&local_74,local_d8,&local_44);
      FUN_0042f7d0(local_24,&local_74);
      local_bc = local_34;
      local_b8 = local_30;
      pfVar12 = &local_44;
      local_b4 = local_2c;
    }
    FUN_0042fa80(&local_bc,&local_bc,fVar11,pfVar12);
    if ((local_d0 == 0.0) && (local_4c < (float)_DAT_004ace50)) {
      fVar4 = local_4c * local_4c * _DAT_004ace68;
      if ((float)_DAT_004aceb0 < fVar4) {
        fVar4 = _DAT_004aceb8;
      }
      local_1c = local_1c + fVar4;
    }
    FUN_00430b80(*(int *)(param_1 + 0xf4) + 0x20,local_18);
    local_d8 = local_4 * _DAT_004acebc;
    if (local_d0 == 0.0) {
      local_d8 = local_d8 * local_d8 * local_d8 * _DAT_004ace58;
      fVar4 = local_d8;
      if (local_d8 < _DAT_004acda0) {
        fVar4 = -local_d8;
      }
      local_4 = local_4 * (float)_DAT_004acec0;
      fVar11 = local_4;
      if (local_4 < (float)_DAT_004ace50) {
        fVar11 = -local_4;
      }
      if (fVar4 <= fVar11) {
        local_d8 = local_4;
      }
    }
    else {
      local_d8 = local_d8 * _DAT_004ace58;
    }
    FUN_00431020(local_a4,0,0,local_d8);
    FUN_0042f7d0(&local_74,local_24);
    FUN_0044bb10((undefined4 *)(param_1 + 0x224),local_a4);
    FUN_0044bb10(local_a4,*(int *)(param_1 + 0xf4) + 0x20);
    FUN_0042f7d0(&local_74,&local_bc);
    FUN_0044bb10((undefined4 *)(param_1 + 0x264),local_a4);
    local_c0 = (undefined4 *)(param_1 + 0x20);
    puVar1 = (undefined4 *)(param_1 + 0x50);
    *local_c0 = *(undefined4 *)(param_1 + 0x224);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
    puVar2 = (undefined4 *)(param_1 + 0x30);
    *puVar2 = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x250);
    *puVar1 = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 600);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x260);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x25c);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x264);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x268);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x26c);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x270);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x274);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x27c);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x280);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x284);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x288);
    puVar3 = (undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x28c);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x290);
    *puVar3 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x29c);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x2a0);
    if ((*(uint *)(iVar5 + 0x60) & 0x100000) != 0) {
      FUN_0044bb10(local_64,iVar5 + 0x20);
      puVar7 = local_c0;
      local_2c = local_2c + *(float *)(iVar5 + 0x250);
      FUN_0044bb10(local_c0,local_64);
      FUN_0044bb10((undefined4 *)(param_1 + 0x108),local_64);
      FUN_0042fa50(puVar2,0xbf800000,puVar2);
      FUN_0042fa50(puVar7,0xbf800000,puVar7);
      FUN_0042fa80(puVar3,puVar3,0xbf800000,local_54);
      FUN_0042fa80(puVar1,puVar1,*(float *)(iVar5 + 0xa8) + *(float *)(iVar5 + 0xa8),local_54);
      FUN_0042fa80(puVar3,puVar3,*(float *)(iVar5 + 0xa8) * _DAT_004acec8,&local_44);
      FUN_0042fa80(puVar1,puVar1,*(float *)(iVar5 + 0xa8) * _DAT_004acec8,&local_44);
    }
  }
  return;
}

