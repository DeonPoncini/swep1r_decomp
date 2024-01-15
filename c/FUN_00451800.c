#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451800(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((param_3 != 0) && (*(ushort *)(param_3 + 10) != 0)) {
    if ((*(ushort *)(param_3 + 10) & 0x10) == 0) {
      *(float *)(param_1 + 0x334) = (float)(uint)*(byte *)(param_3 + 0xc);
      *(float *)(param_1 + 0x338) = (float)(uint)*(byte *)(param_3 + 0xd);
      *(float *)(param_1 + 0x33c) = (float)(uint)*(byte *)(param_3 + 0xe);
      *(float *)(param_1 + 0x34c) = (float)(uint)*(byte *)(param_3 + 0xf);
      *(float *)(param_1 + 0x350) = (float)(uint)*(byte *)(param_3 + 0x10);
      *(float *)(param_1 + 0x354) = (float)(uint)*(byte *)(param_3 + 0x11);
      *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_3 + 0x28);
      FUN_0042f9b0((undefined4 *)(param_1 + 0x358));
      puVar1 = (uint *)(param_1 + 0x330);
      if ((*(byte *)(param_3 + 10) & 4) == 0) {
        *puVar1 = *puVar1 & 0xfffffff7;
        FUN_0042f9b0(param_1 + 0x340);
      }
      else {
        *puVar1 = *puVar1 | 8;
      }
      if ((*(byte *)(param_3 + 10) & 8) == 0) {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      else {
        *puVar1 = *puVar1 | 4;
      }
      goto LAB_00451a40;
    }
    *(float *)(param_1 + 0x368) = (float)(uint)*(byte *)(param_3 + 0xc);
    *(float *)(param_1 + 0x36c) = (float)(uint)*(byte *)(param_3 + 0xd);
    *(float *)(param_1 + 0x370) = (float)(uint)*(byte *)(param_3 + 0xe);
    *(float *)(param_1 + 0x380) = (float)(uint)*(byte *)(param_3 + 0xf);
    *(float *)(param_1 + 900) = (float)(uint)*(byte *)(param_3 + 0x10);
    *(float *)(param_1 + 0x388) = (float)(uint)*(byte *)(param_3 + 0x11);
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_3 + 0x28);
    FUN_0042f9b0((undefined4 *)(param_1 + 0x38c));
    puVar1 = (uint *)(param_1 + 0x364);
    if ((*(byte *)(param_3 + 10) & 4) == 0) {
      *puVar1 = *puVar1 & 0xfffffff7;
      FUN_0042f9b0((undefined4 *)(param_1 + 0x374));
    }
    else {
      *puVar1 = *puVar1 | 8;
    }
    if ((*(byte *)(param_3 + 10) & 8) == 0) {
      *puVar1 = *puVar1 & 0xfffffffb;
    }
    else {
      *puVar1 = *puVar1 | 4;
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x364);
  puVar6 = (undefined4 *)(param_1 + 0x330);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00451a40:
  uVar3 = *(uint *)(param_1 + 0x2e4) & 0xfffffff3 | *(uint *)(param_1 + 0x330);
  *(uint *)(param_1 + 0x2e4) = uVar3;
  fVar2 = (float)_DAT_00e22a40;
  *(uint *)(param_1 + 0x2e4) = uVar3 | 3;
  *(float *)(param_1 + 0x398) = (fVar2 + fVar2) - (float)_DAT_004acdd8;
  return;
}

