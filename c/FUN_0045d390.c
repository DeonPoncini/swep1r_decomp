#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045d390(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00450b30(0x54657374,0);
  if (iVar1 == 0) {
    return (float10)_DAT_004ad224;
  }
  if (DAT_00e2899c == 0) {
    return (float10)_DAT_004ad224;
  }
  fVar2 = (float10)FUN_0047f810(*(int *)(DAT_00e2899c + 0x84) + 0xac);
  return fVar2;
}

