#include "prototype.h"


void FUN_0046e150(int param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x60) & 0x20) != 0) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
    if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x10000) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 8);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x18);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x2c);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0xfc);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x18);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x28);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0xf8);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        return;
      }
    }
  }
  return;
}

