#include "prototype.h"


void FUN_00426920(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_004c2584 == 0) && (-1 < DAT_004b8544)) {
    iVar1 = __ftol(DAT_004b8548);
    iVar2 = FUN_00445690(iVar1);
    if (iVar2 != 0) {
      FUN_004456a0((float)iVar1);
      iVar1 = __ftol();
    }
    FUN_00426cc0(DAT_004b8544,7,0x3e800000,(float)iVar1,1);
  }
  return;
}

