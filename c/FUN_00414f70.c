#include "prototype.h"


void FUN_00414f70(int param_1)

{
  if ((param_1 == 0) ||
     ((*(int *)(param_1 + 0x18) != 0 && ((*(uint *)(param_1 + 0x20) & 0x100) == 0)))) {
    if (DAT_004d8794 != 0) {
      *(uint *)(DAT_004d8794 + 0x20) = *(uint *)(DAT_004d8794 + 0x20) & 0xffffffdf;
    }
    FUN_004151a0(DAT_004d8794,0xd,0,0);
    DAT_004d8794 = param_1;
    if (param_1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
    }
    FUN_004151a0(DAT_004d8794,0xd,1,0);
  }
  return;
}

