#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
float10 FUN_00479e10(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [56];
  float local_48;
  undefined local_40 [56];
  float local_8;

  local_b0 = *param_2;
  local_ac = param_2[1];
  local_a8 = param_2[2];
  if (((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
      ((*(uint *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
    if (((*(uint *)(param_1 + 100) & 0x400000) == 0) || ((*(uint *)(param_1 + 100) & 0x800000) == 0)
       ) {
      fVar5 = (float10)FUN_004772f0(param_1,param_2,param_4);
      uVar2 = *(uint *)(param_1 + 100);
      local_c0 = (float)fVar5;
      if ((uVar2 & 0x800000) == 0) {
        uVar2 = uVar2 & 0xffbfffff;
      }
      else {
        uVar2 = uVar2 | 0x400000;
      }
    }
    else {
      local_c0 = param_2[2] - *(float *)(param_1 + 0x188);
      *param_4 = *(undefined4 *)(param_1 + 0x160);
      param_4[1] = *(undefined4 *)(param_1 + 0x164);
      param_4[2] = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
      uVar2 = *(uint *)(param_1 + 100) | 0x20000000;
    }
    *(uint *)(param_1 + 100) = uVar2;
    if (((uVar2 & 0x400) != 0) && ((float)param_4[2] < 0.05)) {
      param_4[2] = 0x3d4ccccd;
      FUN_0042f9b0(param_4);
    }
    *(undefined4 *)(param_1 + 0x160) = *param_4;
    *(undefined4 *)(param_1 + 0x164) = param_4[1];
    *(undefined4 *)(param_1 + 0x168) = param_4[2];
    if (((*(uint *)(param_1 + 0x60) & 0x5000) == 0) &&
       (((0.1 < *(float *)(param_1 + 0x18c) || (0.1 < -*(float *)(param_1 + 0x18c))) ||
        ((*(uint *)(param_1 + 0x60) & 0x2000) == 0)))) {
      if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
        FUN_004791d0(param_1,param_2,param_3,local_c0,param_4,local_98,local_a4);
      }
      else {
        FUN_00479550();
      }
    }
    if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
      FUN_004774f0(param_1,param_2,local_c0);
    }
    if (local_c0 < 0.0) {
      local_c0 = 2.0;
    }
    if (((((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) && ((*(uint *)(param_1 + 0x60) & 0x20) == 0)
        ) && ((fVar1 = ((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667, 0.0 <= fVar1 &&
              (fVar1 <= 1.0)))) {
      FUN_0044eeb0(param_1 + 0xac,local_40,0);
      param_2[2] = ((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 *
                   (local_8 - param_2[2]) + param_2[2];
    }
    if ((*(uint *)(param_1 + 100) & 0x800000) == 0) {
      if ((*(byte *)(param_1 + 0x60) & 0x20) == 0) {
        FUN_0044abc0(param_2,&local_b0,*(undefined4 *)(param_1 + 0x13c),local_8c);
      }
      else {
        local_bc = *param_2;
        local_b8 = param_2[1];
        local_b4 = param_2[2];
        FUN_00477940(param_1,param_2,param_3);
        local_bc = *(float *)(param_1 + 0x154) + (*param_2 - local_bc);
        local_b8 = *(float *)(param_1 + 0x158) + (param_2[1] - local_b8);
        local_b4 = *(float *)(param_1 + 0x15c) + (param_2[2] - local_b4);
        FUN_00479920(param_1,&local_bc,param_4);
      }
    }
    if (1.0 <= ((float)*(int *)(param_1 + 0x1998) - 40.0) * 0.01666667) {
      puVar3 = (undefined4 *)(param_1 + 0x12c8);
      iVar4 = 4;
      do {
        *puVar3 = 0xc7c35000;
        puVar3 = puVar3 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
      fVar5 = (float10)FUN_00476740(param_1,param_2,*(undefined4 *)(param_5 + 8),local_c0,param_4);
      local_c0 = (float)fVar5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20000000;
    if (((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) {
      FUN_0044eeb0(param_1 + 0xac,local_80,0);
      param_2[2] = local_48;
    }
    local_c0 = 2.0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0x3f800000;
    if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
    }
  }
  *(float *)(param_1 + 0x184) = local_c0;
  return (float10)local_c0;
}



float10 FUN_0047a200(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  float10 fVar2;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined local_4c [12];
  undefined local_40 [56];
  float local_8;

  local_58 = *param_2;
  local_54 = param_2[1];
  local_50 = param_2[2];
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1 & 0xfffffdff;
  if (((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
      ((*(uint *)(param_1 + 0x60) & 0x20) != 0)) || ((uVar1 & 0x4000000) != 0)) {
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      local_64 = *param_2;
      local_60 = param_2[1];
      local_5c = param_2[2];
      FUN_00477940(param_1,param_2,param_3);
      local_64 = *(float *)(param_1 + 0x154) + (*param_2 - local_64);
      local_60 = *(float *)(param_1 + 0x158) + (param_2[1] - local_60);
      local_5c = *(float *)(param_1 + 0x15c) + (param_2[2] - local_5c);
      FUN_00479920(param_1,&local_64,param_4);
      return (float10)0.0;
    }
    FUN_0044abc0(param_2,&local_58,*(undefined4 *)(param_1 + 0x13c),local_4c);
    fVar2 = (float10)0.0;
  }
  else {
    if (((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) {
      FUN_0044eeb0(param_1 + 0xac,local_40,0);
      param_2[2] = local_8;
    }
    else {
      param_2[2] = 0.0;
    }
    fVar2 = (float10)2.0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0x3f800000;
    if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
      return fVar2;
    }
  }
  return fVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047a3a0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_38;
  int local_34 [2];
  undefined4 local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  local_38 = 1.0;
  if ((*(uint *)(param_1 + 100) & 0x10) != 0) {
    fVar2 = (float)_DAT_00e22a40;
    *(undefined4 *)(param_1 + 0x24c) = 0x3e800000;
    if (*(float *)(param_1 + 0x1fc) <= 0.0) {
      *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) - fVar2 * -100.0;
      if (*(float *)(param_1 + 0x1fc) <= 0.0) goto LAB_0047a438;
    }
    else {
      *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) - fVar2 * 100.0;
      if (0.0 <= *(float *)(param_1 + 0x1fc)) goto LAB_0047a438;
    }
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffffef;
  }
LAB_0047a438:
  iVar5 = FUN_00450e70(0x536d6f6b,param_2,0x45afc800,0,1,local_2c,&local_18,local_34);
  if (0 < iVar5) {
    fVar6 = (float10)FUN_00480670(local_2c[0]);
    if (*(int *)(local_34[0] + 0x60) != 1) {
      if (*(int *)(local_34[0] + 0x60) != 2) {
        return;
      }
      if (*(float *)(local_34[0] + 0x68) < 2.0) {
        return;
      }
      local_38 = -1.0;
      if (((float)fVar6 < 30.0) && (iVar5 = FUN_004816b0(), (float)iVar5 * 4.656613e-10 < 0.25)) {
        FUN_004816b0();
        iVar5 = __ftol();
        if (5 < iVar5) {
          iVar5 = 0;
        }
        puVar1 = (uint *)(param_1 + 0x2a0 + iVar5 * 4);
        *puVar1 = *puVar1 | 8;
      }
    }
    fVar2 = *(float *)(param_1 + 0x74);
    local_20 = -local_18;
    local_1c = 0.0;
    local_24 = local_14;
    fVar7 = (float10)FUN_0042f9b0(&local_24);
    if ((float10)0.1 <= fVar7) {
      fVar2 = -(*(float *)(param_1 + 0x28) * local_1c +
               *(float *)(param_1 + 0x24) * local_20 + *(float *)(param_1 + 0x20) * local_24) *
              (75.0 - (float)fVar6) * 0.01428571 * fVar2;
    }
    else {
      fVar2 = 1.0;
    }
    if ((*(uint *)(param_1 + 100) & 0x10) == 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10;
      *(float *)(param_1 + 0x1fc) = local_38 * fVar2;
      return;
    }
    fVar4 = fVar2;
    if (fVar2 < 0.0) {
      fVar4 = -fVar2;
    }
    fVar3 = *(float *)(param_1 + 0x1fc);
    if (*(float *)(param_1 + 0x1fc) < 0.0) {
      fVar3 = -fVar3;
    }
    if (fVar3 < fVar4) {
      *(float *)(param_1 + 0x1fc) = local_38 * fVar2;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047a610(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_7c;
  float local_78;
  float local_74;
  undefined local_70 [12];
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;

  if (*(float *)(param_1 + 0x104) < 0.01) {
    *(undefined4 *)(param_1 + 0x104) = 0x3c23d70a;
  }
  if (2.0 < *(float *)(param_1 + 0x104)) {
    *(undefined4 *)(param_1 + 0x104) = 0x40000000;
  }
  FUN_0044eeb0(param_1 + 0xac,local_40,0);
  local_78 = local_c;
  local_7c = local_10;
  local_74 = local_8;
  FUN_0044eeb0(param_1 + 0xac,local_40,*(undefined4 *)(param_1 + 0x104));
  fVar4 = (local_74 - local_8) * (local_74 - local_8) +
          (local_78 - local_c) * (local_78 - local_c) +
          (local_7c - local_10) * (local_7c - local_10);
  if (18000.0 <= fVar4) {
    if (fVar4 <= 90000.0) goto LAB_0047a72e;
    fVar4 = *(float *)(param_1 + 0x104) - 0.01;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x104) - -0.01;
  }
  *(float *)(param_1 + 0x104) = fVar4;
LAB_0047a72e:
  local_74 = local_8;
  local_7c = local_10;
  local_78 = local_c;
  FUN_0042f860(local_70,&local_7c,param_1 + 0x50);
  FUN_0042f9b0(local_70);
  iVar1 = param_1 + 0x30;
  FUN_0042f860(local_64,local_70,iVar1);
  FUN_0042fa80(local_58,iVar1,0x3e4ccccd,local_64);
  if ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) {
    fVar4 = (float)_DAT_00e22a40 * *(float *)(param_1 + 0x1f0);
    fVar4 = *(float *)(param_1 + 0x21c) - (fVar4 + fVar4);
    *(float *)(param_1 + 0x21c) = fVar4;
    fVar4 = fVar4 - (float)_DAT_00e22a40 * *(float *)(param_1 + 0x208) * -1000.0;
    *(float *)(param_1 + 0x21c) = fVar4;
    if (180.0 < fVar4) {
      *(undefined4 *)(param_1 + 0x21c) = 0x43340000;
    }
    if (*(float *)(param_1 + 0x21c) < -180.0) {
      *(undefined4 *)(param_1 + 0x21c) = 0xc3340000;
    }
    fVar4 = *(float *)(param_1 + 0x21c) * 0.98;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x2ec) * 10.0;
  }
  *(float *)(param_1 + 0x21c) = fVar4;
  FUN_0042f7d0(local_4c,param_2);
  FUN_0042f7d0(iVar1,local_58);
  iVar2 = param_1 + 0x40;
  iVar3 = param_1 + 0x20;
  FUN_0042f9f0(iVar3,iVar1,iVar2);
  FUN_0042f9f0(iVar2,iVar3,iVar1);
  FUN_0042f9b0(iVar3);
  FUN_0042f9b0(iVar1);
  FUN_0042f9b0(iVar2);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x1ec) * 1.5,0,0,0x3f800000,iVar3);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x220) * 1.5,0x3f800000,0,0,iVar3);
  FUN_00431390(iVar3,(float)_DAT_00e22a40 * *(float *)(param_1 + 0x21c),0,0x3f800000,0,iVar3);
  FUN_0042f7d0(param_1 + 0x50,local_4c);
  *(undefined4 *)(param_1 + 0x204) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047a930(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = 0;
  fVar1 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 0x50);
  if (_DAT_00e2711c - _DAT_00e27128 < fVar1) {
    uVar3 = 0x800000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e2711c) && (_DAT_00e27118 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x400000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27118) && (_DAT_00e27114 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x200000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27114) && (_DAT_00e27110 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x100000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27110) && (_DAT_00e2710c - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x80000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e2710c) && (_DAT_00e27108 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x40000;
  }
  if ((fVar1 < _DAT_00e27128 + _DAT_00e27108) && (_DAT_00e27104 - _DAT_00e27128 < fVar1)) {
    uVar3 = uVar3 | 0x20000;
  }
  if (fVar1 < _DAT_00e27128 + _DAT_00e27104) {
    uVar3 = uVar3 | 0x10000;
  }
  uVar4 = 0;
  if (_DAT_00e270d8 - _DAT_00e27124 < fVar2) {
    uVar4 = (int)uVar3 >> 8;
  }
  if ((fVar2 < _DAT_00e27124 + _DAT_00e270d8) && (_DAT_00e270d4 - _DAT_00e27124 < fVar2)) {
    uVar4 = uVar4 | uVar3;
  }
  if (fVar2 < _DAT_00e27124 + _DAT_00e270d4) {
    uVar4 = uVar4 | uVar3 << 8;
  }
  *(uint *)(param_1 + 0x26c) = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047ab40(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  uVar2 = FUN_00445660(5);
  if (150.0 < *(float *)(param_1 + 0x1a0)) {
    FUN_00445640(5,uVar2 | 4);
  }
  if (DAT_0050cb40 != 0) {
    FUN_0047a930(param_1);
  }
  uVar3 = FUN_00445660(3);
  FUN_00445640(3,*(undefined4 *)(param_1 + 0x26c));
  _DAT_00e270e0 = *(undefined4 *)(param_1 + 0x1f8);
  bVar6 = (*(uint *)(param_1 + 0x60) & 0x2000000) == 0;
  if (bVar6) {
    FUN_004764a0(param_1);
    FUN_00476390(param_1 + 0x30,param_1 + 0x20,param_1 + 0x194,param_1 + 0x2e4);
  }
  else {
    FUN_0042fa50(param_1 + 0x194,0xbf800000,param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  pfVar5 = (float *)(param_1 + 0x2e4);
  bVar6 = !bVar6;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x58);
  *(float *)(param_1 + 0x2d8) = *pfVar5;
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x2ec);
  iVar4 = FUN_0046a9c0(param_1);
  if (iVar4 == 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x800000) == 0) {
      if (bVar6) goto LAB_0047acc7;
      fVar1 = *(float *)(param_1 + 0x208);
      if (*(float *)(param_1 + 0x208) < 0.0) {
        fVar1 = -fVar1;
      }
      fVar1 = (1.0 - fVar1 * 0.5) * *(float *)(param_1 + 0x1f0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1f0) * 0.5;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1f0) * 0.8;
  }
  *(float *)(param_1 + 0x1f0) = fVar1;
LAB_0047acc7:
  if ((*(uint *)(param_1 + 100) & 0x400) == 0) {
    FUN_0044ae40(param_1 + 0x1ec,pfVar5,*(undefined4 *)(param_1 + 0x1f0),
                 *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 500),
                 *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x1f8));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1f0) * 0.5;
    *(float *)(param_1 + 0x1f0) = fVar1;
    FUN_0044ae40(param_1 + 0x1ec,pfVar5,fVar1,
                 *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x1fc));
    if (*(float *)(param_1 + 0x1f8) <= 0.0) {
      if (*(float *)(param_1 + 0x1f8) < 0.0) {
        *pfVar5 = *(float *)(param_1 + 0x1f8) + *pfVar5;
      }
    }
    else {
      *pfVar5 = *(float *)(param_1 + 0x1f8) + *pfVar5;
    }
  }
  fVar7 = (float10)FUN_00480650(0x3fc00000,(float)_DAT_00e22a40);
  fVar7 = fVar7 * (float10)*(float *)(param_1 + 500);
  *(float *)(param_1 + 500) = (float)fVar7;
  if ((fVar7 < (float10)0.5) && (-fVar7 < (float10)0.5)) {
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (bVar6) {
    fVar1 = *(float *)(param_1 + 0x22c) * (float)_DAT_00e22a40;
    if (*(float *)(param_1 + 0x220) <= *(float *)(param_1 + 0x224)) {
      fVar1 = *(float *)(param_1 + 0x70) * fVar1 + *(float *)(param_1 + 0x220);
      *(float *)(param_1 + 0x220) = fVar1;
      if (*(float *)(param_1 + 0x224) < fVar1) {
        *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x224);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x70) * fVar1;
      *(float *)(param_1 + 0x220) = fVar1;
      if (fVar1 < *(float *)(param_1 + 0x224)) {
        *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x224);
      }
    }
  }
  FUN_00478d80(param_1,(undefined4 *)(param_1 + 0x16c),&local_c,param_1 + 0x30);
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xec);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x20000000;
    *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x2cc) = local_c;
  *(undefined4 *)(param_1 + 0x50) = local_c;
  *(undefined4 *)(param_1 + 0x2d0) = local_8;
  *(undefined4 *)(param_1 + 0x2d4) = local_4;
  *(undefined4 *)(param_1 + 0x54) = local_8;
  *(undefined4 *)(param_1 + 0x58) = local_4;
  FUN_00445640(5,uVar2);
  FUN_00445640(3,uVar3);
  return;
}



