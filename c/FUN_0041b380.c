#include "prototype.h"


undefined4 FUN_0041b380(int param_1)

{
  int iVar1;
  
  if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
    return 1;
  }
  if (((*(uint *)(param_1 + 0x20) & 4) == 0) && ((*(uint *)(param_1 + 0x20) & 0x100) == 0)) {
    iVar1 = FUN_00414e80(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

