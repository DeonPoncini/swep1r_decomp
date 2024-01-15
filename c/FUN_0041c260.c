#include "prototype.h"


void FUN_0041c260(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00ea0260;
  do {
    *piVar1 = iVar2;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xea02b0);
  DAT_00ea02b0 = 0;
  DAT_00ea02b4 = 0;
  DAT_00ea02b8 = 3;
  DAT_00ea02bc = 10000;
  return;
}

