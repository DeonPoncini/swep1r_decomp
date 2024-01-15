#include "prototype.h"


void FUN_004130e0(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x60 + param_2 * 0x38) =
         *(uint *)(param_1 + 0x60 + param_2 * 0x38) | 0x20000;
    return;
  }
  *(uint *)(param_1 + 0x60 + param_2 * 0x38) =
       *(uint *)(param_1 + 0x60 + param_2 * 0x38) & 0xfffdffff;
  return;
}

