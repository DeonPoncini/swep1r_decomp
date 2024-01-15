#include "prototype.h"


void FUN_00426810(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | param_2;
  return;
}

