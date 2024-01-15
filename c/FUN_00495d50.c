#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00495d50(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int local_4;
  
  iVar12 = 0;
  pfVar13 = (float *)&DAT_00dfa140;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  if (0 < param_3) {
    iVar10 = 0;
    local_4 = param_3;
    pfVar14 = param_2 + param_3 * 3 + -3;
    pfVar15 = param_2;
    do {
      fVar2 = (float)param_1[0xc] * pfVar14[1];
      fVar3 = (float)param_1[0xc] * pfVar15[1];
      if ((fVar2 <= *pfVar14) || (fVar3 <= *pfVar15)) {
        iVar11 = iVar10;
        if (((*pfVar14 != fVar2) && (fVar3 != *pfVar15)) &&
           ((*pfVar14 < fVar2 || (*pfVar15 < fVar3)))) {
          fVar2 = pfVar15[1] - pfVar14[1];
          fVar4 = *pfVar15 - *pfVar14;
          fVar1 = (float)param_1[0xc] * fVar2 - fVar4;
          fVar5 = pfVar15[1] * *pfVar14 - pfVar14[1] * *pfVar15;
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
            fVar2 = ((float)param_1[0xc] * fVar5 - *pfVar14) / fVar4;
          }
          else {
            fVar2 = (fVar5 - pfVar14[1]) / fVar2;
          }
          *(float *)((int)pfVar13 + iVar10) = (float)param_1[0xc] * fVar5;
          iVar12 = iVar12 + 1;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 4) = fVar5;
          iVar11 = iVar10 + 0xc;
          *(float *)((int)DAT_00df9eb4 + iVar10 + 8) =
               (pfVar15[2] - pfVar14[2]) * fVar2 + pfVar14[2];
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar13 = DAT_00df9eb4;
        }
        iVar10 = iVar11;
        if (fVar3 <= *pfVar15) {
          pfVar13 = (float *)((int)pfVar13 + iVar11);
          iVar12 = iVar12 + 1;
          iVar10 = iVar11 + 0xc;
          *pfVar13 = *pfVar15;
          pfVar13[1] = pfVar15[1];
          pfVar13[2] = pfVar15[2];
          pfVar13 = DAT_00df9eb4;
        }
      }
      local_4 = local_4 + -1;
      pfVar14 = pfVar15;
      pfVar15 = pfVar15 + 3;
    } while (local_4 != 0);
  }
  if (2 < iVar12) {
    iVar10 = 0;
    pfVar14 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar12) {
      iVar11 = 0;
      pfVar15 = pfVar13 + iVar12 * 3 + -3;
      pfVar9 = pfVar13;
      DAT_00dfa138 = pfVar13;
      local_4 = iVar12;
      do {
        fVar2 = (float)param_1[10] * pfVar15[1];
        fVar3 = (float)param_1[10] * pfVar9[1];
        if ((*pfVar15 <= fVar2) || (*pfVar9 <= fVar3)) {
          iVar12 = iVar11;
          if (((*pfVar15 != fVar2) && (fVar3 != *pfVar9)) &&
             ((fVar2 < *pfVar15 || (fVar3 < *pfVar9)))) {
            fVar2 = pfVar9[1] - pfVar15[1];
            fVar4 = *pfVar9 - *pfVar15;
            fVar1 = (float)param_1[10] * fVar2 - fVar4;
            fVar5 = pfVar9[1] * *pfVar15 - pfVar15[1] * *pfVar9;
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
              fVar2 = ((float)param_1[10] * fVar5 - *pfVar15) / fVar4;
            }
            else {
              fVar2 = (fVar5 - pfVar15[1]) / fVar2;
            }
            *(float *)((int)pfVar14 + iVar11) = (float)param_1[10] * fVar5;
            iVar10 = iVar10 + 1;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
            iVar12 = iVar11 + 0xc;
            *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                 (pfVar9[2] - pfVar15[2]) * fVar2 + pfVar15[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar14 = DAT_00df9eb4;
          }
          iVar11 = iVar12;
          if (*pfVar9 <= fVar3) {
            pfVar14 = (float *)((int)pfVar14 + iVar12);
            iVar10 = iVar10 + 1;
            iVar11 = iVar12 + 0xc;
            *pfVar14 = *pfVar9;
            pfVar14[1] = pfVar9[1];
            pfVar14[2] = pfVar9[2];
            pfVar14 = DAT_00df9eb4;
          }
        }
        local_4 = local_4 + -1;
        pfVar15 = pfVar9;
        pfVar9 = pfVar9 + 3;
        pfVar13 = DAT_00dfa138;
      } while (local_4 != 0);
    }
    DAT_00dfa138 = pfVar13;
    iVar12 = iVar10;
    if (2 < iVar12) {
      iVar10 = 0;
      DAT_00df9eb4 = DAT_00dfa138;
      pfVar13 = pfVar14 + iVar12 * 3 + -3;
      pfVar15 = DAT_00dfa138;
      if (0 < iVar12) {
        iVar11 = 0;
        pfVar9 = pfVar14 + 2;
        DAT_00dfa138 = pfVar14;
        local_4 = iVar12;
        do {
          fVar2 = (float)param_1[0xb] * pfVar13[1];
          fVar3 = pfVar9[-1] * (float)param_1[0xb];
          if ((pfVar13[2] <= fVar2) || (*pfVar9 <= fVar3)) {
            iVar12 = iVar11;
            if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
               ((fVar2 < pfVar13[2] || (fVar3 < *pfVar9)))) {
              fVar2 = pfVar9[-1] - pfVar13[1];
              fVar4 = *pfVar9 - pfVar13[2];
              fVar1 = (float)param_1[0xb] * fVar2 - fVar4;
              fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
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
                fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
              }
              else {
                fVar2 = (fVar5 - pfVar13[1]) / fVar2;
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar11 + 0xc;
              *(float *)((int)pfVar15 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
              *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar15 = DAT_00df9eb4;
            }
            iVar11 = iVar12;
            if (*pfVar9 <= fVar3) {
              pfVar15 = (float *)((int)pfVar15 + iVar12);
              iVar10 = iVar10 + 1;
              iVar11 = iVar12 + 0xc;
              *pfVar15 = pfVar9[-2];
              pfVar15[1] = pfVar9[-1];
              pfVar15[2] = *pfVar9;
              pfVar15 = DAT_00df9eb4;
            }
          }
          pfVar13 = pfVar9 + -2;
          pfVar9 = pfVar9 + 3;
          local_4 = local_4 + -1;
          pfVar14 = DAT_00dfa138;
        } while (local_4 != 0);
      }
      DAT_00dfa138 = pfVar14;
      iVar12 = iVar10;
      if (2 < iVar12) {
        iVar10 = 0;
        DAT_00df9eb4 = DAT_00dfa138;
        pfVar13 = pfVar15 + iVar12 * 3 + -3;
        pfVar14 = DAT_00dfa138;
        if (0 < iVar12) {
          iVar11 = 0;
          pfVar9 = pfVar15 + 2;
          DAT_00dfa138 = pfVar15;
          local_4 = iVar12;
          do {
            fVar2 = (float)param_1[8] * pfVar13[1];
            fVar3 = pfVar9[-1] * (float)param_1[8];
            if ((fVar2 <= pfVar13[2]) || (fVar3 <= *pfVar9)) {
              iVar12 = iVar11;
              if (((pfVar13[2] != fVar2) && (fVar3 != *pfVar9)) &&
                 ((pfVar13[2] < fVar2 || (*pfVar9 < fVar3)))) {
                fVar2 = pfVar9[-1] - pfVar13[1];
                fVar4 = *pfVar9 - pfVar13[2];
                fVar1 = (float)param_1[8] * fVar2 - fVar4;
                fVar5 = pfVar13[2] * pfVar9[-1] - pfVar13[1] * *pfVar9;
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
                  fVar2 = (fVar1 * fVar5 - pfVar13[2]) / fVar4;
                }
                else {
                  fVar2 = (fVar5 - pfVar13[1]) / fVar2;
                }
                iVar10 = iVar10 + 1;
                iVar12 = iVar11 + 0xc;
                *(float *)((int)pfVar14 + iVar11) = (pfVar9[-2] - *pfVar13) * fVar2 + *pfVar13;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 4) = fVar5;
                *(float *)((int)DAT_00df9eb4 + iVar11 + 8) = fVar1 * fVar5;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar14 = DAT_00df9eb4;
              }
              iVar11 = iVar12;
              if (fVar3 <= *pfVar9) {
                pfVar14 = (float *)((int)pfVar14 + iVar12);
                iVar10 = iVar10 + 1;
                iVar11 = iVar12 + 0xc;
                *pfVar14 = pfVar9[-2];
                pfVar14[1] = pfVar9[-1];
                pfVar14[2] = *pfVar9;
                pfVar14 = DAT_00df9eb4;
              }
            }
            pfVar13 = pfVar9 + -2;
            pfVar9 = pfVar9 + 3;
            local_4 = local_4 + -1;
            pfVar15 = DAT_00dfa138;
          } while (local_4 != 0);
        }
        DAT_00dfa138 = pfVar15;
        iVar12 = iVar10;
        if (2 < iVar12) {
          iVar10 = 0;
          DAT_00df9eb4 = DAT_00dfa138;
          pfVar13 = pfVar14 + iVar12 * 3 + -3;
          pfVar15 = DAT_00dfa138;
          if (0 < iVar12) {
            pfVar9 = pfVar14 + 1;
            iVar11 = 0;
            DAT_00dfa138 = pfVar14;
            param_3 = iVar12;
            do {
              iVar12 = iVar11;
              if (((float)param_1[1] <= pfVar13[1]) || ((float)param_1[1] <= *pfVar9)) {
                if (((pfVar13[1] != (float)param_1[1]) && (*pfVar9 != (float)param_1[1])) &&
                   ((pfVar13[1] < (float)param_1[1] || (*pfVar9 < (float)param_1[1])))) {
                  iVar10 = iVar10 + 1;
                  fVar2 = ((float)param_1[1] - pfVar13[1]) / (*pfVar9 - pfVar13[1]);
                  *(int *)((int)pfVar15 + iVar11 + 4) = param_1[1];
                  iVar12 = iVar11 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                       (pfVar9[1] - pfVar13[2]) * fVar2 + pfVar13[2];
                  *(float *)((int)DAT_00df9eb4 + iVar11) =
                       (pfVar9[-1] - *pfVar13) * fVar2 + *pfVar13;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar15 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar9) {
                  pfVar15 = (float *)((int)pfVar15 + iVar12);
                  iVar10 = iVar10 + 1;
                  iVar12 = iVar12 + 0xc;
                  *pfVar15 = pfVar9[-1];
                  pfVar15[1] = *pfVar9;
                  pfVar15[2] = pfVar9[1];
                  pfVar15 = DAT_00df9eb4;
                }
              }
              pfVar13 = pfVar9 + -1;
              pfVar9 = pfVar9 + 3;
              param_3 = param_3 + -1;
              iVar11 = iVar12;
              pfVar14 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar14;
          if (iVar10 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar10;
          }
          iVar12 = iVar10;
          pfVar13 = pfVar15;
          if (*param_1 != 0) {
            iVar12 = 0;
            pfVar14 = pfVar15 + iVar10 * 3 + -3;
            pfVar13 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar10) {
              pfVar9 = pfVar15 + 1;
              iVar11 = 0;
              DAT_00dfa138 = pfVar15;
              param_3 = iVar10;
              do {
                iVar10 = iVar11;
                if ((pfVar14[1] <= (float)param_1[2]) || (*pfVar9 <= (float)param_1[2])) {
                  if (((pfVar14[1] != (float)param_1[2]) && (*pfVar9 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar14[1] || ((float)param_1[2] < *pfVar9)))) {
                    iVar12 = iVar12 + 1;
                    fVar2 = ((float)param_1[2] - pfVar14[1]) / (*pfVar9 - pfVar14[1]);
                    *(int *)((int)pfVar13 + iVar11 + 4) = param_1[2];
                    iVar10 = iVar11 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar11 + 8) =
                         (pfVar9[1] - pfVar14[2]) * fVar2 + pfVar14[2];
                    *(float *)((int)DAT_00df9eb4 + iVar11) =
                         (pfVar9[-1] - *pfVar14) * fVar2 + *pfVar14;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar13 = DAT_00df9eb4;
                  }
                  if (*pfVar9 <= (float)param_1[2]) {
                    pfVar13 = (float *)((int)pfVar13 + iVar10);
                    iVar12 = iVar12 + 1;
                    iVar10 = iVar10 + 0xc;
                    *pfVar13 = pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    pfVar13[2] = pfVar9[1];
                    pfVar13 = DAT_00df9eb4;
                  }
                }
                pfVar14 = pfVar9 + -1;
                pfVar9 = pfVar9 + 3;
                param_3 = param_3 + -1;
                iVar11 = iVar10;
                pfVar15 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar15;
            if (iVar12 < 3) {
              return iVar12;
            }
          }
          if (pfVar13 != param_2) {
            for (uVar8 = iVar12 * 3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *param_2 = *pfVar13;
              pfVar13 = pfVar13 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar13;
              pfVar13 = (float *)((int)pfVar13 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar12;
}

