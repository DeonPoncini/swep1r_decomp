#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466ec0(float param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float10 fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = (int)param_1;
  uVar10 = 1;
  fVar2 = *(float *)((int)param_1 + 0x78);
  iVar9 = 5;
  bVar4 = false;
  local_1c = 0.1;
  local_20 = 0.1;
  local_24 = 0.2;
  local_28 = 0x3e4ccccd;
  local_2c = 0x3e4ccccd;
  local_18 = 1;
  local_10 = 5;
  if (*(int *)((int)param_1 + 0xc) == -1) {
    return;
  }
  local_14 = *(int *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x14) = param_2;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  if (*(int *)((int)param_1 + 8) == 6) {
    return;
  }
  param_1 = fVar2;
  if (fVar2 < _DAT_004ad590) {
    param_1 = -fVar2;
  }
  FUN_00468d00(iVar5);
  iVar6 = **(int **)(iVar5 + 0x34);
  if (iVar6 != 0) {
    iVar8 = 0;
    do {
      *(uint *)(iVar6 + 0x100) = *(uint *)(iVar6 + 0x100) | 0x10000000;
      iVar8 = iVar8 + 4;
      iVar6 = *(int *)(iVar8 + *(int *)(iVar5 + 0x34));
    } while (iVar6 != 0);
  }
  switch(*(undefined4 *)(iVar5 + 0x14)) {
  case 0:
    iVar6 = 0;
    *(undefined4 *)(iVar5 + 0x78) = 0;
    iVar9 = **(int **)(iVar5 + 0x34);
    while (iVar9 != 0) {
      iVar6 = iVar6 + 4;
      *(uint *)(iVar9 + 0x100) = *(uint *)(iVar9 + 0x100) & 0xefffffff;
      iVar9 = *(int *)(iVar6 + *(int *)(iVar5 + 0x34));
    }
    break;
  case 1:
    uVar10 = 0;
    FUN_004816b0();
    uVar12 = __ftol();
    switch(uVar12) {
    case 0:
      *(undefined4 *)(iVar5 + 0x88) = 0x1b;
      break;
    case 1:
      *(undefined4 *)(iVar5 + 0x88) = 0x1c;
      break;
    case 2:
      *(undefined4 *)(iVar5 + 0x88) = 0xf;
      break;
    case 3:
      *(undefined4 *)(iVar5 + 0x88) = 0x19;
      break;
    default:
      *(undefined4 *)(iVar5 + 0x88) = 0x1a;
    }
    break;
  case 2:
  case 0x21:
    *(undefined4 *)(iVar5 + 0x88) = 0xf;
    uVar10 = 0;
    break;
  case 4:
  case 5:
    *(undefined4 *)(iVar5 + 0x88) = 0x10;
    uVar10 = 0;
    break;
  case 6:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 0xb;
    if (local_14 == 6) {
      local_28 = 0;
    }
    break;
  case 7:
    *(undefined4 *)(iVar5 + 0x88) = 0x13;
    uVar10 = 0;
    break;
  case 8:
    iVar9 = FUN_004816b0();
    if ((float)_DAT_004ad5a0 <= (float)iVar9 * _DAT_004ad594) {
      uVar12 = 0x32;
    }
    else {
      uVar12 = 0x31;
    }
    FUN_00426c80(uVar12,6,0x3e800000,0x3f000000,0);
    *(undefined4 *)(iVar5 + 0x88) = 0x14;
    local_28 = 0;
    break;
  case 9:
    *(undefined4 *)(iVar5 + 0x88) = 0x15;
    local_28 = 0;
    uVar10 = 0;
    break;
  case 10:
    goto switchD_00466f94_caseD_a;
  case 0xb:
    *(undefined4 *)(iVar5 + 0x88) = 9;
    local_28 = 0;
    local_2c = 0;
    break;
  case 0xc:
    *(undefined4 *)(iVar5 + 0x88) = 10;
    local_28 = 0;
    uVar10 = 0;
    break;
  case 0xd:
  case 0x36:
  case 0x3b:
  case 0x40:
    *(undefined4 *)(iVar5 + 0x88) = 3;
    uVar10 = 0;
    break;
  case 0xe:
    local_28 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 4;
    iVar9 = FUN_004816b0();
    *(float *)(iVar5 + 0x1c) =
         (float)iVar9 * _DAT_004ad594 * (float)_DAT_004ad5a8 - (float)_DAT_004ad5b0;
    break;
  case 0xf:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 5;
    local_28 = 0;
    break;
  case 0x10:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 0;
    break;
  case 0x11:
    *(undefined4 *)(iVar5 + 0x88) = 5;
    iVar9 = FUN_00427670(0,0x80000000);
    if (iVar9 != 0) break;
    if ((DAT_00e2a67c == 4) || (DAT_00e2a67c == 7)) {
      iVar9 = FUN_004816b0();
      if (_DAT_004ad5ec <= (float)iVar9 * _DAT_004ad594) break;
      iVar9 = FUN_004816b0();
      if (_DAT_004ad5f0 < (float)iVar9 * _DAT_004ad594) {
        uVar16 = 6;
        uVar15 = 9;
        uVar14 = 6;
        uVar13 = 9;
        uVar12 = 6;
LAB_0046745b:
        FUN_00427590(0,(int)DAT_00e35a84,uVar12,uVar13,uVar14,uVar15,uVar16,0);
        break;
      }
      uVar16 = 8;
      uVar15 = 0xe;
      uVar14 = 0x12;
      uVar13 = 5;
      uVar12 = 1;
    }
    else {
      if (DAT_00e2a67c != 8) break;
      iVar9 = FUN_004816b0();
      if (_DAT_004ad5e0 <= (float)iVar9 * _DAT_004ad594) {
        iVar9 = FUN_004816b0();
        if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad5e8) {
          FUN_00427590(0,(int)DAT_00e35a84,6,9,6,9,6,0);
        }
        break;
      }
      iVar9 = FUN_004816b0();
      if (_DAT_004ad5e4 <= (float)iVar9 * _DAT_004ad594) {
        uVar16 = 0xc;
        uVar15 = 3;
        uVar14 = 5;
        uVar13 = 7;
        uVar12 = 8;
        goto LAB_0046745b;
      }
      uVar16 = 0xb;
      uVar15 = 1;
      uVar14 = 5;
      uVar13 = 7;
      uVar12 = 0xc;
    }
    FUN_00427590(0,(int)DAT_00e35a84,uVar12,uVar13,uVar14,uVar15,uVar16,0);
    break;
  case 0x12:
    if ((*(float *)(iVar5 + 0x50) == _DAT_004c403c) && (*(float *)(iVar5 + 0x54) == _DAT_004c4040))
    {
      iVar9 = 2;
      bVar4 = true;
      local_10 = 2;
    }
    FUN_004816b0();
    iVar6 = __ftol();
    if (iVar6 == *(int *)(iVar5 + 0xa4)) {
      iVar6 = iVar6 + 1;
    }
    if (iVar9 <= iVar6) {
      iVar6 = 0;
    }
    *(int *)(iVar5 + 0xa4) = iVar6;
    switch(iVar6) {
    case 0:
      if (bVar4) {
        *(undefined4 *)(iVar5 + 0x88) = 4;
        uVar10 = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x88) = 3;
        uVar10 = 0;
      }
      break;
    case 1:
      if (!bVar4) {
        *(undefined4 *)(iVar5 + 0x88) = 6;
        uVar10 = 0;
        break;
      }
    default:
