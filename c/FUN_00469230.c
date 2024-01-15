#include "prototype.h"


undefined4 FUN_00469230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004691c0(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      FUN_00466ec0(param_1,0);
      *(undefined4 *)(param_1 + 0xb8) = 2;
      return 1;
    }
    uVar2 = 2;
  }
  FUN_00469200(param_1,uVar2);
  *(int *)(param_1 + 0xb8) = iVar1;
  return 1;
}

