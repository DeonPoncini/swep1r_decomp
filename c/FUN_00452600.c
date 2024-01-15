#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452600(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c [12];
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)((int)param_1 + 0xf4);
  if (iVar1 != 0) {
    fVar2 = *(float *)((int)param_1 + 0x70) - (float)_DAT_00e22a40;
    *(float *)((int)param_1 + 0x70) = fVar2;
    iVar4 = *(int *)((int)param_1 + 0x6c);
    if (iVar4 == 0) {
      if (_DAT_004acda0 <= fVar2) {
        param_1 = (float)_DAT_004ace00 - fVar2;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x70) = 0x3fc00000;
        *(undefined4 *)((int)param_1 + 0x6c) = 2;
        puVar5 = (undefined4 *)(iVar1 + 0xac);
        puVar6 = (undefined4 *)((int)param_1 + 0x1b4);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(float *)((int)param_1 + 0x1bc) = *(float *)((int)param_1 + 0x1bc) - (float)_DAT_004ace60;
        *(undefined4 *)((int)param_1 + 0x1b8) = 0;
        FUN_0044ed80((undefined4 *)((int)param_1 + 0x1b4),(int)param_1 + 0x1e4);
        *(undefined4 *)((int)param_1 + 0x1b8) = 0x3f088889;
        param_1 = 1.0;
      }
      iVar1 = iVar3 + 0x15c;
      FUN_0042f860(local_c,iVar3 + 0x168,iVar1);
      FUN_0042f9b0(local_c);
      FUN_0042fa80(&local_24,iVar1,param_1 * _DAT_004ace68,local_c);
      *(undefined4 *)(iVar3 + 0x18c) = local_24;
      *(undefined4 *)(iVar3 + 400) = local_20;
      *(undefined4 *)(iVar3 + 0x194) = local_1c;
      FUN_0042f7d0(&local_18,iVar1);
    }
    else if (iVar4 == 2) {
      if (fVar2 < _DAT_004acda0) {
        *(undefined4 *)((int)param_1 + 0x70) = 0;
        *(undefined4 *)((int)param_1 + 0x6c) = 3;
      }
      FUN_0044ed80((int)param_1 + 0x1b4,(int)param_1 + 0x1e4);
      FUN_0042f7d0(&local_18,iVar1 + 0x50);
      local_24 = *(undefined4 *)((int)param_1 + 0x214);
      local_20 = *(undefined4 *)((int)param_1 + 0x218);
      local_1c = *(undefined4 *)((int)param_1 + 0x21c);
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(iVar1 + 0x30c) = 0x40400000;
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffbfff | 0x2000;
      FUN_00451ec0(param_1);
      local_24 = *(undefined4 *)((int)param_1 + 0x50);
      local_20 = *(undefined4 *)((int)param_1 + 0x54);
      local_18 = *(undefined4 *)((int)param_1 + 0x138);
      local_14 = *(undefined4 *)((int)param_1 + 0x13c);
      local_10 = *(undefined4 *)((int)param_1 + 0x140);
      local_1c = *(undefined4 *)((int)param_1 + 0x58);
    }
    *(undefined4 *)(iVar3 + 0x58) = local_1c;
    *(undefined4 *)(iVar3 + 0x50) = local_24;
    *(undefined4 *)(iVar3 + 0x20) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x48) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x5c) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x108) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x11c) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x130) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x144) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x54) = local_20;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x114) = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 0;
    *(undefined4 *)(iVar3 + 300) = 0;
    *(undefined4 *)(iVar3 + 0x134) = 0;
    *(undefined4 *)(iVar3 + 0x138) = local_18;
    *(undefined4 *)(iVar3 + 0x13c) = local_14;
    *(undefined4 *)(iVar3 + 0x140) = local_10;
    return;
  }
  FUN_00451ec0(param_1);
  return;
}

