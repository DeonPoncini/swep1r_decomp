#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004653f0(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  _DAT_00e2880c = 0;
  uVar1 = FUN_00448780(0x93);
  FUN_00448bd0(uVar1);
  piVar2 = (int *)FUN_00448780(0x13e);
  if (piVar2 != (int *)0x0) {
    DAT_00e28764 = FUN_00448bd0(piVar2);
    DAT_00e28a00 = *piVar2;
    FUN_0046d610(DAT_00e28764);
    _DAT_00e2880c = DAT_00e28a00;
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,0xfffffffc,0x10,3);
    }
    FUN_004313d0(&DAT_00e289c0);
  }
  return;
}