switchD_00466f94_caseD_a:
      *(undefined4 *)(iVar5 + 0x88) = 8;
      uVar10 = 0;
      break;
    case 2:
      *(undefined4 *)(iVar5 + 0x88) = 7;
      uVar10 = 0;
      break;
    case 3:
      *(undefined4 *)(iVar5 + 0x88) = 4;
      uVar10 = 0;
    }
    break;
  case 0x13:
    local_2c = 0;
    if (*(int *)(iVar5 + 0x88) == 1) {
      local_18 = 0;
    }
    *(undefined4 *)(iVar5 + 0x88) = 1;
    break;
  case 0x14:
    FUN_0042f860(&local_c,iVar5 + 0x50,iVar5 + 0x44);
    local_4 = 0;
    if (*(int *)(iVar5 + 0xa0) == 0) {
      fVar11 = (float10)FUN_0042f560(-local_c,local_8);
    }
    else {
      fVar11 = (float10)*(float *)(iVar5 + 0x6c);
    }
    fVar11 = fVar11 - (float10)*(float *)(iVar5 + 0x68);
    if (fVar11 < (float10)_DAT_004ad5b8) {
      fVar11 = fVar11 - (float10)_DAT_004ad5bc;
    }
    if ((float10)_DAT_004ad5c0 < fVar11) {
      fVar11 = fVar11 - (float10)_DAT_004ad5c4;
    }
    fVar3 = (float10)_DAT_004ad598;
    *(undefined4 *)(iVar5 + 0x88) = 1;
    if ((fVar3 < fVar11) || (fVar11 < (float10)_DAT_004ad5c8)) {
      if (((float10)_DAT_004ad5cc < fVar11) && (fVar11 < (float10)_DAT_004ad5d0)) {
        *(undefined4 *)(iVar5 + 0x88) = 0xb;
        uVar10 = 0;
      }
      if ((fVar11 < (float10)_DAT_004ad5d4) && ((float10)_DAT_004ad5d8 < fVar11)) {
        *(undefined4 *)(iVar5 + 0x88) = 0xb;
        uVar10 = 0;
        param_1 = -1.0;
      }
      if ((float10)_DAT_004ad5d0 < fVar11) {
        *(undefined4 *)(iVar5 + 0x88) = 0xc;
        uVar10 = 0;
      }
      else if (fVar11 < (float10)_DAT_004ad5d8) {
        *(undefined4 *)(iVar5 + 0x88) = 0xc;
        uVar10 = 0;
      }
    }
    local_2c = 0;
    if ((local_14 == 0x13) && (*(int *)(iVar5 + 0x88) == 1)) {
      local_18 = 0;
    }
    break;
  case 0x18:
    *(undefined4 *)(iVar5 + 0x88) = 9;
    break;
  case 0x19:
    iVar9 = FUN_004816b0();
    if ((float)_DAT_004ad5f8 <= (float)iVar9 * _DAT_004ad594) {
      FUN_00427590(0,(int)DAT_00e35a84,2,2,2,2,2,0);
    }
    else {
      FUN_00467c80(10,0xb,0xc,0xd,0x12);
    }
    *(undefined4 *)(iVar5 + 0x88) = 9;
    uVar10 = 0;
    iVar9 = FUN_00450b30(0x456c6d6f,0x15);
    if (*(int *)(iVar9 + 0x14) == 0x20) {
      FUN_00466ec0(iVar9,0x25);
    }
    else if (*(int *)(iVar9 + 0x14) == 0x1d) {
      FUN_00466ec0(iVar9,0x23);
    }
    break;
  case 0x1a:
    iVar9 = FUN_004816b0();
    if ((float)_DAT_004ad5f8 <= (float)iVar9 * _DAT_004ad594) {
      FUN_00427590(0,(int)DAT_00e35a84,3,3,3,5,5,0);
    }
    else {
      FUN_00467c80(2,0x1f,7,8,9);
    }
    *(undefined4 *)(iVar5 + 0x88) = 10;
    uVar10 = 0;
    iVar9 = FUN_00450b30(0x456c6d6f,0x15);
    if (*(int *)(iVar9 + 0x14) == 0x20) {
      FUN_00466ec0(iVar9,0x26);
    }
    else if (*(int *)(iVar9 + 0x14) == 0x1d) {
      FUN_00466ec0(iVar9,0x24);
    }
    break;
  case 0x1b:
    piVar7 = *(int **)(iVar5 + 0x34);
    *(undefined4 *)(iVar5 + 0x88) = 0xd;
    iVar9 = *piVar7;
    while (iVar9 != 0) {
      piVar1 = piVar7 + 1;
      piVar7 = piVar7 + 1;
      iVar9 = *piVar1;
    }
    break;
  case 0x1c:
    *(undefined4 *)(iVar5 + 0x88) = 0xd;
    break;
  case 0x1d:
    iVar9 = FUN_004816b0();
    if (_DAT_004ad5e4 <= (float)iVar9 * _DAT_004ad594) {
      iVar9 = FUN_004816b0();
      if (_DAT_004ad5e4 <= (float)iVar9 * _DAT_004ad594) {
        iVar9 = FUN_004816b0();
        if (((float)iVar9 * _DAT_004ad594 < _DAT_004ad600) || (DAT_00e35a84 == '\x02')) {
          uVar16 = 0x2b;
          uVar15 = 0x29;
          uVar14 = 0x13;
          uVar13 = 0x2e;
          uVar12 = 0x18;
        }
        else {
          uVar16 = 0x20;
          uVar15 = 0x19;
          uVar14 = 0x2c;
          uVar13 = 0x20;
          uVar12 = 0x19;
        }
      }
      else {
        uVar16 = 0x27;
        uVar15 = 0x26;
        uVar14 = 0x25;
        uVar13 = 0x24;
        uVar12 = 0x23;
      }
    }
    else {
      uVar16 = 0x2b;
      uVar15 = 0x22;
      uVar14 = 0x32;
      uVar13 = 0x31;
      uVar12 = 0x30;
    }
    FUN_00467c80(uVar12,uVar13,uVar14,uVar15,uVar16);
    local_2c = 0;
    local_28 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 0;
    iVar9 = FUN_004816b0();
    *(float *)(iVar5 + 0x1c) =
         ((float)iVar9 * _DAT_004ad594 + (float)iVar9 * _DAT_004ad594) - _DAT_004ad608;
    break;
  case 0x1f:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 0xb;
    local_28 = 0;
    break;
  case 0x20:
    *(undefined4 *)(iVar5 + 0x88) = 0xc;
    iVar9 = FUN_004816b0();
    *(float *)(iVar5 + 0x1c) =
         ((float)iVar9 * _DAT_004ad594 + (float)iVar9 * _DAT_004ad594) - (float)_DAT_004ad618;
    break;
  case 0x22:
    *(undefined4 *)(iVar5 + 0x88) = 0;
  case 0x1e:
    *(undefined4 *)(iVar5 + 0x88) = 0;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x23:
    iVar9 = FUN_004816b0();
    if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad620) {
      FUN_00467c80(0xb,0xc,0xd,0x2d,0x14);
    }
    *(undefined4 *)(iVar5 + 0x88) = 3;
    uVar10 = 0;
    break;
  case 0x24:
    iVar9 = FUN_004816b0();
    if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad620) {
      FUN_00467c80(0x12,0x28,0x36,0xe,0x17);
    }
    *(undefined4 *)(iVar5 + 0x88) = 1;
    uVar10 = 0;
    break;
  case 0x25:
    iVar9 = FUN_004816b0();
    if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad620) {
      FUN_00467c80(0xb,0xc,0xd,0x2d,0x14);
    }
    *(undefined4 *)(iVar5 + 0x88) = 0xd;
    uVar10 = 0;
    break;
  case 0x26:
    iVar9 = FUN_004816b0();
    if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad620) {
      FUN_00467c80(0x12,0x28,0x36,0xe,0x17);
    }
  case 3:
    *(undefined4 *)(iVar5 + 0x88) = 0xe;
    uVar10 = 0;
    break;
  case 0x27:
    iVar9 = FUN_004816b0();
    if ((float)iVar9 * _DAT_004ad594 < _DAT_004ad620) {
      iVar9 = FUN_004816b0();
      if (((float)iVar9 * _DAT_004ad594 < _DAT_004ad600) || (DAT_00e35a84 == '\x02')) {
        FUN_00467c80(0x2a,0x32,0x31,0x33,0x13);
      }
      else {
        FUN_00467c80(0x2c,0x19,0x20,0x2c,0x19);
      }
    }
  case 0x2d:
  case 0x31:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 2;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2b:
  case 0x2f:
  case 0x33:
  case 0x38:
  case 0x3d:
    uVar10 = 0;
    *(undefined4 *)(iVar5 + 0x88) = 0;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2c:
  case 0x30:
  case 0x34:
  case 0x39:
  case 0x3e:
    *(undefined4 *)(iVar5 + 0x88) = 1;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2e:
    *(undefined4 *)(iVar5 + 0x88) = 3;
    local_2c = 0;
    param_1 = 0.5;
    break;
  case 0x32:
    *(undefined4 *)(iVar5 + 0x88) = 3;
    local_2c = 0;
    break;
  case 0x35:
  case 0x3a:
  case 0x3f:
    *(undefined4 *)(iVar5 + 0x88) = 2;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x37:
  case 0x3c:
  case 0x41:
    *(undefined4 *)(iVar5 + 0x88) = 4;
    local_2c = 0;
    break;
  case 0x42:
    *(undefined4 *)(iVar5 + 0x88) = 5;
  }
  if (*(int *)(iVar5 + 8) == 3) {
    local_2c = 0;
    local_28 = 0x3dcccccd;
  }
  if (*(int *)(iVar5 + 0x14) != 0) {
    FUN_00468a30(iVar5,&local_20,&local_24);
    local_1c = local_20;
  }
  iVar9 = *(int *)(iVar5 + 0x14);
  if ((iVar9 == 0x1b) && (*(int *)(iVar5 + 0x88) != 0xd)) {
    local_24 = local_20 - _DAT_004ad624;
  }
  if (param_1 < _DAT_004ad590) {
    local_1c = local_24 - _DAT_004ad588;
  }
  if (iVar9 == 5) {
    local_20 = local_24 - _DAT_004ad588;
    local_1c = local_20;
  }
  if (iVar9 == 0x2a) {
    local_2c = 0;
  }
  if (local_18 != 0) {
    FUN_0044b360(*(undefined4 *)(iVar5 + 0x34),local_1c,local_20,local_24,uVar10,local_28,local_2c);
  }
  if (*(float *)(iVar5 + 0x78) != param_1) {
    *(float *)(iVar5 + 0x78) = param_1;
    FUN_0044b330(*(undefined4 *)(iVar5 + 0x34),param_1);
  }
  return;
}

