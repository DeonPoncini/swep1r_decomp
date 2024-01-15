#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462320(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined local_20 [32];
  
  iVar10 = param_1;
  iVar4 = FUN_0045d350();
  if (iVar4 == 2) {
    if (param_2 == DAT_00e2899c) {
      iVar4 = 0x69;
      local_24 = 0x1e;
      iVar9 = 0xf;
      do {
        FUN_004285d0(iVar9,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x13);
    }
    else {
      iVar4 = 0xd7;
      local_24 = 0x8c;
      iVar9 = 0x13;
      do {
        FUN_004285d0(iVar9,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x17);
    }
  }
  else {
    iVar4 = 0;
    do {
      FUN_004285d0(iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x13);
    iVar4 = 0xd7;
    local_24 = 0x37;
  }
  iVar4 = iVar4 + *(int *)(param_1 + 0x1c8) * -0xe;
  if (_DAT_004ad440 <= *(float *)(param_2 + 0x74)) {
    if (_DAT_004ad444 <= *(float *)(param_2 + 0x74)) {
      if (_DAT_004ad448 <= *(float *)(param_2 + 0x74)) {
        local_2c = 0x7d;
        if (_DAT_004ad44c <= *(float *)(param_2 + 0x74)) {
          local_2c = 0x87;
        }
      }
      else {
        local_2c = 0x73;
      }
    }
    else {
      local_2c = 0x69;
    }
  }
  else {
    local_2c = 0x5b;
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x1c8)) {
    pfVar7 = (float *)(param_2 + 0x60);
    do {
      uVar5 = FUN_00421360(s__SCREENTEXT_211__sLap_004c7038);
      FUN_0049eb80(local_20,s__f4_s_004b9484,uVar5);
      FUN_00450530(0x19,iVar4 + 1,0xffffffff,0xffffffff,0,0xffffffff,local_20);
      iVar9 = iVar9 + 1;
      FUN_0049eb80(local_20,&DAT_004b9584,iVar9);
      FUN_00450530(0x2d,iVar4,0xffffffff,0xffffffff,0,0xffffffff,local_20);
      if (*(float *)(iVar10 + 0x1d0) < *pfVar7) {
        param_1 = CONCAT31(param_1._1_3_,0xff);
        local_30 = CONCAT31(local_30._1_3_,0x80);
      }
      else if (DAT_0050c5f0 == 0) {
        local_28 = FUN_004816b0();
        cVar2 = __ftol();
        param_1 = CONCAT31(param_1._1_3_,cVar2);
        local_30 = CONCAT31(local_30._1_3_,cVar2 + -0x14);
      }
      else {
        cVar2 = __ftol();
        param_1 = CONCAT31(param_1._1_3_,cVar2);
        local_30 = CONCAT31(local_30._1_3_,cVar2 + -0x14);
      }
      FUN_00450670(local_2c,iVar4 + -3,*pfVar7,param_1,local_30,0,0xffffffff,s__f1_r_s_004c7030);
      iVar4 = iVar4 + 0xe;
      pfVar7 = pfVar7 + 1;
    } while (iVar9 < *(int *)(iVar10 + 0x1c8));
  }
  if (*(float *)(iVar10 + 0x1d4) < *(float *)(param_2 + 0x74)) {
    param_1 = CONCAT31(param_1._1_3_,0x32);
    local_30 = CONCAT31(local_30._1_3_,0xff);
    local_28 = CONCAT31(local_28._1_3_,5);
  }
  else {
    *(undefined4 *)(iVar10 + 0x1d4) = *(undefined4 *)(param_2 + 0x74);
    if (DAT_0050c5f0 == 0) {
      local_28 = FUN_004816b0();
    }
    uVar3 = __ftol();
    param_1 = CONCAT31(param_1._1_3_,uVar3);
    if (DAT_0050c5f0 == 0) {
      uVar6 = FUN_004816b0();
      uVar3 = __ftol();
      local_30 = CONCAT31(local_30._1_3_,uVar3);
      local_28 = uVar6 & 0xffffff00;
    }
    else {
      uVar3 = __ftol();
      local_30 = CONCAT31(local_30._1_3_,uVar3);
      local_28 = local_28 & 0xffffff00;
    }
  }
  uVar5 = FUN_00421360(s__SCREENTEXT_534__sTotal__004c7014);
  FUN_0049eb80(local_20,s__f4_s_004b9484,uVar5);
  FUN_00450530(0x19,iVar4 + 1,0xfffffff0,0xffffffff,0,0xffffffff,local_20);
  FUN_00450670(local_2c,iVar4 + -3,*(undefined4 *)(param_2 + 0x74),param_1,local_30,local_28,
               0xffffffff,s__f1_r_s_004c7030);
  if (DAT_0050ca18 < 2) {
    if (1 < *(int *)(iVar10 + 0x1bc)) {
      if (_DAT_004ad2f8 < *(float *)(iVar10 + 0xc)) {
        FUN_004285d0(0xa4,0);
        FUN_004285d0(0xa5,0);
        FUN_004285d0(0xa6,0);
        return;
      }
      iVar4 = 0xa0;
      if (*(float *)(iVar10 + 0xc) < _DAT_004ad228) {
        iVar4 = __ftol();
      }
      if (_DAT_004ad460 < *(float *)(iVar10 + 0xc)) {
        iVar4 = __ftol();
      }
      iVar10 = local_24;
      if (*(short *)(param_2 + 0x5c) < 4) {
        iVar4 = iVar4 + -0x14;
        iVar10 = local_24 + 0x14;
        iVar9 = -iVar4;
        iVar8 = iVar9 + 0x140;
        FUN_00484020(iVar9 + 0x12f,local_24 + -0xd,iVar9 + 0x151,local_24 + 0x35);
        if (*(short *)(param_2 + 0x5c) == 1) {
          FUN_004285d0(0xa4,1);
          FUN_00428660(0xa4,iVar8,local_24);
        }
        if (*(short *)(param_2 + 0x5c) == 2) {
          FUN_004285d0(0xa5,1);
          FUN_00428660(0xa5,iVar8,local_24);
        }
        if (*(short *)(param_2 + 0x5c) == 3) {
          FUN_004285d0(0xa6,1);
          FUN_00428660(0xa6,iVar8,local_24);
        }
      }
      sVar1 = *(short *)(param_2 + 0x5c);
      if (sVar1 == 1) {
        pcVar11 = s__SCREENTEXT_427__sst_004c6ffc;
      }
      else if (sVar1 == 2) {
        pcVar11 = s__SCREENTEXT_428__snd_004c6fe4;
      }
      else if (sVar1 == 3) {
        pcVar11 = s__SCREENTEXT_429__srd_004c6fcc;
      }
      else {
        pcVar11 = s__SCREENTEXT_430__sth_004c6fb4;
      }
      uVar5 = FUN_00421360(pcVar11);
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar3 = __ftol();
      param_1 = CONCAT31(param_1._1_3_,uVar3);
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar3 = __ftol();
      local_30 = CONCAT31(local_30._1_3_,uVar3);
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar3 = __ftol();
      local_28 = CONCAT31(local_28._1_3_,uVar3);
      FUN_0049eb80(local_20,s__f2_r_s_d_004c6fa8,(int)*(short *)(param_2 + 0x5c));
      FUN_00450530(iVar4,iVar10,param_1,local_30,local_28,0xfffffffe,local_20);
      FUN_00450530(iVar4 + 1,iVar10,param_1,local_30,local_28,0xfffffffe,uVar5);
    }
    return;
  }
  sVar1 = *(short *)(param_2 + 0x5c);
  if (sVar1 == 1) {
    pcVar11 = s__SCREENTEXT_427__sst_004c6ffc;
  }
  else if (sVar1 == 2) {
    pcVar11 = s__SCREENTEXT_428__snd_004c6fe4;
  }
  else if (sVar1 == 3) {
    pcVar11 = s__SCREENTEXT_429__srd_004c6fcc;
  }
  else {
    pcVar11 = s__SCREENTEXT_430__sth_004c6fb4;
  }
  uVar5 = FUN_00421360(pcVar11);
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  uVar3 = __ftol();
  param_1 = CONCAT31(param_1._1_3_,uVar3);
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  uVar3 = __ftol();
  local_30 = CONCAT31(local_30._1_3_,uVar3);
  if (DAT_0050c5f0 == 0) {
    FUN_004816b0();
  }
  uVar3 = __ftol();
  local_28 = CONCAT31(local_28._1_3_,uVar3);
  FUN_0049eb80(local_20,s__f2_r_s_d_004c6fa8,(int)*(short *)(param_2 + 0x5c));
  FUN_00450530(0xa0,local_24,param_1,local_30,local_28,0xfffffffe,local_20);
  FUN_00450530(0xa1,local_24,param_1,local_30,local_28,0xfffffffe,uVar5);
  return;
}

