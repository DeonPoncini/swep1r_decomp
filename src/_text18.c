#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

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
  if (60.0 <= *(float *)(param_2 + 0x74)) {
    if (600.0 <= *(float *)(param_2 + 0x74)) {
      if (6000.0 <= *(float *)(param_2 + 0x74)) {
        local_2c = 0x7d;
        if (60000.0 <= *(float *)(param_2 + 0x74)) {
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
      if (8.0 < *(float *)(iVar10 + 0xc)) {
        FUN_004285d0(0xa4,0);
        FUN_004285d0(0xa5,0);
        FUN_004285d0(0xa6,0);
        return;
      }
      iVar4 = 0xa0;
      if (*(float *)(iVar10 + 0xc) < 0.5) {
        iVar4 = __ftol();
      }
      if (7.5 < *(float *)(iVar10 + 0xc)) {
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



undefined4 FUN_00462a70(int param_1,int param_2)

{
  byte *pbVar1;

  if ((((((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) == 3)) &&
        (-6081.0 < *(float *)(param_2 + 0x50))) &&
       ((*(float *)(param_2 + 0x50) < -5086.0 && (-2801.0 < *(float *)(param_2 + 0x54))))) &&
      ((*(float *)(param_2 + 0x54) < -1182.0 &&
       ((*(int *)(param_2 + 0x140) != 0 &&
        (pbVar1 = (byte *)FUN_004318b0(*(int *)(param_2 + 0x140)), pbVar1 != (byte *)0x0)))))) &&
     ((*pbVar1 & 8) != 0)) {
    return 0;
  }
  if (((*(uint *)(param_2 + 100) & 0x2000000) == 0) &&
     ((4 < *(short *)(param_2 + 0x10c) || (*(float *)(param_2 + 0x1a0) < 60.0)))) {
    return 1;
  }
  return 0;
}



void FUN_00462b20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined local_40 [48];
  undefined local_10 [16];

  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x84);
    iVar3 = (param_2 != DAT_00e2899c) + 0xd;
    if ((*(uint *)(iVar1 + 100) & 0x2000000) != 0) {
      FUN_00462320(param_1,param_2,iVar1);
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xf7ffffff;
      if ((&DAT_00e287e0)[iVar3] != 0) {
        FUN_00431a50((&DAT_00e287e0)[iVar3],2,0xfffffffc,0x10,3);
      }
      FUN_00461150(param_2);
      return;
    }
    if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 1) {
      iVar2 = FUN_00462a70(param_1,iVar1);
      if (iVar2 == 0) {
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xf7ffffff;
        if ((&DAT_00e287e0)[iVar3] != 0) {
          FUN_00431a50((&DAT_00e287e0)[iVar3],2,0xfffffffc,0x10,3);
        }
      }
      else {
        if ((&DAT_00e287e0)[iVar3] != 0) {
          FUN_00431a50((&DAT_00e287e0)[iVar3],2,3,0x10,2);
        }
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x8000000;
        FUN_0044eeb0(iVar1 + 0xac,local_40,0x3f000000);
        FUN_0042f7d0(iVar1 + 600,local_10);
        *(undefined4 *)(iVar1 + 0x254) = (&DAT_00e287e0)[iVar3];
      }
    }
    FUN_00460950(param_2,param_1);
    iVar3 = FUN_0045d350();
    if ((iVar3 == 2) && (param_2 != DAT_00e27820)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_004611f0(param_2,uVar4);
    if ((*(uint *)(iVar1 + 0x60) & 0x800) != 0) {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar4 = FUN_00421360(s__c_sKa_pow__004c7050);
      uVar4 = __ftol(0,0xffffffff,uVar4);
      FUN_00450530(0xa0,0x50,0xffffffff,uVar4);
    }
  }
  return;
}



void FUN_00462cf0(void)

{
  undefined4 uVar1;

  uVar1 = FUN_00450b30(0x4a646765,0);
  FUN_00426c80(0x8f,6,0x3e800000,0x3e4ccccd,1);
  FUN_0045e1a0(uVar1);
  FUN_00463580(uVar1);
  return;
}



undefined4 FUN_00462d40(void)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_0045e120(0x200);
  iVar2 = FUN_00450b30(0x4a646765,0);
  if ((*(uint *)(iVar2 + 8) & 0x20) != 0) {
    return 0;
  }
  switch(*(uint *)(iVar2 + 8) & 0xf) {
  default:
    return uVar1;
  case 2:
  case 4:
  case 5:
  case 6:
    return 0;
  }
}



void FUN_00462da0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;

  FUN_004285d0(0xa1,0);
  FUN_004285d0(0xa2,0);
  FUN_004285d0(0xa3,0);
  if ((*(byte *)(param_1 + 8) & 0xf) != 0) goto LAB_0046341c;
  if ((*(float *)(param_1 + 0xc) <= 2.0) || (3.0 <= *(float *)(param_1 + 0xc))) {
    if ((*(float *)(param_1 + 0xc) <= 1.0) || (2.0 <= *(float *)(param_1 + 0xc))) {
      if ((0.0 < *(float *)(param_1 + 0xc)) && (*(float *)(param_1 + 0xc) < 1.0)) {
        fVar1 = *(float *)(param_1 + 0xc);
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar2 = __ftol();
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar3 = __ftol();
        if (DAT_0050c5f0 == 0) {
          FUN_004816b0();
        }
        uVar4 = __ftol();
        uVar5 = __ftol();
        FUN_004285d0(0xa1,1);
        FUN_00428660(0xa1,0xa0,100);
        fVar1 = fVar1 + fVar1;
        FUN_004286f0(0xa1,fVar1,fVar1);
        FUN_00428740(0xa1,uVar2,uVar3,uVar4,uVar5);
        FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0xff,0,0xff);
        if ((*(uint *)(param_1 + 8) & 0x400) != 0) {
          FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
          uVar6 = *(uint *)(param_1 + 8) & 0xfffffbff;
          goto LAB_00463250;
        }
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xc) - 1.0;
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar2 = __ftol();
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar3 = __ftol();
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar4 = __ftol();
      uVar5 = __ftol();
      FUN_004285d0(0xa2,1);
      FUN_00428660(0xa2,0xa0,100);
      fVar1 = fVar1 + fVar1;
      FUN_004286f0(0xa2,fVar1,fVar1);
      FUN_00428740(0xa2,uVar2,uVar3,uVar4,uVar5);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0x80,0,0xff);
      if ((*(uint *)(param_1 + 8) & 0x200) != 0) {
        FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
        uVar6 = *(uint *)(param_1 + 8) & 0xfffffdff;
        goto LAB_00463250;
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc) - 2.0;
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar2 = __ftol();
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar3 = __ftol();
    if (DAT_0050c5f0 == 0) {
      FUN_004816b0();
    }
    uVar4 = __ftol();
    uVar5 = __ftol();
    FUN_004285d0(0xa3,1);
    FUN_00428660(0xa3,0xa0,100);
    fVar1 = fVar1 + fVar1;
    FUN_004286f0(0xa3,fVar1,fVar1);
    FUN_00428740(0xa3,uVar2,uVar3,uVar4,uVar5);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0xff,0,0,0xff);
    if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
      FUN_00426c80(0x59,7,0x3e800000,0x3f800000,0);
      uVar6 = *(uint *)(param_1 + 8) & 0xfffffeff;
LAB_00463250:
      *(uint *)(param_1 + 8) = uVar6;
    }
  }
  if (*(float *)(param_1 + 0xc) <= 2.5) {
    if (*(float *)(param_1 + 0xc) <= 2.0) {
      if (*(float *)(param_1 + 0xc) <= 1.0) {
        FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0xff,0xff,0,0xffffffff);
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar4 = 0xff;
        uVar3 = 0xff;
      }
      else {
        FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        uVar4 = 0;
        uVar3 = 0xff;
      }
    }
    else {
      FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x18),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x1c),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      FUN_0042b640(*(undefined4 *)(param_1 + 0x20),0xffffffff,0xffffffff,0,0,0,0xffffffff);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    FUN_0042b640(*(undefined4 *)(param_1 + 0x10),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x14),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x18),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x1c),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    FUN_0042b640(*(undefined4 *)(param_1 + 0x20),0xffffffff,0xffffffff,0xff,0,0,0xffffffff);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = 0;
    uVar3 = 0xff;
  }
  FUN_0042b640(uVar2,0xffffffff,0xffffffff,uVar3,uVar4,0,0xffffffff);
LAB_0046341c:
  if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 1) {
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,uVar2);
  }
  if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 3) {
    FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,0);
  }
  return;
}