float10 FUN_0047aee0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                    undefined4 param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;

  *param_7 = *param_2 - *param_1;
  param_7[1] = param_2[1] - param_1[1];
  *param_8 = *param_4 - *param_3;
  fVar1 = param_4[1];
  fVar2 = param_3[1];
  param_8[1] = fVar1 - fVar2;
  fVar3 = *param_7 - *param_8;
  fVar1 = param_7[1] - (fVar1 - fVar2);
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if ((fVar2 < 0.001) && (-fVar2 < 0.001)) {
    return (float10)-1.0;
  }
  param_2 = (float *)(-(fVar1 * (param_1[1] - param_3[1]) + fVar3 * (*param_1 - *param_3)) / fVar2);
  if ((float)param_2 < 0.0) {
    param_2 = (float *)0x0;
  }
  if (1.0 < (float)param_2) {
    param_2 = (float *)0x3f800000;
  }
  FUN_0042f720(param_5,param_1,param_2,param_7);
  FUN_0042f720(param_6,param_3,param_2,param_8);
  return (float10)(float)param_2;
}



void FUN_0047b000(int param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x7000) == 0) && (uVar2 = *(uint *)(param_1 + 100), (uVar2 & 0x2000000) == 0)) {
    if ((uVar2 & 0x10000000) != 0) {
      *(uint *)(param_1 + 100) = uVar2 & 0xefffffff;
      return;
    }
    if (((DAT_004c7bbc < param_3) && (DAT_004c7bb8 < param_2)) && (DAT_0050ca28 == 0)) {
      if ((200.0 <= *(float *)(param_1 + 0x1a0)) && ((uVar1 & 0x80) == 0)) {
        if (0.0 <= *(float *)(param_1 + 500)) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        FUN_004741d0(param_1,uVar3);
        *(undefined4 *)(param_1 + 0x18c) = 0x40a00000;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800000;
        return;
      }
      *(uint *)(param_1 + 0x60) = uVar1 | 0x1000;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047b0c0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_108;
  float local_104;
  float local_fc;
  float local_f8;
  int local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  undefined local_98 [12];
  float local_8c;
  undefined local_80 [12];
  float local_74;
  float local_70;
  undefined local_68 [12];
  undefined local_5c [12];
  int local_50 [4];
  undefined local_40 [16];
  undefined local_30 [48];

  if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && ((*(uint *)(param_1 + 100) & 0x2000000) == 0))
  {
    iVar5 = FUN_00450e70(0x54657374,param_1 + 0x50,0x451c4000,param_1,4,local_40,local_30,local_50);
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((0 < iVar5) &&
       (((*(uint *)(local_50[0] + 0x60) & 0x6000) == 0 &&
        ((*(uint *)(local_50[0] + 100) & 0x2000000) == 0)))) {
      pfVar1 = (float *)(local_50[0] + 0x2cc);
      local_f0 = local_50[0] + 0x16c;
      pfVar2 = (float *)(param_1 + 0x2cc);
      fVar6 = (float10)FUN_0047aee0(param_1 + 0x16c,pfVar2,local_f0,pfVar1,&local_b0,&local_bc,
                                    local_80,local_98);
      fVar3 = (float)fVar6;
      if (((float10)0.0 <= fVar6) &&
         ((local_8c = local_b0 - local_bc,
          (local_ac - local_b8) * (local_ac - local_b8) + local_8c * local_8c < 100.0 &&
          (0.01 <= fVar3)))) {
        FUN_0042f700(&local_ec,0x3f000000,&local_b0);
        FUN_0042f720(&local_ec,&local_ec,0x3f000000,&local_bc);
        FUN_0042f700(&local_fc,*(undefined4 *)(param_1 + 0x9c),local_80);
        FUN_0042f720(&local_fc,&local_fc,*(undefined4 *)(local_50[0] + 0x9c),local_98);
        FUN_0042f700(&local_fc,
                     (1.0 - fVar3) / (*(float *)(local_50[0] + 0x9c) + *(float *)(param_1 + 0x9c)),
                     &local_fc);
        local_c8 = local_fc + local_ec;
        local_c4 = local_f8 + local_e8;
        FUN_0042f720(&local_a4,param_1 + 0x16c,fVar3 - 0.05,local_80);
        FUN_0042f720(&local_74,local_f0,fVar3 - 0.05,local_98);
        local_108 = local_a4 - local_74;
        local_104 = local_a0 - local_70;
        FUN_0042f780(&local_108);
        FUN_0042f700(local_68,0x40a00000,&local_108);
        FUN_0042f700(local_5c,0xc0a00000,&local_108);
        FUN_0042f6e0(pfVar2,&local_c8,local_68);
        FUN_0042f6e0(pfVar1,&local_c8,local_5c);
        local_d4 = *pfVar1 - *(float *)(local_50[0] + 0x50);
        local_d0 = *(float *)(local_50[0] + 0x2d0) - *(float *)(local_50[0] + 0x54);
        local_e0 = *pfVar2 - *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x50) = *pfVar2;
        local_dc = *(float *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x2d0);
        *(float *)(local_50[0] + 0x50) = *pfVar1;
        *(undefined4 *)(local_50[0] + 0x54) = *(undefined4 *)(local_50[0] + 0x2d0);
        if (*(float *)(param_1 + 0x1a0) <= *(float *)(local_50[0] + 0x1a0)) {
          uVar4 = *(undefined4 *)(local_50[0] + 0x1a0);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x1a0);
        }
        fVar7 = (float10)FUN_0042f750(&local_e0);
        fVar6 = (float10)_DAT_00e22a40;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        *(float *)(param_1 + 0x150) = (float)(fVar7 / fVar6);
        *(float *)(param_1 + 0x144) = -local_108;
        *(float *)(param_1 + 0x148) = -local_104;
        FUN_00479d40(param_1);
        FUN_0047b000(param_1,uVar4,*(undefined4 *)(param_1 + 0x150));
        fVar6 = (float10)FUN_0042f750(&local_d4);
        *(float *)(local_50[0] + 0x150) = (float)(fVar6 / (float10)_DAT_00e22a40);
        *(float *)(local_50[0] + 0x144) = local_108;
        *(undefined4 *)(local_50[0] + 0x14c) = 0;
        *(float *)(local_50[0] + 0x148) = local_104;
        FUN_00479d40(local_50[0]);
        FUN_0047b000(local_50[0],uVar4,*(undefined4 *)(local_50[0] + 0x150));
        *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) - local_e0 * -0.5;
        *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) - local_dc * -0.5;
        *(float *)(local_50[0] + 0x1dc) = *(float *)(local_50[0] + 0x1dc) - local_d4 * -0.5;
        *(float *)(local_50[0] + 0x1e0) = *(float *)(local_50[0] + 0x1e0) - local_d0 * -0.5;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047b520(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [12];

  uVar3 = FUN_00445660(5);
  if (150.0 < *(float *)(param_1 + 0x1a0)) {
    FUN_00445640(5,uVar3 | 4);
  }
  uVar4 = FUN_00445660(3);
  FUN_00445640(3,*(undefined4 *)(param_1 + 0x26c));
  local_24 = *(float *)(param_1 + 0x2cc);
  local_20 = *(float *)(param_1 + 0x2d0);
  local_1c = *(float *)(param_1 + 0x2d4);
  uVar6 = *(uint *)(param_1 + 0x60) >> 0x19 & 1;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xdfffffff;
  FUN_0047b0c0(param_1);
  if (uVar6 == 0) {
    fVar7 = (float10)FUN_00479e10(param_1,&local_24,param_1 + 0x16c,local_c,param_1 + 0x2e4);
  }
  else {
    FUN_0042fa50(local_c,0x3f800000,param_1 + 0x40);
    fVar7 = (float10)FUN_0047a200(param_1,&local_24,param_1 + 0x16c,local_c,param_1 + 0x2e4);
  }
  pfVar5 = (float *)(param_1 + 0x2e4);
  local_18 = local_24 - *(float *)(param_1 + 0x16c);
  local_14 = local_20 - *(float *)(param_1 + 0x170);
  local_10 = local_1c - *(float *)(param_1 + 0x174);
  *(float *)(param_1 + 0x2cc) = local_24;
  fVar1 = *(float *)(param_1 + 0x1a0);
  *(float *)(param_1 + 0x2d0) = local_20;
  *(float *)(param_1 + 0x2d4) = local_1c;
  if ((*(uint *)(param_1 + 0x60) & 0x5000) == 0) {
    if ((uVar6 == 0) && ((*(uint *)(param_1 + 0x60) & 0x4000000) == 0)) {
      fVar8 = (float10)FUN_0042f750(&local_18);
    }
    else {
      fVar8 = (float10)FUN_0042f8c0(&local_18);
    }
    *(float *)(param_1 + 0x1a0) = (float)(fVar8 / (float10)_DAT_00e22a40);
    if (*(float *)(param_1 + 0x38) * local_10 +
        *(float *)(param_1 + 0x34) * local_14 + *(float *)(param_1 + 0x30) * local_18 < 0.0) {
      *(float *)(param_1 + 0x1a0) = -*(float *)(param_1 + 0x1a0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  uVar2 = *(uint *)(param_1 + 100);
  if ((uVar2 & 0x4000) != 0) {
    *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x310) - (float)_DAT_00e22a40;
    if (*(float *)(param_1 + 0x1a0) < 200.0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
    if (*(float *)(param_1 + 0x310) < 0.0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
  }
  if (((*(byte *)(param_1 + 0x60) & 0x80) == 0) || ((uVar2 & 0x4000000) != 0)) {
    FUN_0047b000(param_1,fVar1,fVar1 - *(float *)(param_1 + 0x1a0));
  }
  else {
    *(uint *)(param_1 + 100) = uVar2 & 0xefffffff;
  }
  if (((*(uint *)(param_1 + 0x60) & 0x40000) != 0) &&
     (*(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffbffff,
     0.0 < *(float *)(param_1 + 0x1a4))) {
    if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x7c)) {
      if (0.0 <= *(float *)(param_1 + 0x1a0)) {
        fVar1 = (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x1a0)) /
                (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x1a0));
      }
      else {
        fVar1 = 0.0;
      }
      if (fVar1 < *(float *)(param_1 + 0x1a4)) {
        *(float *)(param_1 + 0x1a4) = fVar1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a4) = 0x3f7fbe77;
    }
  }
  FUN_004788c0(param_1);
  if (uVar6 == 0) {
    if (((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
        ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0))
    {
      FUN_00477ad0(param_1,local_c,(float)fVar7,pfVar5);
    }
    *pfVar5 = *pfVar5 - *(float *)(param_1 + 0x2d8);
    *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2ec) = *(float *)(param_1 + 0x2ec) - *(float *)(param_1 + 0x2e0);
  }
  if (((*(uint *)(param_1 + 0x60) & 0x4000000) == 0) && (uVar6 == 0)) {
    FUN_00477c30(param_1,&local_24,pfVar5);
  }
  else {
    FUN_0047a610(param_1,&local_24);
  }
  FUN_00476ea0(param_1);
  FUN_0047a3a0(param_1,&local_24);
  if (0.0 < *(float *)(param_1 + 0x308)) {
    *(float *)(param_1 + 0x308) = *(float *)(param_1 + 0x308) - (float)_DAT_00e22a40;
  }
  if (0.0 < *(float *)(param_1 + 0x30c)) {
    *(float *)(param_1 + 0x30c) = *(float *)(param_1 + 0x30c) - (float)_DAT_00e22a40;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if ((uVar2 & 0x2000) == 0) {
    if ((((uVar2 & 0x4000) != 0) && ((uVar2 & 0x80) != 0)) && (*(float *)(param_1 + 0x30c) <= 0.0))
    {
      *(undefined4 *)(param_1 + 0x30c) = 0x40400000;
      *(uint *)(param_1 + 0x60) = uVar2 & 0xffffbfff | 0x2000;
    }
  }
  else if (*(float *)(param_1 + 0x30c) <= 0.0) {
    *(uint *)(param_1 + 0x60) = uVar2 & 0xffffdfff;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x200000;
  }
  if (((uVar6 == 0) && ((*(uint *)(param_1 + 0x60) & 0x4000000) != 0)) && ((float)fVar7 < 12.0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfbffffff;
  }
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    FUN_0040b150(0,0);
  }
  FUN_00445640(5,uVar3);
  FUN_00445640(3,uVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047b9e0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x68)) {
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - (float)_DAT_00e22a40;
    return;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x78),2,0xfffffffc,0x10,3);
  }
  FUN_00450e30(param_1);
  return;
}



