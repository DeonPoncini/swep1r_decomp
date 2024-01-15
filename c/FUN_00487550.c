#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00487550(undefined4 *param_1,undefined4 *param_2)

{
  switch(*param_1) {
  case 3:
    *param_2 = param_1[2];
    return (-(uint)(param_1[1] != 1) & 0xfffffffa) + 5;
  default:
    return -1;
  case 5:
    *param_2 = param_1[2];
    return 2;
  case 0x31:
    return 1;
  case 0x101:
    _DAT_00510258 = 1;
    return 8;
  }
}

