#include "prototype.h"


int FUN_004136f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    do {
      if (*(int *)(iVar2 + 0x4d4) != 0) {
        iVar1 = FUN_0049ec50(*(int *)(iVar2 + 0x4d4),param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
    return 0;
  }
  return 0;
}

