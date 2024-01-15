#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e2c0(float param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_24;
  undefined local_20 [4];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar4 = param_1;
  if (*(int *)((int)param_1 + 0x344) != 0) {
    pfVar1 = (float *)((int)param_1 + 0x199c);
    iVar2 = **(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18);
    iVar6 = 4;
    pfVar5 = pfVar1;
    do {
      iVar6 = iVar6 + -1;
      *pfVar5 = (float)_DAT_00e22a40 + *pfVar5;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 != 0);
    if ((*(uint *)((int)param_1 + 0x60) & 0x1000000) != 0) {
      *(undefined4 *)((int)param_1 + 0x19ac) = 0x3f800000;
    }
    fVar3 = _DAT_004ad9e4;
    if (_DAT_004ad9e0 < *(float *)((int)param_1 + 0x1a0)) {
      fVar3 = _DAT_004ad95c;
    }
    *(float *)((int)param_1 + 0x19ac) =
         *(float *)((int)param_1 + 0x19ac) - (float)_DAT_00e22a40 * fVar3;
    if (_DAT_004ad9e8 <= *(float *)((int)param_1 + 0x19ac)) {
      if (_DAT_004ad958 < *(float *)((int)param_1 + 0x19ac)) {
        *(undefined4 *)((int)param_1 + 0x19ac) = 0x3f800000;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x19ac) = 0x3ecccccd;
    }
    local_18 = *(float *)((int)param_1 + 0x1d0) + *(float *)((int)param_1 + 0x1dc);
    local_14 = *(float *)((int)param_1 + 0x1d4) + *(float *)((int)param_1 + 0x1e0);
    local_10 = *(float *)((int)param_1 + 0x1d8) + *(float *)((int)param_1 + 0x1e4);
    local_24 = local_10 * local_10 + local_14 * local_14 + local_18 * local_18;
    if (local_24 <= _DAT_004ad95c) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
    }
    else {
      FUN_0042f9b0(&local_18);
    }
    fVar3 = *(float *)((int)fVar4 + 0x19ac) * _DAT_004ad9e8;
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 4) != 0) {
      FUN_0042f380(*pfVar1 * _DAT_004ad9ec,&param_1,local_20);
      iVar6 = (int)fVar4 + 0x3c0;
      FUN_0042fa80(iVar6,iVar6,param_1 * fVar3,(int)fVar4 + 0x3b0);
      if (*(float *)((int)fVar4 + 0x398) * local_10 +
          *(float *)((int)fVar4 + 0x390) * local_18 + *(float *)((int)fVar4 + 0x394) * local_14 <
          _DAT_004ad968) {
        FUN_0042fa80(iVar6,iVar6,local_24 / (local_24 - _DAT_004ad9f0),&local_18);
      }
      local_1c = param_1 * fVar3;
    }
    fVar3 = *(float *)((int)fVar4 + 0x19ac) * _DAT_004ad9e8;
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 8) != 0) {
      FUN_0042f380(*(float *)((int)fVar4 + 0x19a0) * _DAT_004ad9f4,&param_1,local_20);
      iVar6 = (int)fVar4 + 0x400;
      FUN_0042fa80(iVar6,iVar6,param_1 * fVar3,(int)fVar4 + 0x3f0);
      if (_DAT_004ad968 <
          *(float *)((int)fVar4 + 0x3d8) * local_10 +
          *(float *)((int)fVar4 + 0x3d4) * local_14 + *(float *)((int)fVar4 + 0x3d0) * local_18) {
        FUN_0042fa80(iVar6,iVar6,local_24 / (local_24 - _DAT_004ad9f0),&local_18);
      }
      local_24 = param_1 * fVar3;
    }
    fVar3 = *(float *)((int)fVar4 + 0x19ac) * _DAT_004ad980;
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x14) != 0) {
      FUN_0042f380(*(float *)((int)fVar4 + 0x19a4) * _DAT_004ad9f8,&param_1,local_20);
      FUN_0042fa80((int)fVar4 + 0x4c0,(int)fVar4 + 0x4c0,param_1 * fVar3,(int)fVar4 + 0x4b0);
    }
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0xc) != 0) {
      FUN_0042fa80((int)fVar4 + 0x440,(int)fVar4 + 0x440,
                   (local_1c + local_1c + local_24) * _DAT_004ad95c,(int)fVar4 + 0x430);
    }
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x10) != 0) {
      FUN_0042fa80((int)fVar4 + 0x480,(int)fVar4 + 0x480,
                   (local_24 + local_24 + local_1c) * _DAT_004ad95c,(int)fVar4 + 0x470);
    }
    FUN_0046dcd0(fVar4);
    FUN_0046dea0(fVar4);
    if (**(int **)(*(int *)((int)fVar4 + 0x1e70) + 0x18) != 0xe) {
      fVar3 = *(float *)(&DAT_004c708c + iVar2 * 0x6c) * _DAT_004ad978;
      if (fVar3 < _DAT_004ad968) {
        fVar3 = -fVar3;
      }
      if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x14) != 0) {
        local_c = *(float *)((int)fVar4 + 0x50) - *(float *)((int)fVar4 + 0x4c0);
        local_8 = *(float *)((int)fVar4 + 0x54) - *(float *)((int)fVar4 + 0x4c4);
        local_4 = *(float *)((int)fVar4 + 0x58) - *(float *)((int)fVar4 + 0x4c8);
        if (fVar3 * fVar3 < local_4 * local_4 + local_8 * local_8 + local_c * local_c) {
          fVar7 = (float10)FUN_0042f9b0(&local_c);
          FUN_0042fa80((int)fVar4 + 0x4c0,(int)fVar4 + 0x4c0,(float)(fVar7 - (float10)fVar3),
                       &local_c);
        }
      }
    }
  }
  return;
}

