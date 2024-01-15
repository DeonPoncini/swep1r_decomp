#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004538d0(float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float local_10;
  
  iVar6 = (int)param_1;
  if (DAT_0050c894 == 0) {
    if ((*(byte *)((int)param_1 + 0x2a8) & 1) == 0) {
      param_1 = -1.0;
    }
    else {
      if (_DAT_004acda0 < *(float *)((int)param_1 + 0x2d8)) {
        if (*(float *)((int)param_1 + 0x2d4) <= *(float *)((int)param_1 + 0x2d8)) {
          fVar1 = *(float *)((int)param_1 + 0x2d4) - (float)_DAT_00e22a40 * (float)_DAT_004acf10;
          *(float *)((int)param_1 + 0x2d4) = fVar1;
          if (*(float *)((int)param_1 + 0x2d8) < fVar1) {
            *(undefined4 *)((int)param_1 + 0x2d4) = *(undefined4 *)((int)param_1 + 0x2d8);
            goto LAB_0045399a;
          }
        }
        else {
          fVar1 = *(float *)((int)param_1 + 0x2d4) - (float)_DAT_00e22a40 * (float)_DAT_004acf08;
          *(float *)((int)param_1 + 0x2d4) = fVar1;
          if (fVar1 < *(float *)((int)param_1 + 0x2d8)) {
            *(undefined4 *)((int)param_1 + 0x2d4) = *(undefined4 *)((int)param_1 + 0x2d8);
LAB_0045399a:
            *(undefined4 *)((int)param_1 + 0x2d8) = 0xbf800000;
          }
        }
      }
      param_1 = *(float *)((int)param_1 + 0x2d4);
    }
    local_10 = *(float *)(iVar6 + 0x2b4);
  }
  else {
    local_10 = DAT_004c3ee0;
    param_1 = DAT_004c3edc;
  }
  if (DAT_0050c898 == 0) {
    DAT_004c3ed8 = *(float *)(iVar6 + 0x2b0);
  }
  fVar10 = DAT_004c3ed8;
  fVar1 = *(float *)(iVar6 + 0x2b8);
  DAT_004c3edc = param_1;
  DAT_004c3ee0 = local_10;
  if (DAT_0050c890 == 0) {
    uVar8 = *(uint *)(iVar6 + 0x2a8) & 2;
    if ((uVar8 != 0) && (_DAT_004acda0 <= *(float *)(iVar6 + 0x2e0))) {
      if (*(float *)(iVar6 + 0x2dc) <= *(float *)(iVar6 + 0x2e0)) {
        fVar4 = *(float *)(iVar6 + 0x2dc) - (float)_DAT_00e22a40 * (float)_DAT_004acee0;
        *(float *)(iVar6 + 0x2dc) = fVar4;
        if (*(float *)(iVar6 + 0x2e0) < fVar4) {
          *(undefined4 *)(iVar6 + 0x2dc) = *(undefined4 *)(iVar6 + 0x2e0);
          goto LAB_00453abc;
        }
      }
      else {
        fVar4 = *(float *)(iVar6 + 0x2dc) - (float)_DAT_00e22a40 * (float)_DAT_004acf18;
        *(float *)(iVar6 + 0x2dc) = fVar4;
        if (fVar4 < *(float *)(iVar6 + 0x2e0)) {
          *(undefined4 *)(iVar6 + 0x2dc) = *(undefined4 *)(iVar6 + 0x2e0);
LAB_00453abc:
          *(undefined4 *)(iVar6 + 0x2e0) = 0xbf800000;
        }
      }
    }
    DAT_004c3ee4 = __ftol();
    DAT_0050c89c = uVar8;
  }
  uVar8 = DAT_0050c89c;
  uVar5 = DAT_004c3ee4;
  if (((((float)_DAT_004ace50 <= fVar10) || ((float)_DAT_004ace50 <= fVar1)) ||
      ((float)_DAT_004ace50 <= local_10)) || ((float)_DAT_004ace50 <= param_1)) {
    if ((DAT_0050ca14 == 0) || ((DAT_00dfb318 & 1) == 0)) {
      uVar9 = *(undefined4 *)(iVar6 + 0x74);
    }
    else {
      uVar9 = *(undefined4 *)(iVar6 + 0x74);
      fVar10 = 120.0;
    }
    FUN_00483590(uVar9,fVar10,0xbf800000,local_10,param_1,fVar1);
  }
  uVar2 = *(uint *)(iVar6 + 0x2a8);
  if ((uVar2 & 0x10) != 0) {
    *(undefined4 *)(iVar6 + 700) = *(undefined4 *)(iVar6 + 0x2c8);
    *(undefined4 *)(iVar6 + 0x2c0) = *(undefined4 *)(iVar6 + 0x2cc);
    *(undefined4 *)(iVar6 + 0x2c4) = *(undefined4 *)(iVar6 + 0x2d0);
    goto LAB_00453cc7;
  }
  iVar3 = *(int *)(iVar6 + 0x2c8);
  if (iVar3 < *(int *)(iVar6 + 700)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 700) = iVar7;
    if (iVar7 < iVar3) {
LAB_00453bfd:
      *(int *)(iVar6 + 700) = iVar3;
    }
  }
  else if (*(int *)(iVar6 + 700) < iVar3) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 700) = iVar7;
    if (iVar3 < iVar7) goto LAB_00453bfd;
  }
  iVar3 = *(int *)(iVar6 + 0x2cc);
  if (iVar3 < *(int *)(iVar6 + 0x2c0)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c0) = iVar7;
    if (iVar7 < iVar3) {
LAB_00453c5f:
      *(int *)(iVar6 + 0x2c0) = iVar3;
    }
  }
  else if (*(int *)(iVar6 + 0x2c0) < iVar3) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c0) = iVar7;
    if (iVar3 < iVar7) goto LAB_00453c5f;
  }
  iVar3 = *(int *)(iVar6 + 0x2d0);
  if (iVar3 < *(int *)(iVar6 + 0x2c4)) {
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c4) = iVar7;
    if (iVar3 <= iVar7) goto LAB_00453cc7;
  }
  else {
    if (iVar3 <= *(int *)(iVar6 + 0x2c4)) goto LAB_00453cc7;
    iVar7 = __ftol();
    *(int *)(iVar6 + 0x2c4) = iVar7;
    if (iVar7 <= iVar3) goto LAB_00453cc7;
  }
  *(int *)(iVar6 + 0x2c4) = iVar3;
