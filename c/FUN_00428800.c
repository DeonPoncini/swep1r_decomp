#include "prototype.h"


void FUN_00428800(short param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) = *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) & ~param_2;
  return;
}

