#include "prototype.h"


void FUN_0044b7e0(float *param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_004c3c0c = 1;
  if (DAT_0050c6f4 < 0x20) {
    iVar1 = DAT_0050c6f4 + 1;
    iVar2 = iVar1 * 0x30;
    DAT_0050c6f4 = iVar1;
    *(float *)(&DAT_00e375c0 + iVar2) =
         (float)(&DAT_00e375a8)[iVar1 * 0xc] * param_1[2] +
         *(float *)(&DAT_00e3759c + iVar2) * param_1[1] +
         *(float *)(&DAT_00e37590 + iVar2) * *param_1;
    *(float *)(&DAT_00e375c4 + iVar2) =
         *(float *)(&DAT_00e375a0 + iVar2) * param_1[1] +
         (float)(&DAT_00e375ac)[iVar1 * 0xc] * param_1[2] +
         *param_1 * *(float *)(&DAT_00e37594 + iVar2);
    *(float *)(&DAT_00e375c8 + iVar2) =
         param_1[1] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[2] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         *param_1 * *(float *)(&DAT_00e37598 + iVar2);
    *(float *)(&DAT_00e375cc + iVar2) =
         *(float *)(&DAT_00e3759c + iVar2) * param_1[4] +
         (float)(&DAT_00e375a8)[iVar1 * 0xc] * param_1[5] +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[3];
    *(float *)(&DAT_00e375d0 + iVar2) =
         *(float *)(&DAT_00e375a0 + iVar2) * param_1[4] +
         (float)(&DAT_00e375ac)[iVar1 * 0xc] * param_1[5] +
         param_1[3] * *(float *)(&DAT_00e37594 + iVar2);
    *(float *)(&DAT_00e375d4 + iVar2) =
         param_1[4] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[5] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[3] * *(float *)(&DAT_00e37598 + iVar2);
    *(float *)(&DAT_00e375d8 + iVar2) =
         param_1[7] * *(float *)(&DAT_00e3759c + iVar2) +
         param_1[8] * (float)(&DAT_00e375a8)[iVar1 * 0xc] +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[6];
    *(float *)(&DAT_00e375dc + iVar2) =
         param_1[7] * *(float *)(&DAT_00e375a0 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e37594 + iVar2) +
         param_1[8] * (float)(&DAT_00e375ac)[iVar1 * 0xc];
    *(float *)(&DAT_00e375e0 + iVar2) =
         param_1[6] * *(float *)(&DAT_00e37598 + iVar2) +
         param_1[8] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[7] * (float)(&DAT_00e375a4)[iVar1 * 0xc];
    *(float *)(&DAT_00e375e4 + iVar2) =
         param_1[0xb] * (float)(&DAT_00e375a8)[iVar1 * 0xc] +
         param_1[10] * *(float *)(&DAT_00e3759c + iVar2) +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[9] + *(float *)(&DAT_00e375b4 + iVar2);
    *(float *)(&DAT_00e375e8 + iVar2) =
         param_1[10] * *(float *)(&DAT_00e375a0 + iVar2) +
         param_1[0xb] * (float)(&DAT_00e375ac)[iVar1 * 0xc] +
         param_1[9] * *(float *)(&DAT_00e37594 + iVar2) + *(float *)(&DAT_00e375b8 + iVar2);
    *(float *)(&DAT_00e375ec + iVar2) =
         param_1[10] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[0xb] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[9] * *(float *)(&DAT_00e37598 + iVar2) + *(float *)(&DAT_00e375bc + iVar2);
  }
  return;
}

