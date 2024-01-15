#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004651a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_00448780(0x92);
  FUN_00448bd0(puVar1);
  _DAT_00e277e0 = *puVar1;
  piVar2 = (int *)FUN_00448780(0x31);
  FUN_00448bd0(piVar2);
  _DAT_00e28964 = **(undefined4 **)(*piVar2 + 0x18);
  return;
}

