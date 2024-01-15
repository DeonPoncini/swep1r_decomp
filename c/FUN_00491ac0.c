#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491ac0(undefined4 param_1,int param_2,uint *param_3,uint *param_4,float *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  
  puVar7 = param_4;
  puVar6 = param_3;
  switch(param_1) {
  case 0:
    uVar10 = 0;
    if (*param_3 != 0) {
      iVar9 = 0;
      do {
        puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
        puVar11 = (undefined4 *)(param_4[3] + iVar9);
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0xc;
        *puVar11 = *puVar1;
        puVar11[1] = puVar1[1];
        puVar11[2] = puVar1[2];
      } while (uVar10 < *param_3);
      *param_4 = *param_3;
      return;
    }
    break;
  case 1:
  case 2:
    uVar10 = 0;
    if (*param_3 != 0) {
      iVar9 = 0;
      do {
        puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
        puVar11 = (undefined4 *)(param_4[3] + iVar9);
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0xc;
        *puVar11 = *puVar1;
        puVar11[1] = puVar1[1];
        puVar11[2] = puVar1[2];
      } while (uVar10 < *param_3);
      *param_4 = *param_3;
      return;
    }
    break;
  case 3:
    switch(param_2) {
    case 0:
    case 1:
      uVar10 = 0;
      if (*param_3 != 0) {
        iVar9 = 0;
        do {
          puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
          puVar11 = (undefined4 *)(param_4[3] + iVar9);
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 0xc;
          *puVar11 = *puVar1;
          puVar11[1] = puVar1[1];
          puVar11[2] = puVar1[2];
        } while (uVar10 < *param_3);
        goto LAB_00491bc6;
      }
      break;
    case 2:
      uVar10 = 0;
      if (*param_3 != 0) {
        iVar9 = 0;
        do {
          puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
          puVar11 = (undefined4 *)(param_4[3] + iVar9);
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 0xc;
          *puVar11 = *puVar1;
          puVar11[1] = puVar1[1];
          puVar11[2] = puVar1[2];
        } while (uVar10 < *param_3);
      }
      break;
    case 3:
      uVar10 = 0;
      if (param_3[6] == 0) {
        if (*param_3 != 0) {
          iVar9 = 0;
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
            puVar11 = (undefined4 *)((int)param_4 + puVar7[3]);
            *puVar11 = *puVar1;
            puVar11[1] = puVar1[1];
            puVar11[2] = puVar1[2];
            pfVar12 = (float *)(param_3[5] + *(int *)(param_3[1] + uVar10 * 4) * 0x10);
            fVar4 = _DAT_004af918;
            if ((_DAT_004af918 <= *pfVar12) && (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar4 = *pfVar12;
            }
            *(float *)(iVar9 + puVar7[5]) = fVar4;
            iVar8 = *(int *)(param_3[1] + uVar10 * 4) * 0x10;
            pfVar12 = (float *)(iVar8 + 4 + param_3[5]);
            fVar4 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar8 + 4 + param_3[5])) &&
               (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar4 = *pfVar12;
            }
            *(float *)(iVar9 + 4 + puVar7[5]) = fVar4;
            iVar8 = *(int *)(param_3[1] + uVar10 * 4) * 0x10;
            pfVar12 = (float *)(iVar8 + 8 + param_3[5]);
            fVar4 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar8 + 8 + param_3[5])) &&
               (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar4 = *pfVar12;
            }
            *(float *)(iVar9 + 8 + puVar7[5]) = fVar4;
            iVar8 = *(int *)(param_3[1] + uVar10 * 4) * 0x10;
            pfVar12 = (float *)(iVar8 + 0xc + param_3[5]);
            fVar4 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar8 + 0xc + param_3[5])) &&
               (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar4 = *pfVar12;
            }
            uVar10 = uVar10 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar9 + 0xc + puVar7[5]) = fVar4;
            iVar9 = iVar9 + 0x10;
          } while (uVar10 < *param_3);
          *puVar7 = *param_3;
          return;
        }
      }
      else {
        uVar10 = 0;
        if (*param_3 != 0) {
          iVar9 = 0;
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar10 * 4) * 0xc);
            puVar11 = (undefined4 *)((int)param_4 + puVar7[3]);
            *puVar11 = *puVar1;
            puVar11[1] = puVar1[1];
            puVar11[2] = puVar1[2];
            fVar4 = *(float *)(*(int *)(param_3[1] + uVar10 * 4) * 0x10 + param_3[5]) +
                    *(float *)(iVar9 + param_3[6]);
            fVar5 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
              fVar5 = _DAT_004af928;
            }
            *(float *)(iVar9 + puVar7[5]) = fVar5;
            fVar4 = *(float *)(*(int *)(param_3[1] + uVar10 * 4) * 0x10 + 4 + param_3[5]) +
                    *(float *)(iVar9 + 4 + param_3[6]);
            fVar5 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
              fVar5 = _DAT_004af928;
            }
            *(float *)(iVar9 + 4 + puVar7[5]) = fVar5;
            fVar4 = *(float *)(*(int *)(param_3[1] + uVar10 * 4) * 0x10 + 8 + param_3[5]) +
                    *(float *)(iVar9 + 8 + param_3[6]);
            fVar5 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
              fVar5 = _DAT_004af928;
            }
            *(float *)(iVar9 + 8 + puVar7[5]) = fVar5;
            iVar8 = *(int *)(param_3[1] + uVar10 * 4) * 0x10;
            pfVar12 = (float *)(iVar8 + 0xc + param_3[5]);
            fVar4 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar8 + 0xc + param_3[5])) &&
               (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar4 = *pfVar12;
            }
            uVar10 = uVar10 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar9 + 0xc + puVar7[5]) = fVar4;
            iVar9 = iVar9 + 0x10;
          } while (uVar10 < *param_3);
          *puVar7 = *param_3;
          return;
        }
      }