void FUN_0047bc40(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;

  if (0xf < param_5) {
    iVar1 = FUN_00450d20(0x546f7373);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x6c) = param_6;
    *(undefined4 *)(iVar1 + 0x68) = param_6;
    *(undefined *)(iVar1 + 0x70) = param_2;
    *(undefined4 *)(iVar1 + 100) = param_7;
    *(undefined *)(iVar1 + 0x71) = param_3;
    *(undefined *)(iVar1 + 0x72) = param_4;
    *(char *)(iVar1 + 0x73) = (char)param_5;
    uVar2 = FUN_0042b560(*(undefined4 *)(iVar1 + 0x78));
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
    FUN_0044bb10(iVar1 + 0x20,param_1);
    if (*(int *)(iVar1 + 0x78) != 0) {
      FUN_00431a50(*(int *)(iVar1 + 0x78),2,3,0x10,2);
    }
  }
  return;
}



void FUN_0047bcd0(undefined4 param_1)

{
  DAT_00e270c8 = param_1;
  return;
}



int FUN_0047bce0(int param_1)

{
  int iVar1;
  uint uVar2;
  int **ppiVar3;
  int iVar4;

  if (param_1 != 0) {
    iVar1 = FUN_00431770(param_1);
    if (iVar1 == 0x3064) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        ppiVar3 = *(int ***)(param_1 + 0x18);
        while( true ) {
          iVar4 = **ppiVar3;
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) break;
          iVar1 = iVar1 + 1;
          ppiVar3 = ppiVar3 + 1;
          if (*(int *)(param_1 + 0x14) <= iVar1) {
            return 0;
          }
        }
        return *(int *)(**ppiVar3 + 0xc);
      }
    }
    else {
      uVar2 = FUN_00431770(param_1);
      if ((uVar2 & 0x4000) != 0) {
        iVar4 = 0;
        iVar1 = FUN_00431780(param_1);
        if (0 < iVar1) {
          do {
            iVar1 = FUN_0047bce0(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4));
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar4 = iVar4 + 1;
            iVar1 = FUN_00431780(param_1);
          } while (iVar4 < iVar1);
        }
      }
    }
  }
  return 0;
}



