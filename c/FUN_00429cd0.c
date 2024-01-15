#include "prototype.h"


void FUN_00429cd0(int param_1)

{
  (&DAT_0050c070)[DAT_0050c07c] = DAT_0050c04c;
  DAT_00e9a9b4 = DAT_00e9a9b4 + 1;
  DAT_0050c07c = param_1;
  DAT_0050c04c = (&DAT_0050c070)[param_1];
  (&DAT_00e9a9c0)[DAT_00e9a9b4] = param_1;
  return;
}

