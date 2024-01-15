#include "prototype.h"


void FUN_00454c90(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004258e0();
  iVar2 = 0;
  do {
    if (*(int *)((int)&DAT_00e29900 + iVar2) != 0) {
      uVar1 = FUN_00448bd0(*(int *)((int)&DAT_00e29900 + iVar2));
      *(undefined4 *)((int)&DAT_00e2afa0 + iVar2) = uVar1;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x25c);
  return;
}

