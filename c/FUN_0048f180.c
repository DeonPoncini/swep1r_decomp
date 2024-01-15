#include "prototype.h"


void FUN_0048f180(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x88) != -1) {
    FUN_0048f210(*(int *)(DAT_00deb110 + 4) + *(int *)(param_1 + 0x88) * 0x94,param_1 + 0xc0,
                 param_1 + 0xf4,*(undefined4 *)(param_1 + 0xf0));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar1 = *(int *)(param_1 + 0x94);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        if ((*(int *)(DAT_00df7ef8 + 0x24) == 0) ||
           (*(int *)(*(int *)(DAT_00df7ef8 + 0x24) + *(int *)(iVar1 + 0x80) * 4) == 0)) {
          FUN_0048f180(iVar1);
        }
        iVar1 = *(int *)(iVar1 + 0x98);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
  }
  return;
}

