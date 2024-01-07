#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
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
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
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
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
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
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[0xb];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
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
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[8];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
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



int FUN_00499840(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int local_c;
  float *local_8;

  DAT_00dfaa04 = 0;
  local_c = 0;
  pfVar7 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9ea8 = param_3;
  DAT_00df9eac = (float *)&DAT_00df9eb8;
  if (0 < param_4) {
    iVar12 = 0;
    local_8 = (float *)param_4;
    pfVar11 = param_2 + param_4 * 3 + -3;
    pfVar8 = param_2;
    pfVar9 = param_3 + param_4 * 2 + -2;
    pfVar10 = param_3;
    do {
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar11) || (fVar1 <= *pfVar8)) {
        iVar13 = iVar12;
        if (((*pfVar11 != fVar2) && (fVar1 != *pfVar8)) && ((*pfVar11 < fVar2 || (*pfVar8 < fVar1)))
           ) {
          fVar3 = (*pfVar8 - *pfVar11) / (fVar2 - *pfVar11);
          iVar13 = iVar12 + 0xc;
          *(float *)((int)pfVar7 + iVar12) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar12 + 4) = (pfVar8[1] - pfVar11[1]) * fVar3 + pfVar11[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar12 + 8) = (pfVar8[2] - pfVar11[2]) * fVar3 + pfVar11[2]
          ;
          DAT_00df9eac[local_c * 2] = (*pfVar10 - *pfVar9) * fVar3 + *pfVar9;
          DAT_00df9eac[local_c * 2 + 1] = (pfVar10[1] - pfVar9[1]) * fVar3 + pfVar9[1];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar7 = DAT_00df9eb4;
          local_c = local_c + 1;
        }
        iVar12 = iVar13;
        if (fVar1 <= *pfVar8) {
          pfVar7 = (float *)((int)pfVar7 + iVar13);
          *pfVar7 = *pfVar8;
          pfVar7[1] = pfVar8[1];
          pfVar7[2] = pfVar8[2];
          DAT_00df9eac[local_c * 2] = *pfVar10;
          DAT_00df9eac[local_c * 2 + 1] = pfVar10[1];
          local_c = local_c + 1;
          iVar12 = iVar13 + 0xc;
          pfVar7 = DAT_00df9eb4;
        }
      }
      local_8 = (float *)((int)local_8 + -1);
      pfVar11 = pfVar8;
      pfVar8 = pfVar8 + 3;
      pfVar9 = pfVar10;
      pfVar10 = pfVar10 + 2;
    } while (local_8 != (float *)0x0);
  }
  local_8 = (float *)local_c;
  pfVar11 = DAT_00df9ea8;
  if (2 < local_c) {
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00df9ea8 = DAT_00df9eac;
    local_c = 0;
    pfVar8 = DAT_00dfa138;
    if (0 < (int)local_8) {
      iVar12 = 0;
      pfVar9 = pfVar7 + (int)local_8 * 3 + -3;
      pfVar10 = pfVar7;
      pfVar5 = DAT_00df9eac + (int)local_8 * 2 + -2;
      pfVar6 = DAT_00df9eac;
      DAT_00df9eac = pfVar11;
      DAT_00dfa138 = pfVar7;
      do {
        fVar2 = (float)param_1[5];
        fVar1 = (float)param_1[5];
        if ((*pfVar9 <= fVar2) || (*pfVar10 <= fVar1)) {
          iVar13 = iVar12;
          if (((*pfVar9 != fVar2) && (fVar1 != *pfVar10)) &&
             ((fVar2 < *pfVar9 || (fVar1 < *pfVar10)))) {
            fVar3 = (*pfVar10 - *pfVar9) / (fVar2 - *pfVar9);
            iVar13 = iVar12 + 0xc;
            *(float *)((int)pfVar8 + iVar12) = fVar2;
            *(float *)((int)DAT_00df9eb4 + iVar12 + 4) =
                 (pfVar10[1] - pfVar9[1]) * fVar3 + pfVar9[1];
            *(float *)((int)DAT_00df9eb4 + iVar12 + 8) =
                 (pfVar10[2] - pfVar9[2]) * fVar3 + pfVar9[2];
            DAT_00df9eac[local_c * 2] = (*pfVar6 - *pfVar5) * fVar3 + *pfVar5;
            DAT_00df9eac[local_c * 2 + 1] = (pfVar6[1] - pfVar5[1]) * fVar3 + pfVar5[1];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar8 = DAT_00df9eb4;
            local_c = local_c + 1;
          }
          iVar12 = iVar13;
          if (*pfVar10 <= fVar1) {
            pfVar8 = (float *)((int)pfVar8 + iVar13);
            *pfVar8 = *pfVar10;
            pfVar8[1] = pfVar10[1];
            pfVar8[2] = pfVar10[2];
            DAT_00df9eac[local_c * 2] = *pfVar6;
            DAT_00df9eac[local_c * 2 + 1] = pfVar6[1];
            local_c = local_c + 1;
            iVar12 = iVar13 + 0xc;
            pfVar8 = DAT_00df9eb4;
          }
        }
        local_8 = (float *)((int)local_8 + -1);
        pfVar9 = pfVar10;
        pfVar10 = pfVar10 + 3;
        pfVar5 = pfVar6;
        pfVar6 = pfVar6 + 2;
        pfVar11 = DAT_00df9eac;
        pfVar7 = DAT_00dfa138;
      } while (local_8 != (float *)0x0);
    }
    DAT_00dfa138 = pfVar7;
    DAT_00df9eac = pfVar11;
    param_4 = local_c;
    pfVar7 = DAT_00df9ea8;
    if (2 < local_c) {
      DAT_00df9eb4 = DAT_00dfa138;
      DAT_00df9ea8 = DAT_00df9eac;
      local_c = 0;
      pfVar11 = pfVar8 + param_4 * 3 + -3;
      pfVar9 = DAT_00dfa138;
      if (0 < param_4) {
        pfVar10 = pfVar8 + 2;
        iVar12 = 0;
        pfVar5 = DAT_00df9eac + param_4 * 2 + -2;
        pfVar6 = DAT_00df9eac;
        DAT_00df9eac = pfVar7;
        DAT_00dfa138 = pfVar8;
        do {
          fVar2 = (float)param_1[4];
          fVar1 = (float)param_1[4];
          if ((pfVar11[2] <= fVar2) || (*pfVar10 <= fVar1)) {
            iVar13 = iVar12;
            if (((pfVar11[2] != fVar2) && (fVar1 != *pfVar10)) &&
               ((fVar2 < pfVar11[2] || (fVar1 < *pfVar10)))) {
              fVar3 = (*pfVar10 - pfVar11[2]) / (fVar2 - pfVar11[2]);
              iVar13 = iVar12 + 0xc;
              *(float *)((int)pfVar9 + iVar12) = (pfVar10[-2] - *pfVar11) * fVar3 + *pfVar11;
              *(float *)((int)DAT_00df9eb4 + iVar12 + 4) =
                   (pfVar10[-1] - pfVar11[1]) * fVar3 + pfVar11[1];
              *(float *)((int)DAT_00df9eb4 + iVar12 + 8) = fVar2;
              DAT_00df9eac[local_c * 2] = (*pfVar6 - *pfVar5) * fVar3 + *pfVar5;
              DAT_00df9eac[local_c * 2 + 1] = (pfVar6[1] - pfVar5[1]) * fVar3 + pfVar5[1];
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar9 = DAT_00df9eb4;
              local_c = local_c + 1;
            }
            iVar12 = iVar13;
            if (*pfVar10 <= fVar1) {
              pfVar9 = (float *)((int)pfVar9 + iVar13);
              *pfVar9 = pfVar10[-2];
              pfVar9[1] = pfVar10[-1];
              pfVar9[2] = *pfVar10;
              DAT_00df9eac[local_c * 2] = *pfVar6;
              DAT_00df9eac[local_c * 2 + 1] = pfVar6[1];
              local_c = local_c + 1;
              iVar12 = iVar13 + 0xc;
              pfVar9 = DAT_00df9eb4;
            }
          }
          pfVar11 = pfVar10 + -2;
          pfVar10 = pfVar10 + 3;
          param_4 = param_4 + -1;
          pfVar5 = pfVar6;
          pfVar6 = pfVar6 + 2;
          pfVar7 = DAT_00df9eac;
          pfVar8 = DAT_00dfa138;
        } while (param_4 != 0);
      }
      DAT_00dfa138 = pfVar8;
      DAT_00df9eac = pfVar7;
      param_4 = local_c;
      pfVar7 = DAT_00df9ea8;
      if (2 < local_c) {
        DAT_00df9ea8 = DAT_00df9eac;
        local_c = 0;
        pfVar11 = pfVar9 + param_4 * 3 + -3;
        pfVar8 = DAT_00dfa138;
        DAT_00df9eb4 = DAT_00dfa138;
        if (0 < param_4) {
          pfVar10 = pfVar9 + 2;
          iVar12 = 0;
          pfVar5 = DAT_00df9eac + param_4 * 2 + -2;
          pfVar6 = DAT_00df9eac;
          DAT_00df9eac = pfVar7;
          DAT_00dfa138 = pfVar9;
          do {
            fVar2 = (float)param_1[6];
            fVar1 = (float)param_1[6];
            if ((fVar2 <= pfVar11[2]) || (fVar1 <= *pfVar10)) {
              iVar13 = iVar12;
              if (((pfVar11[2] != fVar2) && (fVar1 != *pfVar10)) &&
                 ((pfVar11[2] < fVar2 || (*pfVar10 < fVar1)))) {
                fVar3 = (*pfVar10 - pfVar11[2]) / (fVar2 - pfVar11[2]);
                iVar13 = iVar12 + 0xc;
                *(float *)((int)pfVar8 + iVar12) = (pfVar10[-2] - *pfVar11) * fVar3 + *pfVar11;
                *(float *)((int)DAT_00df9eb4 + iVar12 + 4) =
                     (pfVar10[-1] - pfVar11[1]) * fVar3 + pfVar11[1];
                *(float *)((int)DAT_00df9eb4 + iVar12 + 8) = fVar2;
                DAT_00df9eac[local_c * 2] = (*pfVar6 - *pfVar5) * fVar3 + *pfVar5;
                DAT_00df9eac[local_c * 2 + 1] = (pfVar6[1] - pfVar5[1]) * fVar3 + pfVar5[1];
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar8 = DAT_00df9eb4;
                local_c = local_c + 1;
              }
              iVar12 = iVar13;
              if (fVar1 <= *pfVar10) {
                pfVar8 = (float *)((int)pfVar8 + iVar13);
                *pfVar8 = pfVar10[-2];
                pfVar8[1] = pfVar10[-1];
                pfVar8[2] = *pfVar10;
                DAT_00df9eac[local_c * 2] = *pfVar6;
                DAT_00df9eac[local_c * 2 + 1] = pfVar6[1];
                local_c = local_c + 1;
                iVar12 = iVar13 + 0xc;
                pfVar8 = DAT_00df9eb4;
              }
            }
            pfVar11 = pfVar10 + -2;
            pfVar10 = pfVar10 + 3;
            param_4 = param_4 + -1;
            pfVar5 = pfVar6;
            pfVar6 = pfVar6 + 2;
            pfVar7 = DAT_00df9eac;
            pfVar9 = DAT_00dfa138;
          } while (param_4 != 0);
        }
        DAT_00dfa138 = pfVar9;
        DAT_00df9eac = pfVar7;
        pfVar7 = DAT_00df9ea8;
        if (local_c < 3) {
          return local_c;
        }
        iVar12 = 0;
        DAT_00df9ea8 = DAT_00df9eac;
        pfVar11 = pfVar8 + local_c * 3 + -3;
        pfVar9 = DAT_00df9eac + local_c * 2 + -2;
        local_8 = DAT_00df9eac;
        pfVar10 = DAT_00dfa138;
        DAT_00df9eac = pfVar7;
        DAT_00df9eb4 = DAT_00dfa138;
        if (0 < local_c) {
          pfVar7 = pfVar8 + 1;
          iVar13 = 0;
          param_4 = local_c;
          DAT_00dfa138 = pfVar8;
          do {
            if (((float)param_1[1] <= pfVar11[1]) || ((float)param_1[1] <= *pfVar7)) {
              if (((pfVar11[1] != (float)param_1[1]) && (*pfVar7 != (float)param_1[1])) &&
                 ((pfVar11[1] < (float)param_1[1] || (*pfVar7 < (float)param_1[1])))) {
                fVar1 = ((float)param_1[1] - pfVar11[1]) / (*pfVar7 - pfVar11[1]);
                *(int *)((int)pfVar10 + iVar13 + 4) = param_1[1];
                *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
                     (pfVar7[1] - pfVar11[2]) * fVar1 + pfVar11[2];
                *(float *)((int)DAT_00df9eb4 + iVar13) = (pfVar7[-1] - *pfVar11) * fVar1 + *pfVar11;
                DAT_00df9eac[iVar12 * 2] = (*local_8 - *pfVar9) * fVar1 + *pfVar9;
                DAT_00df9eac[iVar12 * 2 + 1] = (local_8[1] - pfVar9[1]) * fVar1 + pfVar9[1];
                DAT_00dfaa04 = DAT_00dfaa04 | 1;
                iVar12 = iVar12 + 1;
                pfVar10 = DAT_00df9eb4;
                iVar13 = iVar13 + 0xc;
              }
              if ((float)param_1[1] <= *pfVar7) {
                pfVar10 = (float *)((int)pfVar10 + iVar13);
                iVar12 = iVar12 + 1;
                iVar13 = iVar13 + 0xc;
                *pfVar10 = pfVar7[-1];
                pfVar10[1] = *pfVar7;
                pfVar10[2] = pfVar7[1];
                DAT_00df9eac[iVar12 * 2 + -2] = *local_8;
                DAT_00df9eac[iVar12 * 2 + -1] = local_8[1];
                pfVar10 = DAT_00df9eb4;
              }
            }
            pfVar11 = pfVar7 + -1;
            pfVar7 = pfVar7 + 3;
            param_4 = param_4 + -1;
            pfVar9 = local_8;
            pfVar8 = DAT_00dfa138;
            local_8 = local_8 + 2;
          } while (param_4 != 0);
        }
        DAT_00dfa138 = pfVar8;
        pfVar7 = DAT_00df9ea8;
        if (iVar12 < 3) {
          DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
          return iVar12;
        }
        local_c = iVar12;
        pfVar11 = pfVar10;
        if (*param_1 != 0) {
          local_c = 0;
          DAT_00df9eb4 = DAT_00dfa138;
          DAT_00df9ea8 = DAT_00df9eac;
          pfVar8 = pfVar10 + iVar12 * 3 + -3;
          pfVar9 = DAT_00df9eac + iVar12 * 2 + -2;
          local_8 = DAT_00df9eac;
          pfVar11 = DAT_00dfa138;
          DAT_00df9eac = pfVar7;
          if (0 < iVar12) {
            iVar13 = 0;
            pfVar7 = pfVar10 + 1;
            DAT_00dfa138 = pfVar10;
            param_4 = iVar12;
            do {
              if ((pfVar8[1] <= (float)param_1[2]) || (*pfVar7 <= (float)param_1[2])) {
                if (((pfVar8[1] != (float)param_1[2]) && (*pfVar7 != (float)param_1[2])) &&
                   (((float)param_1[2] < pfVar8[1] || ((float)param_1[2] < *pfVar7)))) {
                  fVar1 = ((float)param_1[2] - pfVar8[1]) / (*pfVar7 - pfVar8[1]);
                  *(int *)((int)pfVar11 + iVar13 + 4) = param_1[2];
                  *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
                       (pfVar7[1] - pfVar8[2]) * fVar1 + pfVar8[2];
                  *(float *)((int)DAT_00df9eb4 + iVar13) = (pfVar7[-1] - *pfVar8) * fVar1 + *pfVar8;
                  DAT_00df9eac[local_c * 2] = (*local_8 - *pfVar9) * fVar1 + *pfVar9;
                  DAT_00df9eac[local_c * 2 + 1] = (local_8[1] - pfVar9[1]) * fVar1 + pfVar9[1];
                  DAT_00dfaa04 = DAT_00dfaa04 | 2;
                  local_c = local_c + 1;
                  iVar13 = iVar13 + 0xc;
                  pfVar11 = DAT_00df9eb4;
                }
                if (*pfVar7 <= (float)param_1[2]) {
                  pfVar11 = (float *)((int)pfVar11 + iVar13);
                  local_c = local_c + 1;
                  iVar13 = iVar13 + 0xc;
                  *pfVar11 = pfVar7[-1];
                  pfVar11[1] = *pfVar7;
                  pfVar11[2] = pfVar7[1];
                  DAT_00df9eac[local_c * 2 + -2] = *local_8;
                  DAT_00df9eac[local_c * 2 + -1] = local_8[1];
                  pfVar11 = DAT_00df9eb4;
                }
              }
              pfVar8 = pfVar7 + -1;
              pfVar7 = pfVar7 + 3;
              param_4 = param_4 + -1;
              pfVar9 = local_8;
              pfVar10 = DAT_00dfa138;
              local_8 = local_8 + 2;
            } while (param_4 != 0);
          }
          DAT_00dfa138 = pfVar10;
          if (local_c < 3) {
            return local_c;
          }
        }
        if (pfVar11 != param_2) {
          for (uVar4 = local_c * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *param_2 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            param_2 = param_2 + 1;
          }
          for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined *)param_2 = *(undefined *)pfVar11;
            pfVar11 = (float *)((int)pfVar11 + 1);
            param_2 = (float *)((int)param_2 + 1);
          }
          pfVar7 = DAT_00df9eac;
          for (uVar4 = (uint)(local_c * 8) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *param_3 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            param_3 = param_3 + 1;
          }
          for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined *)param_3 = *(undefined *)pfVar7;
            pfVar7 = (float *)((int)pfVar7 + 1);
            param_3 = (float *)((int)param_3 + 1);
          }
        }
      }
    }
  }
  return local_c;
}



