#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bec0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float10 extraout_ST0;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  float local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_20;
  int local_1c;
  
  local_48 = 0;
  local_40 = 0.0;
  local_5c = 0.0;
  local_60 = 0.0;
  local_4c = 0;
  bVar6 = false;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  iVar8 = *(int *)(param_1 + 0x1e70);
  uVar13 = (uint)*(char *)(iVar8 + 0x10);
  iVar11 = (int)*(char *)(*(int *)(iVar8 + 0xc) + 0x23);
  *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xfffffffb;
  *(uint *)(*(int *)(param_1 + 0x1e70) + 8) = *(uint *)(*(int *)(param_1 + 0x1e70) + 8) & 0xfffffff7
  ;
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar9 = (&DAT_00e98e90)[uVar13];
  switch(iVar11) {
  case 0:
  case 9:
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_5c = DAT_00ec8838;
      local_54 = __ftol();
      local_58 = __ftol();
    }
    else {
      local_5c = -DAT_00ec8838;
      local_58 = __ftol();
      local_54 = __ftol();
    }
    local_48 = __ftol();
    local_50 = __ftol();
    local_34 = __ftol();
    local_38 = __ftol();
    local_3c = __ftol();
    if ((_DAT_00ec8864 == _DAT_004ad750) || (bVar6 = true, _DAT_00ec88c4 <= (float)_DAT_004ad778)) {
      bVar6 = false;
    }
    local_4c = __ftol();
    local_40 = DAT_00ec8830;
    if (((DAT_00ec8820 == 0) && (local_50 != 0)) || (local_48 != 0)) {
      iVar8 = *(int *)(param_1 + 0x1e70);
      uVar12 = *(uint *)(iVar8 + 8) & 0xfffffff7;
LAB_0046c1e4:
      *(uint *)(iVar8 + 8) = uVar12;
    }
    else if (DAT_00ec8830 != _DAT_004ad750) {
      iVar8 = *(int *)(param_1 + 0x1e70);
      uVar12 = *(uint *)(iVar8 + 8) | 8;
      goto LAB_0046c1e4;
    }
    if (((local_48 != 0) && (DAT_00ec8820 != 0)) && (local_50 != 0)) {
      local_50 = 0;
    }
    local_60 = (float)(extraout_ST0 * (float10)_DAT_004ad8d8);
    if ((float10)_DAT_004ad8d8 < extraout_ST0 * (float10)_DAT_004ad8d8) {
      local_60 = 0.8;
    }
    if (local_60 < _DAT_004ad8dc) {
      local_60 = 0.8;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    local_5c = (float)(&DAT_00e98ea0)[uVar13];
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_54 = uVar9 & 0x10;
      local_58 = uVar9 & 0x20;
    }
    else {
      local_58 = uVar9 & 0x10;
      local_5c = -local_5c;
      local_54 = uVar9 & 0x20;
    }
    local_60 = (float)(&DAT_00e98e80)[uVar13];
    local_48 = __ftol();
    local_50 = uVar9 & 2;
    local_38 = uVar9 & 8;
    local_34 = (&DAT_00e98eb0)[uVar13] & 4;
    if (((&DAT_00e98eb0)[uVar13] & 0x80) != 0) {
      if ((float)_DAT_004ad8d0 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4)) {
        *(undefined *)(param_1 + 0x2f9) = 0;
      }
      cVar10 = *(char *)(param_1 + 0x2f9) + '\x01';
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
      *(char *)(param_1 + 0x2f9) = cVar10;
      if ('\x01' < cVar10) {
        local_3c = 1;
      }
    }
    if ((*(byte *)(&DAT_00e98ec0 + uVar13) & 0x80) != 0) {
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
    }
    if ((((&DAT_00e98e90)[uVar13] & 0x80) != 0) &&
       ((float)_DAT_004ad778 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4))) {
      bVar6 = true;
    }
    local_4c = (uint)(((&DAT_00e98e90)[uVar13] & 0x100) != 0);
    if (iVar11 == 1) {
      local_4c = (uint)(local_48 == 0);
    }
  }
  local_30 = FUN_0046bd20(param_1,uVar13);
  uVar12 = local_34;
  if ((DAT_0050c048 & 0x2000000) != 0) {
    uVar13 = (uint)(*(char *)(*(int *)(param_1 + 0x1e70) + 0x10) != '\0');
    fVar1 = (float)(&DAT_00e98ea0)[uVar13];
    fVar2 = (float)(&DAT_00e98e80)[uVar13];
    fVar3 = *(float *)(&DAT_00e98ea8 + uVar13 * 4);
    fVar4 = *(float *)(&DAT_00e98e88 + uVar13 * 4);
    if ((_DAT_004ad800 < fVar2) || (_DAT_004ad800 < fVar4)) {
      local_48 = 1;
    }
    else {
      local_48 = 0;
    }
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_5c = (fVar2 - fVar4) * _DAT_004ad774;
      if ((_DAT_004ad8e0 <= fVar1) || (local_54 = 1, _DAT_004ad8e0 <= fVar3)) {
        local_54 = 0;
      }
      if ((fVar1 <= _DAT_004ad774) || (local_58 = 1, fVar3 <= _DAT_004ad774)) {
        local_58 = 0;
      }
    }
    else {
      local_5c = (fVar2 - fVar4) * _DAT_004ad8e0;
      if ((_DAT_004ad8e0 <= fVar1) || (local_58 = 1, _DAT_004ad8e0 <= fVar3)) {
        local_58 = 0;
      }
      if ((fVar1 <= _DAT_004ad774) || (fVar3 <= _DAT_004ad774)) {
        local_54 = 0;
      }
      else {
        local_54 = 1;
      }
    }
    local_60 = (*(float *)(&DAT_00e98e88 + uVar13 * 4) + (float)(&DAT_00e98e80)[uVar13]) *
               _DAT_004ad774;
    if ((_DAT_004ad8e4 <= fVar2) || (local_50 = 1, _DAT_004ad8e4 <= fVar4)) {
      local_50 = 0;
    }
    uVar12 = (&DAT_00e98eb0)[uVar13] & 4;
    local_38 = (&DAT_00e98e90)[uVar13] & 8;
    if (((&DAT_00e98eb0)[uVar13] & 0x80) != 0) {
      if ((float)_DAT_004ad8d0 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4)) {
        *(undefined *)(param_1 + 0x2f9) = 0;
      }
      cVar10 = *(char *)(param_1 + 0x2f9) + '\x01';
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
      *(char *)(param_1 + 0x2f9) = cVar10;
      if ('\x01' < cVar10) {
        local_3c = 1;
      }
    }
    if ((*(byte *)(&DAT_00e98ec0 + uVar13) & 0x80) != 0) {
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
    }
    if (((*(byte *)(&DAT_00e98e90 + uVar13) & 0x80) != 0) &&
       ((float)_DAT_004ad778 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4))) {
      bVar6 = true;
    }
    if ((fVar1 <= _DAT_004ad774) || (_DAT_004ad8e0 <= fVar3)) {
      local_4c = 0;
    }
    else {
      local_4c = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (0 < DAT_004c7084) {
    if (((DAT_004c7084 == 5) && (_DAT_004ad7dc < *(float *)(param_1 + 0xe0))) &&
       (*(float *)(param_1 + 0xe0) < _DAT_004ad7e0)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    if (((DAT_004c7084 == 6) && (_DAT_004ad7e4 < *(float *)(param_1 + 0xe0))) &&
       (*(float *)(param_1 + 0xe0) < _DAT_004ad7e8)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
  }
  local_34 = FUN_0046a9c0(param_1);
  if (local_34 != 0) {
    local_34 = 1;
    local_54 = 0;
    local_58 = 0;
    local_30 = 0;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  if ((((*(uint *)(param_1 + 0x60) & 0x10) != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) == 0)) &&
     ((*(uint *)(param_1 + 100) & 0x2000000) == 0)) {
    fVar14 = (float10)FUN_0046a9f0(param_1);
    if ((local_34 & 1) == 0) {
      if ((local_34 & 2) != 0) {
        fVar14 = fVar14 - (float10)_DAT_004ad8ec;
      }
    }
    else {
      fVar14 = fVar14 - (float10)_DAT_004ad8e8;
    }
    fVar1 = (float)(fVar14 * (float10)_DAT_004ad8f0);
    if (fVar14 * (float10)_DAT_004ad8f0 == (float10)_DAT_004ad750) {
      FUN_0040a0b0(1);
    }
    else {
      uVar7 = __ftol((uint)(_DAT_004ad750 <= fVar1) * 0xb4 + 0x5a,0xffffffff,0);
      FUN_00409ee0(1,uVar7);
      DAT_004d78a0 = 1;
    }
    local_5c = local_5c - fVar1 * _DAT_004ad8e4;
    _DAT_0050cae4 = fVar1;
  }
  if ((DAT_0050c048 & 0x100) != 0) {
    if ((DAT_0050c040 != 0) && (((uVar9 & 0x800) != 0 || ((uVar9 & 0x400) != 0)))) {
      local_1c = (-(uint)((uVar9 & 0x800) != 0) & 0xfffffffe) + 1;
      local_20 = 0x536e6170;
      FUN_00450c00(param_1,&local_20);
    }
    if (((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) {
      FUN_0046a990(param_1,uVar13);
    }
  }
  if ((local_3c != 0) || (DAT_004d79e0 != 0)) {
    DAT_004d79e0 = 0;
    if ((((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) &&
       (((*(uint *)(param_1 + 0x60) & 0x5800) == 0 && ((*(uint *)(param_1 + 100) & 0x4000) == 0))))
    {
      if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 2) {
        FUN_0046ba30(param_1);
        FUN_0046bb30(**(undefined4 **)(param_1 + 0x1e70));
      }
      iVar8 = FUN_004816b0();
      if ((float)_DAT_004ad778 <= (float)iVar8 * _DAT_004ad768) {
        uVar19 = 0x19;
        uVar18 = 0x18;
        uVar17 = 0x17;
        uVar16 = 0x16;
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar15 = 0x15;
LAB_0046c78f:
        uVar15 = FUN_00427590(1,uVar7,uVar15,uVar16,uVar17,uVar18,uVar19,param_1 + 0x50);
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar16 = 0xffffffff;
      }
      else {
        iVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18);
        if (iVar8 == 0xe) {
          uVar19 = 0x14;
          uVar18 = 0x13;
          uVar17 = 0x12;
          uVar16 = 0x12;
          uVar15 = 3;
          uVar7 = 0xe;
          goto LAB_0046c78f;
        }
        uVar15 = FUN_00427590(1,iVar8,3,0x11,0x12,0x13,0x14,param_1 + 0x50);
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar16 = 1;
      }
      FUN_0041df10(uVar16,0,0x7461756e,1,uVar7,uVar15);
    }
  }
  if (local_38 == 0) {
    uVar9 = *(uint *)(param_1 + 0x60) & 0xffefffff;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x60) | 0x100000;
  }
  *(uint *)(param_1 + 0x60) = uVar9;
  if (bVar6) {
    uVar9 = *(uint *)(param_1 + 0x60) | 0x400;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x60) & 0xfffffbff;
  }
  *(uint *)(param_1 + 0x60) = uVar9;
  *(uint *)(param_1 + 0x60) = uVar9 & 0x7fffffff;
  if (((uVar9 & 0xf) != 0) && ((uVar9 & 0x4000) == 0)) {
    if (uVar12 == 0) {
      if (DAT_00ec83d0 != 0) {
        local_20 = DAT_00ec83d0;
        local_1c = param_1;
        FUN_00450c50(0x634d616e,&local_20);
        DAT_00ec83d0 = 0;
      }
    }
    else {
      local_20 = 0x43427574;
      local_1c = param_1;
      FUN_00450c50(0x634d616e,&local_20);
    }
  }
  FUN_0046aa30(param_1);
  FUN_0046ab10(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) {
    if ((_DAT_004ad8fc <= local_60) || (_DAT_004ad8fc <= -local_60)) {
      fVar1 = local_60 * _DAT_004ad900 * local_60 * _DAT_004ad900;
      if (local_60 < _DAT_004ad750) {
        fVar1 = -fVar1;
      }
      *(float *)(param_1 + 0x224) =
           -(*(float *)(param_1 + 0x74) * fVar1 * _DAT_004ad8d8) * _DAT_004ad774;
    }
    else {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    local_60 = 0.0;
  }
  if (((((_DAT_00ec884c != _DAT_004ad750) && (_DAT_00ec88ac < (float)_DAT_004ad908)) &&
       ((float)_DAT_004ad830 < _DAT_00ec88ac)) ||
      ((((float)_DAT_004ad8c8 < DAT_00ec8830 && (_DAT_00ec8850 != _DAT_004ad750)) &&
       ((_DAT_00ec88b0 < (float)_DAT_004ad908 && ((float)_DAT_004ad830 < _DAT_00ec88b0)))))) &&
     (uVar9 = *(uint *)(param_1 + 100), (uVar9 & 0x1000) == 0)) {
    *(uint *)(param_1 + 100) = uVar9 | 0x1000;
    if ((uVar9 & 0x800) != 0) {
      *(uint *)(param_1 + 100) =
           CONCAT22((short)(uVar9 >> 0x10),CONCAT11((char)((uVar9 | 0x1000) >> 8),(char)uVar9)) |
           0x2000;
    }
  }
  if ((*(uint *)(param_1 + 100) & 0x2000) != 0) {
    iVar8 = FUN_00427670(0,0x80000);
    if (iVar8 == 0) {
      FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),2,2,2,2,2,param_1 + 0x50);
      FUN_00427690(0,0x80000);
    }
    if (((_DAT_00ec884c == _DAT_004ad750) && (DAT_00ec8830 <= (float)_DAT_004ad8c8)) ||
       (_DAT_004ad910 < *(float *)(param_1 + 0x1a0))) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffdfff;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x60);
  if (((byte)uVar9 & 0xf) != 2) {
    return;
  }
  if ((uVar9 & 0x4000) != 0) {
    return;
  }
  if (local_50 == 0) {
    *(uint *)(param_1 + 0x60) = uVar9 & 0xfffffdff;
  }
  else {
    fVar1 = (float)_DAT_004ad918;
    *(uint *)(param_1 + 0x60) = uVar9 | 0x200;
    if (*(float *)(param_1 + 0x1a0) < fVar1) {
      *(uint *)(param_1 + 0x60) = uVar9 & 0xffffffef | 0x200;
    }
  }
  fVar1 = _DAT_004ad7f4;
  if ((*(byte *)(*(int *)(param_1 + 0x1e70) + 8) & 8) == 0) {
    if (local_48 == 0) {
      if (((float)_DAT_004ad928 <= local_60) ||
         ((float)_DAT_004ad930 <= *(float *)(param_1 + 0x1a0))) {
        *(undefined4 *)(param_1 + 0x18c) = 0x3dcccccd;
      }
      else {
        *(float *)(param_1 + 0x18c) = local_60 * _DAT_004ad938;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
      if (local_34 != 0) {
        *(undefined4 *)(param_1 + 0x18c) = 0x3f000000;
      }
    }
  }
  else {
    fVar2 = (local_40 - _DAT_004ad80c) * _DAT_004ad774 * _DAT_004ad920;
    *(float *)(param_1 + 0x18c) = fVar2;
    if (fVar1 < fVar2) {
      *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x18c) < _DAT_004ad80c) {
      *(undefined4 *)(param_1 + 0x18c) = 0xbf800000;
    }
  }
  if ((*(float *)(param_1 + 0x264) <= _DAT_004ad750) &&
     (_DAT_004ad800 < *(float *)(param_1 + 0x18c))) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  }
  uVar9 = *(uint *)(param_1 + 100);
  uVar13 = 1;
  if ((uVar9 & 0x200) == 0) {
    uVar13 = local_4c;
  }
  if (uVar13 == 0) {
    uVar9 = uVar9 & 0xfffffff7;
  }
  else {
    uVar9 = uVar9 | 8;
  }
  *(uint *)(param_1 + 100) = uVar9;
  if ((local_48 != 0) || (_DAT_004ad774 < local_40)) {
    uVar9 = *(uint *)(param_1 + 100) & 0xfffffffb;
  }
  else {
    uVar9 = *(uint *)(param_1 + 100) | 4;
  }
  *(uint *)(param_1 + 100) = uVar9;
  fVar1 = _DAT_004ad7f4;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0x1a0) <= _DAT_004ad93c)) {
    fVar1 = *(float *)(param_1 + 0x1e8) - (float)_DAT_00e22a40 * (float)_DAT_004ad778;
    bVar6 = fVar1 < _DAT_004ad750;
    *(float *)(param_1 + 0x1e8) = fVar1;
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x1e8) = 0;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1e8) - (float)_DAT_00e22a40 * (float)_DAT_004ad928;
    *(float *)(param_1 + 0x1e8) = fVar2;
    if (fVar1 < fVar2) {
      *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
    }
  }
  if ((local_30 != 0) && ((uVar5 & 0x200000) != 0)) {
    FUN_004816b0();
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800000;
  }
  if ((((*(uint *)(param_1 + 0x60) & 0x800000) != 0) && (local_48 == 0)) &&
     (local_40 <= _DAT_004ad774)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  *(float *)(param_1 + 0x1f14) = *(float *)(param_1 + 0x1f14) - (float)_DAT_00e22a40;
  if (((local_54 != 0) || (local_58 != 0)) && ((*(uint *)(param_1 + 100) & 0x400) != 0)) {
    FUN_00426c80(0x4b,7,0x3f000000,0x3f800000,1);
  }
  if (local_54 == 0) {
    if (local_58 != 0) goto LAB_0046cca5;
  }
  else {
    if (local_58 == 0) {
      uVar7 = 0xbf800000;
      goto LAB_0046ccae;
    }
LAB_0046cca5:
    if (local_54 == 0) {
      uVar7 = 0x3f800000;
      goto LAB_0046ccae;
    }
  }
  uVar7 = 0;
LAB_0046ccae:
  FUN_0046b5a0(param_1,uVar7);
  if ((_DAT_004ad8fc <= local_5c) || (_DAT_004ad8fc <= -local_5c)) {
    fVar1 = local_5c * _DAT_004ad900 * local_5c * _DAT_004ad900;
    if (local_5c < _DAT_004ad750) {
      fVar1 = -fVar1;
    }
    *(float *)(param_1 + 0x1f0) = -(*(float *)(param_1 + 0x74) * fVar1 * _DAT_004ad8d8);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  fVar1 = _DAT_004ad76c;
  *(float *)(param_1 + 0x2fc) = local_60;
  fVar2 = _DAT_004ad774;
  if ((fVar1 < local_60) &&
     (*(float *)(param_1 + 0x1f0) =
           (_DAT_004ad7f4 - local_60 * _DAT_004ad938) * *(float *)(param_1 + 0x1f0),
     fVar2 < *(float *)(param_1 + 0x18c))) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) - local_60 * _DAT_004ad940;
  }
  if (((local_60 < _DAT_004ad770) &&
      (*(float *)(param_1 + 0x1f0) =
            (_DAT_004ad7f4 - local_60 * _DAT_004ad938) * *(float *)(param_1 + 0x1f0),
      (*(uint *)(param_1 + 100) & 0x200) == 0)) && (_DAT_004ad774 < *(float *)(param_1 + 0x18c))) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) - local_60 * _DAT_004ad940;
  }
  if (((*(uint *)(param_1 + 0x60) & 0x400000) != 0) && (*(float *)(param_1 + 0x18c) < _DAT_004ad944)
     ) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f99999a;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  return;
}

