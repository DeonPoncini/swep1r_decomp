#include "prototype.h"


void FUN_0041d8d0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40000;
    iVar1 = **(int **)(param_1 + 0x1e70);
    FUN_0041df10(0xffffffff,1,0x68656c6c,iVar1);
    (&DAT_00ea05c0)[iVar1 * 4] = 0x29a;
    (&DAT_00ea05c4)[iVar1 * 4] = 0;
    (&DAT_00ea05c8)[iVar1 * 4] = 0;
    (&DAT_00ea05cc)[iVar1 * 4] = 0;
  }
  return;
}