int FUN_0049a390(int *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *local_1c;
  int local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  int local_4;

  local_1c = param_2 + param_5 * 3 + -3;
  iVar13 = 0;
  pfVar18 = (float *)&DAT_00dfa140;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9ea8 = param_3;
  DAT_00df9eac = (float *)&DAT_00df9eb8;
  DAT_00dfa13c = param_4;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  local_18 = 0;
  local_14 = param_2;
  if (0 < param_5) {
    iVar16 = 0;
    local_4 = param_5;
    pfVar9 = param_4 + param_5 * 4 + -4;
    pfVar20 = param_4;
    pfVar19 = param_3;
    local_10 = param_3 + param_5 * 2 + -2;
    do {
      pfVar11 = pfVar19;
      fVar2 = (float)param_1[0xc] * local_1c[1];
      fVar3 = (float)param_1[0xc] * local_14[1];
      if ((fVar2 <= *local_1c) || (fVar3 <= *local_14)) {
        iVar14 = iVar13;
        iVar17 = iVar16;
        if (((*local_1c != fVar2) && (fVar3 != *local_14)) &&
           ((*local_1c < fVar2 || (*local_14 < fVar3)))) {
          fVar2 = local_14[1] - local_1c[1];
          fVar4 = *local_14 - *local_1c;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = local_14[1] * *local_1c - local_1c[1] * *local_14;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[0xc] * fVar5 - *local_1c) / fVar4;
          }
          else {
            fVar2 = (fVar5 - local_1c[1]) / fVar2;
          }
          *(float *)((int)pfVar18 + iVar16) = (float)param_1[0xc] * fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 4) = fVar5;
          iVar17 = iVar16 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 8) =
               (local_14[2] - local_1c[2]) * fVar2 + local_1c[2];
          DAT_00df9eac[local_18 * 2] = (*pfVar11 - *local_10) * fVar2 + *local_10;
          DAT_00df9eac[local_18 * 2 + 1] = (pfVar11[1] - local_10[1]) * fVar2 + local_10[1];
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar20 - *pfVar9) * fVar2 + *pfVar9;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar20[1] - pfVar9[1]) * fVar2 + pfVar9[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar20[2] - pfVar9[2]) * fVar2 + pfVar9[2];
          iVar14 = iVar13 + 0x10;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 0xc) =
               (pfVar20[3] - pfVar9[3]) * fVar2 + pfVar9[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar18 = DAT_00df9eb4;
          local_18 = local_18 + 1;
        }
        iVar13 = iVar14;
        iVar16 = iVar17;
        if (fVar3 <= *local_14) {
          pfVar18 = (float *)((int)pfVar18 + iVar17);
          iVar16 = iVar17 + 0xc;
          *pfVar18 = *local_14;
          pfVar18[1] = local_14[1];
          pfVar18[2] = local_14[2];
          DAT_00df9eac[local_18 * 2] = *pfVar11;
          DAT_00df9eac[local_18 * 2 + 1] = pfVar11[1];
          pfVar18 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar18 = *pfVar20;
          pfVar18[1] = pfVar20[1];
          pfVar18[2] = pfVar20[2];
          local_18 = local_18 + 1;
          pfVar18[3] = pfVar20[3];
          iVar13 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      local_1c = local_14;
      local_14 = local_14 + 3;
      local_4 = local_4 + -1;
      pfVar9 = pfVar20;
      pfVar20 = pfVar20 + 4;
      pfVar19 = pfVar11 + 2;
      local_10 = pfVar11;
    } while (local_4 != 0);
  }
  local_4 = local_18;
  pfVar20 = DAT_00df9eb0;
  pfVar9 = DAT_00df9eac;
  if (local_18 < 3) {
    return local_18;
  }
  local_1c = pfVar18 + local_18 * 3 + -3;
  DAT_00df9eb4 = DAT_00dfa138;
  local_10 = DAT_00df9eac + local_18 * 2 + -2;
  DAT_00df9eac = DAT_00df9ea8;
  DAT_00df9ea8 = pfVar9;
  DAT_00df9eb0 = DAT_00dfa13c;
  DAT_00dfa13c = pfVar20;
  local_18 = 0;
  pfVar19 = DAT_00dfa138;
  if (0 < local_4) {
    iVar13 = 0;
    iVar16 = 0;
    pfVar11 = pfVar20 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar18;
    local_14 = pfVar18;
    do {
      pfVar22 = pfVar9;
      fVar2 = (float)param_1[10] * local_1c[1];
      fVar3 = (float)param_1[10] * local_14[1];
      if ((*local_1c <= fVar2) || (*local_14 <= fVar3)) {
        iVar14 = iVar13;
        iVar17 = iVar16;
        if (((*local_1c != fVar2) && (fVar3 != *local_14)) &&
           ((fVar2 < *local_1c || (fVar3 < *local_14)))) {
          fVar2 = local_14[1] - local_1c[1];
          fVar4 = *local_14 - *local_1c;
          fVar1 = (float)param_1[10] * fVar2 - fVar4;
          fVar5 = local_14[1] * *local_1c - local_1c[1] * *local_14;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = fVar2;
          if (fVar2 < 0.0) {
            fVar1 = -fVar2;
          }
          fVar6 = fVar4;
          if (fVar4 < 0.0) {
            fVar6 = -fVar4;
          }
          if (fVar1 <= fVar6) {
            fVar2 = ((float)param_1[10] * fVar5 - *local_1c) / fVar4;
          }
          else {
            fVar2 = (fVar5 - local_1c[1]) / fVar2;
          }
          *(float *)((int)pfVar19 + iVar16) = (float)param_1[10] * fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 4) = fVar5;
          iVar17 = iVar16 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 8) =
               (local_14[2] - local_1c[2]) * fVar2 + local_1c[2];
          DAT_00df9eac[local_18 * 2] = (*pfVar22 - *local_10) * fVar2 + *local_10;
          DAT_00df9eac[local_18 * 2 + 1] = (pfVar22[1] - local_10[1]) * fVar2 + local_10[1];
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar20 - *pfVar11) * fVar2 + *pfVar11;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
               (pfVar20[1] - pfVar11[1]) * fVar2 + pfVar11[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
               (pfVar20[2] - pfVar11[2]) * fVar2 + pfVar11[2];
          iVar14 = iVar13 + 0x10;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 0xc) =
               (pfVar20[3] - pfVar11[3]) * fVar2 + pfVar11[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          pfVar19 = DAT_00df9eb4;
          local_18 = local_18 + 1;
        }
        iVar13 = iVar14;
        iVar16 = iVar17;
        if (*local_14 <= fVar3) {
          pfVar19 = (float *)((int)pfVar19 + iVar17);
          iVar16 = iVar17 + 0xc;
          *pfVar19 = *local_14;
          pfVar19[1] = local_14[1];
          pfVar19[2] = local_14[2];
          DAT_00df9eac[local_18 * 2] = *pfVar22;
          DAT_00df9eac[local_18 * 2 + 1] = pfVar22[1];
          pfVar18 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar18 = *pfVar20;
          pfVar18[1] = pfVar20[1];
          pfVar18[2] = pfVar20[2];
          local_18 = local_18 + 1;
          pfVar18[3] = pfVar20[3];
          iVar13 = iVar14 + 0x10;
          pfVar19 = DAT_00df9eb4;
        }
      }
      local_1c = local_14;
      local_14 = local_14 + 3;
      local_4 = local_4 + -1;
      pfVar11 = pfVar20;
      pfVar20 = pfVar20 + 4;
      pfVar9 = pfVar22 + 2;
      pfVar18 = DAT_00dfa138;
      local_10 = pfVar22;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar18;
  local_4 = local_18;
  if (local_18 < 3) {
    return local_18;
  }
  iVar13 = 0;
  local_1c = pfVar19 + local_18 * 3 + -3;
  local_10 = DAT_00df9eac + local_18 * 2 + -2;
  local_18 = 0;
  pfVar18 = DAT_00dfa138;
  pfVar9 = DAT_00df9eac;
  pfVar20 = DAT_00df9ea8;
  pfVar11 = DAT_00dfa13c;
  DAT_00df9eb4 = DAT_00dfa138;
  pfVar22 = DAT_00df9eb0;
  if (0 < local_4) {
    iVar16 = 0;
    local_14 = pfVar19 + 2;
    pfVar10 = DAT_00df9eb0 + local_4 * 4 + -4;
    pfVar15 = DAT_00df9eb0;
    pfVar8 = DAT_00df9eac;
    pfVar9 = DAT_00df9eac;
    DAT_00df9eac = DAT_00df9ea8;
    pfVar11 = DAT_00dfa13c;
    DAT_00dfa138 = pfVar19;
    DAT_00dfa13c = DAT_00df9eb0;
    do {
      DAT_00df9eb0 = pfVar11;
      DAT_00df9ea8 = pfVar9;
      pfVar21 = pfVar8;
      fVar2 = (float)param_1[0xb] * local_1c[1];
      fVar3 = (float)param_1[0xb] * local_14[-1];
      if ((local_1c[2] <= fVar2) || (*local_14 <= fVar3)) {
        iVar14 = iVar13;
        iVar17 = iVar16;
        if (((local_1c[2] != fVar2) && (fVar3 != *local_14)) &&
           ((fVar2 < local_1c[2] || (fVar3 < *local_14)))) {
          fVar2 = local_14[-1] - local_1c[1];
          fVar4 = *local_14 - local_1c[2];
          fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
          fVar5 = local_1c[2] * local_14[-1] - local_1c[1] * *local_14;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[0xb];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - local_1c[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - local_1c[1]) / fVar2;
          }
          iVar17 = iVar16 + 0xc;
          *(float *)((int)pfVar18 + iVar16) = (local_14[-2] - *local_1c) * fVar2 + *local_1c;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 8) = fVar1 * fVar5;
          DAT_00df9eac[local_18 * 2] = (*pfVar21 - *local_10) * fVar2 + *local_10;
          DAT_00df9eac[local_18 * 2 + 1] = (pfVar21[1] - local_10[1]) * fVar2 + local_10[1];
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar15 - *pfVar10) * fVar2 + *pfVar10;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
               (pfVar15[1] - pfVar10[1]) * fVar2 + pfVar10[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
               (pfVar15[2] - pfVar10[2]) * fVar2 + pfVar10[2];
          iVar14 = iVar13 + 0x10;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 0xc) =
               (pfVar15[3] - pfVar10[3]) * fVar2 + pfVar10[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          pfVar18 = DAT_00df9eb4;
          local_18 = local_18 + 1;
        }
        iVar13 = iVar14;
        iVar16 = iVar17;
        if (*local_14 <= fVar3) {
          pfVar18 = (float *)((int)pfVar18 + iVar17);
          iVar16 = iVar17 + 0xc;
          *pfVar18 = local_14[-2];
          pfVar18[1] = local_14[-1];
          pfVar18[2] = *local_14;
          DAT_00df9eac[local_18 * 2] = *pfVar21;
          DAT_00df9eac[local_18 * 2 + 1] = pfVar21[1];
          pfVar18 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar18 = *pfVar15;
          pfVar18[1] = pfVar15[1];
          pfVar18[2] = pfVar15[2];
          local_18 = local_18 + 1;
          pfVar18[3] = pfVar15[3];
          iVar13 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      local_1c = local_14 + -2;
      local_14 = local_14 + 3;
      local_4 = local_4 + -1;
      pfVar10 = pfVar15;
      pfVar15 = pfVar15 + 4;
      pfVar8 = pfVar21 + 2;
      pfVar9 = DAT_00df9ea8;
      pfVar20 = DAT_00df9eac;
      pfVar11 = DAT_00df9eb0;
      pfVar19 = DAT_00dfa138;
      pfVar22 = DAT_00dfa13c;
      local_10 = pfVar21;
    } while (local_4 != 0);
  }
  DAT_00dfa13c = pfVar22;
  DAT_00dfa138 = pfVar19;
  DAT_00df9eb0 = pfVar11;
  DAT_00df9eac = pfVar20;
  DAT_00df9ea8 = pfVar9;
  local_4 = local_18;
  pfVar20 = DAT_00df9eb0;
  pfVar9 = DAT_00df9eac;
  if (local_18 < 3) {
    return local_18;
  }
  DAT_00df9eac = DAT_00df9ea8;
  iVar16 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00df9eb0 = DAT_00dfa13c;
  DAT_00df9ea8 = pfVar9;
  DAT_00dfa13c = pfVar20;
  local_1c = pfVar18 + local_18 * 3 + -3;
  iVar13 = local_18 * 2;
  local_18 = 0;
  pfVar19 = DAT_00dfa138;
  if (0 < local_4) {
    iVar14 = 0;
    local_14 = pfVar18 + 2;
    pfVar11 = pfVar20 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar18;
    local_10 = pfVar9 + iVar13 + -2;
    do {
      pfVar22 = pfVar9;
      fVar2 = (float)param_1[8] * local_1c[1];
      fVar3 = (float)param_1[8] * local_14[-1];
      if ((fVar2 <= local_1c[2]) || (fVar3 <= *local_14)) {
        iVar13 = iVar14;
        iVar17 = iVar16;
        if (((local_1c[2] != fVar2) && (fVar3 != *local_14)) &&
           ((local_1c[2] < fVar2 || (*local_14 < fVar3)))) {
          fVar2 = local_14[-1] - local_1c[1];
          fVar4 = *local_14 - local_1c[2];
          fVar1 = (float)param_1[8] * fVar2 - fVar4;
          fVar5 = local_1c[2] * local_14[-1] - local_1c[1] * *local_14;
          if (fVar1 != 0.0) {
            fVar5 = fVar5 / fVar1;
          }
          fVar1 = (float)param_1[8];
          fVar6 = fVar2;
          if (fVar2 < 0.0) {
            fVar6 = -fVar2;
          }
          fVar7 = fVar4;
          if (fVar4 < 0.0) {
            fVar7 = -fVar4;
          }
          if (fVar6 <= fVar7) {
            fVar2 = (fVar1 * fVar5 - local_1c[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - local_1c[1]) / fVar2;
          }
          iVar17 = iVar16 + 0xc;
          *(float *)((int)pfVar19 + iVar16) = (local_14[-2] - *local_1c) * fVar2 + *local_1c;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar16 + 8) = fVar1 * fVar5;
          DAT_00df9eac[local_18 * 2] = (*pfVar22 - *local_10) * fVar2 + *local_10;
          DAT_00df9eac[local_18 * 2 + 1] = (pfVar22[1] - local_10[1]) * fVar2 + local_10[1];
          *(float *)((int)DAT_00df9eb0 + iVar14) = (*pfVar20 - *pfVar11) * fVar2 + *pfVar11;
          *(float *)((int)DAT_00df9eb0 + iVar14 + 4) =
               (pfVar20[1] - pfVar11[1]) * fVar2 + pfVar11[1];
          *(float *)((int)DAT_00df9eb0 + iVar14 + 8) =
               (pfVar20[2] - pfVar11[2]) * fVar2 + pfVar11[2];
          iVar13 = iVar14 + 0x10;
          *(float *)((int)DAT_00df9eb0 + iVar14 + 0xc) =
               (pfVar20[3] - pfVar11[3]) * fVar2 + pfVar11[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          pfVar19 = DAT_00df9eb4;
          local_18 = local_18 + 1;
        }
        iVar14 = iVar13;
        iVar16 = iVar17;
        if (fVar3 <= *local_14) {
          pfVar19 = (float *)((int)pfVar19 + iVar17);
          iVar16 = iVar17 + 0xc;
          *pfVar19 = local_14[-2];
          pfVar19[1] = local_14[-1];
          pfVar19[2] = *local_14;
          DAT_00df9eac[local_18 * 2] = *pfVar22;
          DAT_00df9eac[local_18 * 2 + 1] = pfVar22[1];
          pfVar18 = (float *)((int)DAT_00df9eb0 + iVar13);
          *pfVar18 = *pfVar20;
          pfVar18[1] = pfVar20[1];
          pfVar18[2] = pfVar20[2];
          local_18 = local_18 + 1;
          pfVar18[3] = pfVar20[3];
          iVar14 = iVar13 + 0x10;
          pfVar19 = DAT_00df9eb4;
        }
      }
      local_1c = local_14 + -2;
      local_14 = local_14 + 3;
      local_4 = local_4 + -1;
      pfVar11 = pfVar20;
      pfVar20 = pfVar20 + 4;
      pfVar9 = pfVar22 + 2;
      pfVar18 = DAT_00dfa138;
      local_10 = pfVar22;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar18;
  param_5 = local_18;
  pfVar18 = DAT_00df9eb0;
  local_8 = DAT_00df9eac;
  if (2 < local_18) {
    DAT_00df9eac = DAT_00df9ea8;
    DAT_00df9eb0 = DAT_00dfa13c;
    iVar16 = 0;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00df9ea8 = local_8;
    DAT_00dfa13c = pfVar18;
    pfVar9 = pfVar19 + local_18 * 3 + -3;
    local_10 = local_8 + local_18 * 2 + -2;
    iVar13 = local_18 * 4;
    pfVar20 = DAT_00dfa138;
    if (0 < local_18) {
      local_c = pfVar19 + 1;
      local_18 = 0;
      pfVar11 = pfVar18 + iVar13 + -4;
      iVar13 = 0;
      DAT_00dfa138 = pfVar19;
      do {
        iVar14 = iVar13;
        if (((float)param_1[1] <= pfVar9[1]) || ((float)param_1[1] <= *local_c)) {
          if (((pfVar9[1] != (float)param_1[1]) && (*local_c != (float)param_1[1])) &&
             ((pfVar9[1] < (float)param_1[1] || (*local_c < (float)param_1[1])))) {
            fVar2 = ((float)param_1[1] - pfVar9[1]) / (*local_c - pfVar9[1]);
            *(int *)((int)pfVar20 + local_18 + 4) = param_1[1];
            *(float *)((int)DAT_00df9eb4 + local_18 + 8) =
                 (local_c[1] - pfVar9[2]) * fVar2 + pfVar9[2];
            *(float *)((int)DAT_00df9eb4 + local_18) = (local_c[-1] - *pfVar9) * fVar2 + *pfVar9;
            DAT_00df9eac[iVar16 * 2] = (*local_8 - *local_10) * fVar2 + *local_10;
            DAT_00df9eac[iVar16 * 2 + 1] = (local_8[1] - local_10[1]) * fVar2 + local_10[1];
            *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar18 - *pfVar11) * fVar2 + *pfVar11;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                 (pfVar18[1] - pfVar11[1]) * fVar2 + pfVar11[1];
            local_18 = local_18 + 0xc;
            iVar16 = iVar16 + 1;
            iVar14 = iVar13 + 0x10;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                 (pfVar18[2] - pfVar11[2]) * fVar2 + pfVar11[2];
            *(float *)((int)DAT_00df9eb0 + iVar13 + 0xc) =
                 (pfVar18[3] - pfVar11[3]) * fVar2 + pfVar11[3];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            pfVar20 = DAT_00df9eb4;
          }
          if ((float)param_1[1] <= *local_c) {
            pfVar20 = (float *)((int)pfVar20 + local_18);
            local_18 = local_18 + 0xc;
            *pfVar20 = local_c[-1];
            pfVar20[1] = *local_c;
            pfVar20[2] = local_c[1];
            DAT_00df9eac[iVar16 * 2] = *local_8;
            DAT_00df9eac[iVar16 * 2 + 1] = local_8[1];
            pfVar9 = (float *)((int)DAT_00df9eb0 + iVar14);
            iVar16 = iVar16 + 1;
            iVar14 = iVar14 + 0x10;
            *pfVar9 = *pfVar18;
            pfVar9[1] = pfVar18[1];
            pfVar9[2] = pfVar18[2];
            pfVar9[3] = pfVar18[3];
            pfVar20 = DAT_00df9eb4;
          }
        }
        pfVar9 = local_c + -1;
        local_c = local_c + 3;
        local_10 = local_8;
        local_8 = local_8 + 2;
        param_5 = param_5 + -1;
        pfVar11 = pfVar18;
        pfVar18 = pfVar18 + 4;
        iVar13 = iVar14;
        pfVar19 = DAT_00dfa138;
      } while (param_5 != 0);
    }
    DAT_00dfa138 = pfVar19;
    pfVar9 = DAT_00dfa13c;
    pfVar18 = DAT_00df9ea8;
    if (iVar16 < 3) {
      DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
      return iVar16;
    }
    iVar13 = iVar16;
    pfVar19 = pfVar20;
    if (*param_1 != 0) {
      iVar13 = 0;
      DAT_00df9ea8 = DAT_00df9eac;
      DAT_00dfa13c = DAT_00df9eb0;
      pfVar11 = pfVar20 + iVar16 * 3 + -3;
      local_10 = DAT_00df9eac + iVar16 * 2 + -2;
      local_8 = DAT_00df9eac;
      pfVar19 = DAT_00dfa138;
      DAT_00df9eac = pfVar18;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar16) {
        local_c = pfVar20 + 1;
        local_18 = 0;
        pfVar18 = DAT_00df9eb0 + iVar16 * 4 + -4;
        iVar14 = 0;
        pfVar22 = DAT_00df9eb0;
        DAT_00df9eb0 = pfVar9;
        DAT_00dfa138 = pfVar20;
        param_5 = iVar16;
        do {
          iVar16 = iVar14;
          if ((pfVar11[1] <= (float)param_1[2]) || (*local_c <= (float)param_1[2])) {
            if (((pfVar11[1] != (float)param_1[2]) && (*local_c != (float)param_1[2])) &&
               (((float)param_1[2] < pfVar11[1] || ((float)param_1[2] < *local_c)))) {
              fVar2 = ((float)param_1[2] - pfVar11[1]) / (*local_c - pfVar11[1]);
              *(int *)((int)pfVar19 + local_18 + 4) = param_1[2];
              *(float *)((int)DAT_00df9eb4 + local_18 + 8) =
                   (local_c[1] - pfVar11[2]) * fVar2 + pfVar11[2];
              *(float *)((int)DAT_00df9eb4 + local_18) = (local_c[-1] - *pfVar11) * fVar2 + *pfVar11
              ;
              DAT_00df9eac[iVar13 * 2] = (*local_8 - *local_10) * fVar2 + *local_10;
              DAT_00df9eac[iVar13 * 2 + 1] = (local_8[1] - local_10[1]) * fVar2 + local_10[1];
              *(float *)((int)DAT_00df9eb0 + iVar14) = (*pfVar22 - *pfVar18) * fVar2 + *pfVar18;
              *(float *)((int)DAT_00df9eb0 + iVar14 + 4) =
                   (pfVar22[1] - pfVar18[1]) * fVar2 + pfVar18[1];
              local_18 = local_18 + 0xc;
              iVar13 = iVar13 + 1;
              iVar16 = iVar14 + 0x10;
              *(float *)((int)DAT_00df9eb0 + iVar14 + 8) =
                   (pfVar22[2] - pfVar18[2]) * fVar2 + pfVar18[2];
              *(float *)((int)DAT_00df9eb0 + iVar14 + 0xc) =
                   (pfVar22[3] - pfVar18[3]) * fVar2 + pfVar18[3];
              DAT_00dfaa04 = DAT_00dfaa04 | 2;
              pfVar19 = DAT_00df9eb4;
            }
            if (*local_c <= (float)param_1[2]) {
              pfVar19 = (float *)((int)pfVar19 + local_18);
              local_18 = local_18 + 0xc;
              *pfVar19 = local_c[-1];
              pfVar19[1] = *local_c;
              pfVar19[2] = local_c[1];
              DAT_00df9eac[iVar13 * 2] = *local_8;
              DAT_00df9eac[iVar13 * 2 + 1] = local_8[1];
              pfVar18 = (float *)((int)DAT_00df9eb0 + iVar16);
              iVar13 = iVar13 + 1;
              iVar16 = iVar16 + 0x10;
              *pfVar18 = *pfVar22;
              pfVar18[1] = pfVar22[1];
              pfVar18[2] = pfVar22[2];
              pfVar18[3] = pfVar22[3];
              pfVar19 = DAT_00df9eb4;
            }
          }
          pfVar11 = local_c + -1;
          local_c = local_c + 3;
          local_10 = local_8;
          local_8 = local_8 + 2;
          param_5 = param_5 + -1;
          pfVar18 = pfVar22;
          iVar14 = iVar16;
          pfVar22 = pfVar22 + 4;
          pfVar9 = DAT_00df9eb0;
          pfVar20 = DAT_00dfa138;
        } while (param_5 != 0);
      }
      DAT_00dfa138 = pfVar20;
      DAT_00df9eb0 = pfVar9;
      if (iVar13 < 3) {
        return iVar13;
      }
    }
    if (pfVar19 != param_2) {
      for (uVar12 = iVar13 * 3 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
        *param_2 = *pfVar19;
        pfVar19 = pfVar19 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined *)param_2 = *(undefined *)pfVar19;
        pfVar19 = (float *)((int)pfVar19 + 1);
        param_2 = (float *)((int)param_2 + 1);
      }
      pfVar18 = DAT_00df9eac;
      for (uVar12 = (uint)(iVar13 * 8) >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *param_3 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        param_3 = param_3 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined *)param_3 = *(undefined *)pfVar18;
        pfVar18 = (float *)((int)pfVar18 + 1);
        param_3 = (float *)((int)param_3 + 1);
      }
      pfVar18 = DAT_00df9eb0;
      for (uVar12 = (uint)(iVar13 << 4) >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *param_4 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        param_4 = param_4 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined *)param_4 = *(undefined *)pfVar18;
        pfVar18 = (float *)((int)pfVar18 + 1);
        param_4 = (float *)((int)param_4 + 1);
      }
    }
    return iVar13;
  }
  return local_18;
}



