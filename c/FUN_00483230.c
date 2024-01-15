#include "prototype.h"


void FUN_00483230(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_00dfb040 + param_1 * 0x16c);
  if (param_2 < 0) {
    (&DAT_00dfb044)[param_1 * 0x5b] = param_2;
    *(uint *)(&DAT_00dfb040 + param_1 * 0x16c) = uVar1 & 0xfffffffe;
    return;
  }
  (&DAT_00dfb044)[param_1 * 0x5b] = param_2;
  *(uint *)(&DAT_00dfb040 + param_1 * 0x16c) = uVar1 | 1;
  return;
}