LAB_004922f3:
      *puVar7 = *puVar6;
      return;
    default:
      goto switchD_00491ad1_caseD_5;
    }
    *param_4 = *param_3;
    return;
  case 4:
    if (-1 < param_2) {
      if (param_2 < 3) {
        uVar10 = 0;
        if (*param_3 != 0) {
          param_3 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar6[3] + *(int *)(puVar6[1] + uVar10 * 4) * 0xc);
            puVar11 = (undefined4 *)((int)param_3 + param_4[3]);
            *puVar11 = *puVar1;
            puVar11[1] = puVar1[1];
            puVar11[2] = puVar1[2];
            uVar2 = puVar6[4];
            uVar3 = param_4[4];
            iVar9 = *(int *)(puVar6[2] + uVar10 * 4);
            *(undefined4 *)(uVar3 + uVar10 * 8) = *(undefined4 *)(uVar2 + iVar9 * 8);
            *(undefined4 *)(uVar3 + 4 + uVar10 * 8) = *(undefined4 *)(uVar2 + 4 + iVar9 * 8);
            *(float *)(param_4[4] + uVar10 * 8) = *param_5 + *(float *)(param_4[4] + uVar10 * 8);
            iVar9 = uVar10 * 8;
            iVar8 = uVar10 * 8;
            uVar10 = uVar10 + 1;
            param_3 = (uint *)((int)param_3 + 0xc);
            *(float *)(param_4[4] + 4 + iVar8) = *(float *)(param_4[4] + 4 + iVar9) + param_5[1];
          } while (uVar10 < *puVar6);
        }
        *param_4 = *puVar6;
      }
      else if (param_2 == 3) {
        if (param_3[6] == 0) {
          param_4 = (uint *)0x0;
          if (*param_3 != 0) {
            param_2 = 0;
            param_3 = (uint *)0x0;
            do {
              puVar1 = (undefined4 *)(puVar6[3] + *(int *)(puVar6[1] + (int)param_4 * 4) * 0xc);
              puVar11 = (undefined4 *)((int)param_3 + puVar7[3]);
              *puVar11 = *puVar1;
              puVar11[1] = puVar1[1];
              puVar11[2] = puVar1[2];
              uVar10 = puVar7[4];
              iVar9 = (int)param_4 * 8;
              iVar8 = *(int *)(puVar6[2] + (int)param_4 * 4);
              uVar2 = puVar6[4];
              *(undefined4 *)(uVar10 + iVar9) = *(undefined4 *)(uVar2 + iVar8 * 8);
              *(undefined4 *)(uVar10 + 4 + iVar9) = *(undefined4 *)(uVar2 + 4 + iVar8 * 8);
              *(float *)(puVar7[4] + iVar9) = *param_5 + *(float *)(puVar7[4] + iVar9);
              *(float *)(puVar7[4] + 4 + iVar9) = *(float *)(puVar7[4] + 4 + iVar9) + param_5[1];
              pfVar12 = (float *)(puVar6[5] + *(int *)(puVar6[1] + (int)param_4 * 4) * 0x10);
              fVar4 = _DAT_004af918;
              if ((_DAT_004af918 <= *pfVar12) && (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928))
              {
                fVar4 = *pfVar12;
              }
              *(float *)(param_2 + puVar7[5]) = fVar4;
              iVar9 = *(int *)(puVar6[1] + (int)param_4 * 4) * 0x10;
              pfVar12 = (float *)(iVar9 + 4 + puVar6[5]);
              fVar4 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar9 + 4 + puVar6[5])) &&
                 (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar4 = *pfVar12;
              }
              *(float *)(param_2 + 4 + puVar7[5]) = fVar4;
              iVar9 = *(int *)(puVar6[1] + (int)param_4 * 4) * 0x10;
              pfVar12 = (float *)(iVar9 + 8 + puVar6[5]);
              fVar4 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar9 + 8 + puVar6[5])) &&
                 (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar4 = *pfVar12;
              }
              *(float *)(param_2 + 8 + puVar7[5]) = fVar4;
              iVar9 = *(int *)(puVar6[1] + (int)param_4 * 4) * 0x10;
              pfVar12 = (float *)(iVar9 + 0xc + puVar6[5]);
              fVar4 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar9 + 0xc + puVar6[5])) &&
                 (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar4 = *pfVar12;
              }
              param_4 = (uint *)((int)param_4 + 1);
              param_3 = (uint *)((int)param_3 + 0xc);
              *(float *)(param_2 + 0xc + puVar7[5]) = fVar4;
              param_2 = param_2 + 0x10;
            } while (param_4 < *puVar6);
          }
        }
        else {
          param_4 = (uint *)0x0;
          if (*param_3 != 0) {
            param_2 = 0;
            param_3 = (uint *)0x0;
            do {
              puVar1 = (undefined4 *)(puVar6[3] + *(int *)(puVar6[1] + (int)param_4 * 4) * 0xc);
              puVar11 = (undefined4 *)((int)param_3 + puVar7[3]);
              *puVar11 = *puVar1;
              puVar11[1] = puVar1[1];
              puVar11[2] = puVar1[2];
              uVar10 = puVar7[4];
              iVar9 = (int)param_4 * 8;
              iVar8 = *(int *)(puVar6[2] + (int)param_4 * 4);
              uVar2 = puVar6[4];
              *(undefined4 *)(uVar10 + iVar9) = *(undefined4 *)(uVar2 + iVar8 * 8);
              *(undefined4 *)(uVar10 + 4 + iVar9) = *(undefined4 *)(uVar2 + 4 + iVar8 * 8);
              *(float *)(puVar7[4] + iVar9) = *param_5 + *(float *)(puVar7[4] + iVar9);
              *(float *)(puVar7[4] + 4 + iVar9) = *(float *)(puVar7[4] + 4 + iVar9) + param_5[1];
              fVar4 = *(float *)(*(int *)(puVar6[1] + (int)param_4 * 4) * 0x10 + puVar6[5]) +
                      *(float *)(param_2 + puVar6[6]);
              fVar5 = _DAT_004af918;
              if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
                fVar5 = _DAT_004af928;
              }
              *(float *)(param_2 + puVar7[5]) = fVar5;
              fVar4 = *(float *)(*(int *)(puVar6[1] + (int)param_4 * 4) * 0x10 + 4 + puVar6[5]) +
                      *(float *)(param_2 + 4 + puVar6[6]);
              fVar5 = _DAT_004af918;
              if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
                fVar5 = _DAT_004af928;
              }
              *(float *)(param_2 + 4 + puVar7[5]) = fVar5;
              fVar4 = *(float *)(*(int *)(puVar6[1] + (int)param_4 * 4) * 0x10 + 8 + puVar6[5]) +
                      *(float *)(param_2 + 8 + puVar6[6]);
              fVar5 = _DAT_004af918;
              if ((_DAT_004af918 <= fVar4) && (fVar5 = fVar4, _DAT_004af928 < fVar4)) {
                fVar5 = _DAT_004af928;
              }
              *(float *)(param_2 + 8 + puVar7[5]) = fVar5;
              iVar9 = *(int *)(puVar6[1] + (int)param_4 * 4) * 0x10;
              pfVar12 = (float *)(iVar9 + 0xc + puVar6[5]);
              fVar4 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar9 + 0xc + puVar6[5])) &&
                 (fVar4 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar4 = *pfVar12;
              }
              param_4 = (uint *)((int)param_4 + 1);
              param_3 = (uint *)((int)param_3 + 0xc);
              *(float *)(param_2 + 0xc + puVar7[5]) = fVar4;
              param_2 = param_2 + 0x10;
            } while (param_4 < *puVar6);
            *puVar7 = *puVar6;
            return;
          }
        }
        goto LAB_004922f3;
      }
    }
  default:
switchD_00491ad1_caseD_5:
    return;
  }
LAB_00491bc6:
  *param_4 = *param_3;
  return;
}

