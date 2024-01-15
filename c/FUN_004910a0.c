#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004910a0(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,
                 undefined4 *param_5,float *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  
  puVar1 = param_5;
  puVar4 = param_4;
  switch(param_2) {
  case 0:
    uVar8 = 0;
    if (*param_4 != 0) {
      iVar6 = 0;
      do {
        puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar8 * 4) * 0xc);
        puVar10 = (undefined4 *)(iVar6 + param_5[3]);
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + 0xc;
        *puVar10 = *puVar1;
        puVar10[1] = puVar1[1];
        puVar10[2] = puVar1[2];
      } while (uVar8 < *param_4);
    }
    break;
  case 1:
  case 2:
    uVar8 = 0;
    if (*param_4 != 0) {
      iVar6 = 0;
      do {
        puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar8 * 4) * 0xc);
        puVar10 = (undefined4 *)(param_5[3] + iVar6);
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + 0xc;
        *puVar10 = *puVar1;
        puVar10[1] = puVar1[1];
        puVar10[2] = puVar1[2];
      } while (uVar8 < *param_4);
    }
    if (*DAT_00df7f2c == 1) {
      uVar7 = FUN_00494c60();
      *param_5 = uVar7;
      return;
    }
    uVar7 = FUN_00495600(param_1,param_5[3],*param_4);
    *param_5 = uVar7;
    return;
  case 3:
    switch(param_3) {
    case 0:
    case 1:
      uVar8 = 0;
      if (*param_4 != 0) {
        iVar6 = 0;
        do {
          puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar8 * 4) * 0xc);
          puVar10 = (undefined4 *)(iVar6 + param_5[3]);
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 0xc;
          *puVar10 = *puVar1;
          puVar10[1] = puVar1[1];
          puVar10[2] = puVar1[2];
        } while (uVar8 < *param_4);
      }
      break;
    case 2:
      uVar8 = 0;
      if (*param_4 != 0) {
        iVar6 = 0;
        do {
          puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar8 * 4) * 0xc);
          puVar10 = (undefined4 *)(iVar6 + param_5[3]);
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 0xc;
          *puVar10 = *puVar1;
          puVar10[1] = puVar1[1];
          puVar10[2] = puVar1[2];
        } while (uVar8 < *param_4);
      }
      break;
    case 3:
      iVar6 = 0;
      if (param_4[6] == 0) {
        uVar8 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar4[3] + *(int *)(puVar4[1] + uVar8 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            pfVar12 = (float *)(puVar4[5] + *(int *)(puVar4[1] + uVar8 * 4) * 0x10);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *pfVar12) && (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            *(float *)(iVar6 + param_5[5]) = fVar2;
            iVar5 = *(int *)(puVar4[1] + uVar8 * 4) * 0x10;
            pfVar12 = (float *)(iVar5 + 4 + puVar4[5]);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar5 + 4 + puVar4[5])) &&
               (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            *(float *)(iVar6 + 4 + param_5[5]) = fVar2;
            iVar5 = *(int *)(puVar4[1] + uVar8 * 4) * 0x10;
            pfVar12 = (float *)(iVar5 + 8 + puVar4[5]);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar5 + 8 + puVar4[5])) &&
               (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            *(float *)(iVar6 + 8 + param_5[5]) = fVar2;
            iVar5 = *(int *)(puVar4[1] + uVar8 * 4) * 0x10;
            pfVar12 = (float *)(iVar5 + 0xc + puVar4[5]);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar5 + 0xc + puVar4[5])) &&
               (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            uVar8 = uVar8 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar6 + 0xc + param_5[5]) = fVar2;
            iVar6 = iVar6 + 0x10;
          } while (uVar8 < *puVar4);
        }
      }
      else {
        uVar8 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar4[3] + *(int *)(puVar4[1] + uVar8 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            fVar2 = *(float *)(*(int *)(puVar4[1] + uVar8 * 4) * 0x10 + puVar4[5]) +
                    *(float *)(iVar6 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)(param_5[5] + iVar6) = fVar3;
            fVar2 = *(float *)(*(int *)(puVar4[1] + uVar8 * 4) * 0x10 + 4 + puVar4[5]) +
                    *(float *)(iVar6 + 4 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)(param_5[5] + 4 + iVar6) = fVar3;
            fVar2 = *(float *)(*(int *)(puVar4[1] + uVar8 * 4) * 0x10 + 8 + puVar4[5]) +
                    *(float *)(iVar6 + 8 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)(param_5[5] + 8 + iVar6) = fVar3;
            iVar5 = *(int *)(puVar4[1] + uVar8 * 4) * 0x10;
            pfVar12 = (float *)(iVar5 + 0xc + puVar4[5]);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar5 + 0xc + puVar4[5])) &&
               (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            uVar8 = uVar8 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(param_5[5] + 0xc + iVar6) = fVar2;
            iVar6 = iVar6 + 0x10;
          } while (uVar8 < *puVar4);
        }
      }
      if (*DAT_00df7f2c == 1) {
        uVar7 = FUN_00496e40(param_1,param_5[3],param_5[5],*puVar4);
        *param_5 = uVar7;
        return;
      }
      uVar7 = FUN_00497da0(param_1,param_5[3],param_5[5],*puVar4);
      *param_5 = uVar7;
      return;
    default:
      goto switchD_004910b1_caseD_5;
    }
    break;
  case 4:
    if (-1 < (int)param_3) {
      if ((int)param_3 < 3) {
        param_3 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            iVar9 = param_3 * 8;
            puVar1 = (undefined4 *)(puVar4[3] + *(int *)(puVar4[1] + param_3 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            iVar6 = param_5[4];
            iVar5 = *(int *)(puVar4[2] + param_3 * 4);
            uVar8 = puVar4[4];
            *(undefined4 *)(iVar6 + iVar9) = *(undefined4 *)(uVar8 + iVar5 * 8);
            *(undefined4 *)(iVar6 + 4 + iVar9) = *(undefined4 *)(uVar8 + 4 + iVar5 * 8);
            *(float *)(param_5[4] + iVar9) = *param_6 + *(float *)(param_5[4] + iVar9);
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(param_5[4] + 4 + iVar9) = *(float *)(param_5[4] + 4 + iVar9) + param_6[1];
            param_3 = param_3 + 1;
          } while (param_3 < *puVar4);
        }
        if (*DAT_00df7f2c == 1) {
          uVar7 = FUN_00498a60(param_1,param_5[3],param_5[4],*puVar4);
          *param_5 = uVar7;
          return;
        }
        uVar7 = FUN_00499840(param_1,param_5[3],param_5[4],*puVar4);
        *param_5 = uVar7;
      }
      else if (param_3 == 3) {
        param_3 = 0;
        if (param_4[6] == 0) {
          if (*param_4 != 0) {
            param_5 = (undefined4 *)0x0;
            param_4 = (uint *)0x0;
            do {
              puVar10 = (undefined4 *)(puVar4[3] + *(int *)(puVar4[1] + param_3 * 4) * 0xc);
              puVar11 = (undefined4 *)((int)param_4 + puVar1[3]);
              *puVar11 = *puVar10;
              puVar11[1] = puVar10[1];
              puVar11[2] = puVar10[2];
              iVar5 = puVar1[4];
              iVar6 = param_3 * 8;
              iVar9 = *(int *)(puVar4[2] + param_3 * 4);
              uVar8 = puVar4[4];
              *(undefined4 *)(iVar5 + iVar6) = *(undefined4 *)(uVar8 + iVar9 * 8);
              *(undefined4 *)(iVar5 + 4 + iVar6) = *(undefined4 *)(uVar8 + 4 + iVar9 * 8);
              *(float *)(puVar1[4] + iVar6) = *param_6 + *(float *)(puVar1[4] + iVar6);
              *(float *)(puVar1[4] + 4 + iVar6) = *(float *)(puVar1[4] + 4 + iVar6) + param_6[1];
              pfVar12 = (float *)(puVar4[5] + *(int *)(puVar4[1] + param_3 * 4) * 0x10);
              fVar2 = _DAT_004af918;
              if ((_DAT_004af918 <= *pfVar12) && (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928))
              {
                fVar2 = *pfVar12;
              }
              *(float *)((int)param_5 + puVar1[5]) = fVar2;
              iVar6 = *(int *)(puVar4[1] + param_3 * 4) * 0x10;
              pfVar12 = (float *)(iVar6 + 4 + puVar4[5]);
              fVar2 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar6 + 4 + puVar4[5])) &&
                 (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar2 = *pfVar12;
              }
              *(float *)((int)param_5 + 4 + puVar1[5]) = fVar2;
              iVar6 = *(int *)(puVar4[1] + param_3 * 4) * 0x10;
              pfVar12 = (float *)(iVar6 + 8 + puVar4[5]);
              fVar2 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar6 + 8 + puVar4[5])) &&
                 (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar2 = *pfVar12;
              }
              *(float *)((int)param_5 + 8 + puVar1[5]) = fVar2;
              iVar6 = *(int *)(puVar4[1] + param_3 * 4) * 0x10;
              pfVar12 = (float *)(iVar6 + 0xc + puVar4[5]);
              fVar2 = _DAT_004af918;
              if ((_DAT_004af918 <= *(float *)(iVar6 + 0xc + puVar4[5])) &&
                 (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
                fVar2 = *pfVar12;
              }
              param_3 = param_3 + 1;
              param_4 = (uint *)((int)param_4 + 0xc);
              *(float *)((int)param_5 + 0xc + puVar1[5]) = fVar2;
              param_5 = (undefined4 *)((int)param_5 + 0x10);
            } while (param_3 < *puVar4);
          }
        }
        else if (*param_4 != 0) {
          param_5 = (undefined4 *)0x0;
          param_4 = (uint *)0x0;
          do {
            puVar10 = (undefined4 *)(puVar4[3] + *(int *)(puVar4[1] + param_3 * 4) * 0xc);
            puVar11 = (undefined4 *)((int)param_4 + puVar1[3]);
            *puVar11 = *puVar10;
            puVar11[1] = puVar10[1];
            puVar11[2] = puVar10[2];
            iVar5 = puVar1[4];
            iVar6 = param_3 * 8;
            iVar9 = *(int *)(puVar4[2] + param_3 * 4);
            uVar8 = puVar4[4];
            *(undefined4 *)(iVar5 + iVar6) = *(undefined4 *)(uVar8 + iVar9 * 8);
            *(undefined4 *)(iVar5 + 4 + iVar6) = *(undefined4 *)(uVar8 + 4 + iVar9 * 8);
            *(float *)(puVar1[4] + iVar6) = *param_6 + *(float *)(puVar1[4] + iVar6);
            *(float *)(puVar1[4] + 4 + iVar6) = *(float *)(puVar1[4] + 4 + iVar6) + param_6[1];
            fVar2 = *(float *)(*(int *)(puVar4[1] + param_3 * 4) * 0x10 + puVar4[5]) +
                    *(float *)((int)param_5 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)((int)param_5 + puVar1[5]) = fVar3;
            fVar2 = *(float *)(*(int *)(puVar4[1] + param_3 * 4) * 0x10 + 4 + puVar4[5]) +
                    *(float *)((int)param_5 + 4 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)((int)param_5 + 4 + puVar1[5]) = fVar3;
            fVar2 = *(float *)(*(int *)(puVar4[1] + param_3 * 4) * 0x10 + 8 + puVar4[5]) +
                    *(float *)((int)param_5 + 8 + puVar4[6]);
            fVar3 = _DAT_004af918;
            if ((_DAT_004af918 <= fVar2) && (fVar3 = fVar2, _DAT_004af928 < fVar2)) {
              fVar3 = _DAT_004af928;
            }
            *(float *)((int)param_5 + 8 + puVar1[5]) = fVar3;
            iVar6 = *(int *)(puVar4[1] + param_3 * 4) * 0x10;
            pfVar12 = (float *)(iVar6 + 0xc + puVar4[5]);
            fVar2 = _DAT_004af918;
            if ((_DAT_004af918 <= *(float *)(iVar6 + 0xc + puVar4[5])) &&
               (fVar2 = _DAT_004af928, *pfVar12 <= _DAT_004af928)) {
              fVar2 = *pfVar12;
            }
            param_3 = param_3 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)((int)param_5 + 0xc + puVar1[5]) = fVar2;
            param_5 = (undefined4 *)((int)param_5 + 0x10);
          } while (param_3 < *puVar4);
        }
        if (*DAT_00df7f2c == 1) {
          uVar7 = FUN_0049a390(param_1,puVar1[3],puVar1[4],puVar1[5],*puVar4);
          *puVar1 = uVar7;
          return;
        }
        uVar7 = FUN_0049b7d0(param_1,puVar1[3],puVar1[4],puVar1[5],*puVar4);
        *puVar1 = uVar7;
        return;
      }
    }
  default:
switchD_004910b1_caseD_5:
    return;
  }
  if (*DAT_00df7f2c == 1) {
    uVar7 = FUN_00495d50();
    *param_5 = uVar7;
    return;
  }
  uVar7 = FUN_004966f0(param_1,param_5[3],*param_4);
  *param_5 = uVar7;
  return;
}

