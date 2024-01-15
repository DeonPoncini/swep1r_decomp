#include "prototype.h"


int FUN_0047c130(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &DAT_00e27000;
  do {
    if ((*piVar2 == 0) || (*piVar2 == param_1)) break;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0xe270c8);
  if ((&DAT_00e27000)[iVar3] == 0) {
    iVar1 = iVar3 * 0x58 + 0xe25e80;
    FUN_00431b20(iVar1,0xd065);
    (&DAT_00e27000)[iVar3] = param_1;
    return iVar1;
  }
  return 0;
}

