#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430730(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  pfVar4 = param_3;
  iVar6 = -1;
  iVar8 = 0;
  param_2 = param_2 - (int)param_3;
  do {
    iVar5 = *(int *)(param_2 + (int)param_3);
    fVar1 = pfVar4[iVar5];
    pfVar4[iVar5] = *param_3;
    if (iVar6 < 0) {
      if (fVar1 != _DAT_004ac678) {
        iVar6 = iVar8;
      }
    }
    else if (iVar6 <= iVar8 + -1) {
      pfVar10 = pfVar4 + iVar6;
      pfVar7 = (float *)(param_1 + (iVar6 + iVar8 * 4) * 4);
      iVar5 = ((iVar8 + -1) - iVar6) + 1;
      do {
        fVar2 = *pfVar10;
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar10 = pfVar10 + 1;
        iVar5 = iVar5 + -1;
        fVar1 = fVar1 - fVar2 * fVar3;
      } while (iVar5 != 0);
    }
    *param_3 = fVar1;
    iVar8 = iVar8 + 1;
    param_3 = param_3 + 1;
  } while (iVar8 < 3);
  pfVar10 = (float *)(param_1 + 0x28);
  iVar6 = 3;
  iVar8 = 8;
  do {
    fVar1 = *(float *)((int)pfVar4 + iVar8);
    if (iVar6 < 3) {
      pfVar9 = (float *)((int)pfVar4 + iVar8 + 4);
      pfVar7 = (float *)(param_1 + (iVar6 + iVar8) * 4);
      iVar5 = 3 - iVar6;
      do {
        fVar2 = *pfVar7;
        fVar3 = *pfVar9;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
        iVar5 = iVar5 + -1;
        fVar1 = fVar1 - fVar2 * fVar3;
      } while (iVar5 != 0);
    }
    fVar2 = *pfVar10;
    pfVar10 = pfVar10 + -5;
    iVar5 = iVar6 + -2;
    *(float *)((int)pfVar4 + iVar8) = fVar1 / fVar2;
    iVar6 = iVar6 + -1;
    iVar8 = iVar8 + -4;
  } while (-1 < iVar5);
  return;
}