int FUN_0049b7d0(int *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_14;
  int local_10;
  float *local_c;
  float *local_8;
  int local_4;

  DAT_00dfaa04 = 0;
  local_10 = 0;
  DAT_00dfa13c = param_4;
  local_c = param_4;
  pfVar9 = (float *)&DAT_00dfa140;
  local_8 = param_3 + param_5 * 2 + -2;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9ea8 = param_3;
  DAT_00df9eac = (float *)&DAT_00df9eb8;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  local_14 = param_3;
  if (param_5 < 1) {
    iVar4 = 0;
  }
  else {
    iVar8 = 0;
    iVar7 = 0;
    pfVar6 = param_2 + param_5 * 3 + -3;
    pfVar10 = param_4 + param_5 * 4 + -4;
    pfVar12 = param_2;
    do {
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar6) || (fVar1 <= *pfVar12)) {
        if (((*pfVar6 != fVar2) && (fVar1 != *pfVar12)) && ((*pfVar6 < fVar2 || (*pfVar12 < fVar1)))
           ) {
          fVar3 = (*pfVar12 - *pfVar6) / (fVar2 - *pfVar6);
          *(float *)((int)pfVar9 + iVar7) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar7 + 4) = (pfVar12[1] - pfVar6[1]) * fVar3 + pfVar6[1];
          *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = (pfVar12[2] - pfVar6[2]) * fVar3 + pfVar6[2];
          DAT_00df9eac[local_10 * 2] = (*local_14 - *local_8) * fVar3 + *local_8;
          DAT_00df9eac[local_10 * 2 + 1] = (local_14[1] - local_8[1]) * fVar3 + local_8[1];
          *(float *)((int)DAT_00df9eb0 + iVar8) = (*local_c - *pfVar10) * fVar3 + *pfVar10;
          *(float *)((int)DAT_00df9eb0 + iVar8 + 4) = (local_c[1] - pfVar10[1]) * fVar3 + pfVar10[1]
          ;
          iVar7 = iVar7 + 0xc;
          local_10 = local_10 + 1;
          *(float *)((int)DAT_00df9eb0 + iVar8 + 8) = (local_c[2] - pfVar10[2]) * fVar3 + pfVar10[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          iVar8 = iVar8 + 0x10;
          pfVar9 = DAT_00df9eb4;
        }
        if (fVar1 <= *pfVar12) {
          pfVar9 = (float *)((int)pfVar9 + iVar7);
          iVar7 = iVar7 + 0xc;
          *pfVar9 = *pfVar12;
          pfVar9[1] = pfVar12[1];
          pfVar9[2] = pfVar12[2];
          DAT_00df9eac[local_10 * 2] = *local_14;
          DAT_00df9eac[local_10 * 2 + 1] = local_14[1];
          pfVar9 = (float *)((int)DAT_00df9eb0 + iVar8);
          local_10 = local_10 + 1;
          iVar8 = iVar8 + 0x10;
          *pfVar9 = *local_c;
          pfVar9[1] = local_c[1];
          pfVar9[2] = local_c[2];
          pfVar9[3] = local_c[3];
          pfVar9 = DAT_00df9eb4;
        }
      }
      local_8 = local_14;
      local_14 = local_14 + 2;
      param_5 = param_5 + -1;
      pfVar6 = pfVar12;
      iVar4 = local_10;
      pfVar10 = local_c;
      pfVar12 = pfVar12 + 3;
      local_c = local_c + 4;
    } while (param_5 != 0);
  }
  local_c = DAT_00df9eb0;
  pfVar6 = DAT_00df9ea8;
  if (2 < iVar4) {
    local_8 = DAT_00df9eac + iVar4 * 2 + -2;
    DAT_00df9eb0 = DAT_00dfa13c;
    DAT_00dfa13c = local_c;
    DAT_00df9ea8 = DAT_00df9eac;
    local_10 = 0;
    local_14 = DAT_00df9eac;
    pfVar10 = DAT_00dfa138;
    DAT_00df9eac = pfVar6;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00dfa138 = pfVar9;
    if (iVar4 < 1) {
      param_5 = 0;
    }
    else {
      iVar8 = 0;
      iVar7 = 0;
      pfVar6 = pfVar9 + iVar4 * 3 + -3;
      pfVar12 = local_c + iVar4 * 4 + -4;
      do {
        param_5 = iVar4;
        fVar2 = (float)param_1[5];
        fVar1 = (float)param_1[5];
        if ((*pfVar6 <= fVar2) || (*pfVar9 <= fVar1)) {
          if (((*pfVar6 != fVar2) && (fVar1 != *pfVar9)) && ((fVar2 < *pfVar6 || (fVar1 < *pfVar9)))
             ) {
            fVar3 = (*pfVar9 - *pfVar6) / (fVar2 - *pfVar6);
            *(float *)((int)pfVar10 + iVar7) = fVar2;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) = (pfVar9[1] - pfVar6[1]) * fVar3 + pfVar6[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = (pfVar9[2] - pfVar6[2]) * fVar3 + pfVar6[2];
            DAT_00df9eac[local_10 * 2] = (*local_14 - *local_8) * fVar3 + *local_8;
            DAT_00df9eac[local_10 * 2 + 1] = (local_14[1] - local_8[1]) * fVar3 + local_8[1];
            *(float *)((int)DAT_00df9eb0 + iVar8) = (*local_c - *pfVar12) * fVar3 + *pfVar12;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 4) =
                 (local_c[1] - pfVar12[1]) * fVar3 + pfVar12[1];
            iVar7 = iVar7 + 0xc;
            local_10 = local_10 + 1;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 8) =
                 (local_c[2] - pfVar12[2]) * fVar3 + pfVar12[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            iVar8 = iVar8 + 0x10;
            pfVar10 = DAT_00df9eb4;
          }
          if (*pfVar9 <= fVar1) {
            pfVar10 = (float *)((int)pfVar10 + iVar7);
            iVar7 = iVar7 + 0xc;
            *pfVar10 = *pfVar9;
            pfVar10[1] = pfVar9[1];
            pfVar10[2] = pfVar9[2];
            DAT_00df9eac[local_10 * 2] = *local_14;
            DAT_00df9eac[local_10 * 2 + 1] = local_14[1];
            pfVar6 = (float *)((int)DAT_00df9eb0 + iVar8);
            local_10 = local_10 + 1;
            iVar8 = iVar8 + 0x10;
            *pfVar6 = *local_c;
            pfVar6[1] = local_c[1];
            pfVar6[2] = local_c[2];
            pfVar6[3] = local_c[3];
            pfVar10 = DAT_00df9eb4;
          }
        }
        local_8 = local_14;
        local_14 = local_14 + 2;
        iVar4 = param_5 + -1;
        pfVar6 = pfVar9;
        pfVar12 = local_c;
        param_5 = local_10;
        pfVar9 = pfVar9 + 3;
        local_c = local_c + 4;
      } while (iVar4 != 0);
    }
    pfVar6 = DAT_00dfa13c;
    pfVar9 = DAT_00df9ea8;
    if (param_5 < 3) {
      return param_5;
    }
    pfVar12 = pfVar10 + param_5 * 3 + -3;
    local_8 = DAT_00df9eac + param_5 * 2 + -2;
    DAT_00df9ea8 = DAT_00df9eac;
    DAT_00dfa13c = DAT_00df9eb0;
    local_10 = 0;
    local_14 = DAT_00df9eac;
    local_c = DAT_00df9eb0;
    pfVar11 = DAT_00dfa138;
    DAT_00df9eac = pfVar9;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00dfa138 = pfVar10;
    if (param_5 < 1) {
      iVar4 = 0;
      DAT_00df9eb0 = pfVar6;
    }
    else {
      iVar8 = 0;
      iVar7 = 0;
      pfVar10 = pfVar10 + 2;
      pfVar9 = DAT_00df9eb0 + param_5 * 4 + -4;
      DAT_00df9eb0 = pfVar6;
      do {
        fVar2 = (float)param_1[4];
        fVar1 = (float)param_1[4];
        if ((pfVar12[2] <= fVar2) || (*pfVar10 <= fVar1)) {
          if (((pfVar12[2] != fVar2) && (fVar1 != *pfVar10)) &&
             ((fVar2 < pfVar12[2] || (fVar1 < *pfVar10)))) {
            fVar3 = (*pfVar10 - pfVar12[2]) / (fVar2 - pfVar12[2]);
            *(float *)((int)pfVar11 + iVar7) = (pfVar10[-2] - *pfVar12) * fVar3 + *pfVar12;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                 (pfVar10[-1] - pfVar12[1]) * fVar3 + pfVar12[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
            DAT_00df9eac[local_10 * 2] = (*local_14 - *local_8) * fVar3 + *local_8;
            DAT_00df9eac[local_10 * 2 + 1] = (local_14[1] - local_8[1]) * fVar3 + local_8[1];
            *(float *)((int)DAT_00df9eb0 + iVar8) = (*local_c - *pfVar9) * fVar3 + *pfVar9;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 4) = (local_c[1] - pfVar9[1]) * fVar3 + pfVar9[1]
            ;
            iVar7 = iVar7 + 0xc;
            local_10 = local_10 + 1;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 8) = (local_c[2] - pfVar9[2]) * fVar3 + pfVar9[2]
            ;
            DAT_00dfaa04 = DAT_00dfaa04 | 4;
            iVar8 = iVar8 + 0x10;
            pfVar11 = DAT_00df9eb4;
          }
          if (*pfVar10 <= fVar1) {
            pfVar11 = (float *)((int)pfVar11 + iVar7);
            iVar7 = iVar7 + 0xc;
            *pfVar11 = pfVar10[-2];
            pfVar11[1] = pfVar10[-1];
            pfVar11[2] = *pfVar10;
            DAT_00df9eac[local_10 * 2] = *local_14;
            DAT_00df9eac[local_10 * 2 + 1] = local_14[1];
            pfVar9 = (float *)((int)DAT_00df9eb0 + iVar8);
            local_10 = local_10 + 1;
            iVar8 = iVar8 + 0x10;
            *pfVar9 = *local_c;
            pfVar9[1] = local_c[1];
            pfVar9[2] = local_c[2];
            pfVar9[3] = local_c[3];
            pfVar11 = DAT_00df9eb4;
          }
        }
        pfVar12 = pfVar10 + -2;
        local_8 = local_14;
        local_14 = local_14 + 2;
        pfVar10 = pfVar10 + 3;
        param_5 = param_5 + -1;
        pfVar9 = local_c;
        iVar4 = local_10;
        local_c = local_c + 4;
      } while (param_5 != 0);
    }
    pfVar6 = DAT_00dfa13c;
    pfVar9 = DAT_00df9ea8;
    if (iVar4 < 3) {
      return iVar4;
    }
    pfVar10 = pfVar11 + iVar4 * 3 + -3;
    local_8 = DAT_00df9eac + iVar4 * 2 + -2;
    DAT_00df9ea8 = DAT_00df9eac;
    DAT_00dfa13c = DAT_00df9eb0;
    local_10 = 0;
    local_14 = DAT_00df9eac;
    local_c = DAT_00df9eb0;
    pfVar12 = DAT_00dfa138;
    DAT_00df9eac = pfVar9;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00dfa138 = pfVar11;
    if (iVar4 < 1) {
      param_5 = 0;
      DAT_00df9eb0 = pfVar6;
    }
    else {
      iVar8 = 0;
      iVar7 = 0;
      pfVar11 = pfVar11 + 2;
      pfVar9 = DAT_00df9eb0 + iVar4 * 4 + -4;
      DAT_00df9eb0 = pfVar6;
      do {
        param_5 = iVar4;
        fVar2 = (float)param_1[6];
        fVar1 = (float)param_1[6];
        if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar11)) {
          if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar11)) &&
             ((pfVar10[2] < fVar2 || (*pfVar11 < fVar1)))) {
            fVar3 = (*pfVar11 - pfVar10[2]) / (fVar2 - pfVar10[2]);
            *(float *)((int)pfVar12 + iVar7) = (pfVar11[-2] - *pfVar10) * fVar3 + *pfVar10;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                 (pfVar11[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
            DAT_00df9eac[local_10 * 2] = (*local_14 - *local_8) * fVar3 + *local_8;
            DAT_00df9eac[local_10 * 2 + 1] = (local_14[1] - local_8[1]) * fVar3 + local_8[1];
            *(float *)((int)DAT_00df9eb0 + iVar8) = (*local_c - *pfVar9) * fVar3 + *pfVar9;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 4) = (local_c[1] - pfVar9[1]) * fVar3 + pfVar9[1]
            ;
            iVar7 = iVar7 + 0xc;
            local_10 = local_10 + 1;
            *(float *)((int)DAT_00df9eb0 + iVar8 + 8) = (local_c[2] - pfVar9[2]) * fVar3 + pfVar9[2]
            ;
            DAT_00dfaa04 = DAT_00dfaa04 | 8;
            pfVar12 = DAT_00df9eb4;
            iVar8 = iVar8 + 0x10;
          }
          if (fVar1 <= *pfVar11) {
            pfVar12 = (float *)((int)pfVar12 + iVar7);
            iVar7 = iVar7 + 0xc;
            *pfVar12 = pfVar11[-2];
            pfVar12[1] = pfVar11[-1];
            pfVar12[2] = *pfVar11;
            DAT_00df9eac[local_10 * 2] = *local_14;
            DAT_00df9eac[local_10 * 2 + 1] = local_14[1];
            pfVar9 = (float *)((int)DAT_00df9eb0 + iVar8);
            local_10 = local_10 + 1;
            iVar8 = iVar8 + 0x10;
            *pfVar9 = *local_c;
            pfVar9[1] = local_c[1];
            pfVar9[2] = local_c[2];
            pfVar9[3] = local_c[3];
            pfVar12 = DAT_00df9eb4;
          }
        }
        pfVar10 = pfVar11 + -2;
        local_8 = local_14;
        local_14 = local_14 + 2;
        pfVar11 = pfVar11 + 3;
        iVar4 = param_5 + -1;
        pfVar9 = local_c;
        param_5 = local_10;
        local_c = local_c + 4;
      } while (iVar4 != 0);
    }
    pfVar6 = DAT_00dfa13c;
    pfVar9 = DAT_00df9ea8;
    if (param_5 < 3) {
      return param_5;
    }
    iVar8 = 0;
    local_8 = DAT_00df9eac + param_5 * 2 + -2;
    DAT_00dfa13c = DAT_00df9eb0;
    local_c = DAT_00df9eb0;
    pfVar11 = DAT_00df9eb0 + param_5 * 4 + -4;
    DAT_00df9ea8 = DAT_00df9eac;
    pfVar10 = pfVar12 + param_5 * 3 + -3;
    local_14 = DAT_00df9eac;
    pfVar13 = DAT_00dfa138;
    DAT_00df9eac = pfVar9;
    DAT_00df9eb0 = pfVar6;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < param_5) {
      iVar4 = 0;
      local_10 = 0;
      local_4 = 0;
      pfVar9 = pfVar12 + 1;
      DAT_00dfa138 = pfVar12;
      do {
        if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar9)) {
          if (((pfVar10[1] != (float)param_1[1]) && (*pfVar9 != (float)param_1[1])) &&
             ((pfVar10[1] < (float)param_1[1] || (*pfVar9 < (float)param_1[1])))) {
            fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar9 - pfVar10[1]);
            *(int *)((int)pfVar13 + local_4 + 4) = param_1[1];
            *(float *)((int)DAT_00df9eb4 + local_4 + 8) =
                 (pfVar9[1] - pfVar10[2]) * fVar1 + pfVar10[2];
            *(float *)((int)DAT_00df9eb4 + local_4) = (pfVar9[-1] - *pfVar10) * fVar1 + *pfVar10;
            DAT_00df9eac[iVar8 * 2] = (*local_14 - *local_8) * fVar1 + *local_8;
            DAT_00df9eac[iVar8 * 2 + 1] = (local_14[1] - local_8[1]) * fVar1 + local_8[1];
            *(float *)((int)DAT_00df9eb0 + local_10) = (*local_c - *pfVar11) * fVar1 + *pfVar11;
            *(float *)((int)DAT_00df9eb0 + local_10 + 4) =
                 (local_c[1] - *pfVar11) * fVar1 + pfVar11[1];
            local_4 = local_4 + 0xc;
            iVar8 = iVar8 + 1;
            iVar4 = local_10 + 0x10;
            *(float *)((int)DAT_00df9eb0 + local_10 + 8) =
                 (local_c[2] - *pfVar11) * fVar1 + pfVar11[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            pfVar13 = DAT_00df9eb4;
            local_10 = iVar4;
          }
          if ((float)param_1[1] <= *pfVar9) {
            pfVar13 = (float *)((int)pfVar13 + local_4);
            *pfVar13 = pfVar9[-1];
            pfVar13[1] = *pfVar9;
            pfVar13[2] = pfVar9[1];
            DAT_00df9eac[iVar8 * 2] = *local_14;
            DAT_00df9eac[iVar8 * 2 + 1] = local_14[1];
            pfVar6 = (float *)((int)DAT_00df9eb0 + iVar4);
            iVar8 = iVar8 + 1;
            *pfVar6 = *local_c;
            pfVar6[1] = local_c[1];
            pfVar6[2] = local_c[2];
            pfVar6[3] = local_c[3];
            local_4 = local_4 + 0xc;
            iVar4 = iVar4 + 0x10;
            pfVar13 = DAT_00df9eb4;
            local_10 = iVar4;
          }
        }
        pfVar10 = pfVar9 + -1;
        local_8 = local_14;
        local_14 = local_14 + 2;
        pfVar9 = pfVar9 + 3;
        param_5 = param_5 + -1;
        pfVar11 = local_c;
        pfVar12 = DAT_00dfa138;
        local_c = local_c + 4;
      } while (param_5 != 0);
    }
    DAT_00dfa138 = pfVar12;
    local_c = DAT_00df9eb0;
    pfVar9 = DAT_00df9ea8;
    if (iVar8 < 3) {
      DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
      return iVar8;
    }
    iVar4 = iVar8;
    pfVar6 = pfVar13;
    if (*param_1 != 0) {
      DAT_00df9ea8 = DAT_00df9eac;
      local_8 = DAT_00df9eac + iVar8 * 2 + -2;
      DAT_00df9eb0 = DAT_00dfa13c;
      DAT_00dfa13c = local_c;
      pfVar10 = pfVar13 + iVar8 * 3 + -3;
      local_14 = DAT_00df9eac;
      iVar7 = 0;
      iVar4 = 0;
      pfVar6 = DAT_00dfa138;
      DAT_00df9eac = pfVar9;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar8) {
        local_4 = 0;
        pfVar9 = pfVar13 + 1;
        pfVar12 = local_c + iVar8 * 4 + -4;
        DAT_00dfa138 = pfVar13;
        param_5 = iVar8;
        do {
          if ((pfVar10[1] <= (float)param_1[2]) || (*pfVar9 <= (float)param_1[2])) {
            if (((pfVar10[1] != (float)param_1[2]) && (*pfVar9 != (float)param_1[2])) &&
               (((float)param_1[2] < pfVar10[1] || ((float)param_1[2] < *pfVar9)))) {
              fVar1 = ((float)param_1[2] - pfVar10[1]) / (*pfVar9 - pfVar10[1]);
              *(int *)((int)pfVar6 + iVar7 + 4) = param_1[2];
              *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                   (pfVar9[1] - pfVar10[2]) * fVar1 + pfVar10[2];
              *(float *)((int)DAT_00df9eb4 + iVar7) = (pfVar9[-1] - *pfVar10) * fVar1 + *pfVar10;
              DAT_00df9eac[iVar4 * 2] = (*local_14 - *local_8) * fVar1 + *local_8;
              DAT_00df9eac[iVar4 * 2 + 1] = (local_14[1] - local_8[1]) * fVar1 + local_8[1];
              *(float *)((int)DAT_00df9eb0 + local_4) = (*local_c - *pfVar12) * fVar1 + *pfVar12;
              *(float *)((int)DAT_00df9eb0 + local_4 + 4) =
                   (local_c[1] - pfVar12[1]) * fVar1 + pfVar12[1];
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + 0xc;
              *(float *)((int)DAT_00df9eb0 + local_4 + 8) =
                   (local_c[2] - pfVar12[2]) * fVar1 + pfVar12[2];
              DAT_00dfaa04 = DAT_00dfaa04 | 2;
              pfVar6 = DAT_00df9eb4;
              local_4 = local_4 + 0x10;
            }
            if (*pfVar9 <= (float)param_1[2]) {
              pfVar6 = (float *)((int)pfVar6 + iVar7);
              iVar7 = iVar7 + 0xc;
              *pfVar6 = pfVar9[-1];
              pfVar6[1] = *pfVar9;
              pfVar6[2] = pfVar9[1];
              DAT_00df9eac[iVar4 * 2] = *local_14;
              DAT_00df9eac[iVar4 * 2 + 1] = local_14[1];
              pfVar6 = (float *)((int)DAT_00df9eb0 + local_4);
              iVar4 = iVar4 + 1;
              local_4 = local_4 + 0x10;
              *pfVar6 = *local_c;
              pfVar6[1] = local_c[1];
              pfVar6[2] = local_c[2];
              pfVar6[3] = local_c[3];
              pfVar6 = DAT_00df9eb4;
            }
          }
          pfVar10 = pfVar9 + -1;
          local_8 = local_14;
          local_14 = local_14 + 2;
          pfVar9 = pfVar9 + 3;
          param_5 = param_5 + -1;
          pfVar12 = local_c;
          pfVar13 = DAT_00dfa138;
          local_c = local_c + 4;
        } while (param_5 != 0);
      }
      DAT_00dfa138 = pfVar13;
      if (iVar4 < 3) {
        return iVar4;
      }
    }
    if (pfVar6 != param_2) {
      for (uVar5 = iVar4 * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined *)param_2 = *(undefined *)pfVar6;
        pfVar6 = (float *)((int)pfVar6 + 1);
        param_2 = (float *)((int)param_2 + 1);
      }
      pfVar9 = DAT_00df9eac;
      for (uVar5 = (uint)(iVar4 * 8) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_3 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        param_3 = param_3 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined *)param_3 = *(undefined *)pfVar9;
        pfVar9 = (float *)((int)pfVar9 + 1);
        param_3 = (float *)((int)param_3 + 1);
      }
      pfVar9 = DAT_00df9eb0;
      for (uVar5 = (uint)(iVar4 << 4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_4 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        param_4 = param_4 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined *)param_4 = *(undefined *)pfVar9;
        pfVar9 = (float *)((int)pfVar9 + 1);
        param_4 = (float *)((int)param_4 + 1);
      }
    }
  }
  return iVar4;
}



