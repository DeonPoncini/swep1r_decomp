#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00498a60(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int local_10;
  int local_4;
  
  DAT_00dfaa04 = 0;
  local_10 = 0;
  pfVar14 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9ea8 = param_3;
  DAT_00df9eac = (float *)&DAT_00df9eb8;
  if (0 < (int)param_4) {
    iVar8 = 0;
    local_4 = (int)param_4;
    pfVar17 = param_3 + (int)param_4 * 2 + -2;
    pfVar15 = param_3;
    pfVar16 = param_2 + (int)param_4 * 3 + -3;
    pfVar11 = param_2;
    do {
      fVar2 = (float)param_1[0xc] * pfVar16[1];
      fVar3 = (float)param_1[0xc] * pfVar11[1];
      if ((fVar2 <= *pfVar16) || (fVar3 <= *pfVar11)) {
        iVar9 = iVar8;
        if (((*pfVar16 != fVar2) && (fVar3 != *pfVar11)) &&
           ((*pfVar16 < fVar2 || (*pfVar11 < fVar3)))) {
          fVar2 = pfVar11[1] - pfVar16[1];
          fVar4 = *pfVar11 - *pfVar16;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = pfVar11[1] * *pfVar16 - pfVar16[1] * *pfVar11;
          if (fVar1 != _DAT_004af9a8) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < _DAT_004af9a8) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < _DAT_004af9a8) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[0xc] * fVar5 - *pfVar16) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar16[1]) / fVar2;
          }
          *(float *)((int)pfVar14 + iVar8) = (float)param_1[0xc] * fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 4) = fVar5;
          iVar9 = iVar8 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 8) = (pfVar11[2] - pfVar16[2]) * fVar2 + pfVar16[2]
          ;
          DAT_00df9eac[local_10 * 2] = (*pfVar15 - *pfVar17) * fVar2 + *pfVar17;
          DAT_00df9eac[local_10 * 2 + 1] = (pfVar15[1] - pfVar17[1]) * fVar2 + pfVar17[1];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar14 = DAT_00df9eb4;
          local_10 = local_10 + 1;
        }
        iVar8 = iVar9;
        if (fVar3 <= *pfVar11) {
          pfVar14 = (float *)((int)pfVar14 + iVar9);
          *pfVar14 = *pfVar11;
          pfVar14[1] = pfVar11[1];
          pfVar14[2] = pfVar11[2];
          DAT_00df9eac[local_10 * 2] = *pfVar15;
          DAT_00df9eac[local_10 * 2 + 1] = pfVar15[1];
          local_10 = local_10 + 1;
          iVar8 = iVar9 + 0xc;
          pfVar14 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar17 = pfVar15;
      pfVar15 = pfVar15 + 2;
      pfVar16 = pfVar11;
      pfVar11 = pfVar11 + 3;
    } while (local_4 != 0);
  }
  local_4 = local_10;
  pfVar17 = DAT_00df9ea8;
  if (local_10 < 3) {
    return local_10;
  }
  DAT_00df9ea8 = DAT_00df9eac;
  iVar8 = local_10 * 2;
  local_10 = 0;
  pfVar15 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  if (0 < local_4) {
    iVar9 = 0;
    pfVar16 = DAT_00df9eac + iVar8 + -2;
    pfVar11 = pfVar14;
    pfVar13 = DAT_00df9eac;
    pfVar18 = pfVar14 + local_4 * 3 + -3;
    DAT_00df9eac = pfVar17;
    DAT_00dfa138 = pfVar14;
    do {
      pfVar14 = pfVar11;
      fVar2 = (float)param_1[10] * pfVar18[1];
      fVar3 = (float)param_1[10] * pfVar14[1];
      if ((*pfVar18 <= fVar2) || (*pfVar14 <= fVar3)) {
        iVar8 = iVar9;
        if (((*pfVar18 != fVar2) && (fVar3 != *pfVar14)) &&
           ((fVar2 < *pfVar18 || (fVar3 < *pfVar14)))) {
          fVar2 = pfVar14[1] - pfVar18[1];
          fVar4 = *pfVar14 - *pfVar18;
          fVar1 = (float)param_1[10] * fVar2 - fVar4;
          fVar5 = pfVar14[1] * *pfVar18 - pfVar18[1] * *pfVar14;
          if (fVar1 != _DAT_004af9a8) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < _DAT_004af9a8) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < _DAT_004af9a8) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[10] * fVar5 - *pfVar18) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar18[1]) / fVar2;
          }
          *(float *)((int)pfVar15 + iVar9) = (float)param_1[10] * fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar9 + 4) = fVar5;
          iVar8 = iVar9 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar9 + 8) = (pfVar14[2] - pfVar18[2]) * fVar2 + pfVar18[2]
          ;
          DAT_00df9eac[local_10 * 2] = (*pfVar13 - *pfVar16) * fVar2 + *pfVar16;
          DAT_00df9eac[local_10 * 2 + 1] = (pfVar13[1] - pfVar16[1]) * fVar2 + pfVar16[1];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          pfVar15 = DAT_00df9eb4;
          local_10 = local_10 + 1;
        }
        iVar9 = iVar8;
        if (*pfVar14 <= fVar3) {
          pfVar15 = (float *)((int)pfVar15 + iVar8);
          *pfVar15 = *pfVar14;
          pfVar15[1] = pfVar14[1];
          pfVar15[2] = pfVar14[2];
          DAT_00df9eac[local_10 * 2] = *pfVar13;
          DAT_00df9eac[local_10 * 2 + 1] = pfVar13[1];
          local_10 = local_10 + 1;
          iVar9 = iVar8 + 0xc;
          pfVar15 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar16 = pfVar13;
      pfVar11 = pfVar14 + 3;
      pfVar13 = pfVar13 + 2;
      pfVar18 = pfVar14;
      pfVar17 = DAT_00df9eac;
      pfVar14 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar14;
  DAT_00df9eac = pfVar17;
  local_4 = local_10;
  pfVar14 = DAT_00df9eac;
  if (local_10 < 3) {
    return local_10;
  }
  DAT_00df9eac = DAT_00df9ea8;
  iVar8 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  pfVar17 = pfVar15 + local_10 * 3 + -3;
  DAT_00df9ea8 = pfVar14;
  local_10 = 0;
  pfVar16 = DAT_00dfa138;
  if (0 < local_4) {
    pfVar13 = pfVar15 + 2;
    pfVar11 = pfVar14 + local_4 * 2 + -2;
    DAT_00dfa138 = pfVar15;
    do {
      fVar2 = (float)param_1[0xb] * pfVar17[1];
      fVar3 = pfVar13[-1] * (float)param_1[0xb];
      if ((pfVar17[2] <= fVar2) || (*pfVar13 <= fVar3)) {
        iVar9 = iVar8;
        if (((pfVar17[2] != fVar2) && (fVar3 != *pfVar13)) &&
           ((fVar2 < pfVar17[2] || (fVar3 < *pfVar13)))) {
          fVar2 = pfVar13[-1] - pfVar17[1];
          fVar4 = *pfVar13 - pfVar17[2];
          fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
          fVar5 = pfVar17[2] * pfVar13[-1] - pfVar17[1] * *pfVar13;
          if (fVar1 != _DAT_004af9a8) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[0xb];
          fVar6 = fVar2;
          if (fVar2 < _DAT_004af9a8) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < _DAT_004af9a8) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - pfVar17[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar17[1]) / fVar2;
          }
          iVar9 = iVar8 + 0xc;
          *(float *)((int)pfVar16 + iVar8) = (pfVar13[-2] - *pfVar17) * fVar2 + *pfVar17;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 8) = fVar1 * fVar5;
          DAT_00df9eac[local_10 * 2] = (*pfVar14 - *pfVar11) * fVar2 + *pfVar11;
          DAT_00df9eac[local_10 * 2 + 1] = (pfVar14[1] - pfVar11[1]) * fVar2 + pfVar11[1];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          pfVar16 = DAT_00df9eb4;
          local_10 = local_10 + 1;
        }
        iVar8 = iVar9;
        if (*pfVar13 <= fVar3) {
          pfVar16 = (float *)((int)pfVar16 + iVar9);
          *pfVar16 = pfVar13[-2];
          pfVar16[1] = pfVar13[-1];
          pfVar16[2] = *pfVar13;
          DAT_00df9eac[local_10 * 2] = *pfVar14;
          DAT_00df9eac[local_10 * 2 + 1] = pfVar14[1];
          local_10 = local_10 + 1;
          iVar8 = iVar9 + 0xc;
          pfVar16 = DAT_00df9eb4;
        }
      }
      pfVar17 = pfVar13 + -2;
      pfVar13 = pfVar13 + 3;
      local_4 = local_4 + -1;
      pfVar11 = pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar15 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar15;
  local_4 = local_10;
  pfVar14 = DAT_00df9eac;
  if (local_10 < 3) {
    return local_10;
  }
  DAT_00df9eac = DAT_00df9ea8;
  iVar8 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  pfVar17 = pfVar16 + local_10 * 3 + -3;
  DAT_00df9ea8 = pfVar14;
  local_10 = 0;
  pfVar15 = DAT_00dfa138;
  if (0 < local_4) {
    pfVar13 = pfVar16 + 2;
    pfVar11 = pfVar14 + local_4 * 2 + -2;
    DAT_00dfa138 = pfVar16;
    do {
      fVar2 = (float)param_1[8] * pfVar17[1];
      fVar3 = pfVar13[-1] * (float)param_1[8];
      if ((fVar2 <= pfVar17[2]) || (fVar3 <= *pfVar13)) {
        iVar9 = iVar8;
        if (((pfVar17[2] != fVar2) && (fVar3 != *pfVar13)) &&
           ((pfVar17[2] < fVar2 || (*pfVar13 < fVar3)))) {
          fVar2 = pfVar13[-1] - pfVar17[1];
          fVar4 = *pfVar13 - pfVar17[2];
          fVar1 = (float)param_1[8] * fVar2 - fVar4;
          fVar5 = pfVar17[2] * pfVar13[-1] - pfVar17[1] * *pfVar13;
          if (fVar1 != _DAT_004af9a8) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[8];
          fVar6 = fVar2;
          if (fVar2 < _DAT_004af9a8) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < _DAT_004af9a8) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - pfVar17[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar17[1]) / fVar2;
          }
          iVar9 = iVar8 + 0xc;
          *(float *)((int)pfVar15 + iVar8) = (pfVar13[-2] - *pfVar17) * fVar2 + *pfVar17;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar8 + 8) = fVar1 * fVar5;
          DAT_00df9eac[local_10 * 2] = (*pfVar14 - *pfVar11) * fVar2 + *pfVar11;
          DAT_00df9eac[local_10 * 2 + 1] = (pfVar14[1] - pfVar11[1]) * fVar2 + pfVar11[1];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          pfVar15 = DAT_00df9eb4;
          local_10 = local_10 + 1;
        }
        iVar8 = iVar9;
        if (fVar3 <= *pfVar13) {
          pfVar15 = (float *)((int)pfVar15 + iVar9);
          *pfVar15 = pfVar13[-2];
          pfVar15[1] = pfVar13[-1];
          pfVar15[2] = *pfVar13;
          DAT_00df9eac[local_10 * 2] = *pfVar14;
          DAT_00df9eac[local_10 * 2 + 1] = pfVar14[1];
          local_10 = local_10 + 1;
          iVar8 = iVar9 + 0xc;
          pfVar15 = DAT_00df9eb4;
        }
      }
      pfVar17 = pfVar13 + -2;
      pfVar13 = pfVar13 + 3;
      local_4 = local_4 + -1;
      pfVar11 = pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar16 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar16;
  param_4 = DAT_00df9eac;
  if (2 < local_10) {
    DAT_00df9eac = DAT_00df9ea8;
    iVar8 = 0;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00df9ea8 = param_4;
    pfVar14 = pfVar15 + local_10 * 3 + -3;
    pfVar17 = DAT_00dfa138;
    if (0 < local_10) {
      pfVar11 = pfVar15 + 1;
      iVar9 = iVar8;
      pfVar16 = param_4 + local_10 * 2 + -2;
      iVar12 = 0;
      DAT_00dfa138 = pfVar15;
      local_4 = local_10;
      do {
        iVar8 = iVar9;
        iVar19 = iVar12;
        if (((float)param_1[1] <= pfVar14[1]) || ((float)param_1[1] <= *pfVar11)) {
          if (((pfVar14[1] != (float)param_1[1]) && (*pfVar11 != (float)param_1[1])) &&
             ((pfVar14[1] < (float)param_1[1] || (*pfVar11 < (float)param_1[1])))) {
            iVar19 = iVar12 + 0xc;
            fVar2 = ((float)param_1[1] - pfVar14[1]) / (*pfVar11 - pfVar14[1]);
            *(int *)((int)pfVar17 + iVar12 + 4) = param_1[1];
            iVar8 = iVar9 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar12 + 8) =
                 (pfVar11[1] - pfVar14[2]) * fVar2 + pfVar14[2];
            *(float *)((int)DAT_00df9eb4 + iVar12) = (pfVar11[-1] - *pfVar14) * fVar2 + *pfVar14;
            DAT_00df9eac[iVar9 * 2] = (*param_4 - *pfVar16) * fVar2 + *pfVar16;
            DAT_00df9eac[iVar9 * 2 + 1] = (param_4[1] - pfVar16[1]) * fVar2 + pfVar16[1];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            pfVar17 = DAT_00df9eb4;
          }
          if ((float)param_1[1] <= *pfVar11) {
            pfVar17 = (float *)((int)pfVar17 + iVar19);
            iVar8 = iVar8 + 1;
            iVar19 = iVar19 + 0xc;
            *pfVar17 = pfVar11[-1];
            pfVar17[1] = *pfVar11;
            pfVar17[2] = pfVar11[1];
            DAT_00df9eac[iVar8 * 2 + -2] = *param_4;
            DAT_00df9eac[iVar8 * 2 + -1] = param_4[1];
            pfVar17 = DAT_00df9eb4;
          }
        }
        pfVar14 = pfVar11 + -1;
        pfVar11 = pfVar11 + 3;
        local_4 = local_4 + -1;
        iVar9 = iVar8;
        pfVar16 = param_4;
        iVar12 = iVar19;
        pfVar15 = DAT_00dfa138;
        param_4 = param_4 + 2;
      } while (local_4 != 0);
    }
    DAT_00dfa138 = pfVar15;
    pfVar14 = DAT_00df9ea8;
    if (iVar8 < 3) {
      DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
      return iVar8;
    }
    iVar9 = iVar8;
    pfVar15 = pfVar17;
    if (*param_1 != 0) {
      iVar9 = 0;
      DAT_00df9ea8 = DAT_00df9eac;
      pfVar16 = pfVar17 + iVar8 * 3 + -3;
      pfVar11 = DAT_00df9eac + iVar8 * 2 + -2;
      param_4 = DAT_00df9eac;
      pfVar15 = DAT_00dfa138;
      DAT_00df9eac = pfVar14;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar8) {
        pfVar14 = pfVar17 + 1;
        iVar12 = iVar9;
        iVar19 = 0;
        DAT_00dfa138 = pfVar17;
        local_4 = iVar8;
        do {
          iVar9 = iVar12;
          iVar8 = iVar19;
          if ((pfVar16[1] <= (float)param_1[2]) || (*pfVar14 <= (float)param_1[2])) {
            if (((pfVar16[1] != (float)param_1[2]) && (*pfVar14 != (float)param_1[2])) &&
               (((float)param_1[2] < pfVar16[1] || ((float)param_1[2] < *pfVar14)))) {
              iVar8 = iVar19 + 0xc;
              fVar2 = ((float)param_1[2] - pfVar16[1]) / (*pfVar14 - pfVar16[1]);
              *(int *)((int)pfVar15 + iVar19 + 4) = param_1[2];
              iVar9 = iVar12 + 1;
              *(float *)((int)DAT_00df9eb4 + iVar19 + 8) =
                   (pfVar14[1] - pfVar16[2]) * fVar2 + pfVar16[2];
              *(float *)((int)DAT_00df9eb4 + iVar19) = (pfVar14[-1] - *pfVar16) * fVar2 + *pfVar16;
              DAT_00df9eac[iVar12 * 2] = (*param_4 - *pfVar11) * fVar2 + *pfVar11;
              DAT_00df9eac[iVar12 * 2 + 1] = (param_4[1] - pfVar11[1]) * fVar2 + pfVar11[1];
              DAT_00dfaa04 = DAT_00dfaa04 | 2;
              pfVar15 = DAT_00df9eb4;
            }
            if (*pfVar14 <= (float)param_1[2]) {
              pfVar15 = (float *)((int)pfVar15 + iVar8);
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
              *pfVar15 = pfVar14[-1];
              pfVar15[1] = *pfVar14;
              pfVar15[2] = pfVar14[1];
              DAT_00df9eac[iVar9 * 2 + -2] = *param_4;
              DAT_00df9eac[iVar9 * 2 + -1] = param_4[1];
              pfVar15 = DAT_00df9eb4;
            }
          }
          pfVar16 = pfVar14 + -1;
          pfVar14 = pfVar14 + 3;
          local_4 = local_4 + -1;
          iVar12 = iVar9;
          pfVar11 = param_4;
          iVar19 = iVar8;
          pfVar17 = DAT_00dfa138;
          param_4 = param_4 + 2;
        } while (local_4 != 0);
      }
      DAT_00dfa138 = pfVar17;
      if (iVar9 < 3) {
        return iVar9;
      }
    }
    if (pfVar15 != param_2) {
      for (uVar10 = iVar9 * 3 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
        *param_2 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined *)param_2 = *(undefined *)pfVar15;
        pfVar15 = (float *)((int)pfVar15 + 1);
        param_2 = (float *)((int)param_2 + 1);
      }
      pfVar14 = DAT_00df9eac;
      for (uVar10 = (uint)(iVar9 * 8) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *param_3 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        param_3 = param_3 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined *)param_3 = *(undefined *)pfVar14;
        pfVar14 = (float *)((int)pfVar14 + 1);
        param_3 = (float *)((int)param_3 + 1);
      }
    }
    return iVar9;
  }
  return local_10;
}