LAB_00453cc7:
  if (uVar8 == 0) {
    FUN_0044e0c0(0);
  }
  else {
    *(uint *)(iVar6 + 0x2a8) = uVar2 & 0xffffffef;
    FUN_0044e0c0(1);
    FUN_0044e0e0(uVar5,1000,*(undefined4 *)(iVar6 + 700),*(undefined4 *)(iVar6 + 0x2c0),
                 *(undefined4 *)(iVar6 + 0x2c4),0xff);
    FUN_00483a60(*(undefined4 *)(iVar6 + 700),*(undefined4 *)(iVar6 + 0x2c0),
                 *(undefined4 *)(iVar6 + 0x2c4));
  }
  FUN_00466e40(iVar6 + 0x50,*(undefined4 *)(iVar6 + 0x2a8));
  if (DAT_0050ccf0 != 0) {
    if ((*(byte *)(iVar6 + 0x2a8) & 4) == 0) {
      (&DAT_00e226fe)[*(int *)(iVar6 + 0x74) * 6] = 1;
    }
    else {
      (&DAT_00e226fe)[*(int *)(iVar6 + 0x74) * 6] = 0;
    }
    if (uVar8 != 0) {
      (&DAT_00e226f4)[*(int *)(iVar6 + 0x74) * 6] = 1;
      (&DAT_00e226f6)[*(int *)(iVar6 + 0x74) * 6] = (short)uVar5;
      (&DAT_00e226f8)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 700);
      (&DAT_00e226fa)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 0x2c0);
      (&DAT_00e226fc)[*(int *)(iVar6 + 0x74) * 6] = *(undefined2 *)(iVar6 + 0x2c4);
      return;
    }
    (&DAT_00e226f4)[*(int *)(iVar6 + 0x74) * 6] = 0;
  }
  return;
}

