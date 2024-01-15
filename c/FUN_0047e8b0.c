#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e8b0(short **param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  
  psVar2 = (short *)(param_2 / 10);
  psVar1 = *param_1;
  if ((int)psVar2 < *(int *)(psVar1 + 2)) {
    param_1[4] = psVar2;
    psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar2 * 0x54);
    param_1[5] = psVar4;
    if (*psVar1 != 1) {
      psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar4 * 0x54);
      param_1[6] = psVar4;
      param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 + (int)psVar4 * 0x54);
    }
    param_1[0xb] = (short *)0x0;
    param_1[2] = (short *)(((float)param_2 - (float)(int)psVar2 * _DAT_004adf38) * _DAT_004adf3c);
  }
  else {
    psVar4 = (short *)0x0;
    if (0 < *(int *)(psVar1 + 2)) {
      do {
        psVar3 = (short *)0x0;
        do {
          if ((short *)(int)*(short *)(*(int *)(psVar1 + 6) + 0x42 +
                                      (int)(psVar3 + (int)psVar4 * 0x15) * 2) == psVar2) {
            param_1[4] = psVar4;
            param_1[0xb] = psVar3;
            param_1[2] = (short *)(((float)param_2 - (float)(int)psVar2 * _DAT_004adf38) *
                                  _DAT_004adf3c);
            psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                             (((uint)psVar3 & 1) + (int)psVar4 * 0x2a) * 2);
            param_1[5] = psVar4;
            if (*psVar1 != 1) {
              psVar4 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                               (((int)psVar3 >> 1 & 1U) + (int)psVar4 * 0x2a) * 2);
              param_1[6] = psVar4;
              param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + 4 +
                                                   (((int)psVar3 >> 2 & 1U) + (int)psVar4 * 0x2a) *
                                                   2);
            }
            psVar3 = (short *)0x1869f;
            psVar4 = (short *)0x1869f;
          }
          psVar3 = (short *)((int)psVar3 + 1);
        } while ((int)psVar3 < 8);
        psVar4 = (short *)((int)psVar4 + 1);
      } while ((int)psVar4 < *(int *)(psVar1 + 2));
      return;
    }
  }
  return;
}

