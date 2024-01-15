#include "prototype.h"


void FUN_0045e1a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045e120(0x40);
  if (iVar1 != 0) {
    if (DAT_0050ca18 < 2) {
      iVar1 = *(int *)(param_1 + 0x124) + 1;
      *(int *)(param_1 + 0x124) = iVar1;
      if (4 < iVar1) {
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x124) + 1;
      *(int *)(param_1 + 0x124) = iVar1;
      if (7 < iVar1) {
        *(undefined4 *)(param_1 + 0x124) = 4;
        return;
      }
    }
  }
  return;
}

