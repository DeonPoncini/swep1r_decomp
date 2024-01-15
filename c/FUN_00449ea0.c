#include "prototype.h"


void FUN_00449ea0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00449e00(&DAT_00e67e40 + iVar1);
    FUN_00449e00((int)&DAT_00e68060 + iVar1);
    *(undefined4 *)((int)&DAT_00e67c40 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00e67c48 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00e67c44 + iVar1) = 1;
    iVar1 = iVar1 + 0x44;
  } while (iVar1 < 0x220);
  return;
}

