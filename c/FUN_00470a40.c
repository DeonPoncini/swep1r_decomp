#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470a40(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0x60) & 0x20) == 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    if ((*(uint *)(param_1 + 0x60) & 0x100) != 0) {
      iVar1 = FUN_0045d350();
      if (iVar1 == 0) goto LAB_00470ac7;
    }
    if ((double)*(int *)(param_1 + 0x1998) < _DAT_004adae0) {
      _DAT_0050cb08 = 0;
      FUN_00426d10((int)(short)((**(byte **)(*(int *)(param_1 + 0x1e70) + 0x18) & 1) + 0xa6 +
                               (short)DAT_0050cb04),4,0x3e800000,0x3f800000,param_1 + 0x50,1,0,
                   0x41200000,0x459c4000);
      return;
    }
  }
  else {
LAB_00470ac7:
    FUN_0046d7a0(param_1,0x3f333333);
  }
  return;
}