int FUN_0049c810(int *param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;

  DAT_00dfaa1c = param_2[3];
  iVar2 = *param_2;
  DAT_00dfaa18 = param_2[1];
  pfVar1 = (float *)(DAT_00dfaa1c + *(int *)param_2[1] * 0xc);
  if ((float)param_1[1] <= *(float *)(DAT_00dfaa1c + 4 + *(int *)param_2[1] * 0xc)) {
    if ((*param_1 != 0) && ((float)param_1[2] < pfVar1[1])) {
      iVar3 = iVar2 + -1;
      bVar5 = iVar3 == 0;
      if (!bVar5) {
        piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
        do {
          if (*(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) <= (float)param_1[2]) break;
          iVar3 = iVar3 + -1;
          piVar4 = piVar4 + -1;
        } while (iVar3 != 0);
        goto LAB_0049c8ba;
      }
      goto LAB_0049c8c0;
    }
  }
  else {
    iVar3 = iVar2 + -1;
    bVar5 = iVar3 == 0;
    if (!bVar5) {
      piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
      while (*(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) < (float)param_1[1]) {
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -1;
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_0049c8ba:
      bVar5 = iVar3 == 0;
    }
LAB_0049c8c0:
    if (bVar5) {
      return 0;
    }
  }
  if ((float)param_1[0xc] * pfVar1[1] <= *pfVar1) {
    if ((float)param_1[10] * pfVar1[1] < *pfVar1) {
      iVar3 = iVar2 + -1;
      bVar5 = iVar3 == 0;
      if (!bVar5) {
        piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
        do {
          if (*(float *)(DAT_00dfaa1c + *piVar4 * 0xc) <=
              *(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) * (float)param_1[10]) break;
          iVar3 = iVar3 + -1;
          piVar4 = piVar4 + -1;
        } while (iVar3 != 0);
LAB_0049c946:
        bVar5 = iVar3 == 0;
      }
      goto LAB_0049c948;
    }
  }
  else {
    iVar3 = iVar2 + -1;
    bVar5 = iVar3 == 0;
    if (bVar5) {
LAB_0049c948:
      if (bVar5) {
        return 0;
      }
    }
    else {
      piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
      do {
        if (*(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) * (float)param_1[0xc] <=
            *(float *)(DAT_00dfaa1c + *piVar4 * 0xc)) goto LAB_0049c946;
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -1;
      } while (iVar3 != 0);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if (pfVar1[2] <= (float)param_1[0xb] * pfVar1[1]) {
    if ((float)param_1[8] * pfVar1[1] <= pfVar1[2]) {
      return iVar2;
    }
    iVar3 = iVar2 + -1;
    bVar5 = iVar3 == 0;
    if (bVar5) goto LAB_0049c9d8;
    piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
    do {
      if (*(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) * (float)param_1[8] <=
          *(float *)(DAT_00dfaa1c + *piVar4 * 0xc + 8)) break;
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -1;
    } while (iVar3 != 0);
  }
  else {
    iVar3 = iVar2 + -1;
    bVar5 = iVar3 == 0;
    if (bVar5) goto LAB_0049c9d8;
    piVar4 = (int *)(DAT_00dfaa18 + iVar3 * 4);
    while (*(float *)(DAT_00dfaa1c + 4 + *piVar4 * 0xc) * (float)param_1[0xb] <
           *(float *)(DAT_00dfaa1c + *piVar4 * 0xc + 8)) {
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -1;
      if (iVar3 == 0) {
        if (iVar3 != 0) {
          return iVar2;
        }
        return 0;
      }
    }
  }
  bVar5 = iVar3 == 0;
LAB_0049c9d8:
  if (!bVar5) {
    return iVar2;
  }
  return 0;
}



void FUN_0049c9f0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int local_14;
  int local_10;
  float *local_c;

  local_10 = *param_2;
  DAT_00dfaa04 = 0;
  DAT_00dfaa1c = param_2[3];
  DAT_00dfaa08 = param_2[4];
  DAT_00dfaa20 = param_2[5];
  DAT_00dfaa18 = (int *)param_2[1];
  DAT_00dfaa24 = (int *)param_2[2];
  DAT_00dfaa14 = *(int *)(param_3 + 0xc);
  DAT_00dfaa0c = *(int *)(param_3 + 0x10);
  DAT_00dfaa10 = *(int *)(param_3 + 0x14);
  param_2 = (int *)0x0;
  if (0 < local_10) {
    iVar10 = 0;
    local_14 = 4;
    param_3 = 0;
    pfVar6 = (float *)(DAT_00dfaa18[local_10 + -1] * 0x10 + DAT_00dfaa20);
    pfVar5 = (float *)(DAT_00dfaa1c + DAT_00dfaa18[local_10 + -1] * 0xc);
    pfVar7 = (float *)(DAT_00dfaa1c + *DAT_00dfaa18 * 0xc);
    pfVar4 = (float *)(DAT_00dfaa08 + *DAT_00dfaa24 * 8);
    pfVar9 = (float *)(*DAT_00dfaa18 * 0x10 + DAT_00dfaa20);
    local_c = (float *)(DAT_00dfaa08 + DAT_00dfaa24[local_10 + -1] * 8);
    do {
      pfVar8 = pfVar4;
      if ((*(float *)(param_1 + 4) <= pfVar5[1]) || (*(float *)(param_1 + 4) <= pfVar7[1])) {
        if (((pfVar5[1] != *(float *)(param_1 + 4)) && (pfVar7[1] != *(float *)(param_1 + 4))) &&
           ((pfVar5[1] < *(float *)(param_1 + 4) || (pfVar7[1] < *(float *)(param_1 + 4))))) {
          fVar3 = (*(float *)(param_1 + 4) - pfVar5[1]) / (pfVar7[1] - pfVar5[1]);
          *(undefined4 *)(DAT_00dfaa14 + 4 + param_3) = *(undefined4 *)(param_1 + 4);
          *(float *)(DAT_00dfaa14 + 8 + param_3) = (pfVar7[2] - pfVar5[2]) * fVar3 + pfVar5[2];
          *(float *)(DAT_00dfaa14 + param_3) = (*pfVar7 - *pfVar5) * fVar3 + *pfVar5;
          *(float *)(DAT_00dfaa0c + (int)param_2 * 8) = (*pfVar8 - *local_c) * fVar3 + *local_c;
          *(float *)(DAT_00dfaa0c + 4 + (int)param_2 * 8) =
               (pfVar8[1] - local_c[1]) * fVar3 + local_c[1];
          *(float *)(DAT_00dfaa10 + iVar10) = (*pfVar9 - *pfVar6) * fVar3 + *pfVar6;
          *(float *)(DAT_00dfaa10 + 4 + iVar10) = (pfVar9[1] - pfVar6[1]) * fVar3 + pfVar6[1];
          param_2 = (int *)((int)param_2 + 1);
          iVar10 = iVar10 + 0x10;
          *(float *)(DAT_00dfaa10 + -8 + iVar10) = (pfVar9[2] - pfVar6[2]) * fVar3 + pfVar6[2];
          param_3 = param_3 + 0xc;
          *(float *)(DAT_00dfaa10 + -4 + iVar10) = (pfVar9[3] - pfVar6[3]) * fVar3 + pfVar6[3];
          DAT_00dfaa04 = DAT_00dfaa04 | 1;
        }
        if (*(float *)(param_1 + 4) <= pfVar7[1]) {
          pfVar6 = (float *)(DAT_00dfaa14 + param_3);
          *pfVar6 = *pfVar7;
          pfVar6[1] = pfVar7[1];
          pfVar6[2] = pfVar7[2];
          *(float *)(DAT_00dfaa0c + (int)param_2 * 8) = *pfVar8;
          *(float *)(DAT_00dfaa0c + 4 + (int)param_2 * 8) = pfVar8[1];
          pfVar6 = (float *)(DAT_00dfaa10 + iVar10);
          *pfVar6 = *pfVar9;
          pfVar6[1] = pfVar9[1];
          pfVar6[2] = pfVar9[2];
          param_3 = param_3 + 0xc;
          pfVar6[3] = pfVar9[3];
          param_2 = (int *)((int)param_2 + 1);
          iVar10 = iVar10 + 0x10;
        }
      }
      piVar1 = (int *)((int)DAT_00dfaa18 + local_14);
      piVar2 = (int *)((int)DAT_00dfaa24 + local_14);
      local_14 = local_14 + 4;
      local_10 = local_10 + -1;
      pfVar6 = pfVar9;
      pfVar5 = pfVar7;
      pfVar7 = (float *)(DAT_00dfaa1c + *piVar1 * 0xc);
      pfVar4 = (float *)(DAT_00dfaa08 + *piVar2 * 8);
      pfVar9 = (float *)(*piVar1 * 0x10 + DAT_00dfaa20);
      local_c = pfVar8;
    } while (local_10 != 0);
  }
  if ((int)param_2 < 3) {
    DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
  }
  return;
}

void FUN_0049ce60(int param_1,int param_2)

{
  SetWindowPos(DAT_00dfaa28,(HWND)0x0,0,0,param_1 + DAT_00dfaa34,param_2 + DAT_00dfaa38,6);
  return;
}

void FUN_0049ce90(undefined4 param_1)

{
  DAT_00dfaa30 = param_1;
  return;
}



undefined4 FUN_0049cea0(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3)

{
  ATOM AVar1;
  HWND pHVar2;
  int nHeight;
  int nWidth;
  HMENU hMenu;
  LPVOID lpParam;
  WNDCLASSEXA local_30;

  local_30.cbSize = 0x30;
  local_30.hInstance = param_1;
  local_30.lpszClassName = s_wKernelJones3D_004d1aa4;
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpfnWndProc = FUN_0049cfd0;
  local_30.style = 0;
  local_30.hIcon = LoadIconA(param_1,s_APPICON_004d1ab4);
  if (local_30.hIcon == (HICON)0x0) {
    local_30.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  local_30.hIconSm = LoadIconA(param_1,s_APPICON_004d1ab4);
  if (local_30.hIconSm == (HICON)0x0) {
    local_30.hIconSm = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hbrBackground = (HBRUSH)GetStockObject(4);
  AVar1 = RegisterClassExA(&local_30);
  if (AVar1 == 0) {
    return 0;
  }
  pHVar2 = FindWindowA(s_wKernelJones3D_004d1aa4,param_3);
  if (pHVar2 != (HWND)0x0) {
    FUN_0049ea40(0xffffffff);
  }
  lpParam = (LPVOID)0x0;
  hMenu = (HMENU)0x0;
  pHVar2 = (HWND)0x0;
  nHeight = GetSystemMetrics(1);
  nWidth = GetSystemMetrics(0);
  DAT_00dfaa28 = CreateWindowExA(8,s_wKernelJones3D_004d1aa4,param_3,0x90000000,0,0,nWidth,nHeight,
                                 pHVar2,hMenu,param_1,lpParam);
  if (DAT_00dfaa28 == (HWND)0x0) {
    return 0;
  }
  ShowWindow(DAT_00dfaa28,1);
  UpdateWindow(DAT_00dfaa28);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0049d045)

UINT FUN_0049cfd0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LPARAM lParam;
  WPARAM wParam;
  int iVar1;
  UINT UVar2;

  lParam = param_4;
  wParam = param_3;
  UVar2 = param_2;
  if (param_2 == 2) {
    FUN_004240d0();
    PostQuitMessage(0);
    lParam = param_4;
    wParam = param_3;
  }
  else if ((DAT_00dfaa30 != (code *)0x0) &&
          (iVar1 = (*DAT_00dfaa30)(param_1,param_2,param_3,param_4,&param_2), iVar1 != 0)) {
    return param_2;
  }
  UVar2 = DefWindowProcA(param_1,UVar2,wParam,lParam);
  return UVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0049d060(HKEY param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  HKEY local_4;

  local_4 = (HKEY)0x0;
  _DAT_00dfaa3c = 1;
  DAT_00dfaa40 = param_2;
  DAT_00dfaa44 = param_1;
  LVar1 = RegCreateKeyExA(param_1,param_2,0,&DAT_004d55cc,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_4,(LPDWORD)&param_2);
  if (LVar1 == 0) {
    LVar1 = RegCloseKey(local_4);
    if (LVar1 == 0) {
      return 0;
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0049d0e0(void)

{
  DAT_00dfaa40 = 0;
  DAT_00dfaa44 = 0;
  _DAT_00dfaa3c = 0;
  return;
}



undefined4 FUN_0049d100(LPCSTR param_1)

{
  LSTATUS LVar1;
  HKEY local_4;

  local_4 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_4,param_1,0,4,&stack0x00000008,4);
    if (LVar1 == 0) {
      LVar1 = RegCloseKey(local_4);
      if (LVar1 == 0) {
        return 0;
      }
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}



undefined4 FUN_0049d180(LPCSTR param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD DStack_8;
  undefined4 uStack_4;

  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    DStack_8 = 4;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)&uStack_4,
                             &DStack_8);
    if (LVar1 == 0) {
      RegCloseKey(local_c);
      return uStack_4;
    }
    RegCloseKey(local_c);
  }
  return param_2;
}



void FUN_0049d210(undefined4 param_1,undefined4 param_2)

{
  FUN_0049d100(param_1,param_2);
  return;
}



void FUN_0049d230(undefined4 param_1,undefined4 param_2)

{
  FUN_0049d180(param_1,param_2);
  return;
}



undefined4 FUN_0049d250(LPCSTR param_1,BYTE *param_2)

{
  BYTE BVar1;
  LSTATUS LVar2;
  uint uVar3;
  BYTE *pBVar4;
  HKEY local_4;

  local_4 = (HKEY)0x0;
  LVar2 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_4);
  if (LVar2 == 0) {
    uVar3 = 0xffffffff;
    pBVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      BVar1 = *pBVar4;
      pBVar4 = pBVar4 + 1;
    } while (BVar1 != '\0');
    LVar2 = RegSetValueExA(local_4,param_1,0,1,param_2,~uVar3 - 1);
    if (LVar2 == 0) {
      LVar2 = RegCloseKey(local_4);
      if (LVar2 == 0) {
        return 0;
      }
    }
  }
  if (local_4 != (HKEY)0x0) {
    RegCloseKey(local_4);
  }
  return 1;
}



undefined4 FUN_0049d2e0(LPCSTR param_1,LPBYTE param_2,DWORD param_3,char *param_4)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD DStack_8;
  DWORD DStack_4;

  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA(DAT_00dfaa44,DAT_00dfaa40,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    DStack_8 = param_3;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,&DStack_4,param_2,&DStack_8);
    if (LVar1 == 0) {
      LVar1 = RegCloseKey(local_c);
      if (LVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_4 != (char *)0x0) {
    _strncpy((char *)param_2,param_4,param_3 - 1);
    param_2[param_3 - 1] = '\0';
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return 1;
}



void DirectDrawEnumerateA(void)

{
                    // WARNING: Could not recover jumptable at 0x0049d390. Too many branches
                    // WARNING: Treating indirect jump as call
  DirectDrawEnumerateA();
  return;
}



void DirectDrawCreate(void)

{
                    // WARNING: Could not recover jumptable at 0x0049d396. Too many branches
                    // WARNING: Treating indirect jump as call
  DirectDrawCreate();
  return;
}



void DirectInputCreateA(void)

{
                    // WARNING: Could not recover jumptable at 0x0049d39c. Too many branches
                    // WARNING: Treating indirect jump as call
  DirectInputCreateA();
  return;
}



BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0049e738. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}



BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;

                    // WARNING: Could not recover jumptable at 0x0049e73e. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}



DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;

                    // WARNING: Could not recover jumptable at 0x0049e744. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}



undefined4 FUN_0049e750(void)

{
  FUN_0049e8e0(&PTR_DAT_004d1d5c,&DAT_004d55cc,s_A3d_Object_004d1d60);
  FUN_0049e8e0(s_A3d_CLSID_004d1d28,&DAT_004d55cc,s__d8f1eee0_f634_11cf_8700_00a0245_004d1d34);
  FUN_0049e8e0(s_CLSID__d8f1eee0_f634_11cf_8700_0_004d1cf8,&DAT_004d55cc,s_A3d_Object_004d1d60);
  FUN_0049e8e0(s_CLSID__d8f1eee0_f634_11cf_8700_0_004d1cb4,&DAT_004d55cc,s_a3d_dll_004d1cf0);
  FUN_0049e8e0(s_CLSID__d8f1eee0_f634_11cf_8700_0_004d1cb4,s_ThreadingModel_004d1c98,
               s_Apartment_004d1ca8);
  FUN_0049e8e0(s_A3dApi_004d1c80,&DAT_004d55cc,s_A3dApi_Object_004d1c88);
  FUN_0049e8e0(s_A3dApi_CLSID_004d1c48,&DAT_004d55cc,s__92FA2C24_253C_11d2_90FB_006008A_004d1c58);
  FUN_0049e8e0(s_CLSID__92FA2C24_253C_11d2_90FB_0_004d1c18,&DAT_004d55cc,s_A3dApi_Object_004d1c88);
  FUN_0049e8e0(s_CLSID__92FA2C24_253C_11d2_90FB_0_004d1c18,s_AppID_004d1be8,
               s__92FA2C24_253C_11D2_90FB_006008A_004d1bf0);
  FUN_0049e8e0(s_CLSID__92FA2C24_253C_11d2_90FB_0_004d1ba0,&DAT_004d55cc,s_a3dapi_dll_004d1bdc);
  FUN_0049e8e0(s_CLSID__92FA2C24_253C_11d2_90FB_0_004d1ba0,s_ThreadingModel_004d1c98,
               s_Apartment_004d1ca8);
  FUN_0049e8e0(s_A3dDAL_004d1b88,&DAT_004d55cc,s_A3dDAL_Object_004d1b90);
  FUN_0049e8e0(s_A3dDAL_CLSID_004d1b50,&DAT_004d55cc,s__442D12A1_2641_11d2_90FB_006008A_004d1b60);
  FUN_0049e8e0(s_CLSID__442D12A1_2641_11d2_90FB_0_004d1b20,&DAT_004d55cc,s_A3dDAL_Object_004d1b90);
  FUN_0049e8e0(s_CLSID__442D12A1_2641_11d2_90FB_0_004d1b20,s_AppID_004d1be8,
               s__442D12A1_2641_11D2_90FB_006008A_004d1af8);
  FUN_0049e8e0(s_CLSID__442D12A1_2641_11d2_90FB_0_004d1abc,&DAT_004d55cc,s_a3d_dll_004d1cf0);
  FUN_0049e8e0(s_CLSID__442D12A1_2641_11d2_90FB_0_004d1abc,s_ThreadingModel_004d1c98,
               s_Apartment_004d1ca8);
  return 0;
}



void FUN_0049e8e0(HKEY param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  uint uVar2;
  BYTE *pBVar3;
  DWORD local_4;

  RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)param_1,0,s_REG_SZ_004d1d6c,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_4);
  uVar2 = 0xffffffff;
  pBVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  RegSetValueExA(param_1,param_2,0,1,param_3,~uVar2 - 1);
  RegCloseKey(param_1);
  return;
}