void FUN_0047bd80(int param_1,uint param_2,uint param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;

  if ((param_1 != 0) && (uVar1 = FUN_00431770(param_1), (uVar1 & 0x4000) != 0)) {
    iVar2 = FUN_00431770(param_1);
    if (iVar2 == 0xd065) {
      iVar2 = FUN_00426740(param_1,8);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x100) = ~param_2 & *(uint *)(iVar2 + 0x100) | param_3;
        fVar4 = param_4;
        if (0.0 < *(float *)(iVar2 + 0x110)) {
          fVar4 = -param_4;
        }
        FUN_00426880(iVar2,fVar4);
      }
      iVar2 = FUN_00426740(param_1,9);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x100) = ~param_2 & *(uint *)(iVar2 + 0x100) | param_3;
        fVar4 = param_4;
        if (0.0 < *(float *)(iVar2 + 0x110)) {
          fVar4 = -param_4;
        }
        FUN_00426880(iVar2,fVar4);
      }
    }
    iVar3 = 0;
    iVar2 = FUN_00431780(param_1);
    if (0 < iVar2) {
      do {
        FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4),param_2,param_3,param_4);
        iVar3 = iVar3 + 1;
        iVar2 = FUN_00431780(param_1);
      } while (iVar3 < iVar2);
    }
  }
  return;
}



void FUN_0047bea0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(&DAT_00e25e60 + param_1 * 4);
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    FUN_00426810(iVar2,0x10000000);
    FUN_00426840(*piVar3,0);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  return;
}



void FUN_0047bee0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(&DAT_00e25e60 + param_1 * 4);
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    FUN_00426820(iVar2,0x10000000);
    FUN_00426840(*piVar3,0);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  return;
}



int FUN_0047bf20(int param_1)

{
  int iVar1;
  int *piVar2;

  piVar2 = *(int **)(&DAT_00e25e60 + param_1 * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return 0;
  }
  while (((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0 &&
         (*(float *)(iVar1 + 0x114) < *(float *)(iVar1 + 0x108)))) {
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    if (iVar1 == 0) {
      return iVar1;
    }
  }
  return 1;
}



void FUN_0047bf70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;

  iVar3 = -1;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 100) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x66) {
    iVar3 = 0;
  }
  else if (iVar2 == 0xc9) {
    iVar3 = 0;
  }
  else if (iVar2 == 0xca) {
    iVar3 = 1;
  }
  else if (iVar2 == 0xd4) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x13a) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x1f5) {
    iVar3 = 5;
  }
  if ((iVar2 == 0x13a) || (iVar2 == 0x1f5)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x26);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x26);
    *pbVar1 = *pbVar1 | 1;
  }
  if (iVar3 != -1) {
    FUN_0047bee0(iVar3);
    if ((&DAT_00e26fe0)[iVar3] != 0) {
      FUN_00431a50((&DAT_00e26fe0)[iVar3],2,0xfffffffc,0x10,3);
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    FUN_00450e30(param_1);
  }
  if (*(int *)(param_1 + 8) == 0x6c) {
    FUN_0047bee0(2);
    if (DAT_00e26fe8 != 0) {
      FUN_00431a50(DAT_00e26fe8,2,0xfffffffc,0x10,3);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00431a50(*(int *)(param_1 + 0x48),2,3,0x10,2);
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    FUN_00450e30(param_1);
  }
  return;
}



void FUN_0047c080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = FUN_00450b00(0x54726967);
  iVar3 = 0;
  if (0 < iVar1) {
    while ((((iVar2 = FUN_00450b30(0x54726967,iVar3), iVar2 == 0 ||
             ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) || ((*(byte *)(iVar2 + 0xc) & 1) == 0)) ||
           (*(short *)(*(int *)(iVar2 + 0x4c) + 0x24) != param_1))) {
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    FUN_0047bf70(iVar2);
  }
  return;
}



int FUN_0047c0f0(int param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_00e27000;
  do {
    if ((*piVar1 == 0) || (*piVar1 == param_1)) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xe270c8);
  if ((&DAT_00e27000)[iVar2] != 0) {
    return iVar2 * 0x58 + 0xe25e80;
  }
  return 0;
}



int FUN_0047c130(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = &DAT_00e27000;
  do {
    if ((*piVar2 == 0) || (*piVar2 == param_1)) break;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0xe270c8);
  if ((&DAT_00e27000)[iVar3] == 0) {
    iVar1 = iVar3 * 0x58 + 0xe25e80;
    FUN_00431b20(iVar1,0xd065);
    (&DAT_00e27000)[iVar3] = param_1;
    return iVar1;
  }
  return 0;
}



uint FUN_0047c7d0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined local_80 [64];
  undefined local_40 [48];
  undefined local_10 [16];

  iVar1 = FUN_00450b00(0x54726967);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00450b30(0x54726967,iVar4);
      if (((uVar2 != 0) && ((*(ushort *)(uVar2 + 6) & 0x100) == 0)) &&
         (*(int *)(uVar2 + 0x4c) == param_1)) {
        return uVar2 & ~-(uint)((*(uint *)(uVar2 + 0xc) & 2) != 0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar2 = FUN_00450d20(0x54726967);
  if (uVar2 == 0) {
    return 0;
  }
  *(int *)(uVar2 + 0x4c) = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(uVar2 + 0x3c) = uVar3;
  *(int *)(uVar2 + 8) = (int)*(short *)(param_1 + 0x24);
  uVar3 = FUN_00426740(uVar3,8);
  *(undefined4 *)(uVar2 + 0x40) = uVar3;
  uVar3 = FUN_00426740(*(undefined4 *)(uVar2 + 0x3c),9);
  *(undefined4 *)(uVar2 + 0x44) = uVar3;
  if (*(int *)(uVar2 + 0x3c) != 0) {
    FUN_004313d0(local_80);
    uVar3 = FUN_00465500();
    FUN_004816f0(*(undefined4 *)(uVar2 + 0x3c),local_40,uVar3,local_80);
    FUN_0042f7d0(uVar2 + 0x30,local_10);
  }
  if (*(int *)(uVar2 + 0x40) != 0) {
    FUN_00426840(*(int *)(uVar2 + 0x40),0);
    FUN_00426880(*(undefined4 *)(uVar2 + 0x40),0);
  }
  if (*(int *)(uVar2 + 0x44) != 0) {
    FUN_00426840(*(int *)(uVar2 + 0x44),0);
    FUN_00426880(*(undefined4 *)(uVar2 + 0x44),0);
  }
  return uVar2;
}



void FUN_0047c920(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_10;
  float local_c;
  float local_8;

  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x3c),2,0xfffffffc,0x10,3);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  iVar2 = FUN_0047bf20(2);
  if (iVar2 == 0) {
    FUN_0047c080(0x6c);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  FUN_004313d0(&local_40);
  pfVar1 = *(float **)(param_1 + 0x4c);
  local_c = pfVar1[1];
  local_10 = *pfVar1 - -8.0;
  local_4c = *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x16c);
  local_48 = *(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x170);
  local_44 = *(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x174);
  local_8 = pfVar1[2] - 24.0;
  fVar3 = (float10)FUN_0042f780(&local_4c);
  if ((float10)0.001 < fVar3) {
    local_3c = -local_4c;
    local_30 = local_4c;
    local_2c = local_48;
    local_40 = local_48;
  }
  FUN_00431640(DAT_00e26fe8,&local_40);
  if (DAT_00e26fe8 != 0) {
    FUN_00431a50(DAT_00e26fe8,2,3,0x10,2);
  }
  iVar2 = FUN_0047c0f0(*(undefined4 *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 != 0) {
    FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    FUN_00431640(iVar2,&local_40);
    *(undefined **)(iVar2 + 0x18) = &DAT_00e26fd0;
  }
  FUN_0047bea0(2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047ca90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_50 = 0x48697474;
  local_4c = 0x54323031;
  iVar10 = param_1;
  if (*(int *)(param_1 + 8) == 0xc9) {
    fVar11 = (float10)FUN_00480650(0x41c80000,(float)_DAT_00e22a40);
    local_48 = 0x42c80000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar11 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar10 = 0;
  }
  if (*(int *)(param_1 + 8) == 0xca) {
    fVar11 = (float10)FUN_00480650(0x40200000,(float)_DAT_00e22a40);
    local_48 = 0x44160000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar11 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar10 = 1;
  }
  if (*(int *)(param_1 + 8) == 100) {
    iVar10 = 0;
  }
  if (*(int *)(param_1 + 8) == 0x66) {
    fVar11 = (float10)FUN_00480650(0x40200000,(float)_DAT_00e22a40);
    local_48 = 0x43960000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar11 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar10 = 0;
  }
  if (*(int *)(param_1 + 8) == 0xd4) {
    iVar10 = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x3c),2,0xfffffffc,0x10,3);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 3;
  FUN_00431a50(*(undefined4 *)(param_1 + 0x3c),0,0xfffffffd,0x10,3);
  if (*(int *)(param_1 + 8) == 0x66) {
    if ((*(byte *)(param_2 + 0x60) & 0x80) != 0) {
      FUN_004310b0(local_40,0x41000000,0x41000000,0x41000000);
      puVar7 = *(undefined4 **)(param_1 + 0x4c);
      local_10 = *puVar7;
      local_c = puVar7[1];
      local_8 = puVar7[2];
      FUN_00431640((&DAT_00e26fe0)[iVar10],local_40);
      goto LAB_0047cc59;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    uVar9 = puVar7[2];
    uVar14 = puVar7[1];
    uVar13 = *puVar7;
    uVar12 = (&DAT_00e26fe0)[iVar10];
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    uVar9 = puVar7[2];
    uVar14 = puVar7[1];
    uVar13 = *puVar7;
    uVar12 = (&DAT_00e26fe0)[iVar10];
  }
  FUN_00431620(uVar12,uVar13,uVar14,uVar9);
LAB_0047cc59:
  if ((&DAT_00e26fe0)[iVar10] != 0) {
    FUN_00431a50((&DAT_00e26fe0)[iVar10],2,3,0x10,2);
  }
  FUN_0047bea0(iVar10);
  iVar8 = FUN_004816b0();
  FUN_00426d10(0x39,6,(float)iVar8 * 4.656613e-10 * 0.15 - -0.25,0x3f800000,
               (float *)(param_2 + 0x50),0,0,0x41200000,0x43fa0000);
  fVar1 = *(float *)(param_2 + 0x50);
  fVar2 = *(float *)(param_2 + 0x54);
  fVar3 = *(float *)(param_2 + 0x58);
  fVar4 = *(float *)(param_2 + 0x16c);
  fVar5 = *(float *)(param_2 + 0x170);
  fVar6 = *(float *)(param_2 + 0x174);
  puVar7 = *(undefined4 **)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x24) = *puVar7;
  *(undefined4 *)(param_1 + 0x28) = puVar7[1];
  *(undefined4 *)(param_1 + 0x2c) = puVar7[2];
  *(float *)(param_1 + 0x18) = (fVar1 - fVar4) * (0.8 / (float)_DAT_00e22a40);
  *(float *)(param_1 + 0x1c) = (fVar2 - fVar5) * (0.8 / (float)_DAT_00e22a40);
  *(float *)(param_1 + 0x20) = (fVar3 - fVar6) * (0.8 / (float)_DAT_00e22a40);
  if ((*(int *)(param_1 + 8) == 0x66) && ((*(byte *)(param_2 + 0x60) & 0x80) != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    *(int *)(param_1 + 0x50) = param_2 + 0x20;
  }
  uVar9 = FUN_0047bce0((&DAT_00e26fe0)[iVar10]);
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void FUN_0047cd90(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_40 [64];

  iVar2 = FUN_0047bf20(param_2);
  if (iVar2 == 0) {
    FUN_00450e30(param_1);
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + 0x26);
  *puVar1 = *puVar1 | 1;
  FUN_004316a0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),local_40);
  FUN_00431640((&DAT_00e26fe0)[param_2],local_40);
  if ((&DAT_00e26fe0)[param_2] != 0) {
    FUN_00431a50((&DAT_00e26fe0)[param_2],2,3,0x10,2);
  }
  FUN_0047bea0(param_2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_2 == 0) {
    uVar3 = FUN_0047bce0(DAT_00e26fe0);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void FUN_0047ce60(int param_1,undefined4 param_2,byte param_3)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_104;
  undefined local_100 [256];

  if ((param_3 & 1) == 0) {
    FUN_0047e830(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar4 = (int)*(short *)(iVar3 + 0x24);
  if (iVar4 < 0xcb) {
    if (iVar4 < 0xc9) {
      switch(iVar4) {
      case 100:
      case 0x66:
        goto switchD_0047cec0_caseD_64;
      case 0x65:
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        if ((*(int *)(param_1 + 0x40) != 0) &&
           (puVar2 = (uint *)(*(int *)(param_1 + 0x40) + 0x100), *puVar2 = *puVar2 & 0xffffffef,
           3.0 < *(float *)(param_1 + 0x10))) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          iVar3 = *(int *)(param_1 + 0x40);
          if (0.0 < *(float *)(iVar3 + 0x110)) {
            FUN_00426880(iVar3,0xc1a00000);
            return;
          }
          FUN_00426880(iVar3,0x41a00000);
          return;
        }
        break;
      case 0x67:
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x20),2,0xfffffffc,0x10,3);
          }
          FUN_00431a50(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0xfffffffd,0x10,3);
          goto LAB_0047d138;
        }
        break;
      case 0x68:
        local_104 = FUN_004816b0();
        if (0.5 <= (float)local_104 * 4.656613e-10) {
          FUN_004741d0(param_2,2);
          return;
        }
        FUN_004741d0(param_2,1);
        return;
      case 0x69:
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
        FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0x10000000,0x3f19999a);
        goto LAB_0047d25c;
      case 0x6a:
switchD_0047cec0_caseD_6a:
        FUN_0047e450(param_2);
        return;
      case 0x6c:
        FUN_0047c920(param_1,param_2);
        return;
      }
      return;
    }
  }
  else {
    if (0xd4 < iVar4) {
      if (iVar4 < 0x131) {
        if (iVar4 != 0x130) {
          if (iVar4 != 0xd5) {
            return;
          }
          if (iVar3 == 0) {
            return;
          }
          *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
          local_114 = 0x5368616b;
          local_110 = 0x3e800000;
          local_10c = 0x41000000;
          FUN_00450c50(0x634d616e,&local_114);
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
          return;
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_00426880(*(int *)(param_1 + 0x44),0x3f800000);
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_00426880(*(int *)(param_1 + 0x40),0x3f800000);
        }
LAB_0047d138:
        puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + 0x26);
        *puVar1 = *puVar1 | 1;
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
        FUN_00450e30(param_1);
        return;
      }
      if (0x138 < iVar4) {
        if (iVar4 == 0x13a) {
          FUN_0047cd90(param_1,0);
          return;
        }
        if (iVar4 != 0x1f5) {
          if (iVar4 != 900) {
            return;
          }
          FUN_0044fce0(local_100,0x40400000);
          FUN_00473f40(param_2,0);
          return;
        }
        FUN_0047cd90(param_1,5);
        return;
      }
      if (iVar4 != 0x138) {
        if (iVar4 == 0x132) {
          if (iVar3 == 0) {
            return;
          }
          *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
          local_114 = 0x5368616b;
          local_110 = 0x3e800000;
          local_10c = 0x41000000;
          FUN_00450c50(0x634d616e,&local_114);
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
          return;
        }
        if (iVar4 != 0x133) {
          return;
        }
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x20) == 0) {
          return;
        }
        if (*(float *)(param_1 + 0x10) <= 3.0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        FUN_0047bd80(*(undefined4 *)(iVar3 + 0x20),0x10,0,0x3f800000);
        return;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
      FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0x10000000,0x3f19999a);
