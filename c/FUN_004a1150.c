#include "prototype.h"


int FUN_004a1150(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}

