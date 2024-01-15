#include "prototype.h"


void FUN_0044eef0(short **param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = *param_1;
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_2;
  param_1[7] = param_2;
  if (*(short *)(*(int *)(psVar1 + 6) + (int)param_2 * 0x54) != 0) {
    psVar2 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)param_2 * 0x54 + 4);
    param_1[5] = psVar2;
    if ((*psVar1 == 0) && (*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54) != 0)) {
      psVar2 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54 + 4);
      param_1[6] = psVar2;
      if (*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54) != 0) {
        param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54 + 4);
      }
    }
  }
  return;
}

