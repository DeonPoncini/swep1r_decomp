#include "prototype.h"


uint FUN_004a1210(short *param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  do {
    psVar2 = psVar2 + -1;
    if (psVar2 == param_1) break;
  } while (*psVar2 != param_2);
  return (uint)psVar2 & (*psVar2 != param_2) - 1;
}

