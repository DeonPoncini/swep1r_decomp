#include "prototype.h"


int FUN_0045bab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x72);
    iVar2 = 0;
    if (0 < iVar5) {
      piVar4 = &DAT_00e29bc4;
      do {
        if ((*(char *)(iVar2 + 0x73 + param_1) == (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc])
           && (*piVar4 == 0x41414949)) {
          iVar1 = iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x22;
      } while (iVar2 < iVar5);
    }
    if (iVar1 == -1) {
      piVar4 = &DAT_00e29bc4;
      iVar2 = iVar1;
      iVar3 = 0;
      do {
        iVar1 = iVar3;
        if (iVar5 <= iVar1) {
          return iVar2;
        }
        iVar3 = iVar1;
        if (*piVar4 != 0x41414949) {
          iVar3 = iVar1 + 1;
          piVar4 = piVar4 + 0x22;
          iVar1 = iVar2;
        }
        iVar2 = iVar1;
      } while (iVar1 == -1);
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(char *)(param_1 + 0x72)) {
      do {
        if (*(char *)(iVar2 + 0x73 + param_1) == (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc]) {
          iVar1 = iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(char *)(param_1 + 0x72));
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  return iVar1;
}

