#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476ac0(int param_1,float *param_2)

{
  float **ppfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  bool bVar22;
  
  pfVar21 = param_2;
  if (param_2 != (float *)0x0) {
    do {
      uVar4 = *(ushort *)((int)pfVar21 + 0x26);
      bVar22 = false;
      if (uVar4 != 0) {
        bVar22 = (uVar4 & 1) != 0;
        if (((uVar4 & 2) != 0) && (*(float *)(param_1 + 0x1a0) < _DAT_004adca0)) {
          bVar22 = true;
        }
        if (((*(byte *)(param_1 + 0x60) & 0x20) == 0) && ((uVar4 & 0x20) != 0)) {
          bVar22 = true;
        }
        iVar20 = *(int *)(*(int *)(param_1 + 0x1e70) + 0x78);
        if ((iVar20 == 0) && ((uVar4 & 4) != 0)) {
          bVar22 = true;
        }
        if ((iVar20 == 1) && ((uVar4 & 8) != 0)) {
          bVar22 = true;
        }
        if ((iVar20 == 2) && ((uVar4 & 0x10) != 0)) {
          bVar22 = true;
        }
      }
      if ((!bVar22) && (iVar20 = FUN_0047c7d0(pfVar21), iVar20 != 0)) {
        fVar10 = pfVar21[6] * _DAT_004adc60;
        fVar2 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar5 = *(float *)(param_1 + 0x50);
        fVar6 = *(float *)(param_1 + 0x54);
        fVar19 = pfVar21[7] * _DAT_004adc60;
        fVar7 = *(float *)(param_1 + 0x58);
        fVar8 = pfVar21[2];
        fVar18 = fVar2 - fVar10 * pfVar21[4];
        fVar15 = fVar2 + fVar10 * pfVar21[4];
        fVar11 = fVar3 + fVar10 * pfVar21[3];
        fVar9 = fVar3 - fVar10 * pfVar21[3];
        fVar14 = fVar18 - fVar15;
        fVar12 = fVar11 - fVar9;
        fVar13 = _DAT_004adc48 * _DAT_004adc48 + fVar12 * fVar12 + fVar14 * fVar14;
        fVar16 = fVar15;
        fVar17 = fVar9;
        if ((float)_DAT_004adca8 < fVar13) {
          param_2 = (float *)(((fVar12 * fVar6 + fVar14 * fVar5 + _DAT_004adc48 * fVar7) -
                              (fVar12 * fVar9 + fVar14 * fVar15 + _DAT_004adc48 * fVar7)) / fVar13);
          if ((_DAT_004adc48 < (float)param_2) &&
             (fVar16 = fVar18, fVar17 = fVar11, (float)param_2 < _DAT_004adc50)) {
            fVar16 = fVar14 * (float)param_2 + fVar15;
            fVar17 = fVar12 * (float)param_2 + fVar9;
          }
        }
        else {
          param_2 = (float *)0x0;
        }
        if ((*(short *)(pfVar21 + 9) == 0x66) || (*(short *)(pfVar21 + 9) == 0x68)) {
          if (((_DAT_004adc48 < (float)param_2) &&
              ((((float)param_2 < _DAT_004adc50 && (fVar7 < fVar19 + fVar8)) &&
               (fVar8 - fVar19 < fVar7)))) &&
             (fVar2 = fVar2 * pfVar21[3] + fVar3 * pfVar21[4] + fVar8 * pfVar21[5],
             fVar2 < *(float *)(param_1 + 0x16c) * pfVar21[3] +
                     *(float *)(param_1 + 0x170) * pfVar21[4] +
                     *(float *)(param_1 + 0x174) * pfVar21[5] ==
             fVar6 * pfVar21[4] + fVar5 * pfVar21[3] + fVar7 * pfVar21[5] < fVar2))
          goto LAB_00476e7c;
        }
        else if ((((fVar17 - fVar6) * (fVar17 - fVar6) + (fVar16 - fVar5) * (fVar16 - fVar5) <
                   fVar10 * fVar10) && (fVar7 < fVar19 + fVar8)) && (fVar8 - fVar19 < fVar7)) {
LAB_00476e7c:
          FUN_0047ce60(iVar20,param_1,0);
        }
      }
      ppfVar1 = (float **)(pfVar21 + 10);
      pfVar21 = *ppfVar1;
    } while (*ppfVar1 != (float *)0x0);
  }
  return;
}

