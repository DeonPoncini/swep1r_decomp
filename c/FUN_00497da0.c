#include "prototype.h"


int FUN_00497da0(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int local_c;
  float *local_8;
  
  DAT_00dfaa04 = 0;
  local_c = 0;
  pfVar10 = (float *)&DAT_00dfa140;
  DAT_00dfa138 = param_2;
  DAT_00dfa13c = param_3;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  DAT_00df9eb0 = (float *)&DAT_00dfa500;
  local_8 = param_3;
  if (param_4 < 1) {
    param_4 = 0;
  }
  else {
    iVar9 = 0;
    iVar13 = 0;
    pfVar6 = param_2 + param_4 * 3 + -3;
    pfVar11 = param_3 + param_4 * 4 + -4;
    pfVar12 = param_2;
    iVar4 = param_4;
    do {
      param_4 = iVar4;
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar6) || (fVar1 <= *pfVar12)) {
        if (((*pfVar6 != fVar2) && (fVar1 != *pfVar12)) && ((*pfVar6 < fVar2 || (*pfVar12 < fVar1)))
           ) {
          fVar3 = (*pfVar12 - *pfVar6) / (fVar2 - *pfVar6);
          local_c = local_c + 1;
          *(float *)((int)pfVar10 + iVar13) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) = (pfVar12[1] - pfVar6[1]) * fVar3 + pfVar6[1];
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) = (pfVar12[2] - pfVar6[2]) * fVar3 + pfVar6[2];
          *(float *)((int)DAT_00df9eb0 + iVar9) = (*local_8 - *pfVar11) * fVar3 + *pfVar11;
          *(float *)((int)DAT_00df9eb0 + iVar9 + 4) = (local_8[1] - pfVar11[1]) * fVar3 + pfVar11[1]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar9 + 8) = (local_8[2] - pfVar11[2]) * fVar3 + pfVar11[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          iVar9 = iVar9 + 0x10;
          pfVar10 = DAT_00df9eb4;
          iVar13 = iVar13 + 0xc;
        }
        if (fVar1 <= *pfVar12) {
          pfVar10 = (float *)((int)pfVar10 + iVar13);
          iVar13 = iVar13 + 0xc;
          *pfVar10 = *pfVar12;
          pfVar10[1] = pfVar12[1];
          pfVar10[2] = pfVar12[2];
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar9);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar9 = iVar9 + 0x10;
          pfVar10 = DAT_00df9eb4;
        }
      }
      iVar4 = param_4 + -1;
      pfVar6 = pfVar12;
      pfVar11 = local_8;
      param_4 = local_c;
      pfVar12 = pfVar12 + 3;
      local_8 = local_8 + 4;
    } while (iVar4 != 0);
  }
  pfVar6 = DAT_00dfa13c;
  if (param_4 < 3) {
    return param_4;
  }
  DAT_00dfa13c = DAT_00df9eb0;
  local_c = 0;
  local_8 = DAT_00df9eb0;
  pfVar11 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar10;
  if (param_4 < 1) {
    iVar9 = 0;
    DAT_00df9eb0 = pfVar6;
  }
  else {
    iVar13 = 0;
    iVar4 = 0;
    pfVar12 = pfVar10 + param_4 * 3 + -3;
    pfVar7 = DAT_00df9eb0 + param_4 * 4 + -4;
    DAT_00df9eb0 = pfVar6;
    do {
      fVar2 = (float)param_1[5];
      fVar1 = (float)param_1[5];
      if ((*pfVar12 <= fVar2) || (*pfVar10 <= fVar1)) {
        if (((*pfVar12 != fVar2) && (fVar1 != *pfVar10)) &&
           ((fVar2 < *pfVar12 || (fVar1 < *pfVar10)))) {
          fVar3 = (*pfVar10 - *pfVar12) / (fVar2 - *pfVar12);
          local_c = local_c + 1;
          *(float *)((int)pfVar11 + iVar4) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 4) = (pfVar10[1] - pfVar12[1]) * fVar3 + pfVar12[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 8) = (pfVar10[2] - pfVar12[2]) * fVar3 + pfVar12[2]
          ;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
          iVar13 = iVar13 + 0x10;
          pfVar11 = DAT_00df9eb4;
          iVar4 = iVar4 + 0xc;
        }
        if (*pfVar10 <= fVar1) {
          pfVar11 = (float *)((int)pfVar11 + iVar4);
          iVar4 = iVar4 + 0xc;
          *pfVar11 = *pfVar10;
          pfVar11[1] = pfVar10[1];
          pfVar11[2] = pfVar10[2];
          pfVar6 = (float *)((int)DAT_00df9eb0 + iVar13);
          *pfVar6 = *local_8;
          pfVar6[1] = local_8[1];
          pfVar6[2] = local_8[2];
          pfVar6[3] = local_8[3];
          local_c = local_c + 1;
          iVar13 = iVar13 + 0x10;
          pfVar11 = DAT_00df9eb4;
        }
      }
      param_4 = param_4 + -1;
      pfVar12 = pfVar10;
      pfVar7 = local_8;
      iVar9 = local_c;
      pfVar10 = pfVar10 + 3;
      local_8 = local_8 + 4;
    } while (param_4 != 0);
  }
  pfVar10 = DAT_00dfa13c;
  if (iVar9 < 3) {
    return iVar9;
  }
  pfVar6 = pfVar11 + iVar9 * 3 + -3;
  DAT_00dfa13c = DAT_00df9eb0;
  local_c = 0;
  local_8 = DAT_00df9eb0;
  pfVar12 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar11;
  if (iVar9 < 1) {
    param_4 = 0;
    DAT_00df9eb0 = pfVar10;
  }
  else {
    pfVar11 = pfVar11 + 2;
    iVar13 = 0;
    iVar4 = 0;
    pfVar7 = DAT_00df9eb0 + iVar9 * 4 + -4;
    DAT_00df9eb0 = pfVar10;
    do {
      param_4 = iVar9;
      fVar2 = (float)param_1[4];
      fVar1 = (float)param_1[4];
      if ((pfVar6[2] <= fVar2) || (*pfVar11 <= fVar1)) {
        if (((pfVar6[2] != fVar2) && (fVar1 != *pfVar11)) &&
           ((fVar2 < pfVar6[2] || (fVar1 < *pfVar11)))) {
          fVar3 = (*pfVar11 - pfVar6[2]) / (fVar2 - pfVar6[2]);
          local_c = local_c + 1;
          *(float *)((int)pfVar12 + iVar4) = (pfVar11[-2] - *pfVar6) * fVar3 + *pfVar6;
          *(float *)((int)DAT_00df9eb4 + iVar4 + 4) = (pfVar11[-1] - pfVar6[1]) * fVar3 + pfVar6[1];
          *(float *)((int)DAT_00df9eb4 + iVar4 + 8) = fVar2;
          *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar13 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar13 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 4;
          iVar13 = iVar13 + 0x10;
          pfVar12 = DAT_00df9eb4;
          iVar4 = iVar4 + 0xc;
        }
        if (*pfVar11 <= fVar1) {
          pfVar12 = (float *)((int)pfVar12 + iVar4);
          iVar4 = iVar4 + 0xc;
          *pfVar12 = pfVar11[-2];
          pfVar12[1] = pfVar11[-1];
          pfVar12[2] = *pfVar11;
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar13);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar13 = iVar13 + 0x10;
          pfVar12 = DAT_00df9eb4;
        }
      }
      pfVar6 = pfVar11 + -2;
      pfVar11 = pfVar11 + 3;
      iVar9 = param_4 + -1;
      pfVar7 = local_8;
      param_4 = local_c;
      local_8 = local_8 + 4;
    } while (iVar9 != 0);
  }
  if (param_4 < 3) {
    return param_4;
  }
  pfVar10 = pfVar12 + param_4 * 3 + -3;
  local_c = 0;
  pfVar6 = DAT_00dfa138;
  DAT_00df9eb4 = DAT_00dfa138;
  DAT_00dfa138 = pfVar12;
  if (param_4 < 1) {
    iVar9 = 0;
    pfVar11 = DAT_00dfa13c;
    DAT_00dfa13c = DAT_00df9eb0;
  }
  else {
    pfVar12 = pfVar12 + 2;
    iVar4 = 0;
    iVar13 = 0;
    pfVar7 = DAT_00df9eb0 + param_4 * 4 + -4;
    pfVar11 = DAT_00dfa13c;
    DAT_00dfa13c = DAT_00df9eb0;
    local_8 = DAT_00df9eb0;
    do {
      DAT_00df9eb0 = pfVar11;
      fVar2 = (float)param_1[6];
      fVar1 = (float)param_1[6];
      if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar12)) {
        if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar12)) &&
           ((pfVar10[2] < fVar2 || (*pfVar12 < fVar1)))) {
          fVar3 = (*pfVar12 - pfVar10[2]) / (fVar2 - pfVar10[2]);
          local_c = local_c + 1;
          *(float *)((int)pfVar6 + iVar13) = (pfVar12[-2] - *pfVar10) * fVar3 + *pfVar10;
          *(float *)((int)DAT_00df9eb4 + iVar13 + 4) =
               (pfVar12[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
          *(float *)((int)DAT_00df9eb4 + iVar13 + 8) = fVar2;
          *(float *)((int)DAT_00df9eb0 + iVar4) = (*local_8 - *pfVar7) * fVar3 + *pfVar7;
          *(float *)((int)DAT_00df9eb0 + iVar4 + 4) = (local_8[1] - pfVar7[1]) * fVar3 + pfVar7[1];
          *(float *)((int)DAT_00df9eb0 + iVar4 + 8) = (local_8[2] - pfVar7[2]) * fVar3 + pfVar7[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 8;
          iVar13 = iVar13 + 0xc;
          pfVar6 = DAT_00df9eb4;
          iVar4 = iVar4 + 0x10;
        }
        if (fVar1 <= *pfVar12) {
          pfVar6 = (float *)((int)pfVar6 + iVar13);
          iVar13 = iVar13 + 0xc;
          *pfVar6 = pfVar12[-2];
          pfVar6[1] = pfVar12[-1];
          pfVar6[2] = *pfVar12;
          pfVar10 = (float *)((int)DAT_00df9eb0 + iVar4);
          *pfVar10 = *local_8;
          pfVar10[1] = local_8[1];
          pfVar10[2] = local_8[2];
          pfVar10[3] = local_8[3];
          local_c = local_c + 1;
          iVar4 = iVar4 + 0x10;
          pfVar6 = DAT_00df9eb4;
        }
      }
      pfVar10 = pfVar12 + -2;
      pfVar12 = pfVar12 + 3;
      param_4 = param_4 + -1;
      pfVar7 = local_8;
      iVar9 = local_c;
      pfVar11 = DAT_00df9eb0;
      local_8 = local_8 + 4;
    } while (param_4 != 0);
  }
  DAT_00df9eb0 = pfVar11;
  if (2 < iVar9) {
    pfVar10 = pfVar6 + iVar9 * 3 + -3;
    local_c = 0;
    pfVar11 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    DAT_00dfa138 = pfVar6;
    if (iVar9 < 1) {
      param_4 = 0;
      pfVar12 = DAT_00dfa13c;
      DAT_00dfa13c = DAT_00df9eb0;
    }
    else {
      pfVar6 = pfVar6 + 1;
      iVar13 = 0;
      iVar4 = 0;
      pfVar7 = DAT_00df9eb0 + iVar9 * 4 + -4;
      pfVar12 = DAT_00dfa13c;
      DAT_00dfa13c = DAT_00df9eb0;
      local_8 = DAT_00df9eb0;
      do {
        param_4 = iVar9;
        DAT_00df9eb0 = pfVar12;
        if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar6)) {
          if (((pfVar10[1] != (float)param_1[1]) && (*pfVar6 != (float)param_1[1])) &&
             ((pfVar10[1] < (float)param_1[1] || (*pfVar6 < (float)param_1[1])))) {
            fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar6 - pfVar10[1]);
            *(int *)((int)pfVar11 + iVar4 + 4) = param_1[1];
            local_c = local_c + 1;
            *(float *)((int)DAT_00df9eb4 + iVar4 + 8) =
                 (pfVar6[1] - pfVar10[2]) * fVar1 + pfVar10[2];
            *(float *)((int)DAT_00df9eb4 + iVar4) = (pfVar6[-1] - *pfVar10) * fVar1 + *pfVar10;
            *(float *)((int)DAT_00df9eb0 + iVar13) = (*local_8 - *pfVar7) * fVar1 + *pfVar7;
            *(float *)((int)DAT_00df9eb0 + iVar13 + 4) =
                 (local_8[1] - pfVar7[1]) * fVar1 + pfVar7[1];
            *(float *)((int)DAT_00df9eb0 + iVar13 + 8) =
                 (local_8[2] - pfVar7[2]) * fVar1 + pfVar7[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 1;
            iVar13 = iVar13 + 0x10;
            pfVar11 = DAT_00df9eb4;
            iVar4 = iVar4 + 0xc;
          }
          if ((float)param_1[1] <= *pfVar6) {
            pfVar11 = (float *)((int)pfVar11 + iVar4);
            iVar4 = iVar4 + 0xc;
            *pfVar11 = pfVar6[-1];
            pfVar11[1] = *pfVar6;
            pfVar11[2] = pfVar6[1];
            pfVar10 = (float *)((int)DAT_00df9eb0 + iVar13);
            *pfVar10 = *local_8;
            pfVar10[1] = local_8[1];
            pfVar10[2] = local_8[2];
            local_c = local_c + 1;
            pfVar10[3] = local_8[3];
            iVar13 = iVar13 + 0x10;
            pfVar11 = DAT_00df9eb4;
          }
        }
        pfVar10 = pfVar6 + -1;
        pfVar6 = pfVar6 + 3;
        iVar9 = param_4 + -1;
        param_4 = local_c;
        pfVar7 = local_8;
        pfVar12 = DAT_00df9eb0;
        local_8 = local_8 + 4;
      } while (iVar9 != 0);
    }
    DAT_00df9eb0 = pfVar12;
    if (2 < param_4) {
      iVar9 = 0;
      local_c = param_4;
      pfVar10 = pfVar11;
      if (*param_1 != 0) {
        local_c = 0;
        pfVar6 = pfVar11 + param_4 * 3 + -3;
        pfVar10 = DAT_00dfa138;
        pfVar12 = DAT_00dfa13c;
        DAT_00df9eb4 = DAT_00dfa138;
        pfVar7 = DAT_00df9eb0;
        if (0 < param_4) {
          pfVar14 = pfVar11 + 1;
          iVar13 = 0;
          pfVar8 = DAT_00df9eb0 + param_4 * 4 + -4;
          pfVar12 = DAT_00dfa13c;
          DAT_00dfa138 = pfVar11;
          DAT_00dfa13c = DAT_00df9eb0;
          local_8 = DAT_00df9eb0;
          do {
            DAT_00df9eb0 = pfVar12;
            if ((pfVar6[1] <= (float)param_1[2]) || (*pfVar14 <= (float)param_1[2])) {
              if (((pfVar6[1] != (float)param_1[2]) && (*pfVar14 != (float)param_1[2])) &&
                 (((float)param_1[2] < pfVar6[1] || ((float)param_1[2] < *pfVar14)))) {
                fVar1 = ((float)param_1[2] - pfVar6[1]) / (*pfVar14 - pfVar6[1]);
                *(int *)((int)pfVar10 + iVar13 + 4) = param_1[2];
                local_c = local_c + 1;
                *(float *)((int)DAT_00df9eb4 + iVar13 + 8) =
                     (pfVar14[1] - pfVar6[2]) * fVar1 + pfVar6[2];
                *(float *)((int)DAT_00df9eb4 + iVar13) = (pfVar14[-1] - *pfVar6) * fVar1 + *pfVar6;
                *(float *)((int)DAT_00df9eb0 + iVar9) = (*local_8 - *pfVar8) * fVar1 + *pfVar8;
                *(float *)((int)DAT_00df9eb0 + iVar9 + 4) =
                     (local_8[1] - pfVar8[1]) * fVar1 + pfVar8[1];
                *(float *)((int)DAT_00df9eb0 + iVar9 + 8) =
                     (local_8[2] - pfVar8[2]) * fVar1 + pfVar8[2];
                DAT_00dfaa04 = DAT_00dfaa04 | 2;
                iVar13 = iVar13 + 0xc;
                iVar9 = iVar9 + 0x10;
                pfVar10 = DAT_00df9eb4;
              }
              if (*pfVar14 <= (float)param_1[2]) {
                pfVar10 = (float *)((int)pfVar10 + iVar13);
                iVar13 = iVar13 + 0xc;
                *pfVar10 = pfVar14[-1];
                pfVar10[1] = *pfVar14;
                pfVar10[2] = pfVar14[1];
                pfVar10 = (float *)((int)DAT_00df9eb0 + iVar9);
                *pfVar10 = *local_8;
                pfVar10[1] = local_8[1];
                pfVar10[2] = local_8[2];
                local_c = local_c + 1;
                pfVar10[3] = local_8[3];
                iVar9 = iVar9 + 0x10;
                pfVar10 = DAT_00df9eb4;
              }
            }
            pfVar6 = pfVar14 + -1;
            pfVar14 = pfVar14 + 3;
            param_4 = param_4 + -1;
            pfVar8 = local_8;
            pfVar12 = DAT_00df9eb0;
            pfVar11 = DAT_00dfa138;
            pfVar7 = DAT_00dfa13c;
            local_8 = local_8 + 4;
          } while (param_4 != 0);
        }
        DAT_00dfa13c = pfVar7;
        DAT_00dfa138 = pfVar11;
        DAT_00df9eb0 = pfVar12;
        if (local_c < 3) {
          return local_c;
        }
      }
      if (pfVar10 != param_2) {
        for (uVar5 = local_c * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          param_2 = param_2 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined *)param_2 = *(undefined *)pfVar10;
          pfVar10 = (float *)((int)pfVar10 + 1);
          param_2 = (float *)((int)param_2 + 1);
        }
        pfVar10 = DAT_00df9eb0;
        for (uVar5 = (uint)(local_c << 4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_3 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          param_3 = param_3 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined *)param_3 = *(undefined *)pfVar10;
          pfVar10 = (float *)((int)pfVar10 + 1);
          param_3 = (float *)((int)param_3 + 1);
        }
      }
      return local_c;
    }
    DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
    return param_4;
  }
  return iVar9;
}