LAB_0047d25c:
      local_10c = 0x40800000;
      local_110 = 0x3d4ccccd;
      local_114 = 0x5368616b;
      FUN_00450c50(0x634d616e,&local_114);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    if (iVar4 != 0xd4) {
      if (iVar4 != 0xcb) {
        return;
      }
      if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      if (*(float *)(param_1 + 0x10) <= 3.0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_00426c80(0x30,7,0x3e800000,0x3f800000,0);
      goto switchD_0047cec0_caseD_6a;
    }
  }
switchD_0047cec0_caseD_64:
  FUN_0047ca90(param_1,param_2);
  return;
}



int FUN_0047d310(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;

  iVar1 = FUN_0047c130(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined **)(iVar1 + 0x18) = &DAT_00e26fc0 + param_3 * 4;
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = iVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    FUN_00431a50(iVar1,2,0xf,0x10,3);
    FUN_00431a50(iVar1,2,param_2 & 0xfffffff0,0x10,2);
  }
  return iVar1;
}



void FUN_0047d380(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;

  if (param_1 != (float *)0x0) {
    do {
      FUN_0047e760(param_1);
      if ((*(short *)(param_1 + 9) == 0x6c) && (iVar2 = FUN_0047d310(param_1,param_2,3), iVar2 != 0)
         ) {
        FUN_00431620(iVar2,*param_1 - -8.0,param_1[1],param_1[2] - 24.0);
      }
      if (*(short *)(param_1 + 9) == 100) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
      }
      if (*(short *)(param_1 + 9) == 0x69) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        FUN_0047bd80(param_1[8],0x10000010,0,0x3f19999a);
      }
      if (*(short *)(param_1 + 9) == 0x68) {
        DAT_0050cb48 = param_1;
      }
      if (*(short *)(param_1 + 9) == 0xc9) {
        FUN_00431a50(param_1[8],0,0xfffffffd,0x10,3);
      }
      if (*(short *)(param_1 + 9) == 0xca) {
        FUN_00431a50(param_1[8],0,0xfffffffb,0x10,3);
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
        if (DAT_0050cb4c == 1) {
          DAT_0050cb48 = param_1;
        }
      }
      if (*(short *)(param_1 + 9) == 0xcb) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
      }
      if (*(short *)(param_1 + 9) == 0xd0) {
        iVar2 = FUN_0047d310(param_1,param_2,2);
        iVar3 = FUN_0047c7d0(param_1);
        *(int *)(iVar3 + 0x48) = iVar2;
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x44) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x44),0x3f800000);
        }
        if (*(int *)(iVar3 + 0x40) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x40),0x3f800000);
        }
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x20),&local_40);
          if (*(int *)(iVar3 + 0x48) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x48),2,3,0x10,2);
            FUN_00431640(*(undefined4 *)(iVar3 + 0x48),&local_40);
          }
        }
      }
      if (*(short *)(param_1 + 9) == 0xd4) {
        FUN_00431a50(param_1[8],0,0xfffffffb,0x10,3);
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
      }
      if (*(short *)(param_1 + 9) == 0xd3) {
        iVar2 = FUN_0047d310(param_1,param_2,2);
        if (iVar2 != 0) {
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0x3f800000;
          local_14 = 0;
          local_10 = 0.0;
          local_40 = 0x3f800000;
          local_c = 0.0;
          local_8 = 0.0;
          local_4 = 0x3f800000;
          local_30 = param_1[3];
          local_2c = param_1[4];
          local_28 = param_1[5];
          FUN_0042f9f0(&local_40,&local_30,&local_20);
          FUN_0042f9f0(&local_20,&local_40,&local_30);
          FUN_0042f9b0(&local_40);
          FUN_0042f9b0(&local_30);
          local_10 = *param_1;
          local_c = param_1[1];
          local_8 = param_1[2] - param_1[7] * 0.5;
          FUN_00431640(iVar2,&local_40);
          if (param_1[8] != 0.0) {
            FUN_00431a50(param_1[8],2,0xfffffffc,0x10,3);
          }
        }
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 1;
      }
      if (*(short *)(param_1 + 9) == 0xd5) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x24;
      }
      if (*(short *)(param_1 + 9) == 0x132) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x24;
        iVar2 = FUN_004816b0();
        if (0.5 < (float)iVar2 * 4.656613e-10) {
          *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 8;
        }
      }
      if (*(short *)(param_1 + 9) == 0x133) {
        FUN_0047bd80(param_1[8],0x10,0,0x3f800000);
      }
      if (*(short *)(param_1 + 9) == 0x134) {
        iVar2 = FUN_0047d310(param_1,param_2,0);
        iVar3 = FUN_0047c7d0(param_1);
        *(int *)(iVar3 + 0x48) = iVar2;
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x44) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x44),0x3f800000);
        }
        if (*(int *)(iVar3 + 0x40) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x40),0x3f800000);
        }
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x20),&local_40);
          if (*(int *)(iVar3 + 0x48) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x48),2,3,0x10,2);
            FUN_00431640(*(undefined4 *)(iVar3 + 0x48),&local_40);
          }
        }
      }
      if (*(short *)(param_1 + 9) == 0x136) {
        iVar2 = FUN_0047d310(param_1,param_2,0);
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(param_1[8],&local_40);
          FUN_00431a50(iVar2,2,3,0x10,2);
          FUN_00431640(iVar2,&local_40);
        }
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 1;
      }
      if (*(short *)(param_1 + 9) == 0x138) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        FUN_0047bd80(param_1[8],0x10000010,0,0x3f800000);
      }
      if (*(short *)(param_1 + 9) == 0x13a) {
        fVar1 = param_1[8];
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        if ((fVar1 != 0.0) && (fVar1 != 0.0)) {
          FUN_00431a50(fVar1,2,0xfffffffc,0x10,3);
        }
      }
      if ((*(short *)(param_1 + 9) == 0x1f5) && (param_1[8] != 0.0)) {
        FUN_00431a50(param_1[8],2,0xfffffffc,0x10,3);
      }
      param_1 = (float *)param_1[10];
    } while (param_1 != (float *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047d890(void)

{
  float fVar1;
  float fVar2;
  float local_14;
  float local_c;
  float local_8;
  float local_4;

  if (DAT_0050cb40 == 1) {
    local_14 = -8500.0;
    local_4 = 3500.0;
    local_8 = 2500.0;
    local_c = -5500.0;
  }
  else if (DAT_0050cb40 == 2) {
    local_14 = -9300.0;
    local_4 = 9000.0;
    local_8 = 7500.0;
    local_c = -7500.0;
  }
  fVar1 = (local_4 - local_14) * 0.125;
  fVar2 = (local_8 - local_c) * 0.3333333;
  _DAT_00e270d0 = local_c;
  _DAT_00e270d4 = local_c + fVar2;
  _DAT_00e270dc = local_8;
  _DAT_00e27100 = local_14;
  _DAT_00e270d8 = local_8 - fVar2;
  _DAT_00e27104 = local_14 + fVar1;
  _DAT_00e27108 = local_14 - fVar1 * -2.0;
  _DAT_00e2710c = local_14 - fVar1 * -3.0;
  _DAT_00e27110 = local_14 - fVar1 * -4.0;
  _DAT_00e27114 = local_14 - fVar1 * -5.0;
  _DAT_00e27118 = local_14 - fVar1 * -6.0;
  _DAT_00e2711c = local_4 - fVar1;
  _DAT_00e27120 = local_4;
  _DAT_00e27124 = fVar2 * 0.25;
  _DAT_00e27128 = fVar1 * 0.25;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0047da10(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (_DAT_00e27104 <= *(float *)(param_1 + 0x20)) {
    if (*(float *)(param_1 + 0x20) < _DAT_00e27108) {
      uVar2 = 0xfe0000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e2710c) {
      uVar2 = 0xfc0000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27110) {
      uVar2 = 0xf80000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27114) {
      uVar2 = 0xf00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27118) {
      uVar2 = 0xe00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e2711c) {
      uVar2 = 0xc00000;
      goto LAB_0047dad2;
    }
    if (*(float *)(param_1 + 0x20) < _DAT_00e27120) {
      uVar2 = 0x800000;
      goto LAB_0047dad2;
    }
  }
  else {
    uVar2 = 0xff0000;
LAB_0047dad2:
    if (_DAT_00e27100 <= *(float *)(param_1 + 0x2c)) {
      if (_DAT_00e27104 <= *(float *)(param_1 + 0x2c)) {
        if (_DAT_00e27108 <= *(float *)(param_1 + 0x2c)) {
          if (_DAT_00e2710c <= *(float *)(param_1 + 0x2c)) {
            if (_DAT_00e27110 <= *(float *)(param_1 + 0x2c)) {
              if (_DAT_00e27114 <= *(float *)(param_1 + 0x2c)) {
                if (_DAT_00e27118 <= *(float *)(param_1 + 0x2c)) {
                  if (*(float *)(param_1 + 0x2c) < _DAT_00e2711c) {
                    uVar2 = uVar2 & 0x7f0000;
                  }
                }
                else {
                  uVar2 = uVar2 & 0x3f0000;
                }
              }
              else {
                uVar2 = uVar2 & 0x1f0000;
              }
            }
            else {
              uVar2 = uVar2 & 0xf0000;
            }
          }
          else {
            uVar2 = uVar2 & 0x70000;
          }
        }
        else {
          uVar2 = uVar2 & 0x30000;
        }
      }
      else {
        uVar2 = uVar2 & 0x10000;
      }
      goto LAB_0047db92;
    }
  }
  uVar2 = 0;
LAB_0047db92:
  uVar3 = uVar2 << 8;
  uVar1 = (int)uVar2 >> 8;
  if (uVar2 != 0) {
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d0) || (_DAT_00e270d4 < *(float *)(param_1 + 0x1c))
       ) {
      uVar3 = 0;
    }
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d4) || (_DAT_00e270d8 < *(float *)(param_1 + 0x1c))
       ) {
      uVar2 = 0;
    }
    if ((*(float *)(param_1 + 0x28) < _DAT_00e270d8) || (_DAT_00e270dc < *(float *)(param_1 + 0x1c))
       ) {
      uVar1 = 0;
    }
  }
  uVar3 = uVar1 | uVar2 | uVar3;
  FUN_00431a50(param_1,0,0xff,0x10,3);
  FUN_00431a50(param_1,0,uVar3,0x10,2);
  return uVar3;
}