void FUN_004634a0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;

  if ((((byte)*(uint *)(param_1 + 8) & 0xf) == 1) && ((*(uint *)(param_1 + 8) & 0x20) == 0)) {
    iVar5 = 0;
    local_4 = 0;
    if (0 < *(int *)(param_1 + 0x1bc)) {
      do {
        iVar3 = *(int *)(DAT_00e28960 + 0x84 + iVar5);
        iVar4 = DAT_00e28960 + iVar5;
        FUN_0042c420((int)*(short *)(iVar3 + 4),iVar3 + 0x50,0xffffd8f1);
        if ((((*(uint *)(iVar3 + 0x60) & 0x5000) == 0) &&
            ((*(uint *)(iVar3 + 100) & 0x2000000) == 0)) &&
           (sVar1 = *(short *)(iVar4 + 0x5c), 0 < sVar1)) {
          if ((iVar4 == DAT_00e2899c) || (iVar4 == DAT_00e27820)) {
            if (DAT_0050ca18 < 2) goto LAB_0046354e;
            sVar2 = *(short *)(iVar3 + 4);
            iVar4 = -(int)sVar1;
          }
          else {
            iVar4 = (int)sVar1;
            sVar2 = *(short *)(iVar3 + 4);
          }
          FUN_0042c420((int)sVar2,iVar3 + 0x50,iVar4);
        }
LAB_0046354e:
        local_4 = local_4 + 1;
        iVar5 = iVar5 + 0x88;
      } while (local_4 < *(int *)(param_1 + 0x1bc));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00463580(int param_1)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4 [21];
  undefined local_80 [128];

  iVar7 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4[0] = 0;
  if (DAT_0050ca3c == 0) {
    uVar4 = *(uint *)(param_1 + 8) & 0xf;
    if (uVar4 != 6) {
      if ((uVar4 == 1) || (uVar4 == 2)) {
        iVar6 = *(int *)(param_1 + 0x1c8);
        bVar3 = false;
        if (1 < iVar6) {
          if ((DAT_00e2899c != 0) && (iVar6 <= *(int *)(DAT_00e2899c + 0x78) + 1)) {
            bVar3 = true;
          }
          if ((DAT_00e27820 != 0) && (iVar6 <= *(int *)(DAT_00e27820 + 0x78) + 1)) {
            bVar3 = true;
          }
        }
        if (DAT_004eb45c != 0) {
          fVar9 = (float10)FUN_004456a0();
          if (((float10)0.0 < fVar9) || (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 6)) {
            FUN_004277f0(0,*(undefined4 *)(param_1 + 0x1ac));
            DAT_0050ca88 = 1;
          }
          else {
            if (DAT_0050ca88 != 0) {
              DAT_0050ca88 = 0;
              FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),0);
            }
            if (bVar3) {
LAB_00463745:
              FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
            }
            else {
              iVar6 = FUN_0045d350();
              if (iVar6 < 1) {
                FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
              }
              else if (DAT_0050ca10 != 0) {
                FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),1);
                goto LAB_00463745;
              }
            }
          }
        }
      }
      _DAT_0050ca0c = 0;
    }
  }
  else {
    FUN_0045d130(param_1,0);
    if (DAT_0050ca40 == 2) {
      FUN_00426c80(0x90,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 3) {
      FUN_00426c80(0x8e,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 4) {
      FUN_00426c80(0x91,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 5) {
      FUN_00426c80(0x8f,7,0x3e800000,0x3f800000,1);
    }
    else {
      FUN_00426c80(0x8f,7,0x3e800000,0x3f800000,1);
    }
  }
  FUN_00460320();
  uVar4 = *(uint *)(param_1 + 8) & 0xf;
  if (uVar4 == 4) {
    if (*(float *)(param_1 + 0xc) <= 0.0) {
LAB_004637ea:
      FUN_00428740(0xffffff99,0,0,0,0);
      goto LAB_004637f8;
    }
  }
  else if (uVar4 == 5) {
    if (*(float *)(param_1 + 0xc) <= 8.8) goto LAB_004637ea;
  }
  else {
    if ((uVar4 != 1) || ((*(uint *)(param_1 + 8) & 0x20) == 0)) {
      if (uVar4 == 6) {
        if (0.5 < *(float *)(param_1 + 0xc)) {
          FUN_00428740(0xffffff99,0,0,0,0);
          return;
        }
        if (*(float *)(param_1 + 0xc) <= 0.25) {
          FUN_00428740(0xffffff99,0,0,0,0xffffffff);
          return;
        }
        uVar5 = __ftol();
        FUN_00428740(0xffffff99,0,0,0,uVar5);
        return;
      }
      goto LAB_004637f8;
    }
    if (0.3 <= *(float *)(param_1 + 0xc)) {
      FUN_004285d0(0xffffff99,0);
      goto LAB_004637f8;
    }
  }
  uVar5 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar5);
LAB_004637f8:
  DAT_0050ca20 = DAT_0050ca20 == '\0';
  if (((((byte)*(undefined4 *)(param_1 + 8) & 0xf) != 1) && (DAT_0050ca2c != 0)) &&
     ((bool)DAT_0050ca20)) {
    uVar5 = FUN_00421360(s__sLow_Memory___d_Racers_004c705c,DAT_0050ca2c);
    FUN_0049eb80(local_80,uVar5);
    FUN_00450560(100,100,local_80);
  }
  FUN_0045dad0(param_1,0);
  piVar8 = local_d4;
  for (iVar6 = 0x14; piVar8 = piVar8 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      iVar1 = DAT_00e28960 + iVar7;
      FUN_0042c420(iVar6,&local_dc,0xffffd8f1);
      sVar2 = *(short *)(iVar1 + 0x5c);
      if (0 < sVar2) {
        local_d4[sVar2] = iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x88;
    } while (iVar6 < *(int *)(param_1 + 0x1bc));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      FUN_004285d0(iVar7 + 0x2b,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1bc));
  }
  FUN_004285d0(0x19,0);
  uVar4 = *(uint *)(param_1 + 8) & 0xf;
  if ((uVar4 != 4) && (1 < DAT_0050ca18)) {
    FUN_004610f0();
  }
  if (((uVar4 != 3) && (uVar4 != 4)) && (uVar4 != 5)) {
    if (DAT_00e2899c != 0) {
      FUN_00462b20(param_1,DAT_00e2899c);
    }
    if (DAT_00e27820 != 0) {
      FUN_00462b20(param_1,DAT_00e27820);
    }
    if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) != 2) {
      FUN_0045f230(param_1);
      FUN_004634a0(param_1);
    }
    FUN_00462da0(param_1);
  }
  return;
}



void FUN_00463ec0(undefined4 param_1,int param_2,float param_3)

{
  FUN_0042c380(param_1,0,param_2,0x3f800000,param_3 * 0.8,0xffffffff,0xffffffff,0xffffffc8);
  FUN_0042c380(param_1,1,param_2 + 1,0x3f400000,param_3,0xffffffff,0xffffffff,0xffffffc8);
  FUN_0042c380(param_1,2,param_2 + 2,0x3f2147ae,param_3 * 0.75,0xffffffb4,0xffffffff,0xffffffb4);
  FUN_0042c380(param_1,3,param_2 + 3,0x3edc28f6,param_3 + param_3,0xffffffff,0xffffffff,0xffffffc8);
  FUN_0042c380(param_1,4,param_2 + 4,0x3e800000,param_3 * 1.4,0xffffffff,0xffffffc8,0xffffffc8);
  FUN_0042c380(param_1,4,param_2 + 5,0xbe3851ec,param_3 * 0.75,0xffffffff,0xffffffc8,0xffffffc8);
  FUN_0042c380(param_1,5,param_2 + 6,0xbedc28f6,param_3,0xffffffb4,0xffffffff,0xffffffb4);
  FUN_0042c380(param_1,6,param_2 + 7,0xbfaccccd,param_3 * 0.5,0xffffffff,0xffffffb4,0xffffffb4);
  return;
}



void FUN_00463ff0(undefined4 param_1,undefined4 param_2)

{
  DAT_0050ca8c = param_1;
  DAT_0050ca90 = param_2;
  return;
}



