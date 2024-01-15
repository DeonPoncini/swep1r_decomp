#include "prototype.h"


void FUN_00432580(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1c + iVar2) = DAT_00e996a4;
      iVar2 = iVar2 + 0x48;
    } while (uVar1 < *(uint *)(param_1 + 0x7c));
  }
  return;
}

