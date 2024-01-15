#include "prototype.h"


int FUN_00445c90(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0x40000000;
  iVar3 = 0x1f;
  do {
    if (iVar3 == 0) break;
    uVar2 = uVar1 & param_1;
    uVar1 = (int)uVar1 >> 1;
    iVar3 = iVar3 + -1;
  } while (uVar2 == 0);
  iVar3 = uVar1 * 2;
  if (iVar3 < (int)param_1) {
    iVar3 = uVar1 << 2;
  }
  if (iVar3 < 0x10) {
    iVar3 = 0x10;
  }
  return iVar3;
}

