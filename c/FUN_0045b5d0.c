#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b5d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = *(char *)(param_1 + 0x70);
  DAT_004c3fe8 = 0xffffffff;
  iVar2 = 0;
  DAT_004c3fec = 0xffffffff;
  _DAT_004c3ff0 = 0xffffffff;
  _DAT_004c3ff4 = 0xffffffff;
  if (0 < cVar1) {
    piVar3 = &DAT_004c3fe8;
    do {
      *piVar3 = iVar2;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < cVar1);
  }
  return;
}