HRESULT FUN_0049e940(void)

{
  HRESULT HVar1;

  HVar1 = CoInitialize((LPVOID)0x0);
  FUN_0049e750();
  return HVar1;
}



void CoUninitialize(void)

{
                    // WARNING: Could not recover jumptable at 0x0049e960. Too many branches
                    // WARNING: Treating indirect jump as call
  CoUninitialize();
  return;
}



HRESULT FUN_0049e970(int *param_1,int **param_2,LPUNKNOWN param_3,undefined4 param_4)

{
  HRESULT HVar1;
  int iVar2;
  int *local_4;

  local_4 = (int *)0x0;
  if (param_2 == (int **)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = (int *)0x0;
  FUN_0049e940();
  HVar1 = CoCreateInstance((IID *)&DAT_004ae0e8,param_3,1,(IID *)&DAT_004ae128,&local_4);
  if (-1 < HVar1) {
    if (local_4 == (int *)0x0) {
      return -0x7fffbffb;
    }
    iVar2 = (**(code **)(*local_4 + 0x3c))(local_4,param_1,param_4,0);
    if (iVar2 < 0) {
      (**(code **)(*param_1 + 8))(param_1);
      return -0x7fffbffb;
    }
    *param_2 = param_1;
    HVar1 = 0;
  }
  return HVar1;
}



undefined * FUN_0049ea00(void)

{
  return &DAT_00dfaa48;
}



void FUN_0049ea10(void)

{
  if (PTR___fpmath_004d1d7c != (undefined *)0x0) {
    (*(code *)PTR___fpmath_004d1d7c)();
  }
  FUN_0049eb60(&DAT_004b2008,&DAT_004b2010);
  FUN_0049eb60(&DAT_004b2000,&DAT_004b2004);
  return;
}



void FUN_0049ea40(undefined4 param_1)

{
  FUN_0049ea80(param_1,0,0);
  return;
}



// Library Function - Single Match
//  __exit
//
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_0049ea80(_Code,1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0049ea80(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  code **ppcVar1;
  code **ppcVar2;
  UINT uExitCode;

  FUN_0049eb40();
  if (DAT_00dfaab4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00dfaab0 = 1;
  DAT_00dfaaac = (undefined)param_3;
  if (param_2 == 0) {
    if ((DAT_00ecd618 != (code **)0x0) &&
       (ppcVar2 = (code **)(DAT_00ecd614 + -4), ppcVar1 = DAT_00ecd618, DAT_00ecd618 <= ppcVar2)) {
      do {
        if (*ppcVar2 != (code *)0x0) {
          (**ppcVar2)();
          ppcVar1 = DAT_00ecd618;
        }
        ppcVar2 = ppcVar2 + -1;
      } while (ppcVar1 <= ppcVar2);
    }
    FUN_0049eb60(&DAT_004b2014,&DAT_004b201c);
  }
  FUN_0049eb60(&DAT_004b2020,&DAT_004b2024);
  if (param_3 != 0) {
    FUN_0049eb50();
    return;
  }
  DAT_00dfaab4 = 1;
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



void FUN_0049eb40(void)

{
  FUN_004a1670(0xd);
  return;
}



void FUN_0049eb50(void)

{
  FUN_004a16f0(0xd);
  return;
}



void FUN_0049eb60(code **param_1,code **param_2)

{
  if (param_1 < param_2) {
    do {
      if (*param_1 != (code *)0x0) {
        (**param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



undefined4 FUN_0049eb80(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  undefined4 local_14;

  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = 0x7fffffff;
  uVar1 = FUN_004a1920(&local_20,param_2,&stack0x0000000c);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return uVar1;
  }
  FUN_004a17f0(0,&local_20);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __fpmath
//
// Library: Visual Studio 1998 Release

void __cdecl __fpmath(int param_1)

{
  FUN_0049ec10();
  _DAT_00dfaabc = FUN_004a2410();
  __setdefaultprecision();
  return;
}



void FUN_0049ec10(void)

{
  PTR_FUN_004d208c = FUN_004a24a0;
  PTR_FUN_004d2088 = FUN_004a2900;
  PTR_LAB_004d2090 = &LAB_004a2530;
  PTR_FUN_004d2094 = FUN_004a2440;
  PTR_LAB_004d2098 = &LAB_004a2510;
  PTR_FUN_004d209c = FUN_004a2900;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_0049ec50(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;

  iVar2 = _DAT_00ecd60c;
  if (DAT_00dfab38 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return 0;
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    bVar5 = (bVar5 < bVar3) * -2 + 1;
  }
  else {
    LOCK();
    _DAT_00ecd60c = _DAT_00ecd60c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_00ecd608;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_00ecd60c = iVar2;
      FUN_004a1670(0x13);
    }
    uVar6 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_0049ecff;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_0049fee0(bVar4,bVar5);
      bVar5 = FUN_0049fee0();
    } while (bVar4 == bVar5);
    bVar5 = (bVar4 < bVar5) * -2 + 1;
LAB_0049ecff:
    if (uVar6 == 0) {
      LOCK();
      _DAT_00ecd60c = _DAT_00ecd60c + -1;
      UNLOCK();
    }
    else {
      FUN_004a16f0(0x13);
    }
  }
  return bVar5;
}



// Library Function - Single Match
//  __ftol
//
// Library: Visual Studio

longlong __ftol(void)

{
  float10 in_ST0;

  return (longlong)ROUND(in_ST0);
}

#endif
