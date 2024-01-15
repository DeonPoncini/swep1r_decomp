#include "prototype.h"


int FUN_00426740(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (iVar3 = 0, 0 < DAT_0050b5ec)) {
    piVar2 = &DAT_00e9edc0;
    do {
      iVar1 = *piVar2;
      if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 0x100) & 0x80000000) == 0)) &&
          (param_2 == (*(uint *)(iVar1 + 0x100) & 0xf))) && (param_1 == *(int *)(iVar1 + 0x124))) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < DAT_0050b5ec);
  }
  return 0;
}

