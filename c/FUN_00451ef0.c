#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451ef0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined local_3c8 [4];
  float local_3c4;
  float local_3c0;
  undefined local_3bc [12];
  int local_3b0;
  undefined local_3ac [12];
  float local_3a0 [3];
  float local_394;
  undefined local_390 [4];
  float local_38c [4];
  float local_37c;
  float local_378;
  undefined local_374 [4];
  float local_370;
  float local_36c;
  undefined local_368 [156];
  undefined local_2cc [56];
  float local_294;
  undefined local_28c [12];
  undefined local_280 [16];
  undefined local_270 [32];
  undefined local_250 [16];
  undefined local_240 [8];
  float local_238;
  undefined local_234 [8];
  float local_22c;
  undefined local_228 [12];
  undefined local_21c [156];
  float local_180;
  float local_17c;
  float local_140;
  float local_13c;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_40;
  
  local_3b0 = 0;
  iVar4 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x2b0) = 0xbf800000;
  if (iVar4 != 0) {
    FUN_0044bb10(local_2cc,iVar4 + 0x20);
    local_294 = *(float *)(iVar4 + 0x250) + local_294;
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + (float)_DAT_00e22a40;
    iVar1 = **(int **)(*(int *)(iVar4 + 0x1e70) + 0x18);
    iVar3 = iVar1 * 0x6c;
    FUN_0042f7d0(local_3ac,&DAT_004c7088 + iVar3);
    FUN_0042f830(local_3ac,local_3ac,&DAT_004c70a0 + iVar3);
    FUN_0042f7d0(local_3a0,&DAT_004c7094 + iVar3);
    FUN_0042f830(local_3a0,local_3a0,&DAT_004c70c4 + iVar3);
    local_3a0[0] = local_3a0[0] * (float)_DAT_004acde8;
    FUN_0042f7d0(local_3c8,&DAT_004c70d0 + iVar3);
    local_3c0 = *(float *)(iVar4 + 0x19b4) * (float)_DAT_004acdf0 + local_3c0;
    local_3c4 = local_3c4 * _DAT_004acd90;
    FUN_0042fa50(local_3c8,0x3f400000,local_3c8);
    FUN_0042f7d0(local_38c,local_3ac);
    local_38c[0] = local_38c[0] - (float)_DAT_004acdf8;
    local_38c[1] = local_38c[1] - (float)_DAT_004acdb8;
    local_38c[2] = local_38c[2] - (float)_DAT_004ace00;
    if (iVar1 == 0xe) {
      local_38c[0] = local_38c[0] - (float)_DAT_004acdf8;
      local_38c[1] = local_38c[1] - (float)_DAT_004acdb8;
      local_38c[2] = local_38c[2] - (float)_DAT_004ace08;
    }
    FUN_00430a00(local_38c,local_38c,local_2cc);
    FUN_0042f7d0(local_240,local_3ac);
    local_238 = local_238 - _DAT_004ace10;
    FUN_00430a00(local_240,local_240,local_2cc);
    FUN_0042f7d0(local_38c + 3,local_3ac);
    local_38c[3] = local_38c[3] - (float)_DAT_004ace18;
    local_37c = local_37c - (float)_DAT_004ace20;
    local_378 = local_378 - (float)_DAT_004ace00;
    if (iVar1 == 0xe) {
      local_37c = local_37c - (float)_DAT_004acdf8;
      local_378 = local_378 - (float)_DAT_004ace08;
    }
    FUN_00430a00(local_38c + 3,local_38c + 3,local_2cc);
    FUN_0042f7d0(local_234,local_3ac);
    local_22c = local_22c - _DAT_004ace10;
    FUN_00430a00(local_234,local_234,local_2cc);
    FUN_0042f7d0(local_374,local_3a0);
    local_370 = local_370 - _DAT_004ace28;
    local_36c = local_36c - _DAT_004acdcc;
    FUN_00430a00(local_374,local_374,local_2cc);
    FUN_0042f7d0(local_228,local_3ac);
    FUN_00430a00(local_228,local_228,local_2cc);
    FUN_0042f7d0(local_368,local_3c8);
    FUN_00430a00(local_368,local_368,local_2cc);
    FUN_0042f7b0(local_21c,0,0,local_3c0);
    FUN_00430a00(local_21c,local_21c,local_2cc);
    if ((float)_DAT_004ace30 <= *(float *)(param_1 + 0x70)) {
      if ((float)_DAT_004ace40 <= *(float *)(param_1 + 0x70)) {
        if ((float)_DAT_004ace48 <= *(float *)(param_1 + 0x70)) {
          iVar4 = 2;
          local_3b0 = 1;
          fVar2 = _DAT_004acdc0;
        }
        else {
          iVar4 = 2;
          fVar2 = (*(float *)(param_1 + 0x70) - (float)_DAT_004ace40) * (float)_DAT_004ace18;
        }
      }
      else {
        iVar4 = 1;
        fVar2 = (*(float *)(param_1 + 0x70) - (float)_DAT_004ace30) * (float)_DAT_004ace38;
      }
    }
    else {
      iVar4 = 0;
      fVar2 = *(float *)(param_1 + 0x70) * (float)_DAT_004ace38;
    }
    if (fVar2 < (float)_DAT_004ace50) {
      fVar2 = _DAT_004acda0;
    }
    if ((float)_DAT_004ace00 < fVar2) {
      fVar2 = _DAT_004acdc0;
    }
    FUN_0042f380(fVar2 * _DAT_004ace58 - _DAT_004ace5c,&local_394,local_390);
    fVar2 = local_394 * _DAT_004acdc8 - _DAT_004acdcc;
    FUN_0042f7b0(local_3bc,0,0,0);
    FUN_0042fa80(local_3bc,local_3bc,(float)_DAT_004ace00 - fVar2,local_240 + iVar4 * 0xc);
    FUN_0042fa80(local_3bc,local_3bc,fVar2,local_234 + iVar4 * 0xc);
    FUN_0042f860(&local_100,local_38c + iVar4 * 3,local_3bc);
    FUN_0042f860(&local_f4,local_38c + iVar4 * 3 + 3,local_3bc);
    fVar5 = (float10)FUN_0042f9b0(&local_100);
    local_140 = (float)fVar5;
    fVar5 = (float10)FUN_0042f9b0(&local_f4);
    local_13c = (float)fVar5;
    fVar5 = (float10)FUN_0042f560(-local_100,local_fc);
    local_180 = (float)fVar5;
    fVar5 = (float10)FUN_0042f560(-local_f4,local_f0);
    local_17c = (float)fVar5;
    fVar5 = (float10)FUN_0042f3e0(local_f8);
    local_40 = (float)fVar5;
    fVar5 = (float10)FUN_0042f3e0(local_ec);
    FUN_00431020(local_280,(local_17c - local_180) * fVar2 + local_180,
                 (float)((fVar5 - (float10)local_40) * (float10)fVar2 + (float10)local_40),0);
    FUN_0042fa80(local_28c,local_3bc,(local_13c - local_140) * fVar2 + local_140,local_270);
    FUN_004313d0(local_280);
    FUN_0042f7d0(local_250,local_28c);
    FUN_0044bb10(param_1 + 0x20,local_280);
    FUN_004313d0(local_280);
    FUN_0042f7d0(local_250,local_3bc);
    FUN_0044bb10(param_1 + 0x108,local_280);
  }
  if (local_3b0 != 0) {
    FUN_00451d60(param_1,1);
  }
  return;
}

