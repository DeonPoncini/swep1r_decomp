#include "prototype.h"


void FUN_004286f0(short param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < param_1) {
    *(undefined4 *)(&DAT_00e9ba68 + param_1 * 0x20) = param_2;
    *(undefined4 *)(&DAT_00e9ba6c + param_1 * 0x20) = param_3;
  }
  return;
}

