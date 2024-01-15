#include "prototype.h"


void FUN_0045d0b0(int param_1,undefined4 param_2)

{
  if (DAT_0050ca34 == 0) {
    DAT_0050ca34 = 1;
    FUN_004258e0();
    *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x128) = param_2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff6 | 6;
    FUN_00450db0(0x54657374);
    FUN_00450db0(0x546f7373);
    FUN_00450db0(0x536d6f6b);
    FUN_00450db0(0x54726967);
    FUN_00450db0(0x43687372);
  }
  return;
}

