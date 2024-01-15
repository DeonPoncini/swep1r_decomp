#include "prototype.h"


void FUN_00414e30(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return;
}

