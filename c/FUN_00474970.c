#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474970(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined local_80 [48];
  undefined local_50 [16];
  undefined local_40 [48];
  undefined local_10 [16];
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x80) != 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    FUN_004746b0(param_1,param_2);
    return;
  }
  if ((uVar1 & 0x4000) == 0) {
    local_c8 = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe7fff;
    local_cc = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xff7fffff | 0x4000;
    local_c4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x30c) = 0x41200000;
    FUN_0044eeb0(param_1 + 0xac,local_80,0);
    FUN_004744b0(param_1,local_80,1);
    FUN_00473f40(param_1,0);
    FUN_0044eeb0(param_1 + 0xac,local_40,0xbc23d70a);
    local_b4 = &local_cc;
    local_b0 = local_50;
    local_ac = local_10;
    local_c0 = 0x44657468;
    local_bc = param_1;
    local_b8 = 0;
    FUN_00450c50(0x634d616e,&local_c0);
    FUN_0046a5f0(3,0,0x404ccccd,&local_cc,0x40400000);
    if (*(int *)(param_1 + 0x344) == 0) {
      puVar5 = &local_cc;
    }
    else if ((*(uint *)(param_1 + 100) & 0x10000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
        iVar2 = FUN_004816b0();
        if ((float)_DAT_004adbf0 <= (float)iVar2 * _DAT_004adbac) {
          puVar5 = (undefined4 *)(param_1 + 0x400);
        }
        else {
          puVar5 = (undefined4 *)(param_1 + 0x3c0);
        }
      }
      else {
        puVar5 = (undefined4 *)(param_1 + 0x400);
      }
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 0x3c0);
    }
    FUN_0046e950(param_1,0xffffffff,puVar5,0x3e4ccccd);
    iVar2 = FUN_004816b0();
    if (_DAT_004adbb4 <= (float)iVar2 * _DAT_004adbac) {
      uVar4 = 0x35;
      if (_DAT_004adbb8 <= (float)iVar2 * _DAT_004adbac) {
        uVar4 = 0x36;
      }
    }
    else {
      uVar4 = 0x34;
    }
    iVar2 = FUN_004816b0();
    FUN_00426d10(uVar4,7,(float)iVar2 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
                 0x3f800000,&local_cc,0,0,0x41200000,0x43fa0000);
    iVar2 = FUN_004816b0();
    if (_DAT_004adbb4 <= (float)iVar2 * _DAT_004adbac) {
      uVar4 = 0x35;
      if (_DAT_004adbb8 <= (float)iVar2 * _DAT_004adbac) {
        uVar4 = 0x36;
      }
    }
    else {
      uVar4 = 0x34;
    }
    iVar2 = FUN_004816b0();
    FUN_00426d10(uVar4,7,(float)iVar2 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
                 0x3f800000,&local_cc,0,0,0x41200000,0x43fa0000);
    pfVar3 = (float *)(param_1 + 0x288);
    iVar2 = 6;
    do {
      pfVar3[6] = (float)((uint)pfVar3[6] & 0xfffffff7);
      if (_DAT_004adbf8 < *pfVar3) {
        *pfVar3 = 0.1;
      }
      pfVar3 = pfVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      FUN_0040a120(0);
      FUN_00409ee0(0x1b,0xffffffff,0xffffffff,0xffffffff,0);
      if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
        FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xe,0xe,0xe,0xe,0xe,
                     (undefined4 *)(param_1 + 0x50));
        FUN_004276a0((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0xf0000);
      }
    }
  }
  return;
}

