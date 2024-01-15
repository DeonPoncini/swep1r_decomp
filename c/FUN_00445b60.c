#include "prototype.h"


int FUN_00445b60(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_0050c614 + -1;
  if (0 < iVar1) {
    puVar2 = &DAT_00e98200 + iVar1;
    do {
      if (*puVar2 <= param_1) break;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (0 < iVar1);
  }
  return iVar1 + 1;
}

