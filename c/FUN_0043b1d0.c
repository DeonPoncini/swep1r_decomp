#include "prototype.h"


void FUN_0043b1d0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  DAT_00e295d0 = 0;
  iVar3 = 0;
  cVar2 = *(char *)(param_1 + 0x5e);
  iVar1 = (int)cVar2;
  if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
    do {
      if (*(int *)(&DAT_004c0018 + (iVar1 * 7 + iVar3) * 4) == (int)*(char *)(param_1 + 0x5d)) {
        return;
      }
      iVar1 = FUN_00440aa0(param_1,cVar2,iVar3);
      if (iVar1 != 0) {
        DAT_00e295d0 = DAT_00e295d0 + 1;
      }
      cVar2 = *(char *)(param_1 + 0x5e);
      iVar3 = iVar3 + 1;
      iVar1 = (int)cVar2;
    } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
  }
  return;
}

