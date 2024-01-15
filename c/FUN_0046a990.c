#include "prototype.h"


void FUN_0046a990(int param_1,int param_2)

{
  if (((&DAT_00e98e90)[param_2] & 0x2000) != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x1000) == 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
  }
  return;
}

