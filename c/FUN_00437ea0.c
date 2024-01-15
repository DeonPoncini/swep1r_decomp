#include "prototype.h"


void FUN_00437ea0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00427670(0,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_00427670(0,0x20);
    if (iVar1 != 0) {
      FUN_004276a0(0,0x20);
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar1 = FUN_00427670(0,2);
        if (iVar1 == 0) {
          FUN_00427690(0,2);
          FUN_00427410(2,0,1,0);
          return;
        }
        FUN_00427590(2,0,0x16,0x17,0x1e,0x1f,0x38,0);
        return;
      }
      iVar1 = FUN_00427670(0,8);
      if (iVar1 == 0) {
        FUN_00427690(0,8);
        FUN_00427410(2,0,0xf,0);
        return;
      }
      FUN_00427590(2,0,0x29,0x2e,0x2f,0x30,0xc,0);
    }
  }
  return;
}

