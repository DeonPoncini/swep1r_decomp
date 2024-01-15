#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00496e40(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  int local_14;
  int local_4;
  
  DAT_00dfaa04 = 0;
  local_14 = 0;
  pfVar17 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00dfa13c = param_3;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  if (0 < (int)param_4) {
    iVar13 = 0;
    iVar10 = 0;
    local_4 = (int)param_4;
    pfVar19 = param_3 + (int)param_4 * 4 + -4;
    pfVar18 = param_2;
    pfVar8 = param_3;
    param_4 = param_2 + (int)param_4 * 3 + -3;
    do {
      pfVar16 = pfVar18;
      fVar2 = (float)param_1[0xc] * param_4[1];
      fVar3 = (float)param_1[0xc] * pfVar16[1];
      if ((fVar2 <= *param_4) || (fVar3 <= *pfVar16)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((*param_4 != fVar2) && (fVar3 != *pfVar16)) &&
           ((*param_4 < fVar2 || (*pfVar16 < fVar3)))) {
          fVar2 = pfVar16[1] - param_4[1];
          fVar4 = *pfVar16 - *param_4;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = pfVar16[1] * *param_4 - param_4[1] * *pfVar16;
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
            fVar2 = ((float)param_1[0xc] * fVar5 - *param_4) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar14 = iVar13 + 0x10;
          *(float *)((int)pfVar17 + iVar10) = (float)param_1[0xc] * fVar5;
          iVar11 = iVar10 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          local_14 = local_14 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) =
               (pfVar16[2] - param_4[2]) * fVar2 + param_4[2];
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar8 - *pfVar19) * fVar2 + *pfVar19;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar8[1] - pfVar19[1]) * fVar2 + pfVar19[1]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar8[2] - pfVar19[2]) * fVar2 + pfVar19[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar17 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (fVar3 <= *pfVar16) {
          pfVar17 = (float *)((int)pfVar17 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar17 = *pfVar16;
          pfVar17[1] = pfVar16[1];
          pfVar17[2] = pfVar16[2];
          pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar17 = *pfVar8;
          pfVar17[1] = pfVar8[1];
          pfVar17[2] = pfVar8[2];
          local_14 = local_14 + 1;
          pfVar17[3] = pfVar8[3];
          iVar13 = iVar14 + 0x10;
          pfVar17 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar19 = pfVar8;
      pfVar18 = pfVar16 + 3;
      pfVar8 = pfVar8 + 4;
      param_4 = pfVar16;
    } while (local_4 != 0);
  }
  local_4 = local_14;
  pfVar19 = DAT_00dfa13c;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00dfa13c = DAT_00df9eb0;
  iVar10 = local_14 * 3;
  local_14 = 0;
  pfVar18 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  if (0 < local_4) {
    iVar11 = 0;
    iVar13 = 0;
    pfVar8 = DAT_00df9eb0 + local_4 * 4 + -4;
    pfVar16 = pfVar17;
    pfVar12 = DAT_00df9eb0;
    DAT_00df9eb0 = pfVar19;
    DAT_00dfa138 = pfVar17;
    param_4 = pfVar17 + iVar10 + -3;
    do {
      pfVar15 = pfVar16;
      fVar2 = (float)param_1[10] * param_4[1];
      fVar3 = (float)param_1[10] * pfVar15[1];
      if ((*param_4 <= fVar2) || (*pfVar15 <= fVar3)) {
        iVar10 = iVar13;
        iVar14 = iVar11;
        if (((*param_4 != fVar2) && (fVar3 != *pfVar15)) &&
           ((fVar2 < *param_4 || (fVar3 < *pfVar15)))) {
          fVar2 = pfVar15[1] - param_4[1];
          fVar4 = *pfVar15 - *param_4;
          fVar1 = (float)param_1[10] * fVar2 - fVar4;
          fVar5 = pfVar15[1] * *param_4 - param_4[1] * *pfVar15;
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
            fVar2 = ((float)param_1[10] * fVar5 - *param_4) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar14 = iVar11 + 0x10;
          *(float *)((int)pfVar18 + iVar13) = (float)param_1[10] * fVar5;
          iVar10 = iVar13 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) = fVar5;
          local_14 = local_14 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
               (pfVar15[2] - param_4[2]) * fVar2 + param_4[2];
          *(float *)((int)DAT_00df9eb0 + iVar11) = (*pfVar12 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar11 + 4) = (pfVar12[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar11 + 8) = (pfVar12[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          pfVar18 = DAT_00df9eb4;
        }
        iVar13 = iVar10;
        iVar11 = iVar14;
        if (*pfVar15 <= fVar3) {
          pfVar18 = (float *)((int)pfVar18 + iVar10);
          iVar13 = iVar10 + 0xc;
          *pfVar18 = *pfVar15;
          pfVar18[1] = pfVar15[1];
          pfVar18[2] = pfVar15[2];
          pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar17 = *pfVar12;
          pfVar17[1] = pfVar12[1];
          pfVar17[2] = pfVar12[2];
          local_14 = local_14 + 1;
          pfVar17[3] = pfVar12[3];
          iVar11 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar8 = pfVar12;
      pfVar16 = pfVar15 + 3;
      pfVar12 = pfVar12 + 4;
      pfVar19 = DAT_00df9eb0;
      pfVar17 = DAT_00dfa138;
      param_4 = pfVar15;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar17;
  DAT_00df9eb0 = pfVar19;
  local_4 = local_14;
  pfVar17 = DAT_00df9eb0;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00df9eb0 = DAT_00dfa13c;
  iVar10 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa13c = pfVar17;
  param_4 = pfVar18 + local_14 * 3 + -3;
  local_14 = 0;
  pfVar19 = DAT_00dfa138;
  if (0 < local_4) {
    iVar13 = 0;
    pfVar16 = pfVar18 + 2;
    pfVar8 = pfVar17 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar18;
    do {
      fVar2 = (float)param_1[0xb] * param_4[1];
      fVar3 = pfVar16[-1] * (float)param_1[0xb];
      if ((param_4[2] <= fVar2) || (*pfVar16 <= fVar3)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((param_4[2] != fVar2) && (fVar3 != *pfVar16)) &&
           ((fVar2 < param_4[2] || (fVar3 < *pfVar16)))) {
          fVar2 = pfVar16[-1] - param_4[1];
          fVar4 = *pfVar16 - param_4[2];
          fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
          fVar5 = param_4[2] * pfVar16[-1] - param_4[1] * *pfVar16;
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
            fVar2 = (fVar1 * fVar5 - param_4[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar11 = iVar10 + 0xc;
          iVar14 = iVar13 + 0x10;
          local_14 = local_14 + 1;
          *(float *)((int)pfVar19 + iVar10) = (pfVar16[-2] - *param_4) * fVar2 + *param_4;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) = fVar1 * fVar5;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar17 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar17[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar17[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          pfVar19 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (*pfVar16 <= fVar3) {
          pfVar19 = (float *)((int)pfVar19 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar19 = pfVar16[-2];
          pfVar19[1] = pfVar16[-1];
          pfVar19[2] = *pfVar16;
          pfVar19 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar19 = *pfVar17;
          pfVar19[1] = pfVar17[1];
          pfVar19[2] = pfVar17[2];
          local_14 = local_14 + 1;
          pfVar19[3] = pfVar17[3];
          iVar13 = iVar14 + 0x10;
          pfVar19 = DAT_00df9eb4;
        }
      }
      param_4 = pfVar16 + -2;
      pfVar16 = pfVar16 + 3;
      local_4 = local_4 + -1;
      pfVar8 = pfVar17;
      pfVar17 = pfVar17 + 4;
      pfVar18 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar18;
  local_4 = local_14;
  pfVar17 = DAT_00df9eb0;
  if (local_14 < 3) {
    return local_14;
  }
  DAT_00df9eb0 = DAT_00dfa13c;
  iVar10 = 0;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa13c = pfVar17;
  param_4 = pfVar19 + local_14 * 3 + -3;
  local_14 = 0;
  pfVar18 = DAT_00dfa138;
  if (0 < local_4) {
    iVar13 = 0;
    pfVar16 = pfVar19 + 2;
    pfVar8 = pfVar17 + local_4 * 4 + -4;
    DAT_00dfa138 = pfVar19;
    do {
      fVar2 = (float)param_1[8] * param_4[1];
      fVar3 = pfVar16[-1] * (float)param_1[8];
      if ((fVar2 <= param_4[2]) || (fVar3 <= *pfVar16)) {
        iVar11 = iVar10;
        iVar14 = iVar13;
        if (((param_4[2] != fVar2) && (fVar3 != *pfVar16)) &&
           ((param_4[2] < fVar2 || (*pfVar16 < fVar3)))) {
          fVar2 = pfVar16[-1] - param_4[1];
          fVar4 = *pfVar16 - param_4[2];
          fVar1 = (float)param_1[8] * fVar2 - fVar4;
          fVar5 = param_4[2] * pfVar16[-1] - param_4[1] * *pfVar16;
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
            fVar2 = (fVar1 * fVar5 - param_4[2]) / fVar4;
          }
          else {
            fVar2 = (fVar5 - param_4[1]) / fVar2;
          }
          iVar11 = iVar10 + 0xc;
          iVar14 = iVar13 + 0x10;
          local_14 = local_14 + 1;
          *(float *)((int)pfVar18 + iVar10) = (pfVar16[-2] - *param_4) * fVar2 + *param_4;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) = fVar1 * fVar5;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*pfVar17 - *pfVar8) * fVar2 + *pfVar8;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (pfVar17[1] - pfVar8[1]) * fVar2 + pfVar8[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (pfVar17[2] - pfVar8[2]) * fVar2 + pfVar8[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          pfVar18 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        iVar13 = iVar14;
        if (fVar3 <= *pfVar16) {
          pfVar18 = (float *)((int)pfVar18 + iVar11);
          iVar10 = iVar11 + 0xc;
          *pfVar18 = pfVar16[-2];
          pfVar18[1] = pfVar16[-1];
          pfVar18[2] = *pfVar16;
          pfVar19 = (float *)((int)DAT_00df9eb0 + iVar14);
          *pfVar19 = *pfVar17;
          pfVar19[1] = pfVar17[1];
          pfVar19[2] = pfVar17[2];
          local_14 = local_14 + 1;
          pfVar19[3] = pfVar17[3];
          iVar13 = iVar14 + 0x10;
          pfVar18 = DAT_00df9eb4;
        }
      }
      param_4 = pfVar16 + -2;
      pfVar16 = pfVar16 + 3;
      local_4 = local_4 + -1;
      pfVar8 = pfVar17;
      pfVar17 = pfVar17 + 4;
      pfVar19 = DAT_00dfa138;
    } while (local_4 != 0);
  }
  DAT_00dfa138 = pfVar19;
  iVar10 = local_14;
  param_4 = DAT_00df9eb0;
  if (2 < local_14) {
    DAT_00df9eb4 = DAT_00dfa138;
    pfVar17 = pfVar18 + local_14 * 3 + -3;
    DAT_00df9eb0 = DAT_00dfa13c;
    DAT_00dfa13c = param_4;
    local_14 = 0;
    pfVar19 = DAT_00dfa138;
    DAT_00dfa138 = pfVar18;
    if (iVar10 < 1) {
      local_4 = 0;
    }
    else {
      pfVar18 = pfVar18 + 1;
      pfVar8 = param_4 + iVar10 * 4 + -4;
      iVar13 = 0;
      iVar11 = 0;
      do {
        local_4 = iVar10;
        iVar14 = iVar13;
        iVar20 = iVar11;
        if (((float)param_1[1] <= pfVar17[1]) || ((float)param_1[1] <= *pfVar18)) {
          if (((pfVar17[1] != (float)param_1[1]) && (*pfVar18 != (float)param_1[1])) &&
             ((pfVar17[1] < (float)param_1[1] || (*pfVar18 < (float)param_1[1])))) {
            iVar20 = iVar11 + 0xc;
            iVar14 = iVar13 + 0x10;
            fVar2 = ((float)param_1[1] - pfVar17[1]) / (*pfVar18 - pfVar17[1]);
            *(int *)((int)pfVar19 + iVar11 + 4) = param_1[1];
            local_14 = local_14 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                 (pfVar18[1] - pfVar17[2]) * fVar2 + pfVar17[2];
            *(float *)((int)DAT_00df9eb4 + iVar11) = (pfVar18[-1] - *pfVar17) * fVar2 + *pfVar17;
            *(float *)((int)DAT_00df9eb0 + iVar13) = (*param_4 - *pfVar8) * fVar2 + *pfVar8;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                 (param_4[1] - pfVar8[1]) * fVar2 + pfVar8[1];
            *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                 (param_4[2] - pfVar8[2]) * fVar2 + pfVar8[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            pfVar19 = DAT_00df9eb4;
          }
          if ((float)param_1[1] <= *pfVar18) {
            pfVar19 = (float *)((int)pfVar19 + iVar20);
            iVar20 = iVar20 + 0xc;
            *pfVar19 = pfVar18[-1];
            pfVar19[1] = *pfVar18;
            pfVar19[2] = pfVar18[1];
            pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
            *pfVar17 = *param_4;
            pfVar17[1] = param_4[1];
            pfVar17[2] = param_4[2];
            pfVar17[3] = param_4[3];
            local_14 = local_14 + 1;
            iVar14 = iVar14 + 0x10;
            pfVar19 = DAT_00df9eb4;
          }
        }
        pfVar17 = pfVar18 + -1;
        pfVar18 = pfVar18 + 3;
        iVar10 = local_4 + -1;
        pfVar8 = param_4;
        local_4 = local_14;
        iVar13 = iVar14;
        iVar11 = iVar20;
        param_4 = param_4 + 4;
      } while (iVar10 != 0);
    }
    if (local_4 < 3) {
      DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
      return local_4;
    }
    iVar10 = local_4;
    pfVar17 = pfVar19;
    if (*param_1 != 0) {
      pfVar18 = pfVar19 + local_4 * 3 + -3;
      local_14 = 0;
      iVar10 = 0;
      pfVar17 = DAT_00dfa138;
      pfVar8 = DAT_00dfa13c;
      DAT_00df9eb4 = DAT_00dfa138;
      pfVar16 = DAT_00df9eb0;
      if (0 < local_4) {
        pfVar15 = pfVar19 + 1;
        pfVar12 = DAT_00df9eb0 + local_4 * 4 + -4;
        iVar13 = 0;
        iVar11 = 0;
        pfVar8 = DAT_00dfa13c;
        DAT_00dfa138 = pfVar19;
        DAT_00dfa13c = DAT_00df9eb0;
        param_4 = DAT_00df9eb0;
        do {
          DAT_00df9eb0 = pfVar8;
          iVar14 = iVar13;
          iVar20 = iVar11;
          if ((pfVar18[1] <= (float)param_1[2]) || (*pfVar15 <= (float)param_1[2])) {
            if (((pfVar18[1] != (float)param_1[2]) && (*pfVar15 != (float)param_1[2])) &&
               (((float)param_1[2] < pfVar18[1] || ((float)param_1[2] < *pfVar15)))) {
              iVar20 = iVar11 + 0xc;
              iVar14 = iVar13 + 0x10;
              fVar2 = ((float)param_1[2] - pfVar18[1]) / (*pfVar15 - pfVar18[1]);
              *(int *)((int)pfVar17 + iVar11 + 4) = param_1[2];
              local_14 = local_14 + 1;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                   (pfVar15[1] - pfVar18[2]) * fVar2 + pfVar18[2];
              *(float *)((int)DAT_00df9eb4 + iVar11) = (pfVar15[-1] - *pfVar18) * fVar2 + *pfVar18;
              *(float *)((int)DAT_00df9eb0 + iVar13) = (*param_4 - *pfVar12) * fVar2 + *pfVar12;
              *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                   (param_4[1] - pfVar12[1]) * fVar2 + pfVar12[1];
              *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                   (param_4[2] - pfVar12[2]) * fVar2 + pfVar12[2];
              DAT_00dfaa04 = DAT_00dfaa04 | 2;
              pfVar17 = DAT_00df9eb4;
            }
            if (*pfVar15 <= (float)param_1[2]) {
              pfVar17 = (float *)((int)pfVar17 + iVar20);
              iVar20 = iVar20 + 0xc;
              *pfVar17 = pfVar15[-1];
              pfVar17[1] = *pfVar15;
              pfVar17[2] = pfVar15[1];
              pfVar17 = (float *)((int)DAT_00df9eb0 + iVar14);
              *pfVar17 = *param_4;
              pfVar17[1] = param_4[1];
              pfVar17[2] = param_4[2];
              pfVar17[3] = param_4[3];
              local_14 = local_14 + 1;
              iVar14 = iVar14 + 0x10;
              pfVar17 = DAT_00df9eb4;
            }
          }
          pfVar18 = pfVar15 + -1;
          pfVar15 = pfVar15 + 3;
          local_4 = local_4 + -1;
          pfVar12 = param_4;
          iVar10 = local_14;
          iVar13 = iVar14;
          iVar11 = iVar20;
          pfVar8 = DAT_00df9eb0;
          pfVar19 = DAT_00dfa138;
          pfVar16 = DAT_00dfa13c;
          param_4 = param_4 + 4;
        } while (local_4 != 0);
      }
      DAT_00dfa13c = pfVar16;
      DAT_00dfa138 = pfVar19;
      DAT_00df9eb0 = pfVar8;
      if (iVar10 < 3) {
        return iVar10;
      }
    }
    if (pfVar17 != param_2) {
      for (uVar9 = iVar10 * 3 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        param_2 = param_2 + 1;
      }
      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined *)param_2 = *(undefined *)pfVar17;
        pfVar17 = (float *)((int)pfVar17 + 1);
        param_2 = (float *)((int)param_2 + 1);
      }
      pfVar17 = DAT_00df9eb0;
      for (uVar9 = (uint)(iVar10 << 4) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_3 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        param_3 = param_3 + 1;
      }
      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined *)param_3 = *(undefined *)pfVar17;
        pfVar17 = (float *)((int)pfVar17 + 1);
        param_3 = (float *)((int)param_3 + 1);
      }
    }
    return iVar10;
  }
  return local_14;
}

