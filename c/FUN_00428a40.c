#include "prototype.h"


void FUN_00428a40(int param_1,uint param_2)

{
  *(uint *)(PTR_DAT_004b91c4 + param_1 * 0x7c) =
       *(uint *)(PTR_DAT_004b91c4 + param_1 * 0x7c) | param_2;
  return;
}

