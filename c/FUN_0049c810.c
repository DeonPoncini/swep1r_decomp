#include "prototype.h"


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

