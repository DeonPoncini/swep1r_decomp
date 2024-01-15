#include "prototype.h"


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

