#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004611f0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  int *piVar22;
  int local_c0;
  float local_b8;
  int local_b0;
  float local_ac;
  undefined4 local_a4;
  uint *local_9c;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  int aiStack_60 [6];
  int local_48 [6];
  int aiStack_30 [6];
  int local_18 [6];
  
  iVar19 = *(int *)(param_1 + 0x84);
  bVar9 = false;
  bVar4 = false;
  bVar8 = false;
  local_a4 = 0x3e800000;
  local_b8 = 0.0;
  uVar2 = *(uint *)(iVar19 + 0x60);
  if ((uVar2 & 0x1000) == 0) {
    if ((uVar2 & 0x4000) == 0) {
      bVar3 = *(float *)(iVar19 + 0x218) < _DAT_004ad3ac ||
              (_DAT_004ad218 < *(float *)(iVar19 + 0x2b8) ||
              ((*(uint *)(iVar19 + 100) & 0x4000) != 0 || (uVar2 & 0x2000) != 0));
      pbVar21 = (byte *)(iVar19 + 0x2a0);
      iVar11 = 6;
      do {
        if ((float)_DAT_004ad3b0 < *(float *)(pbVar21 + -0x18)) {
          bVar3 = true;
        }
        if ((*pbVar21 & 0x1c) != 0) {
          bVar3 = true;
        }
        pbVar21 = pbVar21 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if ((uVar2 & 0x400) != 0) {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0x40800000;
        *(undefined4 *)(&DAT_004c52a8 + param_2 * 4) = 0x40a00000;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0xbf800000;
    }
  }
  else {
    *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0x3f800000;
    *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
  }
  iVar11 = FUN_00445690();
  fVar5 = _DAT_004ad218;
  if (iVar11 == 0) {
    fVar1 = *(float *)(&DAT_004c52a0 + param_2 * 4) - (float)_DAT_00e22a40 * (float)_DAT_004ad3b8;
    *(float *)(&DAT_004c52a0 + param_2 * 4) = fVar1;
    if (fVar1 <= fVar5) {
      *(float *)(&DAT_004c52a0 + param_2 * 4) = fVar1 - _DAT_004ad224;
    }
    fVar5 = *(float *)(iVar19 + 0x2b8) - (float)_DAT_00e22a40;
    bVar3 = fVar5 < _DAT_004ad218;
    *(float *)(iVar19 + 0x2b8) = fVar5;
    if (bVar3) {
      *(undefined4 *)(iVar19 + 0x2b8) = 0;
    }
    fVar1 = _DAT_004ad22c;
    fVar5 = *(float *)(&DAT_0050ca68 + param_2 * 4) * (float)_DAT_00e22a40 +
            *(float *)(&DAT_0050ca60 + param_2 * 4);
    *(float *)(&DAT_0050ca60 + param_2 * 4) = fVar5;
    if (fVar1 < fVar5) {
      *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0x3f800000;
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
    }
    fVar5 = _DAT_004ad218;
    if ((_DAT_004ad218 < *(float *)(&DAT_0050ca60 + param_2 * 4)) &&
       (fVar1 = *(float *)(&DAT_004c52a8 + param_2 * 4), fVar6 = (float)_DAT_00e22a40,
       *(float *)(&DAT_004c52a8 + param_2 * 4) = fVar1 - fVar6, fVar1 - fVar6 <= fVar5)) {
      *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0xc0800000;
    }
  }
  if (*(float *)(&DAT_0050ca60 + param_2 * 4) <= _DAT_004ad218) {
    *(undefined4 *)(&DAT_0050ca60 + param_2 * 4) = 0;
    *(undefined4 *)(&DAT_0050ca68 + param_2 * 4) = 0;
    if (param_2 == 0) {
      iVar19 = 0;
      do {
        FUN_004285d0(iVar19 + 0x1b,0);
        iVar19 = iVar19 + 1;
      } while (iVar19 < 6);
      FUN_004285d0(0x21,0);
      FUN_004285d0(0x22,0);
      return;
    }
    iVar19 = 0;
    do {
      FUN_004285d0(iVar19 + 0x23,0);
      iVar19 = iVar19 + 1;
    } while (iVar19 < 6);
    FUN_004285d0(0x29,0);
    FUN_004285d0(0x2a,0);
    return;
  }
  iVar11 = FUN_00445690();
  if (iVar11 == 0) {
    iVar11 = 6;
    puVar12 = (uint *)(iVar19 + 0x2a0);
    do {
      iVar11 = iVar11 + -1;
      *puVar12 = *puVar12 ^ 2;
      puVar12 = puVar12 + 1;
    } while (iVar11 != 0);
  }
  local_8c = 0;
  local_7c = 0xff;
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  __ftol();
  local_70 = 0;
  local_80 = 0xff;
  local_78 = 0xff;
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  __ftol();
  if ((*(uint *)(iVar19 + 0x60) & 0x2000) != 0) {
    pbVar21 = (byte *)(iVar19 + 0x2a0);
    iVar19 = 0;
    do {
      if ((*pbVar21 & 2) == 0) {
        *(undefined4 *)((int)local_18 + iVar19) = 200;
        *(undefined4 *)((int)aiStack_30 + iVar19) = 200;
        *(undefined4 *)((int)aiStack_60 + iVar19) = 200;
      }
      else {
        *(undefined4 *)((int)local_18 + iVar19) = 100;
        *(undefined4 *)((int)aiStack_30 + iVar19) = 100;
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
          uVar13 = __ftol();
          *(undefined4 *)((int)aiStack_60 + iVar19) = uVar13;
        }
        else {
          uVar13 = __ftol();
          *(undefined4 *)((int)aiStack_60 + iVar19) = uVar13;
        }
      }
      *(undefined4 *)((int)local_48 + iVar19) = 0xff;
      iVar19 = iVar19 + 4;
      pbVar21 = pbVar21 + 4;
    } while (iVar19 < 0x18);
    goto LAB_0046207a;
  }
  if (((*(uint *)(iVar19 + 0x60) & 0x5000) != 0) || ((*(uint *)(iVar19 + 100) & 0x4000) != 0)) {
    piVar22 = local_48;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *piVar22 = 0xff;
      piVar22 = piVar22 + 1;
    }
    piVar22 = local_18;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *piVar22 = 0xff;
      piVar22 = piVar22 + 1;
    }
    iVar19 = 0;
    do {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      iVar11 = __ftol();
      *(int *)((int)aiStack_30 + iVar19) = iVar11;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      iVar14 = __ftol();
      *(int *)((int)aiStack_60 + iVar19) = iVar14;
      if (iVar11 < iVar14) {
        *(int *)((int)aiStack_60 + iVar19) = iVar11;
      }
      iVar19 = iVar19 + 4;
    } while (iVar19 < 0x18);
    goto LAB_0046207a;
  }
  bVar7 = false;
  local_9c = (uint *)(iVar19 + 0x2a0);
  bVar3 = false;
  iVar11 = 0;
  puVar12 = local_9c;
  do {
    uVar2 = *puVar12;
    if ((uVar2 & 4) != 0) {
      if (iVar11 < 3) {
        bVar3 = true;
      }
      else {
        bVar7 = true;
      }
    }
    if ((uVar2 & 0x10) != 0) {
      bVar9 = true;
    }
    if (_DAT_004ad22c <= (float)puVar12[-6]) {
      bVar4 = true;
    }
    if ((uVar2 & 8) != 0) {
      bVar8 = true;
    }
    iVar11 = iVar11 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar11 < 6);
  if (bVar3) {
    local_7c = 0;
    local_8c = 0xff;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    __ftol();
  }
  if (bVar7) {
    local_78 = 0;
    local_70 = 0xff;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    __ftol();
  }
  local_80 = 0xff;
  local_b0 = 0;
  do {
    local_c0 = 3;
    do {
      local_ac = (float)local_9c[-6];
      if (local_ac < _DAT_004ad218) {
        local_ac = 0.0;
      }
      if (_DAT_004ad22c < local_ac) {
        local_ac = 1.0;
      }
      iVar14 = __ftol();
      iVar11 = __ftol();
      iVar20 = 0;
      if (((float)_DAT_004ad3e0 < local_ac) &&
         (iVar15 = FUN_004816b0(), _DAT_004ad228 < (float)iVar15 * _DAT_004ad240)) {
        iVar14 = 0x80;
        iVar11 = 0;
      }
      iVar15 = 100;
      if (_DAT_004ad22c <= local_ac) {
        iVar14 = __ftol();
        iVar20 = __ftol();
        iVar15 = iVar14;
        iVar11 = iVar20;
      }
      uVar2 = *local_9c;
      if ((uVar2 & 8) == 0) {
        if ((*(float *)(iVar19 + 0x2b8) <= _DAT_004ad218) || ((uVar2 & 1) == 0)) {
          *local_9c = uVar2 & 0xfffffffe;
        }
        else if ((uVar2 & 2) != 0) {
          iVar14 = 0xff;
          iVar20 = 0x96;
          iVar11 = 0xff;
          iVar15 = 0xff;
        }
      }
      uVar2 = *local_9c;
      if (((uVar2 & 4) != 0) && ((uVar2 & 2) != 0)) {
        iVar14 = 0x80;
        iVar20 = 0xff;
        iVar11 = 0x80;
        iVar15 = 200;
      }
      if ((uVar2 & 8) != 0) {
        if (((bVar3) || (bVar7)) && ((uVar2 & 2) != 0)) {
          iVar14 = 0x80;
          iVar20 = 0xff;
          iVar11 = 0x80;
          iVar15 = 200;
        }
        else {
          iVar14 = __ftol();
          iVar11 = __ftol();
          iVar20 = __ftol();
          iVar15 = __ftol();
        }
      }
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if (0xff < iVar14) {
        iVar14 = 0xff;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      if (iVar20 < 0) {
        iVar20 = 0;
      }
      if (0xff < iVar20) {
        iVar20 = 0xff;
      }
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      local_9c = local_9c + 1;
      *(int *)((int)local_18 + local_b0) = iVar14;
      *(int *)((int)aiStack_30 + local_b0) = iVar11;
      *(int *)((int)aiStack_60 + local_b0) = iVar20;
      *(int *)((int)local_48 + local_b0) = iVar15;
      local_b0 = local_b0 + 4;
      local_c0 = local_c0 + -1;
    } while (local_c0 != 0);
  } while (local_b0 < 0x18);
  if (bVar8) {
    uVar13 = __ftol();
    uVar16 = FUN_00421360(s__SCREENTEXT_433__c_sENGINE_n_cFI_004c6f84);
    uVar13 = __ftol(0xffffffff,0xffffff80,0,uVar13,uVar16);
    FUN_00450530(0x36,uVar13);
  }
  if (_DAT_004ad2d8 <= *(float *)(iVar19 + 0x218)) {
    if (*(float *)(iVar19 + 0x218) < _DAT_004ad3ac) {
      local_8c = __ftol();
      local_80 = __ftol();
      local_7c = __ftol();
      uVar13 = __ftol();
      if ((*(uint *)(iVar19 + 0x60) & 0x800000) != 0) {
        uVar16 = FUN_00421360(s__SCREENTEXT_435__c_sTEMP_n_cWARN_004c6f40);
        uVar13 = __ftol(local_8c,local_80,local_7c,uVar13,uVar16);
        FUN_00450530(0x36,uVar13);
      }
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      __ftol();
      local_78 = local_7c;
      local_70 = local_8c;
      if ((*(uint *)(iVar19 + 0x60) & 0x800000) != 0) {
        local_a4 = 0x3e4ccccd;
        local_b8 = 0.5;
      }
    }
  }
  else {
    uVar13 = __ftol();
    if ((!bVar8) && ((*(uint *)(iVar19 + 0x60) & 0x800000) != 0)) {
      uVar16 = FUN_00421360(s__SCREENTEXT_434__c_sOVERHEAT_004c6f64);
      uVar13 = __ftol(0xffffffff,0xffffff80,0,uVar13,uVar16);
      FUN_00450530(0x36,uVar13);
    }
    local_8c = 0xff;
    local_70 = 0xff;
    local_7c = 0;
    local_80 = 0x80;
    local_78 = 0;
    if ((*(uint *)(iVar19 + 0x60) & 0x800000) != 0) {
      local_a4 = 0x3e99999a;
      local_b8 = 0.75;
    }
  }
  if (bVar4) {
    uVar13 = __ftol();
    uVar16 = __ftol();
    uVar17 = FUN_00421360(s__SCREENTEXT_432__c_sWarning_004c6f24);
    uVar13 = __ftol(uVar13,uVar16,uVar16,uVar13,uVar17);
    FUN_00450530(0x36,uVar13);
  }
  iVar11 = DAT_0050c5f0;
  if ((*(uint *)(iVar19 + 0x60) & 0x400) == 0) {
    *(undefined4 *)(&DAT_0050ca70 + param_2 * 4) = 0;
  }
  else {
    if (((bVar3) || (bVar7)) || (bVar9)) {
      *(undefined4 *)(&DAT_0050ca70 + param_2 * 4) = 0;
      if (iVar11 == 0) {
        FUN_004816b0();
      }
      uVar13 = FUN_00421360(s__SCREENTEXT_436__c_sRepair_004c6eec);
      uVar13 = __ftol(uVar13);
      uVar17 = 0xffffffff;
      uVar16 = 0xffffff80;
    }
    else {
      if (*(float *)(&DAT_0050ca70 + param_2 * 4) <= _DAT_004ad218) {
        FUN_00426c80(0x46,7,0x3e800000,0x3f800000,0);
      }
      bVar4 = _DAT_004ad410 <= *(float *)(&DAT_0050ca70 + param_2 * 4) + (float)_DAT_00e22a40;
      *(float *)(&DAT_0050ca70 + param_2 * 4) =
           *(float *)(&DAT_0050ca70 + param_2 * 4) + (float)_DAT_00e22a40;
      if (bVar4) goto LAB_00461e6d;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar13 = FUN_00421360(s__SCREENTEXT_437__c_sRepair_004c6f08);
      uVar13 = __ftol(uVar13);
      uVar17 = 0x40;
      uVar16 = 0x40;
    }
    uVar13 = __ftol(uVar16,0xffffff80,uVar17,uVar13);
    FUN_00450530(0x36,uVar13);
  }
LAB_00461e6d:
  iVar11 = FUN_00445690();
  if (iVar11 == 0) {
    if (bVar8) {
      if ((double)_DAT_0050ca78 < _DAT_00e22a38 - _DAT_004ad318) {
        _DAT_0050ca7c = (float)_DAT_00e22a38;
        FUN_00426c80(0x87,7,0x3e800000,0x3f800000,0);
      }
      if ((double)_DAT_0050ca7c < _DAT_00e22a38 - _DAT_004ad418) {
        FUN_00426c80(0x86,6,0x3e800000,0x3f800000,1);
      }
      _DAT_0050ca78 = (float)_DAT_00e22a38;
    }
    if (_DAT_004ad218 < local_b8) {
      FUN_00426c80(0x83,7,local_a4,local_b8,1);
    }
    if (((*(uint *)(iVar19 + 0x60) & 0x400) != 0) && (((bVar3 || (bVar7)) || (bVar9)))) {
      if ((double)_DAT_0050ca80 < _DAT_00e22a38 - _DAT_004ad318) {
        _DAT_0050ca84 = (float)_DAT_00e22a38;
        FUN_00426c80(0x85,7,0x3e800000,0x3f800000,0);
      }
      if ((double)_DAT_0050ca84 < _DAT_00e22a38 - _DAT_004ad418) {
        FUN_00426c80(0x75,6,0x3e800000,0x3f800000,1);
      }
      _DAT_0050ca80 = (float)_DAT_00e22a38;
    }
  }
LAB_0046207a:
  local_b8 = 0.0;
  do {
    iVar19 = 0;
    do {
      iVar14 = iVar19 + (int)local_b8 * 3;
      iVar11 = iVar14 + 0x1b;
      if (param_2 != 0) {
        iVar11 = iVar14 + 0x23;
      }
      FUN_004285d0(iVar11,1);
      if ((DAT_00e996dc & 0x4000) == 0) {
        uVar13 = __ftol();
      }
      else {
        uVar13 = __ftol();
      }
      uVar13 = __ftol(uVar13);
      FUN_00428660(iVar11,uVar13);
      FUN_004286f0(iVar11,0x3f400000,0x3f400000);
      uVar13 = __ftol();
      FUN_00428740(iVar11,*(undefined *)(local_18 + iVar14),*(undefined *)(aiStack_30 + iVar14),
                   *(undefined *)(aiStack_60 + iVar14),uVar13);
      iVar19 = iVar19 + 1;
    } while (iVar19 < 3);
    local_b8 = (float)((int)local_b8 + 1);
  } while ((int)local_b8 < 2);
  cVar18 = (-(param_2 != 0) & 8U) + 0x21;
  FUN_004285d0(cVar18,1);
  uVar10 = __ftol();
  uVar16 = CONCAT22((short)((uint)iVar19 >> 0x10),uVar10);
  uVar13 = __ftol(uVar16);
  FUN_00428660(cVar18,uVar13);
  FUN_004286f0(cVar18,0x3f400000,0x3f400000);
  uVar13 = __ftol();
  FUN_00428740(cVar18,local_8c,local_80,local_7c,uVar13);
  cVar18 = (-(param_2 != 0) & 8U) + 0x22;
  FUN_004285d0(cVar18,1);
  uVar13 = __ftol(uVar16);
  FUN_00428660(cVar18,uVar13);
  FUN_004286f0(cVar18,0x3f400000,0x3f400000);
  uVar13 = __ftol();
  FUN_00428740(cVar18,local_70,local_80,local_78,uVar13);
  return;
}

