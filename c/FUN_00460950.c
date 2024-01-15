#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460950(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 local_110;
  undefined local_100 [256];
  
  local_110 = 0xa4;
  iVar10 = FUN_0045d350();
  iVar2 = *(int *)(param_1 + 0x84);
  uVar11 = (uint)(param_1 == DAT_00e27820);
  iVar12 = FUN_00445690();
  if ((iVar12 == 0) &&
     (fVar1 = *(float *)(iVar2 + 0x2b8) - (float)_DAT_00e22a40, bVar3 = fVar1 < _DAT_004ad218,
     *(float *)(iVar2 + 0x2b8) = fVar1, bVar3)) {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
  }
  FUN_004603f0();
  fVar1 = *(float *)(*(int *)(param_1 + 0x84) + 0x1a0);
  if (fVar1 <= _DAT_004ad218) {
    fVar1 = _DAT_004ad218;
  }
  uVar13 = FUN_00421360(s__f2_c_s__0f_004c6ee0,(double)fVar1);
  FUN_0049eb80(local_100,uVar13);
  uVar13 = __ftol(0,0xffffffc3,0xfffffffe,0xfffffffe,local_100);
  uVar13 = __ftol(uVar13);
  FUN_00450530(uVar13);
  iVar12 = *(int *)(param_1 + 0x78);
  uVar9 = 0;
  bVar3 = false;
  bVar5 = false;
  uVar19 = uVar11;
  if (0 < iVar12) {
    fVar1 = *(float *)(param_1 + 0x5c + iVar12 * 4);
    fVar4 = _DAT_004ad22c - *(float *)(param_1 + 0x60 + iVar12 * 4) * _DAT_004ad268;
    if ((fVar4 <= _DAT_004ad218) || (_DAT_004ad22c <= fVar4)) {
      iVar12 = FUN_00427670((int)*(char *)(param_1 + 0x10),0x100000);
      if ((iVar12 != 0) && (iVar12 = FUN_00427360(6,0), iVar12 == 0)) {
        FUN_004276a0((int)*(char *)(param_1 + 0x10),0x100000);
      }
    }
    else {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar13 = __ftol();
      uVar14 = __ftol();
      iVar12 = __ftol();
      iVar12 = iVar12 * 8;
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      uVar6 = __ftol();
      uVar19 = (uint)uVar6;
      uVar15 = FUN_00421360();
      uVar15 = __ftol(fVar1,uVar13,uVar14,0x40,iVar12,uVar15);
      FUN_00450670(uVar19,uVar15);
      uVar15 = FUN_00421360();
      uVar13 = __ftol(uVar13,uVar14,0x40,iVar12,uVar15);
      FUN_00450530(uVar19,uVar13);
      if ((fVar1 <= *(float *)(param_2 + 0x1d0)) && (uVar16 = __ftol(), (uVar16 & 1) != 0)) {
        uVar13 = FUN_00421360();
        uVar13 = __ftol(0xffffffc8,0xffffffff,0,iVar12,uVar13);
        FUN_00450530(uVar19,uVar13);
        iVar17 = FUN_00427670((int)*(char *)(param_1 + 0x10),0x100000);
        iVar12 = param_1;
        if (iVar17 == 0) {
          FUN_00427410(6,0,0x27,0);
          FUN_00427690((int)*(char *)(param_1 + 0x10),0x100000);
        }
      }
      bVar3 = true;
      if (*(int *)(param_1 + 0x78) + 1 == *(int *)(param_2 + 0x1c8)) {
        if (DAT_0050ca18 < 2) {
          if (_DAT_004ad218 < (fVar4 - _DAT_004ad228) + (fVar4 - _DAT_004ad228)) {
            iVar12 = __ftol();
            uVar19 = iVar12 * 4;
            if (0xff < (int)uVar19) {
              uVar19 = 0xff;
            }
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            uVar13 = __ftol();
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            uVar14 = __ftol();
            if (DAT_0050c5f0 == 0) {
              FUN_004816b0();
            }
            iVar12 = __ftol();
            uVar15 = FUN_00421360();
            FUN_00450530(0xa0,0x46,uVar13,uVar14,iVar12,uVar19,uVar15);
          }
        }
        else {
          uVar16 = __ftol();
          uVar18 = (int)uVar16 >> 0x1f;
          if (((uVar16 ^ uVar18) - uVar18 & 1 ^ uVar18) != uVar18) {
            bVar5 = true;
          }
        }
      }
      uVar9 = (undefined2)((uint)iVar12 >> 0x10);
    }
  }
  if ((!bVar3) && (iVar10 < 2)) {
    _DAT_0050ca5c = 0;
    uVar7 = __ftol();
    uVar13 = FUN_00421360();
    uVar13 = __ftol(*(undefined4 *)(param_1 + 0x74),0xffffffff,0xffffffff,0xffffffff,0xffffffbe,
                    uVar13);
    FUN_00450670(CONCAT22(uVar9,uVar7),uVar13);
    uVar13 = FUN_00421360();
    uVar13 = __ftol(0xffffffff,0xffffffff,0xffffffff,0xffffffbe,uVar13);
    FUN_00450530(CONCAT22(uVar9,uVar7),uVar13);
  }
  if ((*(int *)(param_2 + 0x124) == 6) || (*(int *)(param_2 + 0x124) == 7)) {
    uVar13 = __ftol(*(undefined4 *)(param_1 + 0x74),0xffffffff,0xffffffff,0xffffffff,0xffffffbe,
                    s__f3_r_s_004c6e50);
    FUN_00450670(0x121,uVar13);
  }
  iVar10 = *(int *)(param_2 + 0x1c8);
  iVar12 = *(int *)(param_1 + 0x78) + 1;
  if (iVar10 < iVar12) {
    iVar12 = iVar10;
  }
  uVar13 = FUN_00421360(s__f3_c_s_d__d_004c6e40,iVar12,iVar10);
  FUN_0049eb80(local_100,uVar13);
  uVar9 = (undefined2)(uVar19 >> 0x10);
  if ((DAT_0050ca18 < 2) || (!bVar5)) {
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar14 = CONCAT22(uVar9,uVar8);
    FUN_00450530(uVar14,uVar7,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,local_100);
    uVar9 = __ftol();
    uVar13 = FUN_00421360();
    uVar20 = CONCAT44(uVar13,0xffffffbe);
    uVar15 = 0xffffffff;
    uVar13 = 0xffffffff;
  }
  else {
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar14 = CONCAT22(uVar9,uVar8);
    FUN_00450530(uVar14,uVar7,0xffffffff,0x3f,0x3f,0xffffffff,local_100);
    uVar9 = __ftol();
    uVar13 = FUN_00421360();
    uVar20 = CONCAT44(uVar13,0xffffffff);
    uVar15 = 0x3f;
    uVar13 = 0x3f;
  }
  FUN_00450530(uVar14,uVar9,0xffffffff,uVar13,uVar15,uVar20);
  iVar10 = *(int *)(param_2 + 0x124);
  if (((iVar10 != 1) && (iVar10 != 6)) && (iVar10 != 7)) {
    if (0 < *(short *)(param_1 + 0x5c)) {
      uVar13 = FUN_00421360(s__f3_c_s_d__d_004c6e40,(int)*(short *)(param_1 + 0x5c),
                            *(undefined4 *)(param_2 + 0x1bc));
      FUN_0049eb80(local_100,uVar13);
      FUN_00450530(0x116,uVar7,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,local_100);
    }
    uVar13 = FUN_00421360();
    FUN_00450530(0x116,uVar9,0xffffffff,0xffffffff,0xffffffff,0xffffffbe,uVar13);
  }
  if ((1 < DAT_0050ca18) && (uVar11 == 0)) {
    local_110 = 0x36;
  }
  FUN_0045fe70(param_2,iVar2,0xe1,local_110,uVar11);
  if ((DAT_0050c040 != 0) && (DAT_0050c610 != 0)) {
    FUN_00450530(0xa0,0x14,0xffffffff,0,0,0xffffffff,s__c_oZOT_004c6e08);
  }
  return;
}

