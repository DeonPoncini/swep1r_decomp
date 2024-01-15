#include "prototype.h"


uint FUN_0049f820(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004a3cc0();
  uVar1 = *(int *)(iVar2 + 0x14) * 0x343fd + 0x269ec3;
  *(uint *)(iVar2 + 0x14) = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}

