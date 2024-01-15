#include "prototype.h"


void FUN_00490060(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004925d0(DAT_00df7f2c + 8,param_1);
  puVar2 = &DAT_00ecc440;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00492960(&DAT_00ecc440,&DAT_00df7f20);
  return;
}

