#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044fce0(char *param_1,float param_2)

{
  if ((param_1 != (char *)0x0) && ((float)_DAT_004acd08 < param_2)) {
    if ((*param_1 == '~') && (param_1[1] == '_')) {
      DAT_0050c870 = 1;
      param_1 = param_1 + 2;
    }
    else {
      DAT_0050c870 = 0;
    }
    FUN_0049eb80(&DAT_0050c770,&DAT_004b2304,param_1);
    _DAT_004c3e40 = param_2;
    _DAT_004c3e44 = 0x3f800000;
  }
  return;
}

