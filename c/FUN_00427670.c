#include "prototype.h"


uint FUN_00427670(int param_1,uint param_2)

{
  return *(uint *)(&DAT_00e9ed60 + param_1 * 4) & param_2;
}

