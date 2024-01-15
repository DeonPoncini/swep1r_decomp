#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f210(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int **ppiVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined local_74 [48];
  undefined local_44 [48];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  iVar11 = param_2;
  DAT_00df7ce8 = param_1;
  cVar2 = *(char *)(param_1 + 0x89);
  if ((int)cVar2 != (DAT_00df7f1c & 0xff)) {
    DAT_00df7f1c = CONCAT31(DAT_00df7f1c._1_3_,cVar2);
    uVar14 = DAT_0050c708;
    uVar15 = DAT_004c3c10;
    if (cVar2 == '\0') {
      uVar14 = 0;
      uVar15 = 1;
    }
    FUN_00409510(uVar14,uVar15);
  }
  if (*(short *)(DAT_00df7ce8 + 0x84) == 0) {
    *(undefined2 *)(DAT_00df7ce8 + 0x86) = 0;
    return;
  }
  iVar9 = DAT_00df7ce8;
  if (*(int *)(DAT_00df7ce8 + 0x44) != 0) {
    uVar14 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
    uVar15 = *(undefined4 *)(DAT_00df7ce8 + 0x74);
    FUN_00492b70(local_74,DAT_00df7f2c + 8,param_2);
    FUN_00493270(local_74,uVar14,&DAT_00debce8,uVar15);
    if (0 < param_4) {
      FUN_00492b70(local_74,DAT_00df7f2c + 8,param_3);
      FUN_00493270(local_74,uVar14,&DAT_00debce8,param_4);
    }
    FUN_00492680(local_44,param_2);
    DAT_00df7efc = *(int *)(DAT_00df7ce8 + 0x48);
    if (DAT_00df7cf0 <= *(int *)(DAT_00df7ce8 + 0x48)) {
      DAT_00df7efc = DAT_00df7cf0;
    }
    _DAT_00ecc4ac = &DAT_00debce8;
    DAT_00ecc48c = &DAT_00deb128;
    _DAT_00ecc4b0 = *(undefined4 *)(DAT_00df7ce8 + 0x50);
    _DAT_00ecc4b4 = *(undefined4 *)(DAT_00df7ce8 + 0x58);
    _DAT_00ecc4b8 = 0;
    if (DAT_00df7efc == 2) {
      DAT_00df7f0c = 0;
      param_2 = 0;
      if (DAT_00df7f08 != 0) {
        ppiVar12 = (int **)&DAT_00deb4e8;
        do {
          iVar4 = DAT_00df7f2c;
          iVar1 = DAT_00df7f0c;
          piVar3 = *ppiVar12;
          iVar9 = *piVar3;
          fVar6 = *(float *)(DAT_00df7f2c + (iVar9 + 0x34) * 0xc) - *(float *)(iVar11 + 0x24);
          fVar8 = *(float *)(DAT_00df7f2c + 0x274 + iVar9 * 0xc) - *(float *)(iVar11 + 0x28);
          fVar7 = *(float *)(DAT_00df7f2c + 0x278 + iVar9 * 0xc) - *(float *)(iVar11 + 0x2c);
          local_8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
          if (local_8 < (float)piVar3[10] + *(float *)(DAT_00df7ce8 + 0x80)) {
            (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
            FUN_00493200(&DAT_00deb6e8 + iVar1 * 0xc,iVar4 + (*piVar3 + 0x34) * 0xc,local_44);
            DAT_00df7f0c = DAT_00df7f0c + 1;
          }
          param_2 = param_2 + 1;
          ppiVar12 = ppiVar12 + 1;
        } while (param_2 < DAT_00df7f08);
      }
    }
    else if (DAT_00df7efc == 3) {
      DAT_00df7f0c = 0;
      param_2 = 0;
      if (DAT_00df7f08 != 0) {
        ppiVar12 = (int **)&DAT_00deb4e8;
        do {
          iVar1 = DAT_00df7f2c;
          iVar9 = DAT_00df7f0c;
          piVar3 = *ppiVar12;
          if (piVar3[1] == 0) {
            (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
            FUN_00493190(&DAT_00deb6e8 + iVar9 * 0xc,DAT_00df7f2c + (*piVar3 + 0x34) * 0xc,local_44)
            ;
            FUN_00492440(&DAT_00deb6e8 + DAT_00df7f0c * 0xc);
LAB_0048f47a:
            DAT_00df7f0c = DAT_00df7f0c + 1;
          }
          else if (piVar3[1] == 1) {
            iVar4 = *piVar3;
            fVar6 = *(float *)(DAT_00df7f2c + (iVar4 + 0x34) * 0xc) - *(float *)(iVar11 + 0x24);
            fVar8 = *(float *)(DAT_00df7f2c + 0x274 + iVar4 * 0xc) - *(float *)(iVar11 + 0x28);
            fVar7 = *(float *)(DAT_00df7f2c + 0x278 + iVar4 * 0xc) - *(float *)(iVar11 + 0x2c);
            local_8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
            if (local_8 < (float)piVar3[10] + *(float *)(DAT_00df7ce8 + 0x80)) {
              (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
              FUN_00493200(&DAT_00deb6e8 + iVar9 * 0xc,iVar1 + (*piVar3 + 0x34) * 0xc,local_44);
              goto LAB_0048f47a;
            }
          }
          param_2 = param_2 + 1;
          ppiVar12 = ppiVar12 + 1;
        } while (param_2 < DAT_00df7f08);
      }
      FUN_00490550(DAT_00df7f2c + 0x70,&DAT_00deb6e8,*(undefined4 *)(DAT_00df7f2c + 0x6c),
                   *(undefined4 *)(DAT_00df7ce8 + 0x70),*(undefined4 *)(DAT_00df7ce8 + 0x4c),
                   *(undefined4 *)(DAT_00df7ce8 + 0x54),*(undefined4 *)(DAT_00df7ce8 + 0x58),
                   *(undefined4 *)(DAT_00df7ce8 + 0x74),*(undefined4 *)(DAT_00df7f2c + 0x870));
    }
    local_14 = DAT_00ecc464;
    local_10 = DAT_00ecc468;
    local_c = DAT_00ecc46c;
    FUN_00493200(&DAT_00deb118,&local_14,local_44);
    uVar10 = 0;
    iVar11 = *(int *)(param_1 + 0x6c);
    iVar9 = DAT_00df7ce8;
    if (*(int *)(param_1 + 0x7c) != 0) {
      do {
        iVar1 = *(int *)(iVar9 + 0x4c) + **(int **)(iVar11 + 0x14) * 0xc;
        bVar13 = (_DAT_00deb11c - *(float *)(iVar1 + 4)) * *(float *)(iVar11 + 0x40) +
                 (_DAT_00deb120 - *(float *)(iVar1 + 8)) * *(float *)(iVar11 + 0x44) +
                 (_DAT_00deb118 -
                 *(float *)(*(int *)(iVar9 + 0x4c) + **(int **)(iVar11 + 0x14) * 0xc)) *
                 *(float *)(iVar11 + 0x3c) <= _DAT_004af7a0;
        if (1 < *(short *)(iVar9 + 0x86)) {
          bVar13 = !bVar13;
        }
        if (bVar13 == false) {
          uVar5 = *(uint *)(iVar11 + 4);
        }
        else {
          uVar5 = *(uint *)(iVar11 + 4);
        }
        if ((((uVar5 & 0x800) == 0) && ((*(uint *)(iVar11 + 4) & 1) == 0)) &&
           ((DAT_0050c530 != 1 || ((*(uint *)(iVar11 + 4) & 0x800) == 0)))) {
          if (0 < param_4) {
            uVar14 = *(undefined4 *)(param_1 + 0x90);
            uVar15 = *(undefined4 *)(param_1 + 0x8c);
            goto LAB_0048f6b9;
          }
        }
        else {
          uVar14 = *(undefined4 *)(param_1 + 0x90);
          uVar15 = *(undefined4 *)(param_1 + 0x8c);
LAB_0048f6b9:
          FUN_0048f700(iVar11,bVar13,param_1 + 0x5c,uVar15,uVar14);
          iVar9 = DAT_00df7ce8;
        }
        iVar11 = iVar11 + 0x48;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x7c));
    }
  }
  *(short *)(iVar9 + 0x84) = *(short *)(iVar9 + 0x84) + -1;
  if (*(short *)(DAT_00df7ce8 + 0x84) == 0) {
    *(undefined2 *)(DAT_00df7ce8 + 0x86) = 0;
  }
  return;
}

