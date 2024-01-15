#include "prototype.h"


void FUN_00411490(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  }
  return;
}

