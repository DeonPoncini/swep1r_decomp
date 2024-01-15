#include "prototype.h"


uint FUN_0044e460(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_00e360a4 == 0) {
    FUN_0044e4a0();
  }
  uVar1 = 0xffffffff;
  if (0 < param_2) {
    do {
      uVar1 = uVar1 << 8 ^ (&DAT_00e360a0)[uVar1 >> 0x18 ^ (uint)*param_1];
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return ~uVar1;
}

