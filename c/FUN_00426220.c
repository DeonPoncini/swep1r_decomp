#include "prototype.h"


int FUN_00426220(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x104);
  pfVar1 = *(float **)(param_1 + 0x11c);
  if (pfVar1[iVar3 + -1] < *(float *)(param_1 + 0x114)) {
    return iVar3 + -2;
  }
  if (*(float *)(param_1 + 0x114) < *pfVar1) {
    return 0;
  }
  iVar3 = iVar3 + -2;
  pfVar2 = pfVar1 + iVar3;
  if (*(float *)(param_1 + 0x114) < pfVar1[iVar3]) {
    do {
      pfVar1 = pfVar2 + -1;
      pfVar2 = pfVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (*(float *)(param_1 + 0x114) < *pfVar1);
  }
  return iVar3;
}