void FUN_00464010(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar1 = param_2;
  iVar5 = param_1;
  if (1 < DAT_0050ca18) {
    FUN_0042d510();
    return;
  }
  if ((param_1 == 7) || (param_1 == 5)) goto LAB_004643d8;
  uVar2 = FUN_00446fb0(0x1c);
  FUN_004282f0(0x41,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x49,uVar2);
  }
  uVar2 = FUN_00446fb0(0x6d);
  FUN_004282f0(0x42,uVar2);
  FUN_004282f0(0x43,uVar2);
  FUN_004282f0(0x44,uVar2);
  FUN_004282f0(0x45,uVar2);
  FUN_004282f0(0x46,uVar2);
  FUN_004282f0(0x47,uVar2);
  FUN_004282f0(0x48,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x4a,uVar2);
    FUN_004282f0(0x4b,uVar2);
    FUN_004282f0(0x4c,uVar2);
    FUN_004282f0(0x4d,uVar2);
    FUN_004282f0(0x4e,uVar2);
    FUN_004282f0(0x4f,uVar2);
    FUN_004282f0(0x50,uVar2);
  }
  uVar2 = FUN_00446fb0(0x56);
  FUN_004282f0(0x3f,uVar2);
  if (param_1 == 0) {
    FUN_004282f0(0x40,uVar2);
  }
  FUN_004287e0(0x3f,0x1e00);
  FUN_00428800(0x3f,1);
  iVar4 = 0x41;
  do {
    FUN_004287e0(iVar4,0x1e00);
    FUN_00428800(iVar4,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x49);
  if (param_1 == 0) {
    FUN_004287e0(0x40,0x1e00);
    FUN_00428800(0x40,1);
    iVar4 = 0x49;
    do {
      FUN_004287e0(iVar4,0x1e00);
      FUN_00428800(iVar4,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x51);
  }
  local_10 = 0xff;
  if (param_1 == 0) {
    local_c = 0xc3b40000;
    local_8 = 0x44000000;
    local_4 = 0x43480000;
    FUN_0042c2e0(1,0x40,&local_c,0x3f666667,0xffffffff,0xffffffdc,0xffffffbe,0xffffffff);
    FUN_00463ec0(1,0x49,0x3f666667);
    local_c = 0xc35c0000;
    local_8 = 0x44000000;
    local_4 = 0x43820000;
    local_14 = 0x3f99999a;
    local_18 = 0xff;
    param_2 = 0xfd;
    param_1 = 0xe1;
  }
  else if (param_1 == 1) {
    local_c = 0x438b10a4;
    local_8 = 0xc2f2051f;
    local_4 = 0x43550ccd;
    local_14 = 0x3e99999a;
    local_18 = 0xcd;
    param_2 = 0xf0;
LAB_0046439c:
    param_1 = 0xff;
  }
  else if (param_1 == 2) {
    local_c = 0;
    local_8 = 0x44000000;
    local_4 = 0x43660000;
    local_14 = 0x3f99999a;
    local_18 = 0xff;
    param_2 = 0xf4;
    param_1 = 0xbe;
  }
  else if (param_1 == 3) {
    local_c = 0x438b10a4;
    local_8 = 0xc2f2051f;
    local_4 = 0x43550ccd;
    local_14 = 0x3fb851ec;
    local_18 = 0xff;
    param_2 = 0xda;
    param_1 = 0xcc;
  }
  else {
    if (param_1 != 4) {
      if (param_1 == 6) {
        local_c = 0xc311147b;
        local_8 = 0x428a4ccd;
        local_4 = 0x42fdf0a4;
        local_14 = 0x3e75c290;
        local_18 = 0xf0;
        param_2 = 0xf0;
      }
      else {
        local_c = 0;
        local_8 = 0x44000000;
        local_4 = 0x43660000;
        local_14 = 0x3f99999a;
        local_18 = 0xff;
        param_2 = 0xff;
      }
      goto LAB_0046439c;
    }
    bVar6 = param_2 != 3;
    local_c = 0xc310e666;
    local_8 = 0x42a80000;
    local_4 = 0x420c0000;
    local_14 = 0x3fb851ec;
    local_18 = 0xff;
    param_2 = 0xe6;
    param_1 = 0xb4;
    if (bVar6) {
      local_10 = 100;
      local_14 = 0x3ef5c290;
      local_18 = 0x80;
      param_2 = 0x73;
      param_1 = 0x5a;
    }
  }
  FUN_0042c2e0(0,0x3f,&local_c,local_14,local_18,param_2,param_1,local_10);
  FUN_00463ec0(0,0x41,local_14);
LAB_004643d8:
  if ((DAT_0050ca18 < 2) && (((iVar5 == 1 || (iVar5 == 4)) && (iVar1 != 3)))) {
    FUN_0042d450();
    FUN_0042d430(0x3f800000);
    FUN_0042d410(0);
    uVar2 = FUN_00446fb0(0x6d);
    iVar4 = 0x51;
    do {
      FUN_004282f0(iVar4,uVar2);
      FUN_004287e0(iVar4,0x1e00);
      FUN_00428800(iVar4,1);
      FUN_0042d460(iVar4 + -0x51,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x8d);
    if (iVar5 == 1) {
      iVar4 = 0x8d;
      do {
        FUN_004282f0(iVar4,uVar2);
        FUN_004287e0(iVar4,0x1e00);
        FUN_00428800(iVar4,1);
        FUN_0042d460(iVar4 + -0x51,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xa1);
      FUN_0042d3e0(0xffffffe6,0xffffffe6,0xffffffff,0xffffffc8);
      if (iVar1 == 0) {
        FUN_0042d410(0);
      }
      else if (iVar1 == 1) {
        FUN_0042d3c0(0x41c80000,0x42340000);
        FUN_0042d410(0x14);
      }
      else if (iVar1 == 2) {
        FUN_0042d3c0(0x41a00000,0x42700000);
        FUN_0042d410(0x28);
        FUN_0042c2d0(0,0xffffff80);
      }
    }
    else {
      FUN_0042d3e0(0xffffffff,0xffffffff,0xffffffff,0x28);
      FUN_0042d430(0x40e00000);
      if (iVar1 == 0) {
        FUN_0042d410(0x14);
        FUN_0042d3c0(0x41200000,0x43960000);
      }
      else {
        FUN_0042d3c0(0x42480000,0x447a0000);
        FUN_0042d410(0x3c);
      }
    }
  }
  else {
    FUN_0042d440();
  }
  if ((iVar5 != 1) || (iVar1 == 3)) {
    uVar2 = FUN_00446fb0(0x7f);
    uVar3 = FUN_00446fb0(0x80);
    iVar5 = 0x97;
    do {
      iVar1 = iVar5 + -10;
      FUN_004282f0(iVar1,uVar3);
      FUN_004287e0(iVar1,0x1f00);
      FUN_00428800(iVar1,1);
      FUN_004282f0(iVar5,uVar2);
      FUN_004287e0(iVar5,0x1f00);
      FUN_00428800(iVar5,1);
      FUN_0042c4e0(iVar5 + -0x97,iVar1,iVar5);
      iVar1 = iVar5 + -0x96;
      iVar5 = iVar5 + 1;
    } while (iVar1 < 10);
  }
  return;
}



void FUN_00464630(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  FUN_00428370();
  uVar1 = FUN_00446fb0(0x4b);
  uVar2 = FUN_00446fb0(0x65);
  if (DAT_0050ca18 < 2) {
    uVar3 = FUN_00446fb0(100);
    FUN_004282f0(0,uVar3);
    uVar3 = FUN_00446fb0(100);
    FUN_004282f0(1,uVar3);
    uVar3 = FUN_00446fb0(0x66);
    FUN_004282f0(3,uVar3);
    FUN_004282f0(10,uVar3);
    FUN_004287e0(10,4);
    uVar3 = FUN_00446fb0(0x67);
    FUN_004282f0(2,uVar3);
    uVar3 = FUN_00446fb0(0x69);
    FUN_004282f0(4,uVar3);
    FUN_004282f0(5,0);
    FUN_004282f0(6,0);
    uVar3 = FUN_00446fb0(0x6a);
    FUN_004282f0(0xb,uVar3);
    FUN_004282f0(0xc,uVar3);
    uVar3 = FUN_00446fb0(0x6b);
    FUN_004282f0(7,uVar3);
    FUN_004282f0(8,uVar3);
    uVar3 = FUN_00446fb0(0x6c);
    FUN_004282f0(9,uVar3);
    FUN_004282f0(0xd,uVar1);
    uVar3 = FUN_00446fb0(0x4a);
    FUN_004282f0(0xe,uVar3);
    iVar5 = 0;
    do {
      FUN_004287e0(iVar5,0x8000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xe);
    uVar3 = FUN_00446fb0(0x68);
  }
  else {
    uVar3 = FUN_00446fb0(0xa6);
    FUN_004282f0(0x15,uVar3);
    FUN_004282f0(0x16,uVar2);
    uVar4 = FUN_00446fb0(99);
    FUN_004282f0(0x13,uVar4);
    uVar4 = FUN_00446fb0(99);
    FUN_004282f0(0x14,uVar4);
    FUN_00446fb0(0x69);
    FUN_004282f0(0x17,0);
    iVar5 = 0x15;
    do {
      FUN_004287e0(iVar5,0x8000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x18);
  }
  FUN_004282f0(0x11,uVar3);
  FUN_004282f0(0x12,uVar2);
  uVar3 = FUN_00446fb0(99);
  FUN_004282f0(0xf,uVar3);
  DAT_0050c9fc = uVar3;
  uVar3 = FUN_00446fb0(99);
  FUN_004282f0(0x10,uVar3);
  iVar5 = 0x11;
  DAT_0050ca00 = uVar3;
  do {
    FUN_004287e0(iVar5,0x8000);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x13);
  FUN_004282f0(0x18,uVar2);
  FUN_004282f0(0x19,uVar1);
  FUN_004287e0(0x19,0);
  FUN_004282f0(0x1a,uVar1);
  FUN_004287e0(0x1a,0x1800);
  iVar5 = 0x18;
  do {
    FUN_004287e0(iVar5,0x8000);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1b);
  uVar1 = FUN_00446fb0(0x13);
  FUN_004282f0(0xa1,uVar1);
  FUN_004287e0(0xa1,0x9200);
  uVar1 = FUN_00446fb0(0x14);
  FUN_004282f0(0xa2,uVar1);
  FUN_004287e0(0xa2,0x9200);
  uVar1 = FUN_00446fb0(0x15);
  FUN_004282f0(0xa3,uVar1);
  FUN_004287e0(0xa3,0x9200);
  uVar1 = FUN_00446fb0(0x5c);
  FUN_004282f0(0xa4,uVar1);
  FUN_004287e0(0xa1,0x1200);
  uVar1 = FUN_00446fb0(0x5d);
  FUN_004282f0(0xa5,uVar1);
  FUN_004287e0(0xa2,0x1200);
  uVar1 = FUN_00446fb0(0x5e);
  FUN_004282f0(0xa6,uVar1);
  FUN_004287e0(0xa3,0x1200);
  uVar1 = FUN_00446fb0(0x2e);
  FUN_004282f0(0x1b,uVar1);
  FUN_004282f0(0x1e,uVar1);
  FUN_004287e0(0x1e,4);
  if (1 < DAT_0050ca18) {
    FUN_004282f0(0x23,uVar1);
    FUN_004282f0(0x26,uVar1);
    FUN_004287e0(0x26,4);
  }
  uVar1 = FUN_00446fb0(0x2f);
  FUN_004282f0(0x1c,uVar1);
  FUN_004282f0(0x1f,uVar1);
  FUN_004287e0(0x1f,4);
  if (1 < DAT_0050ca18) {
    FUN_004282f0(0x24,uVar1);
    FUN_004282f0(0x27,uVar1);
    FUN_004287e0(0x27,4);
  }
  uVar1 = FUN_00446fb0(0x30);
  FUN_004282f0(0x1d,uVar1);
  FUN_004282f0(0x20,uVar1);
  FUN_004287e0(0x20,4);
  if (1 < DAT_0050ca18) {
    FUN_004282f0(0x25,uVar1);
    FUN_004282f0(0x28,uVar1);
    FUN_004287e0(0x28,4);
  }
  uVar1 = FUN_00446fb0(0x31);
  FUN_004282f0(0x21,uVar1);
  FUN_004282f0(0x22,uVar1);
  if (1 < DAT_0050ca18) {
    FUN_004282f0(0x29,uVar1);
    FUN_004282f0(0x2a,uVar1);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x1bc)) {
    iVar6 = 0;
    do {
      uVar1 = FUN_00446fb0(*(undefined4 *)(*(int *)(DAT_00e28960 + 0x18 + iVar6) + 0x2c));
      FUN_004282f0(iVar5 + 0x2b,uVar1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x88;
    } while (iVar5 < *(int *)(param_3 + 0x1bc));
  }
  FUN_00464010(param_1,param_2);
  FUN_00463ff0(param_1,param_2);
  return;
}



void FUN_00464b90(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  iVar3 = param_1;
  iVar4 = *(int *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x19;
    }
    if (*(int *)(param_1 + 0x1c0) == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2d;
    }
  }
  if (iVar4 == 1) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x11;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x1e;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x1f;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2e;
    }
  }
  if (iVar4 == 2) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x22;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x52;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x30;
    }
  }
  if (iVar4 == 3) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x24;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x26;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x28;
    }
  }
  if (iVar4 == 4) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x53;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x58;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x59;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2f;
    }
  }
  if (iVar4 == 5) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x38;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x39;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x54;
    }
  }
  if (iVar4 == 6) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x29;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2a;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2b;
    }
  }
  if (iVar4 == 7) {
    iVar4 = *(int *)(param_1 + 0x1c0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x23;
    }
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x3b;
    }
    if (iVar4 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x3e;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x1b8) < 0) {
    return;
  }
  iVar4 = FUN_00445b40();
  uVar5 = FUN_004472e0(*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  iVar6 = FUN_00445b40();
  DAT_00e288b4 = DAT_00e288b4 + (iVar6 - iVar4);
  iVar4 = *(int *)(param_1 + 0x1c0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_3 + 0xc);
  }
  if (iVar4 == 1) {
    param_1 = *(int *)(param_3 + 0x10);
  }
  if (iVar4 == 2) {
    param_1 = *(int *)(param_3 + 0x14);
  }
  if (iVar4 == 3) {
    param_1 = *(int *)(param_3 + 0xc);
  }
  iVar4 = *(int *)(iVar3 + 0x1a4);
  if (iVar4 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(iVar3 + 0x134);
  *(undefined4 *)(iVar3 + 0x130) = 0;
  *piVar1 = iVar4;
  *(undefined4 *)(iVar3 + 0x138) = 0;
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  *(undefined4 *)(iVar3 + 0x140) = 0;
  *(undefined4 *)(iVar3 + 0x154) = 0;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  *(undefined4 *)(iVar3 + 0x15c) = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0;
  if (iVar4 != 0) {
    FUN_0044eef0(piVar1,0);
  }
  FUN_0044eeb0(piVar1,iVar3 + 0x164,0);
  param_3 = 0;
  if (param_2 != (int *)0x0) {
    iVar4 = *param_2;
    while (iVar4 != 0) {
      iVar4 = *param_2;
      if (*(int *)(iVar4 + 0x124) == param_1) {
        FUN_00426820(iVar4,0x30);
        param_3 = iVar4;
      }
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar4 = *piVar1;
    }
  }
  if (param_3 == 0) {
    *(undefined4 *)(iVar3 + 0x138) = 0x3f800000;
  }
  else {
    *(float *)(iVar3 + 0x138) =
         ((float)*(int *)(*(int *)(iVar3 + 0x1a4) + 4) - 1.0) / *(float *)(param_3 + 0x108);
  }
  FUN_00428a60(5,2,iVar3 + 0x164,0);
  FUN_00428b10(5,param_1,2);
  *(int *)(iVar3 + 0x1a8) = param_3;
  DAT_004c4a60 = 0x40a00000;
  DAT_004c4a5c = 0x459c4000;
  iVar4 = 0;
  iVar6 = param_1;
  iVar7 = param_1;
  if (*(int *)(iVar3 + 0x1ac) == 0) {
    DAT_004c4a5c = 0x458ca000;
    iVar4 = 0x3e4;
    param_1 = 0xe5;
    iVar6 = 0xdc;
    iVar7 = 0xea;
  }
  if (*(int *)(iVar3 + 0x1ac) == 1) {
    DAT_004c4a5c = 0x462be000;
    iVar4 = 0x3e4;
    if (*(int *)(iVar3 + 0x1c0) == 3) {
      iVar6 = 0xad;
      iVar7 = 0xb9;
      param_1 = 0xc6;
    }
    else {
      iVar6 = 0xd2;
      iVar7 = 0xd7;
      param_1 = 0xe1;
    }
  }
  if (*(int *)(iVar3 + 0x1ac) == 2) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    if (iVar2 == 0) {
      DAT_004c4a5c = 0x455ac000;
    }
    else if (iVar2 == 1) {
      iVar6 = 0x78;
      DAT_004c4a5c = 0x455ac000;
      iVar4 = 0x3e4;
      iVar7 = 100;
      param_1 = 0x78;
    }
    else if (iVar2 == 2) {
      DAT_004c4a5c = 0x462be000;
    }
  }
  if (*(int *)(iVar3 + 0x1ac) == 3) {
    iVar7 = 0x81;
    iVar4 = 0x3e2;
    iVar6 = 0x9a;
    param_1 = 0x81;
    DAT_004c4a5c = 0x462be000;
  }
  if (*(int *)(iVar3 + 0x1ac) == 4) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    if (iVar2 == 3) {
      DAT_004c4a5c = 0x459c4000;
    }
    else if (iVar2 == 0) {
      DAT_004c4a5c = 0x459c4000;
      iVar4 = 0x3e4;
      iVar6 = 0xca;
      iVar7 = 0xb7;
      param_1 = 0xc3;
    }
    else {
      if (iVar2 == 1) {
        DAT_004c4a5c = 0x44960000;
        iVar4 = 0x3e0;
        iVar6 = 0x9b;
        iVar7 = 0x9a;
        param_1 = 0xa7;
      }
      else {
        if (iVar2 != 2) goto LAB_004650a5;
        DAT_004c4a5c = 0x44bb8000;
        iVar4 = 0x3de;
        iVar6 = 0x5a;
        iVar7 = 0x36;
        param_1 = 0x28;
      }
      if (DAT_00e287e0 != 0) {
        FUN_00431a50(DAT_00e287e0,2,0xfffffffc,0x10,3);
      }
    }
  }
