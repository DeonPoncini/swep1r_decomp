#include "prototype.h"


void FUN_00414eb0(int param_1)

{
  if (DAT_004d878c != 0) {
    *(uint *)(DAT_004d878c + 0x20) = *(uint *)(DAT_004d878c + 0x20) & 0xffffffef;
  }
  FUN_004151a0(DAT_004d878c,1,0,0);
  DAT_004d878c = param_1;
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x10;
  }
  FUN_004151a0(param_1,1,1,0);
  return;
}

