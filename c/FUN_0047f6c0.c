#include "prototype.h"


void FUN_0047f6c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(&DAT_00e23240 + param_1 * 0x28);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (&DAT_00e22a60)[param_1 * 2] = 0;
  *(undefined4 *)(&DAT_00e22a64 + param_1 * 8) = 0;
  return;
}