LAB_004650a5:
  if (*(int *)(iVar3 + 0x1ac) == 5) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    iVar6 = 0xbe;
    iVar7 = 0x37;
    param_1 = 10;
    if (iVar2 == 0) {
      DAT_004c4a5c = 0x45fa0000;
      iVar4 = 0x3de;
    }
    else {
      if (iVar2 == 1) {
        DAT_004c4a5c = 0x451c4000;
      }
      else {
        if (iVar2 != 2) goto LAB_00465100;
        DAT_004c4a5c = 0x457a0000;
      }
      iVar4 = 0x3e4;
    }
  }
LAB_00465100:
  if (*(int *)(iVar3 + 0x1ac) == 6) {
    DAT_004c4a5c = 0x462be000;
  }
  if (*(int *)(iVar3 + 0x1ac) != 7) goto LAB_00465146;
  iVar3 = *(int *)(iVar3 + 0x1c0);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      DAT_004c4a5c = 0x451c4000;
      goto LAB_00465146;
    }
    if (iVar3 != 2) goto LAB_00465146;
  }
  DAT_004c4a5c = 0x45bb8000;
LAB_00465146:
  if (iVar4 == 0) {
    FUN_0044e0c0(0);
    DAT_00e996e0 = DAT_00e996e0 | 2;
    return;
  }
  FUN_0044e0c0(1);
  FUN_0044e0e0(iVar4,1000,iVar6,iVar7,param_1,0xff);
  FUN_00483a60(iVar6,iVar7,param_1);
  DAT_00e996e0 = DAT_00e996e0 | 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004651a0(void)

{
  undefined4 *puVar1;
  int *piVar2;

  puVar1 = (undefined4 *)FUN_00448780(0x92);
  FUN_00448bd0(puVar1);
  _DAT_00e277e0 = *puVar1;
  piVar2 = (int *)FUN_00448780(0x31);
  FUN_00448bd0(piVar2);
  _DAT_00e28964 = **(undefined4 **)(*piVar2 + 0x18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004651f0(int param_1)

{
  FUN_00447300(0x54726967,0x1e);
  FUN_00450db0(0x54726967);
  _DAT_00e287f0 =
       FUN_0047ddc0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),
                    *(undefined4 *)(param_1 + 0x30));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00465230(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;

  FUN_00447300(0x546f7373,0x10);
  FUN_00450db0(0x546f7373);
  puVar2 = &DAT_00e27260;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00448780(0x13a);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)&DAT_00e28a20 + iVar3) = 0;
    }
    else {
      FUN_00431b20(puVar2,0xd065);
      *(undefined4 *)(puVar2 + 0x14) = 1;
      *(undefined4 **)(puVar2 + 0x18) = (undefined4 *)((int)&DAT_00e28820 + iVar3);
      *(undefined4 *)((int)&DAT_00e28820 + iVar3) = *puVar1;
      *(undefined **)((int)&DAT_00e28a20 + iVar3) = puVar2;
      if (puVar2 != (undefined *)0x0) {
        FUN_00431a50(puVar2,2,0xfffffffc,0x10,3);
      }
    }
    puVar2 = puVar2 + 0x58;
    iVar3 = iVar3 + 4;
  } while ((int)puVar2 < 0xe277e0);
  FUN_00431b20(&DAT_00e28740,0x5064);
  _DAT_00e28754 = 0x10;
  _DAT_00e28758 = &DAT_00e28a20;
  _DAT_00e287f8 = &DAT_00e28740;
  FUN_0047bcd0(&DAT_00e28a20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00465310(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;

  FUN_00447300(0x536d6f6b,8);
  FUN_00450db0(0x536d6f6b);
  puVar2 = &DAT_00e278a0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00448780(0x93);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)&DAT_00e271a0 + iVar3) = 0;
    }
    else {
      FUN_00431b20(puVar2,0xd065);
      *(undefined4 *)(puVar2 + 0x14) = 1;
      *(undefined4 **)(puVar2 + 0x18) = (undefined4 *)((int)&DAT_00e288c0 + iVar3);
      *(undefined4 *)((int)&DAT_00e288c0 + iVar3) = *puVar1;
      *(undefined **)((int)&DAT_00e271a0 + iVar3) = puVar2;
      if (puVar2 != (undefined *)0x0) {
        FUN_00431a50(puVar2,2,0xfffffffc,0x10,3);
      }
    }
    puVar2 = puVar2 + 0x58;
    iVar3 = iVar3 + 4;
  } while ((int)puVar2 < 0xe28660);
  FUN_00431b20(&DAT_00e27180,0x5064);
  _DAT_00e27194 = 0x28;
  _DAT_00e27198 = &DAT_00e271a0;
  _DAT_00e287fc = &DAT_00e27180;
  FUN_0046a5e0(&DAT_00e271a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004653f0(void)

{
  undefined4 uVar1;
  int *piVar2;

  _DAT_00e2880c = 0;
  uVar1 = FUN_00448780(0x93);
  FUN_00448bd0(uVar1);
  piVar2 = (int *)FUN_00448780(0x13e);
  if (piVar2 != (int *)0x0) {
    DAT_00e28764 = FUN_00448bd0(piVar2);
    DAT_00e28a00 = *piVar2;
    FUN_0046d610(DAT_00e28764);
    _DAT_00e2880c = DAT_00e28a00;
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,0xfffffffc,0x10,3);
    }
    FUN_004313d0(&DAT_00e289c0);
  }
  return;
}



