#include "prototype.h"


void FUN_00445200(float *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0050c5e8 < 0x20) {
    iVar1 = DAT_0050c5e8 + 1;
    iVar2 = iVar1 * 0x40;
    DAT_0050c5e8 = iVar1;
    *(float *)(&DAT_00e985c0 + iVar2) =
         *(float *)(&DAT_00e98590 + iVar2) * param_1[1] +
         param_1[3] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e985a0 + iVar2) * param_1[2] +
         *param_1 * *(float *)(&DAT_00e98580 + iVar2);
    *(float *)(&DAT_00e985c4 + iVar2) =
         *(float *)(&DAT_00e98594 + iVar2) * param_1[1] +
         *(float *)(&DAT_00e985a4 + iVar2) * param_1[2] +
         *(float *)(&DAT_00e985b4 + iVar2) * param_1[3] +
         *param_1 * *(float *)(&DAT_00e98584 + iVar2);
    *(float *)(&DAT_00e985c8 + iVar2) =
         *(float *)(&DAT_00e985b8 + iVar2) * param_1[3] +
         *(float *)(&DAT_00e985a8 + iVar2) * param_1[2] +
         *(float *)(&DAT_00e98598 + iVar2) * param_1[1] +
         *param_1 * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985cc + iVar2) =
         *(float *)(&DAT_00e985bc + iVar2) * param_1[3] +
         *(float *)(&DAT_00e9859c + iVar2) * param_1[1] +
         (float)(&DAT_00e985ac)[iVar1 * 0x10] * param_1[2] +
         *param_1 * *(float *)(&DAT_00e9858c + iVar2);
    *(float *)(&DAT_00e985d0 + iVar2) =
         param_1[5] * *(float *)(&DAT_00e98590 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[4];
    *(float *)(&DAT_00e985d4 + iVar2) =
         param_1[4] * *(float *)(&DAT_00e98584 + iVar2) +
         param_1[5] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b4 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e985a4 + iVar2);
    *(float *)(&DAT_00e985d8 + iVar2) =
         param_1[6] * *(float *)(&DAT_00e985a8 + iVar2) +
         param_1[5] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[4] * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985dc + iVar2) =
         param_1[4] * *(float *)(&DAT_00e9858c + iVar2) +
         param_1[5] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985bc + iVar2) +
         param_1[6] * (float)(&DAT_00e985ac)[iVar1 * 0x10];
    *(float *)(&DAT_00e985e0 + iVar2) =
         param_1[0xb] * *(float *)(&DAT_00e985b0 + iVar2) +
         param_1[10] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98590 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[8];
    *(float *)(&DAT_00e985e4 + iVar2) =
         param_1[10] * *(float *)(&DAT_00e985a4 + iVar2) +
         param_1[0xb] * *(float *)(&DAT_00e985b4 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[8] * *(float *)(&DAT_00e98584 + iVar2);
    *(float *)(&DAT_00e985e8 + iVar2) =
         param_1[0xb] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[10] * *(float *)(&DAT_00e985a8 + iVar2) +
         param_1[8] * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985ec + iVar2) =
         param_1[10] * (float)(&DAT_00e985ac)[iVar1 * 0x10] +
         param_1[0xb] * *(float *)(&DAT_00e985bc + iVar2) +
         param_1[9] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[8] * *(float *)(&DAT_00e9858c + iVar2);
    *(float *)(&DAT_00e985f0 + iVar2) =
         param_1[0xe] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98590 + iVar2) +
         param_1[0xf] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[0xc];
    *(float *)(&DAT_00e985f4 + iVar2) =
         param_1[0xc] * *(float *)(&DAT_00e98584 + iVar2) +
         param_1[0xe] * *(float *)(&DAT_00e985a4 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[0xf] * *(float *)(&DAT_00e985b4 + iVar2);
    *(float *)(&DAT_00e985f8 + iVar2) =
         param_1[0xf] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[0xc] * *(float *)(&DAT_00e98588 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[0xe] * *(float *)(&DAT_00e985a8 + iVar2);
    *(float *)(&DAT_00e985fc + iVar2) =
         param_1[0xd] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[0xc] * *(float *)(&DAT_00e9858c + iVar2) +
         param_1[0xe] * (float)(&DAT_00e985ac)[iVar1 * 0x10] +
         param_1[0xf] * *(float *)(&DAT_00e985bc + iVar2);
  }
  return;
}

