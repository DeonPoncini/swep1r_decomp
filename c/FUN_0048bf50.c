#include "prototype.h"


int FUN_0048bf50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_004aeeb0;
  do {
    if (param_1 < *piVar1) {
      iVar2 = (&DAT_004aeeb0)[iVar3];
      break;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + 1;
    iVar2 = param_1;
  } while ((int)piVar1 < 0x4aef30);
  if (1999 < param_1) {
    iVar2 = FUN_0048bf90(param_1);
  }
  return iVar2;
}

