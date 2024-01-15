#include "prototype.h"


void FUN_0042c490(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 < 0x28) {
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_00e99e20 + iVar1) = *param_2;
    *(undefined4 *)(&DAT_00e99e24 + iVar1) = param_2[1];
    *(undefined4 *)(&DAT_00e99e28 + iVar1) = param_2[2];
    (&DAT_00e99d80)[param_1] = 0xc47a0000;
    (&DAT_00e9a6e0)[param_1] = 1;
  }
  return;
}

