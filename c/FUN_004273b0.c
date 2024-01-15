#include "prototype.h"


int FUN_004273b0(undefined2 param_1)

{
  int iVar1;
  
  (&DAT_004b85e0)[DAT_0050b6dc] = param_1;
  iVar1 = DAT_0050b6dc + 1;
  DAT_0050b6dc = (short)(iVar1 % 3);
  return iVar1 / 3;
}

