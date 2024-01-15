#include "prototype.h"


int FUN_00495600(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  
  iVar6 = 0;
  pfVar9 = (float *)&DAT_00dfa140;
  iVar8 = 0;
  DAT_00dfaa04 = 0;
  DAT_00dfa138 = param_2;
  DAT_00df9eb4 = (float *)&DAT_00dfa140;
  pfVar10 = param_2 + param_3 * 3 + -3;
  pfVar11 = param_2;
  if (0 < param_3) {
    do {
      fVar2 = (float)param_1[3];
      fVar1 = (float)param_1[3];
      if ((fVar2 <= *pfVar10) || (fVar1 <= *pfVar11)) {
        iVar7 = iVar6;
        if (((*pfVar10 != fVar2) && (fVar1 != *pfVar11)) &&
           ((*pfVar10 < fVar2 || (*pfVar11 < fVar1)))) {
          fVar3 = (*pfVar11 - *pfVar10) / (fVar2 - *pfVar10);
          iVar8 = iVar8 + 1;
          iVar7 = iVar6 + 0xc;
          *(float *)((int)pfVar9 + iVar6) = fVar2;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 4) = (pfVar11[1] - pfVar10[1]) * fVar3 + pfVar10[1]
          ;
          *(float *)((int)DAT_00df9eb4 + iVar6 + 8) = (pfVar11[2] - pfVar10[2]) * fVar3 + pfVar10[2]
          ;
          DAT_00dfaa04 = DAT_00dfaa04 | 0x10;
          pfVar9 = DAT_00df9eb4;
        }
        iVar6 = iVar7;
        if (fVar1 <= *pfVar11) {
          pfVar9 = (float *)((int)pfVar9 + iVar7);
          iVar8 = iVar8 + 1;
          iVar6 = iVar7 + 0xc;
          *pfVar9 = *pfVar11;
          pfVar9[1] = pfVar11[1];
          pfVar9[2] = pfVar11[2];
          pfVar9 = DAT_00df9eb4;
        }
      }
      param_3 = param_3 + -1;
      pfVar10 = pfVar11;
      pfVar11 = pfVar11 + 3;
    } while (param_3 != 0);
  }
  if (2 < iVar8) {
    iVar6 = 0;
    pfVar10 = DAT_00dfa138;
    DAT_00df9eb4 = DAT_00dfa138;
    if (0 < iVar8) {
      iVar7 = 0;
      pfVar11 = pfVar9 + iVar8 * 3 + -3;
      pfVar5 = pfVar9;
      DAT_00dfa138 = pfVar9;
      param_3 = iVar8;
      do {
        fVar2 = (float)param_1[5];
        fVar1 = (float)param_1[5];
        if ((*pfVar11 <= fVar2) || (*pfVar5 <= fVar1)) {
          iVar8 = iVar7;
          if (((*pfVar11 != fVar2) && (fVar1 != *pfVar5)) &&
             ((fVar2 < *pfVar11 || (fVar1 < *pfVar5)))) {
            fVar3 = (*pfVar5 - *pfVar11) / (fVar2 - *pfVar11);
            iVar6 = iVar6 + 1;
            iVar8 = iVar7 + 0xc;
            *(float *)((int)pfVar10 + iVar7) = fVar2;
            *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                 (pfVar5[1] - pfVar11[1]) * fVar3 + pfVar11[1];
            *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                 (pfVar5[2] - pfVar11[2]) * fVar3 + pfVar11[2];
            DAT_00dfaa04 = DAT_00dfaa04 | 0x20;
            pfVar10 = DAT_00df9eb4;
          }
          iVar7 = iVar8;
          if (*pfVar5 <= fVar1) {
            pfVar10 = (float *)((int)pfVar10 + iVar8);
            iVar6 = iVar6 + 1;
            iVar7 = iVar8 + 0xc;
            *pfVar10 = *pfVar5;
            pfVar10[1] = pfVar5[1];
            pfVar10[2] = pfVar5[2];
            pfVar10 = DAT_00df9eb4;
          }
        }
        param_3 = param_3 + -1;
        pfVar11 = pfVar5;
        pfVar5 = pfVar5 + 3;
        pfVar9 = DAT_00dfa138;
      } while (param_3 != 0);
    }
    DAT_00dfa138 = pfVar9;
    iVar8 = iVar6;
    if (2 < iVar8) {
      iVar6 = 0;
      pfVar11 = pfVar10 + iVar8 * 3 + -3;
      pfVar9 = DAT_00dfa138;
      DAT_00df9eb4 = DAT_00dfa138;
      if (0 < iVar8) {
        pfVar5 = pfVar10 + 2;
        iVar7 = 0;
        DAT_00dfa138 = pfVar10;
        param_3 = iVar8;
        do {
          fVar2 = (float)param_1[4];
          fVar1 = (float)param_1[4];
          if ((pfVar11[2] <= fVar2) || (*pfVar5 <= fVar1)) {
            iVar8 = iVar7;
            if (((pfVar11[2] != fVar2) && (fVar1 != *pfVar5)) &&
               ((fVar2 < pfVar11[2] || (fVar1 < *pfVar5)))) {
              fVar3 = (*pfVar5 - pfVar11[2]) / (fVar2 - pfVar11[2]);
              iVar6 = iVar6 + 1;
              iVar8 = iVar7 + 0xc;
              *(float *)((int)pfVar9 + iVar7) = (pfVar5[-2] - *pfVar11) * fVar3 + *pfVar11;
              *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                   (pfVar5[-1] - pfVar11[1]) * fVar3 + pfVar11[1];
              *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
              DAT_00dfaa04 = DAT_00dfaa04 | 4;
              pfVar9 = DAT_00df9eb4;
            }
            iVar7 = iVar8;
            if (*pfVar5 <= fVar1) {
              pfVar9 = (float *)((int)pfVar9 + iVar8);
              iVar6 = iVar6 + 1;
              iVar7 = iVar8 + 0xc;
              *pfVar9 = pfVar5[-2];
              pfVar9[1] = pfVar5[-1];
              pfVar9[2] = *pfVar5;
              pfVar9 = DAT_00df9eb4;
            }
          }
          pfVar11 = pfVar5 + -2;
          pfVar5 = pfVar5 + 3;
          param_3 = param_3 + -1;
          pfVar10 = DAT_00dfa138;
        } while (param_3 != 0);
      }
      DAT_00dfa138 = pfVar10;
      iVar8 = iVar6;
      if (2 < iVar8) {
        iVar6 = 0;
        pfVar10 = pfVar9 + iVar8 * 3 + -3;
        pfVar11 = DAT_00dfa138;
        DAT_00df9eb4 = DAT_00dfa138;
        if (0 < iVar8) {
          pfVar5 = pfVar9 + 2;
          iVar7 = 0;
          DAT_00dfa138 = pfVar9;
          param_3 = iVar8;
          do {
            fVar2 = (float)param_1[6];
            fVar1 = (float)param_1[6];
            if ((fVar2 <= pfVar10[2]) || (fVar1 <= *pfVar5)) {
              iVar8 = iVar7;
              if (((pfVar10[2] != fVar2) && (fVar1 != *pfVar5)) &&
                 ((pfVar10[2] < fVar2 || (*pfVar5 < fVar1)))) {
                fVar3 = (*pfVar5 - pfVar10[2]) / (fVar2 - pfVar10[2]);
                iVar6 = iVar6 + 1;
                iVar8 = iVar7 + 0xc;
                *(float *)((int)pfVar11 + iVar7) = (pfVar5[-2] - *pfVar10) * fVar3 + *pfVar10;
                *(float *)((int)DAT_00df9eb4 + iVar7 + 4) =
                     (pfVar5[-1] - pfVar10[1]) * fVar3 + pfVar10[1];
                *(float *)((int)DAT_00df9eb4 + iVar7 + 8) = fVar2;
                DAT_00dfaa04 = DAT_00dfaa04 | 8;
                pfVar11 = DAT_00df9eb4;
              }
              iVar7 = iVar8;
              if (fVar1 <= *pfVar5) {
                pfVar11 = (float *)((int)pfVar11 + iVar8);
                iVar6 = iVar6 + 1;
                iVar7 = iVar8 + 0xc;
                *pfVar11 = pfVar5[-2];
                pfVar11[1] = pfVar5[-1];
                pfVar11[2] = *pfVar5;
                pfVar11 = DAT_00df9eb4;
              }
            }
            pfVar10 = pfVar5 + -2;
            pfVar5 = pfVar5 + 3;
            param_3 = param_3 + -1;
            pfVar9 = DAT_00dfa138;
          } while (param_3 != 0);
        }
        DAT_00dfa138 = pfVar9;
        iVar8 = iVar6;
        if (2 < iVar8) {
          iVar6 = 0;
          pfVar10 = pfVar11 + iVar8 * 3 + -3;
          pfVar9 = DAT_00dfa138;
          DAT_00df9eb4 = DAT_00dfa138;
          if (0 < iVar8) {
            pfVar5 = pfVar11 + 1;
            iVar7 = 0;
            DAT_00dfa138 = pfVar11;
            param_3 = iVar8;
            do {
              iVar8 = iVar7;
              if (((float)param_1[1] <= pfVar10[1]) || ((float)param_1[1] <= *pfVar5)) {
                if (((pfVar10[1] != (float)param_1[1]) && (*pfVar5 != (float)param_1[1])) &&
                   ((pfVar10[1] < (float)param_1[1] || (*pfVar5 < (float)param_1[1])))) {
                  iVar6 = iVar6 + 1;
                  fVar1 = ((float)param_1[1] - pfVar10[1]) / (*pfVar5 - pfVar10[1]);
                  *(int *)((int)pfVar9 + iVar7 + 4) = param_1[1];
                  iVar8 = iVar7 + 0xc;
                  *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                       (pfVar5[1] - pfVar10[2]) * fVar1 + pfVar10[2];
                  *(float *)((int)DAT_00df9eb4 + iVar7) = (pfVar5[-1] - *pfVar10) * fVar1 + *pfVar10
                  ;
                  DAT_00dfaa04 = DAT_00dfaa04 | 1;
                  pfVar9 = DAT_00df9eb4;
                }
                if ((float)param_1[1] <= *pfVar5) {
                  pfVar9 = (float *)((int)pfVar9 + iVar8);
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar8 + 0xc;
                  *pfVar9 = pfVar5[-1];
                  pfVar9[1] = *pfVar5;
                  pfVar9[2] = pfVar5[1];
                  pfVar9 = DAT_00df9eb4;
                }
              }
              pfVar10 = pfVar5 + -1;
              pfVar5 = pfVar5 + 3;
              param_3 = param_3 + -1;
              iVar7 = iVar8;
              pfVar11 = DAT_00dfa138;
            } while (param_3 != 0);
          }
          DAT_00dfa138 = pfVar11;
          if (iVar6 < 3) {
            DAT_00dfaa04 = DAT_00dfaa04 | 0x40;
            return iVar6;
          }
          iVar8 = iVar6;
          pfVar10 = pfVar9;
          if (*param_1 != 0) {
            iVar8 = 0;
            pfVar11 = pfVar9 + iVar6 * 3 + -3;
            pfVar10 = DAT_00dfa138;
            DAT_00df9eb4 = DAT_00dfa138;
            if (0 < iVar6) {
              pfVar5 = pfVar9 + 1;
              iVar7 = 0;
              DAT_00dfa138 = pfVar9;
              param_3 = iVar6;
              do {
                iVar6 = iVar7;
                if ((pfVar11[1] <= (float)param_1[2]) || (*pfVar5 <= (float)param_1[2])) {
                  if (((pfVar11[1] != (float)param_1[2]) && (*pfVar5 != (float)param_1[2])) &&
                     (((float)param_1[2] < pfVar11[1] || ((float)param_1[2] < *pfVar5)))) {
                    iVar8 = iVar8 + 1;
                    fVar1 = ((float)param_1[2] - pfVar11[1]) / (*pfVar5 - pfVar11[1]);
                    *(int *)((int)pfVar10 + iVar7 + 4) = param_1[2];
                    iVar6 = iVar7 + 0xc;
                    *(float *)((int)DAT_00df9eb4 + iVar7 + 8) =
                         (pfVar5[1] - pfVar11[2]) * fVar1 + pfVar11[2];
                    *(float *)((int)DAT_00df9eb4 + iVar7) =
                         (pfVar5[-1] - *pfVar11) * fVar1 + *pfVar11;
                    DAT_00dfaa04 = DAT_00dfaa04 | 2;
                    pfVar10 = DAT_00df9eb4;
                  }
                  if (*pfVar5 <= (float)param_1[2]) {
                    pfVar10 = (float *)((int)pfVar10 + iVar6);
                    iVar8 = iVar8 + 1;
                    iVar6 = iVar6 + 0xc;
                    *pfVar10 = pfVar5[-1];
                    pfVar10[1] = *pfVar5;
                    pfVar10[2] = pfVar5[1];
                    pfVar10 = DAT_00df9eb4;
                  }
                }
                pfVar11 = pfVar5 + -1;
                pfVar5 = pfVar5 + 3;
                param_3 = param_3 + -1;
                iVar7 = iVar6;
                pfVar9 = DAT_00dfa138;
              } while (param_3 != 0);
            }
            DAT_00dfa138 = pfVar9;
            if (iVar8 < 3) {
              return iVar8;
            }
          }
          if (pfVar10 != param_2) {
            for (uVar4 = iVar8 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              *param_2 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              param_2 = param_2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined *)param_2 = *(undefined *)pfVar10;
              pfVar10 = (float *)((int)pfVar10 + 1);
              param_2 = (float *)((int)param_2 + 1);
            }
          }
        }
      }
    }
  }
  return iVar8;
}