void FUN_00465480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;

  iVar2 = *param_1;
  while (iVar2 != -1) {
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  if (param_1[1] == 0x44617461) {
    iVar2 = param_1[2];
    param_1 = param_1 + 3;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*param_1 == 0x4c537472) {
          local_c = param_1[1];
          local_8 = param_1[2];
          local_4 = param_1[3];
          FUN_0042c490(iVar3,&local_c);
          param_1 = param_1 + 4;
        }
        else {
          param_1 = param_1 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}



undefined4 FUN_00465500(void)

{
  return DAT_00e287ec;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00465510(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;

  puVar2 = &DAT_00e287e0;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00431b20(&DAT_00e28980,0x5064);
  _DAT_00e28994 = 0xf;
  _DAT_00e28998 = &DAT_00e287e0;
  DAT_00e289a4 = FUN_00445b40();
  FUN_004270c0();
  puVar2 = (undefined4 *)FUN_00448780(*(undefined4 *)(param_1 + 0x1b0));
  uVar3 = FUN_00448bd0(puVar2);
  DAT_00e287e0 = puVar2[2];
  DAT_00e287ec = *puVar2;
  if (DAT_0050ccf0 != 0) {
    DAT_0050cd08 = DAT_00e287e0;
  }
  FUN_00448d10(&DAT_00e289a0,&DAT_00e286d0,&DAT_00e288b0);
  iVar6 = FUN_00445b40();
  DAT_00e289a4 = iVar6 - DAT_00e289a4;
  FUN_00465230(param_1);
  FUN_00465310(param_1);
  FUN_004653f0(param_1);
  FUN_00464b90(param_1,uVar3,puVar2);
  FUN_00465480(puVar2);
  if ((*(int *)(param_1 + 0x1ac) == 4) && (*(int *)(param_1 + 0x1c0) == 0)) {
    piVar4 = (int *)FUN_00448780(0x129);
    FUN_00448bd0(piVar4);
    _DAT_00e287e8 = *piVar4;
    if (*piVar4 != 0) {
      FUN_00431a50(*piVar4,2,3,0x10,2);
    }
  }
  else {
    _DAT_00e287e8 = 0;
  }
  FUN_004651a0();
  piVar5 = (int *)FUN_00448780(0x72);
  iVar6 = 0;
  piVar4 = (int *)(param_1 + 0x10);
  _DAT_00e28804 = *piVar5;
  do {
    iVar1 = *(int *)(*(int *)(*piVar5 + 0x18) + iVar6);
    *piVar4 = iVar1;
    if (iVar1 != 0) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
    iVar6 = iVar6 + 4;
    piVar4 = piVar4 + 1;
  } while (iVar6 < 0x18);
  piVar4 = (int *)FUN_00448780(0x136);
  FUN_00448bd0(piVar4);
  _DAT_00e28800 = *piVar4;
  if (_DAT_00e28800 != 0) {
    FUN_00431a50(_DAT_00e28800,2,0xfffffffc,0x10,3);
  }
  *(int *)(param_1 + 0x28) = *piVar4;
  piVar4 = (int *)FUN_00448780(0x47);
  _DAT_00e28814 = *piVar4;
  if (_DAT_00e28814 != 0) {
    FUN_00431a50(_DAT_00e28814,2,0xfffffffc,0x10,3);
  }
  piVar4 = (int *)FUN_00448780(0x47);
  _DAT_00e28818 = *piVar4;
  if (_DAT_00e28818 != 0) {
    FUN_00431a50(_DAT_00e28818,2,0xfffffffc,0x10,3);
  }
  *(undefined4 *)(param_1 + 0x30) = DAT_00e287ec;
  FUN_00431b20(&DAT_00e27800,0x5064);
  DAT_00e27814 = 0;
  DAT_00e27818 = &DAT_00e286e0;
  _DAT_00e28808 = &DAT_00e27800;
  FUN_00431b20(&DAT_00e28660,0x5064);
  DAT_00e28674 = 0;
  DAT_00e28678 = &DAT_00e28780;
  _DAT_00e287e4 = &DAT_00e28660;
  FUN_004651f0(param_1);
  FUN_00483fc0(&DAT_00e28980);
  iVar6 = *(int *)(param_1 + 0x1c0);
  uVar3 = 0x16;
  uVar7 = 0x10;
  if (iVar6 == 1) {
    uVar3 = 0x26;
    uVar7 = 0x20;
  }
  if (iVar6 == 2) {
    uVar3 = 0x46;
    uVar7 = 0x40;
  }
  if (iVar6 == 3) {
    uVar3 = 0x16;
    uVar7 = 0x10;
  }
  FUN_00483ff0(4,0xffffff00);
  FUN_00483ff0(3,0xffffff00);
  FUN_00483ff0(6,uVar3);
  FUN_00445640(5,uVar7 | 2);
  FUN_00426910(DAT_00e287ec,0xffffffff,uVar3,0);
  return;
}



void FUN_00465820(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return;
}



void FUN_00465840(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_30;
  int local_28;
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar3 = param_2;
  local_24[0] = 3;
  local_24[2] = 3;
  local_14 = 3;
  local_c = 3;
  local_4 = 3;
  iVar5 = *(int *)(param_1 + 0x1bc);
  local_28 = 4;
  local_24[1] = 4;
  local_24[3] = 4;
  local_10 = 4;
  local_8 = 4;
  FUN_0044eeb0(param_1 + 0x34,param_2,0);
  pfVar1 = (float *)(param_2 + 0x30);
  iVar4 = 4;
  iVar5 = 4 - iVar5;
  *pfVar1 = *pfVar1 - *(float *)(param_2 + 0x10) * 100.0;
  pfVar2 = (float *)(param_2 + 0x14);
  iVar6 = 0;
  param_2 = 0;
  local_30 = param_3;
  param_1 = 4;
  *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) - *pfVar2 * 100.0;
  *(float *)(iVar3 + 0x38) = *(float *)(iVar3 + 0x38) - *(float *)(iVar3 + 0x18) * 100.0;
  if (3 < param_3) {
    piVar7 = &local_28;
    do {
      piVar7 = piVar7 + 1;
      param_3 = param_3 - iVar4;
      iVar6 = iVar6 + 1;
      iVar4 = *piVar7;
      iVar5 = iVar5 + iVar4;
      param_1 = iVar4;
      param_2 = iVar6;
      local_30 = param_3;
    } while (iVar4 <= param_3);
  }
  if (0 < iVar5) {
    param_1 = param_1 - iVar5;
  }
  FUN_0042fa80(pfVar1,pfVar1,(float)param_2 * -30.0,iVar3 + 0x10);
  FUN_0042fa80(pfVar1,pfVar1,((float)param_1 - 1.0) * 0.5 * -20.0 + (float)local_30 * 20.0,iVar3);
  return;
}



void FUN_00465980(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *local_84;
  undefined local_80 [40];
  undefined4 local_58;
  undefined local_40 [64];

  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x5c) = 0xffff;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0xbf800000;
  *(undefined4 *)(param_2 + 100) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x68) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x6c) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x70) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffc;
  iVar4 = FUN_00450d20(0x54657374);
  *(int *)(param_2 + 0x84) = iVar4;
  *(int *)(iVar4 + 0x1e70) = param_2;
  if (param_4 == (int *)0x0) {
    if (param_6 != 0) {
      *(int *)(DAT_00e27818 + DAT_00e27814 * 4) = param_6;
      DAT_00e27814 = DAT_00e27814 + 1;
      FUN_00431a50(param_6,2,3,0x10,2);
      local_84 = (undefined *)0x0;
    }
  }
  else {
    *(int *)(DAT_00e27818 + DAT_00e27814 * 4) = *param_4;
    iVar3 = DAT_00e28674;
    DAT_00e27814 = DAT_00e27814 + 1;
    iVar2 = DAT_00e28674 * 0x58;
    local_84 = &DAT_00e28a80 + iVar2;
    FUN_00431b20(local_84,0xd065);
    *(undefined **)(DAT_00e28678 + iVar3 * 4) = local_84;
    *(undefined4 *)(&DAT_00e28a94 + iVar2) = 1;
    *(undefined **)(&DAT_00e28a98 + iVar2) = &DAT_00e28680 + iVar3 * 4;
    *(undefined4 *)(&DAT_00e28a98 + iVar2) = *(undefined4 *)(*param_4 + 0x18);
    FUN_004313d0(local_80);
    local_58 = 0xbf800000;
    FUN_00431640(local_84,local_80);
    *(uint *)(&DAT_00e28a90 + iVar2) = *(uint *)(&DAT_00e28a90 + iVar2) | 1;
    DAT_00e28674 = DAT_00e28674 + 1;
    FUN_00465820(param_4[7],&DAT_00e277e0);
    FUN_00465820(param_4[9],&DAT_00e277e0);
    if (param_4[0x48] != 0) {
      FUN_00431a50(param_4[0x48],2,0xfffffffc,0x10,3);
    }
    if (param_4[0x49] != 0) {
      FUN_00431a50(param_4[0x49],2,0xfffffffc,0x10,3);
    }
    FUN_00465820(param_4[0x41],&DAT_00e28964);
    FUN_00465820(param_4[0x42],&DAT_00e28964);
  }
  FUN_00465840(param_1,local_40,*(undefined4 *)(*(int *)(iVar4 + 0x1e70) + 0x14));
  uVar5 = FUN_0045d350(param_8);
  FUN_00475ad0(iVar4,*(undefined4 *)(param_1 + 0x2c),param_4,*(undefined4 *)(param_1 + 0x30),
               (int)*(short *)(iVar4 + 4),local_40,param_3,*(undefined4 *)(param_1 + 0x1bc),uVar5);
  *(undefined **)(iVar4 + 0x1994) = local_84;
  *(int *)(iVar4 + 0x348) = param_6;
  *(undefined4 *)(iVar4 + 0x34c) = param_7;
  if ((param_4 != (int *)0x0) && ((*(byte *)(iVar4 + 0x60) & 0x20) != 0)) {
    *(uint *)(*param_4 + 0x10) = *(uint *)(*param_4 + 0x10) | 0xc;
    *(undefined2 *)(*param_4 + 0xe) = *(undefined2 *)(iVar4 + 0x300);
    if (DAT_0050ca18 < 2) {
      if (param_4[1] != 0) {
        puVar1 = (uint *)(param_4[1] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[2] != 0) {
        puVar1 = (uint *)(param_4[2] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[3] != 0) {
        puVar1 = (uint *)(param_4[3] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[4] != 0) {
        puVar1 = (uint *)(param_4[4] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[5] != 0) {
        puVar1 = (uint *)(param_4[5] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[0x47] != 0) {
        puVar1 = (uint *)(param_4[0x47] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[0x2a] != 0) {
        puVar1 = (uint *)(param_4[0x2a] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x2b] != 0) {
        puVar1 = (uint *)(param_4[0x2b] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x1c] != 0) {
        puVar1 = (uint *)(param_4[0x1c] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x1d] != 0) {
        puVar1 = (uint *)(param_4[0x1d] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
    }
  }
  FUN_00483a40(*(undefined4 *)(iVar4 + 0x300));
  if ((*(uint *)(iVar4 + 0x60) & 0x100) != 0) {
    FUN_00428a60(1,1,iVar4 + 0x20,0);
  }
  return;
}



void FUN_00465cb0(int param_1)

{
  int *piVar1;

  piVar1 = (int *)(param_1 + 0x34);
  *piVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0044eef0(piVar1,0);
  }
  FUN_0044eeb0(piVar1,param_1 + 100,0);
  *(undefined4 *)(param_1 + 0x38) = 0x3fe66666;
  return;
}



void FUN_00465d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = FUN_00445b40();
  uVar2 = FUN_004472e0(*(undefined4 *)(param_1 + 0x1b4));
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  iVar3 = FUN_00445b40();
  DAT_00e288b4 = DAT_00e288b4 + (iVar3 - iVar1);
  FUN_0047f6f0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  FUN_00465cb0(param_1);
  return;
}



void FUN_00465d50(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float local_ac;
  float local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;

  pfVar1 = (float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xa0);
  iVar2 = FUN_004800c0(&local_40);
  if (iVar2 == 0) {
    FUN_00430b80(pfVar1,&local_ac);
    local_4c = *pfVar1;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    local_90 = local_4c * -10.0;
    local_ac = local_ac - local_4c * 25.0;
    local_94 = *(float *)(param_1 + 0x68) * -10.0;
    local_a8 = local_a8 - *(float *)(param_1 + 0x68) * 25.0;
    local_98 = 0;
    iVar2 = 6;
    local_9c = 0;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    local_8c = *pfVar1;
    local_88 = *(float *)(param_1 + 0x68);
    local_84 = *(undefined4 *)(param_1 + 0x6c);
    local_80 = *(undefined4 *)(param_1 + 0x70);
    local_7c = *(undefined4 *)(param_1 + 0x74);
    local_78 = *(undefined4 *)(param_1 + 0x78);
    local_74 = *(undefined4 *)(param_1 + 0x7c);
    local_70 = *(undefined4 *)(param_1 + 0x80);
    local_6c = *(undefined4 *)(param_1 + 0x84);
    local_68 = *(undefined4 *)(param_1 + 0x88);
    local_64 = *(undefined4 *)(param_1 + 0x8c);
    local_60 = *(undefined4 *)(param_1 + 0x90);
    local_5c = *(undefined4 *)(param_1 + 0x94);
    local_58 = *(undefined4 *)(param_1 + 0x98);
    local_50 = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xd8);
    local_8 = *(float *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xe0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x68);
    *(float *)(param_1 + 0xe4) = *pfVar1;
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    FUN_00430b80(pfVar1,&local_ac);
    local_48 = *(float *)(param_1 + 0x68);
    local_9c = 0;
    local_ac = local_ac - *pfVar1 * 10.0;
    local_98 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    iVar2 = 3;
    local_a8 = local_a8 - local_48 * 10.0;
    local_90 = *pfVar1 * -10.0;
    local_94 = local_48 * -10.0;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    FUN_00430b80(&local_40,&local_ac);
    local_90 = local_40 * -10.0;
    local_ac = local_ac - local_40 * 10.0;
    local_94 = local_3c * -10.0;
    local_a8 = local_a8 - local_3c * 10.0;
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    local_9c = 0;
    local_98 = 0;
    iVar2 = 3;
    do {
      FUN_00431710(*puVar3,&local_ac);
      local_ac = local_ac - local_90;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      local_a8 = local_a8 - local_94;
    } while (iVar2 != 0);
    local_8c = local_40;
    local_88 = local_3c;
    local_84 = local_38;
    local_80 = local_34;
    local_7c = local_30;
    local_78 = local_2c;
    local_74 = local_28;
    local_70 = local_24;
    local_6c = local_20;
    local_68 = local_1c;
    local_64 = local_18;
    local_60 = local_14;
    local_5c = local_10;
    local_58 = local_c;
    local_50 = local_4;
  }
  local_54 = local_8 - -22.0;
  FUN_00431390(&local_8c,0x43340000,0,0,0x3f800000,&local_8c);
  FUN_00431640(*(undefined4 *)(param_1 + 0x28),&local_8c);
  FUN_0042b640(*(undefined4 *)(param_1 + 0x28),0xffffffff,0xffffffff,0,0xff,0,0);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x28),2,3,0x10,2);
  }
  return;
}



void FUN_00466370(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  local_c = 0x42800000;
  local_8 = 0x42800000;
  local_4 = 0x42800000;
  local_18 = 0x437f0000;
  local_14 = 0x437f0000;
  local_10 = 0x437f0000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xc2c80000;
  FUN_00483840(0xffffffff,&local_c,&local_18,&local_24);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004663e0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  int **ppiVar10;
  int iVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  int *local_1ec;
  int local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0 [19];
  undefined auStack_194 [4];
  int local_190 [20];
  int aiStack_140 [20];
  undefined4 local_f0 [20];
  int aiStack_a0 [20];
  int local_50 [20];

  DAT_00e27240 = FUN_00445b40();
  FUN_00447300(0x54657374,*(undefined4 *)(param_1 + 0x1bc));
  FUN_00450db0(0x54657374);
  iVar3 = FUN_00445b40();
  DAT_00e27240 = iVar3 - DAT_00e27240;
  iVar3 = 0;
  puVar12 = &DAT_00e28860;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  iVar7 = 0;
  do {
    (&DAT_00e27840)[iVar3] = 0;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x50);
  iVar3 = *(int *)(param_1 + 0x1bc);
  local_1e4 = 0;
  if (0 < iVar3) {
    ppiVar13 = (int **)(param_2 + 0x18);
    do {
      iVar4 = 0;
      if (0 < iVar3) {
        ppiVar10 = (int **)(param_2 + 0x18);
        do {
          if ((iVar7 != iVar4) && (**ppiVar13 == **ppiVar10)) {
            local_1e4 = 1;
          }
          iVar4 = iVar4 + 1;
          ppiVar10 = ppiVar10 + 0x22;
        } while (iVar4 < iVar3);
      }
      iVar7 = iVar7 + 1;
      ppiVar13 = ppiVar13 + 0x22;
    } while (iVar7 < iVar3);
  }
  _DAT_0050ca1c = local_1e4;
  local_1e8 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    local_1ec = &DAT_00e28860;
    puVar12 = local_f0;
    piVar6 = (int *)(param_2 + 0x18);
    do {
      iVar3 = FUN_00445b40();
      *local_1ec = iVar3;
      iVar3 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      (&DAT_00e27840)[local_1e8 * 4] = *(undefined *)(iVar3 + 2);
      iVar3 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      (&DAT_00e27841)[local_1e8 * 4] = *(undefined *)(iVar3 + 3);
      iVar7 = FUN_00421360(*(undefined4 *)(*piVar6 + 0x14));
      iVar3 = DAT_0050ca18;
      (&DAT_00e27842)[local_1e8 * 4] = *(undefined *)(iVar7 + 4);
      (&DAT_00e27843)[local_1e8 * 4] = 0;
      cVar2 = '\x03';
      if (piVar6[-5] == 0x4c6f636c) {
        cVar2 = (1 < iVar3) + '\x01';
      }
      if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
        if (iVar3 == 0) {
          cVar2 = '\x03';
        }
      }
      else {
        cVar2 = '\x01';
      }
      if ((cVar2 == '\x02') || (cVar2 == '\x01')) {
        iVar3 = *piVar6;
        local_1e0[local_1e8] = 0;
        *puVar12 = 0;
        iVar3 = FUN_00448780(*(undefined4 *)(iVar3 + 4));
        aiStack_140[local_1e8] = iVar3;
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x1bc) = local_1e8;
          DAT_0050ca2c = local_1e8;
        }
        else if ((cVar2 == '\x01') && (-1 < *(int *)(*piVar6 + 8))) {
          iVar7 = FUN_00448780(*(int *)(*piVar6 + 8));
          aiStack_a0[local_1e8] = iVar7;
          if (iVar7 == 0) {
            *(int *)(param_1 + 0x1bc) = local_1e8;
            DAT_0050ca2c = local_1e8;
          }
          else {
            FUN_00448c70(iVar3,iVar7);
          }
        }
      }
      else if (cVar2 == '\x03') {
        aiStack_140[local_1e8] = 0;
        *puVar12 = 0;
        local_1e0[local_1e8] = 0;
        puVar5 = (undefined4 *)FUN_00448780(*(undefined4 *)(*piVar6 + 0xc));
        if (puVar5 != (undefined4 *)0x0) {
          uVar1 = puVar5[1];
          local_1e0[local_1e8] = *puVar5;
          *puVar12 = uVar1;
        }
      }
      else if (cVar2 == '\x04') {
        iVar3 = *piVar6;
        aiStack_140[local_1e8] = 0;
        *puVar12 = 0;
        uVar1 = *(undefined4 *)(iVar3 + 0x10);
        local_1e0[local_1e8] = 0;
        puVar5 = (undefined4 *)FUN_00448780(uVar1);
        if (puVar5 != (undefined4 *)0x0) {
          uVar1 = *puVar5;
          *puVar12 = 0;
          local_1e0[local_1e8] = uVar1;
        }
      }
      iVar3 = FUN_00445b40();
      piVar6 = piVar6 + 0x22;
      puVar12 = puVar12 + 1;
      *local_1ec = iVar3 - *local_1ec;
      local_1e8 = local_1e8 + 1;
      local_1ec = local_1ec + 1;
    } while (local_1e8 < *(int *)(param_1 + 0x1bc));
  }
  iVar3 = *(int *)(param_1 + 0x1bc);
  if (0 < iVar3) {
    piVar6 = local_190;
    for (iVar7 = iVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = -1;
      piVar6 = piVar6 + 1;
    }
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x1bc);
      FUN_004816b0();
      iVar4 = __ftol();
      iVar11 = -1;
      if (-1 < iVar4) {
        puVar8 = auStack_194;
        do {
          piVar6 = (int *)(puVar8 + 4);
          puVar8 = puVar8 + 4;
          iVar11 = iVar11 + 1;
          if (*piVar6 == -1) {
            iVar4 = iVar4 + -1;
          }
        } while (-1 < iVar4);
      }
      local_190[iVar11] = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar7 = 1;
  if (0 < iVar3) {
    piVar9 = local_50;
    piVar6 = (int *)(param_2 + 4);
    iVar4 = iVar3;
    do {
      if (((*(byte *)(piVar6 + 1) & 0x20) == 0) && (*piVar6 != 0x4c6f636c)) {
        *piVar9 = iVar7;
        iVar7 = iVar7 + 1;
      }
      else {
        *piVar9 = -1;
      }
      piVar6 = piVar6 + 0x22;
      piVar9 = piVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    piVar6 = local_190;
    do {
      iVar3 = *piVar6;
      FUN_00465980(param_1,param_2 + iVar3 * 0x88,local_50[iVar3],aiStack_140[iVar3],
                   aiStack_a0[iVar3],local_1e0[iVar3],local_f0[iVar3],local_1e4);
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1bc));
  }
  return;
}



