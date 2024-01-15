#include "prototype.h"


int FUN_00417040(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0xfb;
  piVar2 = &DAT_00e9d9dc;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0xe9ec5c);
  return 0;
}

