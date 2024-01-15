#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004535c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_88;
  undefined local_80 [16];
  undefined local_70 [8];
  undefined4 local_68;
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  undefined local_10 [16];
  
  iVar1 = FUN_0045d350();
  if (iVar1 == 1) {
    _DAT_0050c8a8 = _DAT_0050c8a8 - (float)_DAT_00e22a40 * (float)_DAT_004acef0;
    local_88 = 0x40000000;
  }
  else {
    local_88 = 0x3fc00000;
    iVar1 = FUN_0045d350();
    _DAT_0050c8a8 = (_DAT_004ace6c / (float)iVar1) * (float)_DAT_00e22a40 + _DAT_0050c8a8;
  }
  if (_DAT_004acdc0 < _DAT_0050c8a8) {
    _DAT_0050c8a8 = -1.0;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x60) & 0x8000000) != 0)) &&
     (*(int *)(iVar1 + 0x254) != 0)) {
    FUN_004313d0(local_40);
    FUN_0042f860(local_30,param_1 + 0x138,param_1 + 0x50);
    FUN_0042f7d0(local_20,param_1 + 0x40);
    FUN_0042f9f0(local_40,local_30,local_20);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    FUN_0042f7d0(local_10,param_1 + 0x50);
    if (*(int *)(iVar1 + 0x254) != 0) {
      FUN_00431a50(*(int *)(iVar1 + 0x254),2,3,0x10,2);
    }
    uVar2 = __ftol();
    FUN_0042b640(*(undefined4 *)(iVar1 + 0x254),0,0,0x59,0x8c,0x36,uVar2);
    FUN_004313d0(local_80);
    FUN_0042f860(local_70,iVar1 + 600,iVar1 + 0x50);
    local_68 = 0;
    FUN_0042f9b0(local_70);
    FUN_0042f9f0(local_80,local_70,local_60);
    FUN_0042f9f0(local_60,local_80,local_70);
    FUN_0042f9b0(local_80);
    FUN_0042f9b0(local_60);
    FUN_00431450(local_80,0xbc75c28f,0x3c75c28f,0xbbf5c28f,local_80);
    FUN_0042f7d0(local_50,local_10);
    FUN_0042fa80(local_50,local_50,0x40a00000,local_30);
    FUN_0042fa80(local_50,local_50,local_88,local_20);
    FUN_0042fa80(local_50,local_50,0,local_40);
    FUN_0042fa80(local_50,local_50,_DAT_0050c8a8 * (float)_DAT_004acf00,local_70);
    FUN_00431640(*(undefined4 *)(iVar1 + 0x254),local_80);
  }
  return;
}