void FUN_004667e0(int param_1)

{
  float fVar1;
  float local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  DAT_004c7084 = 0xffffffff;
  DAT_0050cb58 = 0;
  local_c = 0x42040000;
  local_8 = 0;
  local_100[0] = 8.64;
  local_100[1] = 20.0;
  local_100[2] = 11.2;
  local_100[3] = 38.0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0x410c8b44;
  local_dc = 0x420c0000;
  local_d8 = 0x411b3334;
  local_d4 = 0x42180000;
  local_d0 = 0x412ccccd;
  local_cc = 0x42180000;
  local_c8 = 0x4135999a;
  local_c4 = 0x42000000;
  local_c0 = 0x410c6666;
  local_bc = 0x41d00000;
  local_b8 = 0x411b3334;
  local_b4 = 0x420c0000;
  local_b0 = 0x411fdb23;
  local_ac = 0x42200000;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0x411eecc0;
  local_9c = 0x42100000;
  local_98 = 0x412d999a;
  local_94 = 0x420c0000;
  local_90 = 0x4124cccd;
  local_8c = 0x420c0000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x4120a1cb;
  local_7c = 0x42140000;
  local_78 = 0x41200000;
  local_74 = 0x42080000;
  local_70 = 0x4120cccd;
  local_6c = 0x420c0000;
  local_68 = 0x41273333;
  local_64 = 0x41d80000;
  local_60 = 0x41075c28;
  local_5c = 0x41b80000;
  local_58 = 0x41139999;
  local_54 = 0x42200000;
  local_50 = 0x411b3334;
  local_4c = 0x420c0000;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x410cd4fd;
  local_3c = 0x41c80000;
  local_38 = 0x41266666;
  local_34 = 0x41f00000;
  local_30 = 0x4129999a;
  local_2c = 0x42040000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x410dd70a;
  local_1c = 0x42000000;
  local_18 = 0x411f147b;
  local_14 = 0x41f00000;
  local_10 = 0x4121999a;
  local_4 = 0;
  DAT_004c707c = local_100[(*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1ac) * 4) * 2] * 0.1;
  DAT_004c7080 = local_100[(*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1ac) * 4) * 2 + 1];
  if ((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) != 3)) {
    DAT_004c7084 = 1;
    DAT_0050cb58 = (uint)(*(int *)(param_1 + 0x1c0) == 0);
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_0050cb58 = 2;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_0050cb58 = 3;
    }
  }
  if (*(int *)(param_1 + 0x1ac) == 3) {
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_004c7084 = 6;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_004c7084 = 5;
    }
  }
  if ((*(int *)(param_1 + 0x1ac) == 4) && (*(int *)(param_1 + 0x1c0) != 3)) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      DAT_004c7084 = 2;
    }
    if (*(int *)(param_1 + 0x1c0) == 1) {
      DAT_004c7084 = 3;
    }
    if (*(int *)(param_1 + 0x1c0) == 2) {
      DAT_004c7084 = 4;
    }
  }
  if (*(int *)(param_1 + 0x1c4) == -1) {
    fVar1 = 0.9;
  }
  else {
    if (*(int *)(param_1 + 0x1c4) != 1) goto LAB_00466bb2;
    fVar1 = 1.1;
  }
  DAT_004c707c = DAT_004c707c * fVar1;
