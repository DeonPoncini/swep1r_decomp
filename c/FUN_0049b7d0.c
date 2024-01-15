#include "prototype.h"


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

