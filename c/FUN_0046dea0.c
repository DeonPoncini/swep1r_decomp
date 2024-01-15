#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046dea0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined local_4c [12];
  undefined local_40 [16];
  undefined local_30 [48];
  
  iVar3 = (int)param_1;
  if (((*(byte *)((int)param_1 + 0x60) & 0x20) != 0) ||
     ((*(uint *)((int)param_1 + 100) & 0x4000000) != 0)) {
    if ((*(uint *)((int)param_1 + 100) & 0x8000) == 0) {
      if ((*(uint *)((int)param_1 + 100) & 0x10000) == 0) {
        param_1 = 0.0;
        *(undefined4 *)(iVar3 + 0x340) = 0;
        *(undefined4 *)(iVar3 + 0x33c) = 0;
        *(undefined4 *)(iVar3 + 0x338) = 0;
      }
      else {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = -1.0;
    }
    fVar5 = _DAT_004ad958;
    if (param_1 != _DAT_004ad968) {
      fVar4 = *(float *)(iVar3 + 0x340) - (float)_DAT_00e22a40 * (float)_DAT_004ad9a8;
      *(float *)(iVar3 + 0x340) = fVar4;
      if (fVar5 < fVar4) {
        *(undefined4 *)(iVar3 + 0x340) = 0x3f800000;
      }
      iVar6 = 1;
      if (param_1 <= _DAT_004ad968) {
        iVar6 = 2;
      }
      iVar2 = iVar6 * 0x40 + 0x350 + iVar3;
      *(float *)(iVar3 + 0x338) =
           *(float *)(iVar3 + 0x338) -
           param_1 * (float)_DAT_00e22a40 * *(float *)(iVar3 + 0x340) * (float)_DAT_004ad9c8;
      FUN_0044bb10(local_40,iVar2);
      FUN_0042fa80(&local_64,local_30,0,local_40);
      FUN_0042f7d0(&local_64,local_30);
      FUN_0042f7b0(&local_64,0,0x3f800000,0);
      FUN_0042f9b0(&local_64);
      iVar1 = (iVar6 + 0xe) * 0x40 + iVar3;
      FUN_0042f7d0(local_4c,iVar1);
      FUN_00431390(iVar2,*(undefined4 *)(iVar3 + 0x338),local_64,local_60,local_5c,iVar2);
      FUN_0042f7d0(iVar1,local_4c);
      iVar6 = *(int *)(*(int *)(iVar3 + 0x344) + iVar6 * 4);
      if (iVar6 != 0) {
        FUN_00431640(iVar6,iVar2);
      }
      iVar6 = iVar3 + 0x490;
      *(float *)(iVar3 + 0x33c) =
           *(float *)(iVar3 + 0x33c) -
           param_1 * (float)_DAT_00e22a40 * *(float *)(iVar3 + 0x340) * (float)_DAT_004ad9d0;
      FUN_0044bb10(local_40,iVar6);
      FUN_0042fa80(&local_58,local_30,0,local_40);
      FUN_0042f7d0(&local_58,local_30);
      FUN_0042f7b0(&local_58,param_1 * (float)_DAT_004ad9d8,0x3f800000,0);
      FUN_0042f9b0(&local_58);
      FUN_0042f7d0(local_4c,iVar3 + 0x4c0);
      FUN_00431390(iVar6,*(undefined4 *)(iVar3 + 0x33c),local_58,local_54,local_50,iVar6);
      FUN_0042f7d0(iVar3 + 0x4c0,local_4c);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x344) + 0x14);
      if (iVar3 != 0) {
        FUN_00431640(iVar3,iVar6);
      }
    }
  }
  return;
}

