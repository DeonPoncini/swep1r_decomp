#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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

