#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d4c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    _DAT_004c7a50 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + iVar2);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 300);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0xf4);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = 0xf8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + iVar2);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x101);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x40);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x38);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x3c);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
  }
  return;
}

