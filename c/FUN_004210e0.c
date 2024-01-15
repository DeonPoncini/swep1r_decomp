#include "prototype.h"


void FUN_004210e0(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0xb0;
  if (param_1 < 0x14) {
    (&DAT_00e9f448)[param_1 * 0x2c] = 0;
    *(undefined2 *)(&DAT_00e9f3c4 + iVar1) = 0;
    *(undefined2 *)(&DAT_00e9f404 + iVar1) = 0;
    *(uint *)(&DAT_00e9f444 + iVar1) = *(uint *)(&DAT_00e9f444 + iVar1) & 0xfffffffa;
  }
  return;
}

