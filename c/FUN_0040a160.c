#include "prototype.h"


int FUN_0040a160(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = 0;
  puVar2 = &DAT_004d6f10;
  do {
    if (param_1 <= *puVar2) break;
    puVar2 = puVar2 + 0x5d;
    iVar1 = iVar1 + 1;
  } while ((int)puVar2 < 0x4d77c8);
  if (5 < iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}

