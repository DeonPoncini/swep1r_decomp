#include "prototype.h"


void FUN_004276a0(int param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ed60 + param_1 * 4) = *(uint *)(&DAT_00e9ed60 + param_1 * 4) & ~param_2;
  return;
}

