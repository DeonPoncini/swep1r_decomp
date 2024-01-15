#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460320(void)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_004456a0();
  if (fVar2 <= (float10)_DAT_004ad218) {
    FUN_004285d0(0x1a,0);
    return;
  }
  FUN_004285d0(0x1a,1);
  uVar1 = __ftol(_DAT_004ad358 - (_DAT_004ad22c - (float)fVar2) * _DAT_004ad354);
  FUN_00428660(0x1a,0xa0,uVar1);
  FUN_004286f0(0x1a,0x42020000,0x407a0000);
  uVar1 = __ftol();
  FUN_00428740(0x1a,0,0x37,0x47,uVar1);
  uVar1 = __ftol();
  uVar1 = __ftol(0xdc,uVar1);
  FUN_00484020(0x5f,uVar1);
  return;
}

