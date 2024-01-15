#include "prototype.h"


int FUN_0047c0f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00e27000;
  do {
    if ((*piVar1 == 0) || (*piVar1 == param_1)) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xe270c8);
  if ((&DAT_00e27000)[iVar2] != 0) {
    return iVar2 * 0x58 + 0xe25e80;
  }
  return 0;
}

