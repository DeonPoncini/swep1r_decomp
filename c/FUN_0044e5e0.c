#include "prototype.h"


int FUN_0044e5e0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  if (param_3 < *(int *)(param_1 + 4)) {
    psVar1 = (short *)(*(int *)(param_1 + 0xc) + 0x40 + param_3 * 0x54);
    do {
      if (*psVar1 == param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      psVar1 = psVar1 + 0x2a;
    } while (param_3 < *(int *)(param_1 + 4));
  }
  return -1;
}