uint __thiscall FUN_0047dc40(int param_1_00,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_4;

  iVar1 = param_1;
  uVar2 = FUN_00431770(param_1);
  iVar3 = DAT_0050cb50;
  iVar7 = 0;
  param_1 = 0;
  if (uVar2 == 0x3064) {
    if ((DAT_0050cb40 != 0) && (DAT_0050cb50 == 0)) {
      param_1 = FUN_0047da10(iVar1);
    }
    iVar3 = FUN_00431780(iVar1);
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = FUN_00431850(iVar1,iVar7);
        if (iVar4 != 0) {
          iVar4 = FUN_004318b0(iVar4);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x3c) != 0)) {
            uVar5 = FUN_00431b00(iVar1,2);
            FUN_0047d380(*(undefined4 *)(iVar4 + 0x3c),uVar5);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
      return param_1;
    }
  }
  else if ((uVar2 & 0x4000) != 0) {
    local_4 = param_1_00;
    if ((uVar2 & 0x8000) != 0) {
      DAT_0050cb50 = 1;
      local_4 = iVar3;
    }
    iVar3 = FUN_00431780(iVar1);
    if (0 < iVar3) {
      do {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x18) + iVar7 * 4);
        if (iVar4 != 0) {
          uVar6 = FUN_0047dc40(iVar4);
          param_1 = param_1 | uVar6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    if ((DAT_0050cb40 != 0) && (DAT_0050cb50 == 0)) {
      FUN_00431a50(iVar1,0,0xff,0x10,3);
      FUN_00431a50(iVar1,0,param_1,0x10,2);
    }
    if ((uVar2 & 0x8000) != 0) {
      DAT_0050cb50 = local_4;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_0047dd90(void)

{
  FUN_00431b20(&DAT_00e25de0,0x5064);
  DAT_00e25df4 = 0;
  _DAT_00e25df8 = &DAT_00e259c0;
  return &DAT_00e25de0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0047ddc0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined local_40 [64];

  DAT_0050cb48 = 0;
  puVar4 = &DAT_00e27000;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0050cb44 = 0;
  uVar3 = 0;
  DAT_0050cb4c = param_1;
  if (DAT_0050cb40 != 0) {
    FUN_0047d890();
  }
  if (param_1 == 1) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0xfe);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xfb);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xc4);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    FUN_0047bee0(2);
    DAT_00e26fe8 = *piVar1;
    if (DAT_00e26fe8 != 0) {
      FUN_00431a50(DAT_00e26fe8,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xc5);
    _DAT_00e25e6c = FUN_00448bd0(piVar1);
    _DAT_00e26fcc = *(int *)(*(int *)(*piVar1 + 0x18) + 4);
    _DAT_00e26fd0 = **(undefined4 **)(*piVar1 + 0x18);
    _DAT_00e26fec = _DAT_00e26fcc;
    _DAT_00e26ff0 = _DAT_00e26fd0;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 2) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x9b);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    _DAT_00e26fc0 = *piVar1;
    DAT_00e26fe0 = _DAT_00e26fc0;
    piVar1 = (int *)FUN_00448780(0x132);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 3) {
    uVar3 = FUN_0047dd90();
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 4) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x128);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x127);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x132);
    _DAT_00e25e6c = FUN_00448bd0(piVar1);
    FUN_0047bee0(3);
    _DAT_00e26fec = *piVar1;
    if (_DAT_00e26fec != 0) {
      FUN_00431a50(_DAT_00e26fec,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x13d);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    piVar1 = (int *)FUN_00448780(0x137);
    _DAT_00e25e74 = FUN_00448bd0(piVar1);
    FUN_0047bee0(5);
    _DAT_00e26ff4 = *piVar1;
    if (_DAT_00e26ff4 != 0) {
      FUN_00431a50(_DAT_00e26ff4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 5) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x138);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    _DAT_00e26fc0 = *piVar1;
    DAT_00e26fe0 = _DAT_00e26fc0;
    piVar1 = (int *)FUN_00448780(0x13d);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    FUN_004310b0(local_40,0x4019999a,0x4019999a,0x4019999a);
    FUN_00431640(DAT_00e26fe8,local_40);
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 6) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x133);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 7) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0x135);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  if (param_1 == 0) {
    uVar3 = FUN_0047dd90();
    piVar1 = (int *)FUN_00448780(0xfc);
    _DAT_00e25e60 = FUN_00448bd0(piVar1);
    FUN_0047bee0(0);
    DAT_00e26fe0 = *piVar1;
    if (DAT_00e26fe0 != 0) {
      FUN_00431a50(DAT_00e26fe0,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0xfb);
    _DAT_00e25e64 = FUN_00448bd0(piVar1);
    FUN_0047bee0(1);
    _DAT_00e26fe4 = *piVar1;
    if (_DAT_00e26fe4 != 0) {
      FUN_00431a50(_DAT_00e26fe4,2,0xfffffffc,0x10,3);
    }
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = *piVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    piVar1 = (int *)FUN_00448780(0x134);
    _DAT_00e25e68 = FUN_00448bd0(piVar1);
    _DAT_00e26fc8 = *piVar1;
    DAT_00e26fe8 = _DAT_00e26fc8;
    if (param_3 != 0) {
      FUN_0047dc40(param_3);
    }
  }
  return uVar3;
}



