#include "prototype.h"


void FUN_0046d100(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 0x1000) != 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe3fff;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffffefff;
    if (((byte)(uVar1 & 0xffffefff) & 0xf) == 2) {
      if ((uVar1 & 0x4000) == 0) {
        FUN_00474970(param_1,0);
      }
      if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
        FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xe,0xe,0xe,0xe,0xe,
                     param_1 + 0x50);
      }
    }
  }
  return;
}

