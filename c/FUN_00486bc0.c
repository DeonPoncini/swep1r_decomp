#include "prototype.h"


uint FUN_00486bc0(int param_1)

{
  uint uVar1;
  
  if (DAT_00510254 == (int *)0x0) {
    return 0x887700fa;
  }
  uVar1 = (**(code **)(*DAT_00510254 + 0x98))(DAT_00510254,(&DAT_00510370)[param_1 * 0x46],0);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