LAB_00466bb2:
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    DAT_004c7080 = 2.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00466bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  iVar11 = 0;
  DAT_0050c530 = 0;
  sVar7 = 0;
  psVar4 = &DAT_0050c9d0;
  do {
    *psVar4 = sVar7;
    psVar4 = psVar4 + 1;
    sVar7 = sVar7 + 1;
  } while ((int)psVar4 < 0x50c9f8);
  FUN_00445aa0(1);
  DAT_00e289a8 = FUN_00445b40();
  DAT_00e288b4 = 0;
  DAT_0050ca2c = 0;
  FUN_00426910();
  FUN_004258e0();
  FUN_0042d470();
  FUN_0042c460();
  FUN_0042c3e0();
  FUN_0042c400();
  iVar9 = 0;
  iVar12 = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  DAT_00e28960 = param_2;
  DAT_00e2899c = 0;
  DAT_00e27820 = 0;
  DAT_00e2781c = 0;
  DAT_00e27890 = 0;
  DAT_0050ca18 = 0;
  iVar5 = param_2;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      iVar10 = iVar9;
      iVar13 = iVar12;
      iVar1 = DAT_00e2781c;
      iVar2 = DAT_00e27820;
      iVar3 = DAT_00e2899c;
      if ((((*(int *)(iVar5 + 4) == 0x4c6f636c) &&
           (DAT_0050ca18 = DAT_0050ca18 + 1, iVar10 = iVar5, iVar3 = iVar5, iVar9 != 0)) &&
          (iVar10 = iVar9, iVar2 = iVar5, iVar3 = DAT_00e2899c, DAT_00e27820 != 0)) &&
         ((iVar13 = iVar5, iVar1 = iVar5, iVar2 = DAT_00e27820, iVar12 != 0 &&
          (iVar13 = iVar12, iVar1 = DAT_00e2781c, iVar11 == 0)))) {
        iVar11 = iVar5;
        DAT_00e27890 = iVar5;
      }
      DAT_00e2899c = iVar3;
      DAT_00e27820 = iVar2;
      DAT_00e2781c = iVar1;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x88;
      iVar9 = iVar10;
      iVar12 = iVar13;
    } while (iVar8 < *(int *)(param_1 + 0x1bc));
  }
  DAT_0050ccf8 = 0;
  DAT_0050cd00 = 0;
  DAT_0050ccfc = 0;
  DAT_0050cd04 = 0;
  DAT_0050ccf0 = 0;
  DAT_0050ca14 = 0;
  if (1 < DAT_0050ca18) {
    DAT_004b91c8 = 0;
    DAT_0050ccf0 = 1;
    if (*(int *)(param_1 + 0x1ac) == 6) {
      DAT_0050ca14 = 1;
    }
  }
  if ((*(int *)(param_1 + 0x1ac) == 3) && (*(int *)(param_1 + 0x1c0) == 2)) {
    DAT_0050cb40 = 1;
  }
  else if ((*(int *)(param_1 + 0x1ac) != 1) || (DAT_0050cb40 = 2, *(int *)(param_1 + 0x1c0) != 0)) {
    DAT_0050cb40 = 0;
  }
  FUN_00465510(param_1);
  FUN_00464630(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),param_1);
  FUN_00465d00(param_1);
  FUN_00465d50(param_1);
  FUN_00466370(param_1);
  FUN_004667e0(param_1);
  FUN_004663e0(param_1,param_2);
  FUN_00427d70();
  iVar11 = 0;
  do {
    FUN_004276a0(iVar11,0xff0000);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x14);
  DAT_00e28a60 = FUN_00445b40();
  _DAT_00e27894 = FUN_00445bf0();
  _DAT_00e2875c = DAT_00e28a60 - DAT_00e289a8;
  _DAT_00e28760 = (0x400000 - _DAT_00e2875c) - _DAT_00e27894;
  piVar6 = &DAT_00e28860;
  do {
    iVar11 = *piVar6;
    piVar6 = piVar6 + 1;
    _DAT_00e2875c = _DAT_00e2875c - iVar11;
  } while ((int)piVar6 < 0xe288b0);
  _DAT_00e2875c = _DAT_00e2875c - (DAT_00e27240 + DAT_00e288b4 + DAT_00e289a4);
  FUN_00445b90();
  return;
}



