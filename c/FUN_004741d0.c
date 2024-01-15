#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004741d0(int param_1,byte param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar3 = false;
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x20) == 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    return;
  }
  if ((*(uint *)(param_1 + 100) & 0x4000) != 0) {
    return;
  }
  if ((uVar1 & 0x7000) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x60) = uVar1 & 0xff5fffff;
  iVar4 = FUN_004816b0();
  fVar2 = (float)iVar4 * _DAT_004adbac;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x4000;
  *(float *)(param_1 + 0x310) = fVar2 - _DAT_004adbb0;
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    FUN_0040a120(0);
  }
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) == 0) goto LAB_004742fe;
    local_18 = *(undefined4 *)(param_1 + 0x400);
    local_10 = *(undefined4 *)(param_1 + 0x408);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
    local_14 = *(undefined4 *)(param_1 + 0x404);
    uVar5 = 2;
  }
  else {
    local_14 = *(undefined4 *)(param_1 + 0x3c4);
    local_10 = *(undefined4 *)(param_1 + 0x3c8);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x8000;
    local_18 = *(undefined4 *)(param_1 + 0x3c0);
    uVar5 = 1;
  }
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  bVar3 = true;
  FUN_0046e950(param_1,uVar5,&local_c,0x3e99999a);
LAB_004742fe:
  if (!bVar3) {
    FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xd,0xe,0xd,0xe,0xd,
                 param_1 + 0x50);
    return;
  }
  FUN_0046a5f0(3,0,0x40000000,&local_18,0x3f800000);
  FUN_0046a5f0(3,0,0x400ccccd,&local_18,0x40400000);
  iVar4 = FUN_004816b0();
  if (_DAT_004adbb4 <= (float)iVar4 * _DAT_004adbac) {
    uVar5 = 0x35;
    if (_DAT_004adbb8 <= (float)iVar4 * _DAT_004adbac) {
      uVar5 = 0x36;
    }
  }
  else {
    uVar5 = 0x34;
  }
  iVar4 = FUN_004816b0();
  FUN_00426d10(uVar5,7,(float)iVar4 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
               0x3f800000,&local_18,0,0,0x41200000,0x43fa0000);
  iVar4 = FUN_004816b0();
  if (_DAT_004adbb4 <= (float)iVar4 * _DAT_004adbac) {
    uVar5 = 0x35;
    if (_DAT_004adbb8 <= (float)iVar4 * _DAT_004adbac) {
      uVar5 = 0x36;
    }
  }
  else {
    uVar5 = 0x34;
  }
  iVar4 = FUN_004816b0();
  FUN_00426d10(uVar5,7,(float)iVar4 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
               0x3f800000,&local_18,0,0,0x41200000,0x43fa0000);
  FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),9,9,9,9,9,param_1 + 0x50);
  return;
}

