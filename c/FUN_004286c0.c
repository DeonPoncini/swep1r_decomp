#include "prototype.h"


void FUN_004286c0(short param_1,undefined2 param_2,undefined2 param_3)

{
  if (-1 < param_1) {
    *(undefined2 *)(&DAT_00e9ba64 + param_1 * 0x20) = param_2;
    *(undefined2 *)(&DAT_00e9ba66 + param_1 * 0x20) = param_3;
  }
  return;
}

