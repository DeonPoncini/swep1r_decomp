#include "prototype.h"


void FUN_0047bea0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(&DAT_00e25e60 + param_1 * 4);
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    FUN_00426810(iVar2,0x10000000);
    FUN_00426840(*piVar3,0);
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  return;
}

