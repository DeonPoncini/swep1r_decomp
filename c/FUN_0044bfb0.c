#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bfb0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = DAT_0050c6f4;
  iVar3 = DAT_0050c6f4 * 0x30;
  pfVar1 = (float *)(&DAT_00e37590 + iVar3);
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375b4 + iVar3) = *(float *)(&DAT_00e375b4 + iVar3) - _DAT_0050c6e8;
    *(float *)(&DAT_00e375b8 + iVar3) = *(float *)(&DAT_00e375b8 + iVar3) - _DAT_0050c6ec;
    *(float *)(&DAT_00e375bc + iVar3) = *(float *)(&DAT_00e375bc + iVar3) - _DAT_0050c6f0;
  }
  local_40 = *pfVar1 * _DAT_00e37580 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37590 +
             *(float *)(&DAT_00e37598 + iVar3) * _DAT_00e375a0;
  local_3c = *pfVar1 * _DAT_00e37584 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37594 +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375a4;
  local_38 = *pfVar1 * _DAT_00e37588 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37598 +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375a8;
  local_34 = *pfVar1 * _DAT_00e3758c +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e3759c +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375ac;
  local_30 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37580 +
             (&DAT_00e375a4)[iVar2 * 0xc] * _DAT_00e375a0 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37590;
  local_2c = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37584 +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375a4 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37594;
  local_28 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37588 +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375a8 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37598;
  local_24 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e3758c +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375ac +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e3759c;
  local_20 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37580 +
             (&DAT_00e375b0)[iVar2 * 0xc] * _DAT_00e375a0 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37590;
  local_1c = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37584 +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375a4 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37594;
  local_18 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37588 +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375a8 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37598;
  local_14 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e3758c +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375ac +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e3759c;
  local_10 = *(float *)(&DAT_00e375bc + iVar3) * _DAT_00e375a0 +
             *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37590 +
             *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37580 + DAT_00e375b0;
  local_c = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375a4 +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37594 +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37584 + _DAT_00e375b4;
  local_8 = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375a8 +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37598 +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37588 + _DAT_00e375b8;
  local_4 = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375ac +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e3759c +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e3758c + _DAT_00e375bc;
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375b4 + iVar3) = _DAT_0050c6e8 + *(float *)(&DAT_00e375b4 + iVar3);
    *(float *)(&DAT_00e375b8 + iVar3) = _DAT_0050c6ec + *(float *)(&DAT_00e375b8 + iVar3);
    *(float *)(&DAT_00e375bc + iVar3) = _DAT_0050c6f0 + *(float *)(&DAT_00e375bc + iVar3);
  }
  uVar4 = FUN_0044b660();
  FUN_0044bad0(uVar4,pfVar1);
  uVar4 = FUN_0044b660();
  FUN_0044bb10(uVar4,&local_40);
  *(float *)(param_1 + 0xf4) = *pfVar1;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(&DAT_00e37594 + iVar3);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(&DAT_00e37598 + iVar3);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(&DAT_00e3759c + iVar3);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(&DAT_00e375a0 + iVar3);
  *(float *)(param_1 + 0x108) = (&DAT_00e375a4)[iVar2 * 0xc];
  *(float *)(param_1 + 0x10c) = (&DAT_00e375a8)[iVar2 * 0xc];
  *(float *)(param_1 + 0x110) = (&DAT_00e375ac)[iVar2 * 0xc];
  *(float *)(param_1 + 0x114) = (&DAT_00e375b0)[iVar2 * 0xc];
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(&DAT_00e375b4 + iVar3);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(&DAT_00e375b8 + iVar3);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(&DAT_00e375bc + iVar3);
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}