void FUN_00466e40(undefined4 param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if ((param_2 & 4) == 0) {
    DAT_00e996e0 = DAT_00e996e0 & 0xfd;
    if (DAT_00e287e0 == 0) goto LAB_00466e80;
    uVar2 = 2;
    uVar1 = 3;
  }
  else {
    DAT_00e996e0 = DAT_00e996e0 | 2;
    if (DAT_00e287e0 == 0) goto LAB_00466e80;
    uVar2 = 3;
    uVar1 = 0xfffffffc;
  }
  FUN_00431a50(DAT_00e287e0,2,uVar1,0x10,uVar2);
LAB_00466e80:
  if ((((DAT_0050c048 & 0x200) != 0) && (0 < DAT_0050c040)) && ((DAT_00e98e90 & 0x1100) == 0x1100))
  {
    DAT_00e996e0 = DAT_00e996e0 | 2;
    FUN_00483a60(0,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00466ec0(float param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar4 = (int)param_1;
  uVar9 = 1;
  fVar2 = *(float *)((int)param_1 + 0x78);
  iVar8 = 5;
  bVar3 = false;
  local_1c = 0.1;
  local_20 = 0.1;
  local_24 = 0.2;
  local_28 = 0x3e4ccccd;
  local_2c = 0x3e4ccccd;
  local_18 = 1;
  local_10 = 5;
  if (*(int *)((int)param_1 + 0xc) == -1) {
    return;
  }
  local_14 = *(int *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x14) = param_2;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  if (*(int *)((int)param_1 + 8) == 6) {
    return;
  }
  param_1 = fVar2;
  if (fVar2 < 0.0) {
    param_1 = -fVar2;
  }
  FUN_00468d00(iVar4);
  iVar5 = **(int **)(iVar4 + 0x34);
  if (iVar5 != 0) {
    iVar7 = 0;
    do {
      *(uint *)(iVar5 + 0x100) = *(uint *)(iVar5 + 0x100) | 0x10000000;
      iVar7 = iVar7 + 4;
      iVar5 = *(int *)(iVar7 + *(int *)(iVar4 + 0x34));
    } while (iVar5 != 0);
  }
  switch(*(undefined4 *)(iVar4 + 0x14)) {
  case 0:
    iVar5 = 0;
    *(undefined4 *)(iVar4 + 0x78) = 0;
    iVar8 = **(int **)(iVar4 + 0x34);
    while (iVar8 != 0) {
      iVar5 = iVar5 + 4;
      *(uint *)(iVar8 + 0x100) = *(uint *)(iVar8 + 0x100) & 0xefffffff;
      iVar8 = *(int *)(iVar5 + *(int *)(iVar4 + 0x34));
    }
    break;
  case 1:
    uVar9 = 0;
    FUN_004816b0();
    uVar11 = __ftol();
    switch(uVar11) {
    case 0:
      *(undefined4 *)(iVar4 + 0x88) = 0x1b;
      break;
    case 1:
      *(undefined4 *)(iVar4 + 0x88) = 0x1c;
      break;
    case 2:
      *(undefined4 *)(iVar4 + 0x88) = 0xf;
      break;
    case 3:
      *(undefined4 *)(iVar4 + 0x88) = 0x19;
      break;
    default:
      *(undefined4 *)(iVar4 + 0x88) = 0x1a;
    }
    break;
  case 2:
  case 0x21:
    *(undefined4 *)(iVar4 + 0x88) = 0xf;
    uVar9 = 0;
    break;
  case 4:
  case 5:
    *(undefined4 *)(iVar4 + 0x88) = 0x10;
    uVar9 = 0;
    break;
  case 6:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xb;
    if (local_14 == 6) {
      local_28 = 0;
    }
    break;
  case 7:
    *(undefined4 *)(iVar4 + 0x88) = 0x13;
    uVar9 = 0;
    break;
  case 8:
    iVar8 = FUN_004816b0();
    if (0.3 <= (float)iVar8 * 4.656613e-10) {
      uVar11 = 0x32;
    }
    else {
      uVar11 = 0x31;
    }
    FUN_00426c80(uVar11,6,0x3e800000,0x3f000000,0);
    *(undefined4 *)(iVar4 + 0x88) = 0x14;
    local_28 = 0;
    break;
  case 9:
    *(undefined4 *)(iVar4 + 0x88) = 0x15;
    local_28 = 0;
    uVar9 = 0;
    break;
  case 10:
    goto switchD_00466f94_caseD_a;
  case 0xb:
    *(undefined4 *)(iVar4 + 0x88) = 9;
    local_28 = 0;
    local_2c = 0;
    break;
  case 0xc:
    *(undefined4 *)(iVar4 + 0x88) = 10;
    local_28 = 0;
    uVar9 = 0;
    break;
  case 0xd:
  case 0x36:
  case 0x3b:
  case 0x40:
    *(undefined4 *)(iVar4 + 0x88) = 3;
    uVar9 = 0;
    break;
  case 0xe:
    local_28 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 4;
    iVar8 = FUN_004816b0();
    *(float *)(iVar4 + 0x1c) = (float)iVar8 * 4.656613e-10 * 4.0 - -8.0;
    break;
  case 0xf:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 5;
    local_28 = 0;
    break;
  case 0x10:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    break;
  case 0x11:
    *(undefined4 *)(iVar4 + 0x88) = 5;
    iVar8 = FUN_00427670(0,0x80000000);
    if (iVar8 != 0) break;
    if ((DAT_00e2a67c == 4) || (DAT_00e2a67c == 7)) {
      iVar8 = FUN_004816b0();
      if (0.15 <= (float)iVar8 * 4.656613e-10) break;
      iVar8 = FUN_004816b0();
      if (0.998 < (float)iVar8 * 4.656613e-10) {
        uVar15 = 6;
        uVar14 = 9;
        uVar13 = 6;
        uVar12 = 9;
        uVar11 = 6;
LAB_0046745b:
        FUN_00427590(0,(int)DAT_00e35a84,uVar11,uVar12,uVar13,uVar14,uVar15,0);
        break;
      }
      uVar15 = 8;
      uVar14 = 0xe;
      uVar13 = 0x12;
      uVar12 = 5;
      uVar11 = 1;
    }
    else {
      if (DAT_00e2a67c != 8) break;
      iVar8 = FUN_004816b0();
      if (0.05 <= (float)iVar8 * 4.656613e-10) {
        iVar8 = FUN_004816b0();
        if ((float)iVar8 * 4.656613e-10 < 0.001) {
          FUN_00427590(0,(int)DAT_00e35a84,6,9,6,9,6,0);
        }
        break;
      }
      iVar8 = FUN_004816b0();
      if (0.5 <= (float)iVar8 * 4.656613e-10) {
        uVar15 = 0xc;
        uVar14 = 3;
        uVar13 = 5;
        uVar12 = 7;
        uVar11 = 8;
        goto LAB_0046745b;
      }
      uVar15 = 0xb;
      uVar14 = 1;
      uVar13 = 5;
      uVar12 = 7;
      uVar11 = 0xc;
    }
    FUN_00427590(0,(int)DAT_00e35a84,uVar11,uVar12,uVar13,uVar14,uVar15,0);
    break;
  case 0x12:
    if ((*(float *)(iVar4 + 0x50) == _DAT_004c403c) && (*(float *)(iVar4 + 0x54) == _DAT_004c4040))
    {
      iVar8 = 2;
      bVar3 = true;
      local_10 = 2;
    }
    FUN_004816b0();
    iVar5 = __ftol();
    if (iVar5 == *(int *)(iVar4 + 0xa4)) {
      iVar5 = iVar5 + 1;
    }
    if (iVar8 <= iVar5) {
      iVar5 = 0;
    }
    *(int *)(iVar4 + 0xa4) = iVar5;
    switch(iVar5) {
    case 0:
      if (bVar3) {
        *(undefined4 *)(iVar4 + 0x88) = 4;
        uVar9 = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x88) = 3;
        uVar9 = 0;
      }
      break;
    case 1:
      if (!bVar3) {
        *(undefined4 *)(iVar4 + 0x88) = 6;
        uVar9 = 0;
        break;
      }
    default:
switchD_00466f94_caseD_a:
      *(undefined4 *)(iVar4 + 0x88) = 8;
      uVar9 = 0;
      break;
    case 2:
      *(undefined4 *)(iVar4 + 0x88) = 7;
      uVar9 = 0;
      break;
    case 3:
      *(undefined4 *)(iVar4 + 0x88) = 4;
      uVar9 = 0;
    }
    break;
  case 0x13:
    local_2c = 0;
    if (*(int *)(iVar4 + 0x88) == 1) {
      local_18 = 0;
    }
    *(undefined4 *)(iVar4 + 0x88) = 1;
    break;
  case 0x14:
    FUN_0042f860(&local_c,iVar4 + 0x50,iVar4 + 0x44);
    local_4 = 0;
    if (*(int *)(iVar4 + 0xa0) == 0) {
      fVar10 = (float10)FUN_0042f560(-local_c,local_8);
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x6c);
    }
    fVar10 = fVar10 - (float10)*(float *)(iVar4 + 0x68);
    if (fVar10 < (float10)-180.0) {
      fVar10 = fVar10 - (float10)-360.0;
    }
    if ((float10)180.0 < fVar10) {
      fVar10 = fVar10 - (float10)360.0;
    }
    *(undefined4 *)(iVar4 + 0x88) = 1;
    if (((float10)5.0 < fVar10) || (fVar10 < (float10)-5.0)) {
      if (((float10)85.0 < fVar10) && (fVar10 < (float10)175.0)) {
        *(undefined4 *)(iVar4 + 0x88) = 0xb;
        uVar9 = 0;
      }
      if ((fVar10 < (float10)-85.0) && ((float10)-175.0 < fVar10)) {
        *(undefined4 *)(iVar4 + 0x88) = 0xb;
        uVar9 = 0;
        param_1 = -1.0;
      }
      if ((float10)175.0 < fVar10) {
        *(undefined4 *)(iVar4 + 0x88) = 0xc;
        uVar9 = 0;
      }
      else if (fVar10 < (float10)-175.0) {
        *(undefined4 *)(iVar4 + 0x88) = 0xc;
        uVar9 = 0;
      }
    }
    local_2c = 0;
    if ((local_14 == 0x13) && (*(int *)(iVar4 + 0x88) == 1)) {
      local_18 = 0;
    }
    break;
  case 0x18:
    *(undefined4 *)(iVar4 + 0x88) = 9;
    break;
  case 0x19:
    iVar8 = FUN_004816b0();
    if (0.75 <= (float)iVar8 * 4.656613e-10) {
      FUN_00427590(0,(int)DAT_00e35a84,2,2,2,2,2,0);
    }
    else {
      FUN_00467c80(10,0xb,0xc,0xd,0x12);
    }
    *(undefined4 *)(iVar4 + 0x88) = 9;
    uVar9 = 0;
    iVar8 = FUN_00450b30(0x456c6d6f,0x15);
    if (*(int *)(iVar8 + 0x14) == 0x20) {
      FUN_00466ec0(iVar8,0x25);
    }
    else if (*(int *)(iVar8 + 0x14) == 0x1d) {
      FUN_00466ec0(iVar8,0x23);
    }
    break;
  case 0x1a:
    iVar8 = FUN_004816b0();
    if (0.75 <= (float)iVar8 * 4.656613e-10) {
      FUN_00427590(0,(int)DAT_00e35a84,3,3,3,5,5,0);
    }
    else {
      FUN_00467c80(2,0x1f,7,8,9);
    }
    *(undefined4 *)(iVar4 + 0x88) = 10;
    uVar9 = 0;
    iVar8 = FUN_00450b30(0x456c6d6f,0x15);
    if (*(int *)(iVar8 + 0x14) == 0x20) {
      FUN_00466ec0(iVar8,0x26);
    }
    else if (*(int *)(iVar8 + 0x14) == 0x1d) {
      FUN_00466ec0(iVar8,0x24);
    }
    break;
  case 0x1b:
    piVar6 = *(int **)(iVar4 + 0x34);
    *(undefined4 *)(iVar4 + 0x88) = 0xd;
    iVar8 = *piVar6;
    while (iVar8 != 0) {
      piVar1 = piVar6 + 1;
      piVar6 = piVar6 + 1;
      iVar8 = *piVar1;
    }
    break;
  case 0x1c:
    *(undefined4 *)(iVar4 + 0x88) = 0xd;
    break;
  case 0x1d:
    iVar8 = FUN_004816b0();
    if (0.5 <= (float)iVar8 * 4.656613e-10) {
      iVar8 = FUN_004816b0();
      if (0.5 <= (float)iVar8 * 4.656613e-10) {
        iVar8 = FUN_004816b0();
        if (((float)iVar8 * 4.656613e-10 < 0.8) || (DAT_00e35a84 == '\x02')) {
          uVar15 = 0x2b;
          uVar14 = 0x29;
          uVar13 = 0x13;
          uVar12 = 0x2e;
          uVar11 = 0x18;
        }
        else {
          uVar15 = 0x20;
          uVar14 = 0x19;
          uVar13 = 0x2c;
          uVar12 = 0x20;
          uVar11 = 0x19;
        }
      }
      else {
        uVar15 = 0x27;
        uVar14 = 0x26;
        uVar13 = 0x25;
        uVar12 = 0x24;
        uVar11 = 0x23;
      }
    }
    else {
      uVar15 = 0x2b;
      uVar14 = 0x22;
      uVar13 = 0x32;
      uVar12 = 0x31;
      uVar11 = 0x30;
    }
    FUN_00467c80(uVar11,uVar12,uVar13,uVar14,uVar15);
    local_2c = 0;
    local_28 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    iVar8 = FUN_004816b0();
    *(float *)(iVar4 + 0x1c) = ((float)iVar8 * 4.656613e-10 + (float)iVar8 * 4.656613e-10) - -3.0;
    break;
  case 0x1f:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0xb;
    local_28 = 0;
    break;
  case 0x20:
    *(undefined4 *)(iVar4 + 0x88) = 0xc;
    iVar8 = FUN_004816b0();
    *(float *)(iVar4 + 0x1c) = ((float)iVar8 * 4.656613e-10 + (float)iVar8 * 4.656613e-10) - -3.0;
    break;
  case 0x22:
    *(undefined4 *)(iVar4 + 0x88) = 0;
  case 0x1e:
    *(undefined4 *)(iVar4 + 0x88) = 0;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x23:
    iVar8 = FUN_004816b0();
    if ((float)iVar8 * 4.656613e-10 < 0.25) {
      FUN_00467c80(0xb,0xc,0xd,0x2d,0x14);
    }
    *(undefined4 *)(iVar4 + 0x88) = 3;
    uVar9 = 0;
    break;
  case 0x24:
    iVar8 = FUN_004816b0();
    if ((float)iVar8 * 4.656613e-10 < 0.25) {
      FUN_00467c80(0x12,0x28,0x36,0xe,0x17);
    }
    *(undefined4 *)(iVar4 + 0x88) = 1;
    uVar9 = 0;
    break;
  case 0x25:
    iVar8 = FUN_004816b0();
    if ((float)iVar8 * 4.656613e-10 < 0.25) {
      FUN_00467c80(0xb,0xc,0xd,0x2d,0x14);
    }
    *(undefined4 *)(iVar4 + 0x88) = 0xd;
    uVar9 = 0;
    break;
  case 0x26:
    iVar8 = FUN_004816b0();
    if ((float)iVar8 * 4.656613e-10 < 0.25) {
      FUN_00467c80(0x12,0x28,0x36,0xe,0x17);
    }
  case 3:
    *(undefined4 *)(iVar4 + 0x88) = 0xe;
    uVar9 = 0;
    break;
  case 0x27:
    iVar8 = FUN_004816b0();
    if ((float)iVar8 * 4.656613e-10 < 0.25) {
      iVar8 = FUN_004816b0();
      if (((float)iVar8 * 4.656613e-10 < 0.8) || (DAT_00e35a84 == '\x02')) {
        FUN_00467c80(0x2a,0x32,0x31,0x33,0x13);
      }
      else {
        FUN_00467c80(0x2c,0x19,0x20,0x2c,0x19);
      }
    }
  case 0x2d:
  case 0x31:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 2;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2b:
  case 0x2f:
  case 0x33:
  case 0x38:
  case 0x3d:
    uVar9 = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2c:
  case 0x30:
  case 0x34:
  case 0x39:
  case 0x3e:
    *(undefined4 *)(iVar4 + 0x88) = 1;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x2e:
    *(undefined4 *)(iVar4 + 0x88) = 3;
    local_2c = 0;
    param_1 = 0.5;
    break;
  case 0x32:
    *(undefined4 *)(iVar4 + 0x88) = 3;
    local_2c = 0;
    break;
  case 0x35:
  case 0x3a:
  case 0x3f:
    *(undefined4 *)(iVar4 + 0x88) = 2;
    local_2c = 0;
    local_28 = 0;
    break;
  case 0x37:
  case 0x3c:
  case 0x41:
    *(undefined4 *)(iVar4 + 0x88) = 4;
    local_2c = 0;
    break;
  case 0x42:
    *(undefined4 *)(iVar4 + 0x88) = 5;
  }
  if (*(int *)(iVar4 + 8) == 3) {
    local_2c = 0;
    local_28 = 0x3dcccccd;
  }
  if (*(int *)(iVar4 + 0x14) != 0) {
    FUN_00468a30(iVar4,&local_20,&local_24);
    local_1c = local_20;
  }
  iVar8 = *(int *)(iVar4 + 0x14);
  if ((iVar8 == 0x1b) && (*(int *)(iVar4 + 0x88) != 0xd)) {
    local_24 = local_20 - -0.1;
  }
  if (param_1 < 0.0) {
    local_1c = local_24 - 0.1;
  }
  if (iVar8 == 5) {
    local_20 = local_24 - 0.1;
    local_1c = local_20;
  }
  if (iVar8 == 0x2a) {
    local_2c = 0;
  }
  if (local_18 != 0) {
    FUN_0044b360(*(undefined4 *)(iVar4 + 0x34),local_1c,local_20,local_24,uVar9,local_28,local_2c);
  }
  if (*(float *)(iVar4 + 0x78) != param_1) {
    *(float *)(iVar4 + 0x78) = param_1;
    FUN_0044b330(*(undefined4 *)(iVar4 + 0x34),param_1);
  }
  return;
}

#endif
