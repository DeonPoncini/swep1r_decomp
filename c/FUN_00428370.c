#include "prototype.h"


void FUN_00428370(void)

{
  int iVar1;
  
  FUN_00412e20();
  iVar1 = 0;
  if (0 < DAT_004b91b8) {
    do {
      FUN_004282f0(iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_004b91b8);
  }
  DAT_004b91b8 = 0;
  return;
}