void FUN_0047e450(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [64];

  FUN_004816b0();
  FUN_004816b0();
  pfVar2 = (float *)&DAT_00e25e00;
  pfVar3 = (float *)&DAT_004c7bc0;
  do {
    if (*pfVar3 <= 0.0) {
      iVar1 = FUN_004816b0();
      *pfVar3 = (float)iVar1 * 4.656613e-10 * 6.0 - -2.0;
      FUN_0044bb10(local_40,param_1 + 0x20);
      FUN_0044eeb0(param_1 + 0xac,local_80,
                   *(float *)(param_1 + 0x1a0) * 0.003333333 * *pfVar3 * 0.2857143 * 1.2);
      *pfVar2 = local_50;
      pfVar2[1] = local_4c;
      pfVar2[2] = local_48 - 8.0;
      iVar1 = FUN_004816b0();
      *pfVar2 = ((float)iVar1 * 4.656613e-10 * 200.0 - 100.0) + *pfVar2;
      iVar1 = FUN_004816b0();
      pfVar2[1] = ((float)iVar1 * 4.656613e-10 * 200.0 - 100.0) + pfVar2[1];
    }
    pfVar3 = pfVar3 + 1;
    pfVar2 = pfVar2 + 3;
  } while ((int)pfVar3 < 0x4c7be0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047e580(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  if (param_2 != 0.0) {
    puVar7 = &DAT_004c7bc0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0xbf800000;
      puVar7 = puVar7 + 1;
    }
    return;
  }
  puVar7 = &DAT_00e25e00;
  pfVar6 = (float *)&DAT_004c7bc0;
  do {
    if (0.0 < *pfVar6) {
      fVar1 = *pfVar6;
      fVar2 = *pfVar6;
      fVar3 = (float)_DAT_00e22a40;
      *pfVar6 = fVar2 - fVar3;
      if ((0.8 < fVar1) && (fVar2 - fVar3 <= 0.8)) {
        uVar8 = 0x43;
        iVar5 = FUN_004816b0();
        iVar4 = FUN_004816b0();
        param_2 = (float)iVar4 * 4.656613e-10 * 0.2 - -0.5;
        if (param_1 == 6) {
          uVar8 = 0x6e;
          iVar4 = FUN_004816b0();
          param_2 = (float)iVar4 * 4.656613e-10 * 0.2 - -0.8;
        }
        FUN_00426c80(uVar8,7,(float)iVar5 * 4.656613e-10 * 0.1 - -0.2,param_2,0);
      }
      if (*pfVar6 <= 0.0) {
        iVar5 = FUN_004816b0();
        iVar4 = FUN_004816b0();
        FUN_00426d10(0x43,6,(float)iVar5 * 4.656613e-10 * 0.08000001 - -0.1,
                     (float)iVar4 * 4.656613e-10 * 0.2 - -0.8,puVar7,0,0,0x447a0000,0x44fa0000);
        local_c = *puVar7;
        local_8 = puVar7[1];
        local_4 = puVar7[2];
        FUN_0046a5f0(2,0,0x40a00000,&local_c,0x40a00000);
      }
    }
    pfVar6 = pfVar6 + 1;
    puVar7 = puVar7 + 3;
  } while ((int)pfVar6 < 0x4c7be0);
  return;
}



void FUN_0047e760(int param_1)

{
  if ((param_1 != 0) && (DAT_0050cb54 < 200)) {
    (&DAT_00e25ac0)[DAT_0050cb54] = param_1;
    DAT_0050cb54 = DAT_0050cb54 + 1;
  }
  return;
}



void FUN_0047e790(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  iVar2 = 0;
  iVar1 = -1;
  if (0 < DAT_0050cb54) {
    piVar3 = &DAT_00e25ac0;
    do {
      if (iVar1 != -1) {
        return;
      }
      if (*piVar3 == param_1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < DAT_0050cb54);
  }
  return;
}



undefined4 FUN_0047e7c0(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_0050cb54)) {
    return (&DAT_00e25ac0)[param_1];
  }
  return 0;
}



void FUN_0047e7e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0047e7c0(param_1);
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (&DAT_00e29c44)[param_2 * 0x22];
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar1 = FUN_0047c7d0(iVar1);
    if (iVar1 != 0) {
      FUN_0047ce60(iVar1,iVar2,1);
    }
  }
  return;
}



void FUN_0047e830(int param_1,int param_2)

{
  int iVar1;

  if (param_1 != 0) {
    iVar1 = FUN_0047e790(param_1);
    if (iVar1 != -1) {
      FUN_0041df10(0xffffffff,0,0x74726967,iVar1,**(undefined4 **)(param_2 + 0x1e70));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_0047e870(void)

{
  return (float10)_DAT_004c7be0;
}



undefined4 * FUN_0047e880(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0044eef0(param_1,0);
  return param_1;
}



void FUN_0047e8b0(short **param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;

  psVar2 = (short *)(param_2 / 10);
  psVar1 = *param_1;
  if ((int)psVar2 < *(int *)(psVar1 + 2)) {
    param_1[4] = psVar2;
    psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar2 * 0x54);
    param_1[5] = psVar4;
    if (*psVar1 != 1) {
      psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar4 * 0x54);
      param_1[6] = psVar4;
      param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar4 * 0x54);
    }
    param_1[0xb] = (short *)0x0;
    param_1[2] = (short *)(((float)param_2 - (float)(int)psVar2 * 10.0) * 0.1);
  }
  else {
    psVar4 = (short *)0x0;
    if (0 < *(int *)(psVar1 + 2)) {
      do {
        psVar3 = (short *)0x0;
        do {
          if ((short *)(int)*(short *)(*(int *)(psVar1 + 6) + 0x42 +
                                      (int)(psVar3 + (int)psVar4 * 0x15) * 2) == psVar2) {
            param_1[4] = psVar4;
            param_1[0xb] = psVar3;
            param_1[2] = (short *)(((float)param_2 - (float)(int)psVar2 * 10.0) * 0.1);
            psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                             (((uint)psVar3 & 1) + (int)psVar4 * 0x2a) * 2);
            param_1[5] = psVar4;
            if (*psVar1 != 1) {
              psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                               (((int)psVar3 >> 1 & 1U) + (int)psVar4 * 0x2a) * 2);
              param_1[6] = psVar4;
              param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                                   (((int)psVar3 >> 2 & 1U) + (int)psVar4 * 0x2a) *
                                                   2);
            }
            psVar3 = (short *)0x1869f;
            psVar4 = (short *)0x1869f;
          }
          psVar3 = (short *)((int)psVar3 + 1);
        } while ((int)psVar3 < 8);
        psVar4 = (short *)((int)psVar4 + 1);
      } while ((int)psVar4 < *(int *)(psVar1 + 2));
      return;
    }
  }
  return;
}



undefined4 FUN_0047eb50(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



void FUN_0047eb60(int param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined local_40 [16];
  float local_30;
  float local_2c;
  float local_28;
  float local_10;
  float local_c;
  float local_8;

  bVar3 = false;
  FUN_0044ed80(param_1,local_40);
  do {
    bVar2 = true;
    if (local_8 * local_28 + local_c * local_2c + local_10 * local_30 <
        local_30 * *param_2 + local_2c * param_2[1] + local_28 * param_2[2]) {
      fVar1 = *(float *)(param_1 + 8);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - -0.01;
      FUN_0044ed80(param_1,local_40);
      bVar2 = fVar1 == *(float *)(param_1 + 8);
      bVar3 = true;
    }
  } while (!bVar2);
  if (!bVar3) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - 0.01;
    FUN_0044ed80(param_1,local_40);
    do {
      bVar3 = true;
      if (local_30 * *param_2 + local_2c * param_2[1] + local_28 * param_2[2] <
          local_8 * local_28 + local_c * local_2c + local_10 * local_30) {
        fVar1 = *(float *)(param_1 + 8);
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - 0.01;
        FUN_0044ed80(param_1,local_40);
        if (fVar1 != *(float *)(param_1 + 8)) {
          bVar3 = false;
        }
      }
    } while (!bVar3);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - -0.01;
    FUN_0044ed80(param_1,local_40);
  }
  return;
}



