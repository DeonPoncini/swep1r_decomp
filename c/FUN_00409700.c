#include "prototype.h"


void FUN_00409700(short param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = param_1 * 0x10;
  puVar2 = &DAT_004b4688 + param_1 * 4;
  do {
    *(undefined4 *)((int)&DAT_004b4348 + iVar1 + iVar3) =
         *(undefined4 *)((int)&DAT_004b4348 + iVar1);
    *(undefined4 *)((int)&DAT_004b4418 + iVar1 + iVar3) =
         *(undefined4 *)((int)&DAT_004b4418 + iVar1);
    *puVar2 = *(undefined4 *)((int)&DAT_004b4688 + iVar1);
    iVar1 = iVar1 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  return;
}

