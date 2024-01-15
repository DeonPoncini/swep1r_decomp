#include "prototype.h"


void FUN_00420ff0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_00e9f444 + param_1 * 0xb0);
  (&DAT_00e9f448)[param_1 * 0x2c] = 0;
  *(uint *)(&DAT_00e9f444 + param_1 * 0xb0) = uVar1 & 0xfffffffe;
  return;
}