void FUN_0047ee20(short *param_1,float param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  int *piVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_34;
  undefined local_30 [48];

  psVar3 = param_1;
  iVar4 = FUN_0047e880(local_30,param_1);
  piVar1 = (int *)(param_1 + 2);
  param_1 = (short *)0x0;
  if (0 < *piVar1) {
    local_3c = 0;
    do {
      FUN_004270c0();
      *(short **)(iVar4 + 0x10) = param_1;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      local_34 = 0;
      if (0 < *(short *)(local_3c + *(int *)(psVar3 + 6))) {
        do {
          iVar7 = 0;
          uVar6 = *(uint *)(iVar4 + 0x2c) & 0xfffffffe;
          *(uint *)(iVar4 + 0x2c) = uVar6;
          if (local_34 != 0) {
            *(uint *)(iVar4 + 0x2c) = uVar6 | 1;
          }
          iVar5 = (int)*(short *)(*(int *)(psVar3 + 6) + 4 +
                                 (local_34 + *(int *)(iVar4 + 0x10) * 0x2a) * 2);
          *(int *)(iVar4 + 0x14) = iVar5;
          if (*psVar3 == 1) {
            *(undefined4 *)(iVar4 + 8) = 0;
            do {
              (*param_5)(iVar4,param_2,param_3,param_4);
              fVar2 = 1.0 / param_2 + *(float *)(iVar4 + 8);
              *(float *)(iVar4 + 8) = fVar2;
            } while (fVar2 < 1.0);
          }
          else if (0 < *(short *)(*(int *)(psVar3 + 6) + iVar5 * 0x54)) {
            do {
              uVar6 = *(uint *)(iVar4 + 0x2c) & 0xfffffffd;
              *(uint *)(iVar4 + 0x2c) = uVar6;
              if (iVar7 != 0) {
                *(uint *)(iVar4 + 0x2c) = uVar6 | 2;
              }
              iVar5 = (int)*(short *)(*(int *)(psVar3 + 6) + 4 +
                                     (iVar7 + *(int *)(iVar4 + 0x14) * 0x2a) * 2);
              *(int *)(iVar4 + 0x18) = iVar5;
              if ((iVar5 != *(int *)(iVar4 + 0x10)) &&
                 (iVar8 = 0, 0 < *(short *)(*(int *)(psVar3 + 6) + iVar5 * 0x54))) {
                do {
                  uVar6 = *(uint *)(iVar4 + 0x2c) & 0xfffffffb;
                  *(uint *)(iVar4 + 0x2c) = uVar6;
                  if (iVar8 != 0) {
                    *(uint *)(iVar4 + 0x2c) = uVar6 | 4;
                  }
                  iVar5 = (int)*(short *)(*(int *)(psVar3 + 6) + 4 +
                                         (iVar8 + *(int *)(iVar4 + 0x18) * 0x2a) * 2);
                  *(int *)(iVar4 + 0x1c) = iVar5;
                  if (iVar5 != *(int *)(iVar4 + 0x14)) {
                    *(undefined4 *)(iVar4 + 8) = 0;
                    do {
                      (*param_5)(iVar4,param_2,param_3,param_4);
                      fVar2 = 1.0 / param_2 + *(float *)(iVar4 + 8);
                      *(float *)(iVar4 + 8) = fVar2;
                    } while (fVar2 < 1.0);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(short *)(*(int *)(psVar3 + 6) + *(int *)(iVar4 + 0x18) * 0x54));
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(short *)(*(int *)(psVar3 + 6) + *(int *)(iVar4 + 0x14) * 0x54));
          }
          local_34 = local_34 + 1;
        } while (local_34 < *(short *)(*(int *)(psVar3 + 6) + *(int *)(iVar4 + 0x10) * 0x54));
      }
      param_1 = (short *)((int)param_1 + 1);
      local_3c = local_3c + 0x54;
    } while ((int)param_1 < *(int *)(psVar3 + 2));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047f060(undefined4 *param_1,float param_2,int param_3,short *param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_9c;
  float local_98;
  int local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  undefined4 local_30 [12];

  bVar2 = false;
  local_7c = 0;
  iVar3 = FUN_0044e620(param_1,0);
  if ((float)(&DAT_00e22a60)[iVar3 * 2] <= 0.0) {
    if (param_1[0xb] == 0) {
      local_7c = 1;
      local_90 = 0.0;
    }
    else {
      local_90 = (float)(&DAT_00e22a60)[param_1[4] * 2];
    }
    (&DAT_00e22a60)[iVar3 * 2] = local_90;
    local_78 = 1.0 / param_2;
    puVar5 = param_1;
    puVar7 = local_30;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_30[2] = 0;
    local_9c = 0.0;
    FUN_0044ed80(local_30,&local_70);
    local_88 = local_40;
    local_84 = local_3c;
    local_80 = local_38;
    local_94 = 0;
    iVar3 = -1;
    do {
      iVar4 = iVar3;
      local_8c = 0.0;
      local_94 = local_94 + 1;
      iVar3 = 1;
      if (1.0 < param_2) {
        do {
          local_8c = local_8c + local_78;
          FUN_0044eeb0(local_30,&local_70,local_8c);
          fVar8 = (float10)FUN_0042f950(&local_88,&local_40);
          iVar3 = iVar3 + 1;
          local_84 = local_3c;
          local_88 = local_40;
          local_80 = local_38;
          local_9c = (float)(fVar8 + (float10)local_9c);
          local_74 = iVar3;
        } while ((float)iVar3 < param_2);
      }
      local_30[2] = 0x3f800000;
      FUN_0044ed80(local_30,&local_70);
      iVar3 = FUN_0044e620(local_30,0);
      if (iVar4 == iVar3) {
        bVar2 = true;
        local_98 = 1.0;
        if (DAT_004c7be4 == -2) {
          _DAT_00e25960 = local_70;
          DAT_00e25964 = local_6c;
          DAT_00e25968 = local_68;
          DAT_00e2596c = local_64;
          DAT_00e25970 = local_60;
          DAT_00e25974 = local_5c;
          DAT_00e25978 = local_58;
          DAT_00e2597c = local_54;
          DAT_00e25980 = local_50;
          DAT_00e25984 = local_4c;
          DAT_00e25988 = local_48;
          DAT_00e2598c = local_44;
          DAT_00e25990 = local_40;
          DAT_00e25994 = local_3c;
          DAT_00e25998 = local_38;
          DAT_00e2599c = local_34;
          DAT_004c7be4 = iVar3;
        }
        else {
          DAT_004c7be4 = -3;
        }
      }
      else {
        fVar8 = (float10)FUN_0042f950(&local_88,&local_40);
        local_84 = local_3c;
        local_88 = local_40;
        local_80 = local_38;
        local_9c = (float)(fVar8 + (float10)local_9c);
        if (0.0 <= (float)(&DAT_00e22a60)[iVar3 * 2]) {
          local_98 = (float)(&DAT_00e22a60)[iVar3 * 2];
          bVar2 = true;
        }
        else {
          local_30[2] = 0;
          (&DAT_00e22a60)[iVar3 * 2] = local_9c;
        }
      }
    } while (!bVar2);
    if (local_98 == 0.0) {
      local_98 = 1.0;
    }
    if (local_7c != 0) {
      _DAT_004c7be0 = local_9c;
    }
    puVar5 = local_30;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar6 = 0;
    iVar3 = iVar4;
    if (0 < local_94) {
      do {
        iVar4 = FUN_0044e620(local_30,0);
        *(short *)(param_3 + iVar4 * 2) = *param_4;
        fVar1 = ((float)(&DAT_00e22a60)[iVar4 * 2] - local_90) / local_9c;
        fVar1 = fVar1 * local_98 + (1.0 - fVar1) * local_90;
        (&DAT_00e22a60)[iVar4 * 2] = fVar1;
        if (iVar6 != 0) {
          *(float *)(&DAT_00e22a64 + iVar3 * 8) = fVar1 - (float)(&DAT_00e22a60)[iVar3 * 2];
        }
        local_30[2] = 0x3f800000;
        FUN_0044ed80(local_30,&local_70);
        iVar6 = iVar6 + 1;
        local_30[2] = 0;
        iVar3 = iVar4;
      } while (iVar6 < local_94);
    }
    *(float *)(&DAT_00e22a64 + iVar4 * 8) = local_98 - (float)(&DAT_00e22a60)[iVar4 * 2];
    *param_4 = *param_4 + 1;
  }
  return;
}



void FUN_0047f450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0047f060(param_1,param_2,param_3,param_4);
  return;
}



void FUN_0047f470(short *param_1,undefined4 param_2,undefined2 *param_3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  undefined local_30 [48];

  psVar2 = param_1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    puVar5 = &DAT_00e22a60;
    puVar4 = param_3;
    do {
      *puVar4 = 0xffff;
      *puVar5 = 0xbf800000;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  param_1 = (short *)0x0;
  puVar5 = (undefined4 *)FUN_0047e880(local_30,psVar2);
  local_34 = 0;
  if (0 < *(int *)(psVar2 + 2)) {
    do {
      FUN_004270c0();
      iVar3 = FUN_0044e5e0(*puVar5,local_34,0);
      puVar5[4] = iVar3;
      while (iVar3 != -1) {
        iVar3 = puVar5[4];
        puVar5[0xb] = 0;
        local_38 = 0;
        if (0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54)) {
          do {
            uVar1 = puVar5[0xb];
            puVar5[0xb] = uVar1 & 0xfffffffe;
            if (local_38 != 0) {
              puVar5[0xb] = uVar1 & 0xfffffffe | 1;
            }
            iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 + (local_38 + iVar3 * 0x2a) * 2);
            puVar5[5] = iVar3;
            if (*psVar2 == 1) {
              FUN_0047f450(puVar5,param_2,param_3,&param_1);
            }
            else {
              iVar6 = 0;
              if (0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54)) {
                do {
                  uVar1 = puVar5[0xb];
                  puVar5[0xb] = uVar1 & 0xfffffffd;
                  if (iVar6 != 0) {
                    puVar5[0xb] = uVar1 & 0xfffffffd | 2;
                  }
                  iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 + (iVar6 + puVar5[5] * 0x2a) * 2)
                  ;
                  puVar5[6] = iVar3;
                  if ((iVar3 != puVar5[4]) &&
                     (iVar7 = 0, 0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54))) {
                    do {
                      uVar1 = puVar5[0xb];
                      puVar5[0xb] = uVar1 & 0xfffffffb;
                      if (iVar7 != 0) {
                        puVar5[0xb] = uVar1 & 0xfffffffb | 4;
                      }
                      iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 +
                                             (iVar7 + puVar5[6] * 0x2a) * 2);
                      puVar5[7] = iVar3;
                      if (iVar3 != puVar5[5]) {
                        FUN_0047f450(puVar5,param_2,param_3,&param_1);
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < *(short *)(*(int *)(psVar2 + 6) + puVar5[6] * 0x54));
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(short *)(*(int *)(psVar2 + 6) + puVar5[5] * 0x54));
              }
            }
            iVar3 = puVar5[4];
            local_38 = local_38 + 1;
          } while (local_38 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54));
        }
        iVar3 = FUN_0044e5e0(*puVar5,local_34,puVar5[4] + 1);
        puVar5[4] = iVar3;
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(psVar2 + 2));
  }
  return;
}

#endif
