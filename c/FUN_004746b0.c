#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004746b0(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined local_80 [64];
  undefined local_40 [64];
  
  if ((*(uint *)(param_1 + 0x60) & 0x4000) == 0) {
    local_88 = *(undefined4 *)(param_1 + 0x54);
    local_84 = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x4000;
    local_8c = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe7fff;
    FUN_0044eeb0(param_1 + 0xac,local_80,0x3ba3d70a);
    FUN_004744b0(param_1,local_80,0);
    FUN_00473f40(param_1,0);
    FUN_0044eeb0(param_1 + 0xac,local_40,0xbc23d70a);
    FUN_0046a5f0(3,0,0x40000000,&local_8c,0x3f800000);
    FUN_0046a5f0(3,0,0x400ccccd,&local_8c,0x40400000);
    if (*(int *)(param_1 + 0x344) == 0) {
      puVar4 = &local_8c;
    }
    else if ((*(uint *)(param_1 + 100) & 0x10000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
        iVar1 = FUN_004816b0();
        if ((float)_DAT_004adbf0 <= (float)iVar1 * _DAT_004adbac) {
          puVar4 = (undefined4 *)(param_1 + 0x400);
        }
        else {
          puVar4 = (undefined4 *)(param_1 + 0x3c0);
        }
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x400);
      }
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0x3c0);
    }
    FUN_0046e950(param_1,0xffffffff,puVar4,0x3e4ccccd);
    iVar1 = FUN_004816b0();
    if (_DAT_004adbb4 <= (float)iVar1 * _DAT_004adbac) {
      uVar3 = 0x35;
      if (_DAT_004adbb8 <= (float)iVar1 * _DAT_004adbac) {
        uVar3 = 0x36;
      }
    }
    else {
      uVar3 = 0x34;
    }
    iVar1 = FUN_004816b0();
    FUN_00426d10(uVar3,7,(float)iVar1 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
                 0x3f800000,&local_8c,0,0,0x41200000,0x43fa0000);
    iVar1 = FUN_004816b0();
    if (_DAT_004adbb4 <= (float)iVar1 * _DAT_004adbac) {
      uVar3 = 0x35;
      if (_DAT_004adbb8 <= (float)iVar1 * _DAT_004adbac) {
        uVar3 = 0x36;
      }
    }
    else {
      uVar3 = 0x34;
    }
    iVar1 = FUN_004816b0();
    FUN_00426d10(uVar3,7,(float)iVar1 * _DAT_004adbac * (float)_DAT_004adbc0 - (float)_DAT_004adbc8,
                 0x3f800000,&local_8c,0,0,0x41200000,0x43fa0000);
    pfVar2 = (float *)(param_1 + 0x288);
    iVar1 = 6;
    do {
      pfVar2[6] = (float)((uint)pfVar2[6] & 0xfffffff7);
      if (_DAT_004adbf8 < *pfVar2) {
        *pfVar2 = 0.1;
      }
      pfVar2 = pfVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((*(uint *)(param_1 + 0x60) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
      return;
    }
    *(undefined4 *)(param_1 + 0x30c) = 0x40a00000;
  }
  return;
}

