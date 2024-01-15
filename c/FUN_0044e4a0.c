#include "prototype.h"


void FUN_0044e4a0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  puVar2 = &DAT_00e360a0;
  do {
    iVar4 = 8;
    uVar1 = iVar3 << 0x18;
    do {
      if ((uVar1 & 0x80000000) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 * 2 ^ 0x4c11db7;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0xe364a0);
  return;
}

