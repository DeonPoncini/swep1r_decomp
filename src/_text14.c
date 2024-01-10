#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

void FUN_0044b360(int *param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 float param_6,float param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      FUN_004267a0(*param_1,param_3,param_4);
      if (param_5 == 0) {
        FUN_00426810(*param_1,0x4000000);
        iVar2 = *param_1;
        uVar3 = 0x2000000;
LAB_0044b3fd:
        FUN_00426820(iVar2,uVar3);
      }
      else {
        FUN_00426810(*param_1,0x2000010);
        FUN_00426820(*param_1,0x4000000);
        uVar3 = 0x40;
        iVar2 = *param_1;
        if (param_7 <= 0.0) goto LAB_0044b3fd;
        FUN_00426810();
        FUN_00426900(*param_1,param_7);
      }
      if (0.0 <= param_2) {
        if (param_6 <= 0.0) {
          FUN_00426840(*param_1,param_2);
        }
        else {
          FUN_00426890(*param_1,param_2,param_6);
        }
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}



float10 FUN_0044b470(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return (float10)0.0;
  }
  if (*param_1 == 0) {
    return (float10)0.0;
  }
  return (float10)*(float *)(*param_1 + 0x114);
}



float10 FUN_0044b4a0(int param_1,int *param_2)

{
  float10 fVar1;
  undefined local_40 [16];
  float local_30;
  undefined4 local_2c;

  if (param_2 == (int *)0x0) {
    return (float10)0.0;
  }
  if (*param_2 == 0) {
    return (float10)0.0;
  }
  if (param_1 == 0) {
    return (float10)0.0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return (float10)0.0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return (float10)0.0;
  }
  FUN_004316a0(*(int *)(param_1 + 8),local_40);
  fVar1 = (float10)FUN_0042f560(-local_30,local_2c);
  return fVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044b530(void)

{
  _DAT_004c28a4 = 299;
  _DAT_004c28a8 = 0x12a;
  _DAT_004c28ac = 0x12e;
  PTR_s__SCREENTEXT_336___Mars_004c28b4 = &DAT_004c3b14;
  PTR_s__SCREENTEXT_337___Guo_004c28b8 = s_Reeso_004c3b0c;
  _DAT_004c28d0 = 0x130;
  _DAT_004c73f4 = 0x408dc28f;
  _DAT_004c7424 = 0x400e147b;
  _DAT_004c7428 = 0x4031eb85;
  _DAT_004c742c = 0;
  _DAT_004c740c = 0x3fa147ae;
  _DAT_004c7410 = 0x3e75c28f;
  _DAT_004c7414 = 0xbeeb851f;
  _DAT_004c7418 = 0x3e851eb8;
  _DAT_004c741c = 0xc068f5c3;
  _DAT_004c7420 = 0xbe9eb852;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044b5e0(void)

{
  _DAT_004c2b7c = 0x12d;
  _DAT_004c2b80 = 300;
  _DAT_004c2b84 = 0x12f;
  PTR_s__SCREENTEXT_363____Bullseye__004c2b8c = &DAT_004c3b24;
  PTR_s__SCREENTEXT_364___Navior_004c2b90 = s_Yunga_004c3b1c;
  _DAT_004c2ba8 = 0x131;
  _DAT_004c7a0c = 0x3f851eb8;
  _DAT_004c7a10 = 0x40051eb8;
  _DAT_004c7a14 = 0xbf8a3d71;
  _DAT_004c7a00 = 0xbda3d70a;
  _DAT_004c7a04 = 0xbfd47ae1;
  _DAT_004c7a08 = 0x4009999a;
  return;
}



undefined * FUN_0044b660(void)

{
  DAT_0050c6b8 = DAT_0050c6b8 + 1;
  if (0xbff < DAT_0050c6b8) {
    DAT_0050c6b8 = 0;
  }
  return &DAT_00e37c00 + DAT_0050c6b8 * 0x40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044b690(undefined4 *param_1,undefined4 *param_2)

{
  _DAT_0050c6e8 = *param_2;
  _DAT_0050c6ec = param_2[1];
  _DAT_0050c6f0 = param_2[2];
  _DAT_00e37580 = *param_1;
  _DAT_00e37584 = param_1[1];
  _DAT_00e37588 = param_1[2];
  _DAT_00e3758c = param_1[3];
  _DAT_00e37590 = param_1[4];
  _DAT_00e37594 = param_1[5];
  _DAT_00e37598 = param_1[6];
  _DAT_00e3759c = param_1[7];
  _DAT_00e375a0 = param_1[8];
  DAT_00e375a4 = param_1[9];
  DAT_00e375a8 = param_1[10];
  DAT_00e375ac = param_1[0xb];
  DAT_00e375b0 = param_1[0xc];
  _DAT_00e375b4 = param_1[0xd];
  _DAT_00e375b8 = param_1[0xe];
  _DAT_00e375bc = param_1[0xf];
  return;
}



void FUN_0044b750(undefined4 *param_1)

{
  int iVar1;

  DAT_004c3c0c = 1;
  if (DAT_0050c6f4 < 0x20) {
    DAT_0050c6f4 = DAT_0050c6f4 + 1;
    iVar1 = DAT_0050c6f4 * 0x30;
    *(undefined4 *)(&DAT_00e375c0 + iVar1) = *param_1;
    *(undefined4 *)(&DAT_00e375c4 + iVar1) = param_1[1];
    *(undefined4 *)(&DAT_00e375c8 + iVar1) = param_1[2];
    *(undefined4 *)(&DAT_00e375cc + iVar1) = param_1[3];
    *(undefined4 *)(&DAT_00e375d0 + iVar1) = param_1[4];
    *(undefined4 *)(&DAT_00e375d4 + iVar1) = param_1[5];
    *(undefined4 *)(&DAT_00e375d8 + iVar1) = param_1[6];
    *(undefined4 *)(&DAT_00e375dc + iVar1) = param_1[7];
    *(undefined4 *)(&DAT_00e375e0 + iVar1) = param_1[8];
    *(undefined4 *)(&DAT_00e375e4 + iVar1) = param_1[9];
    *(undefined4 *)(&DAT_00e375e8 + iVar1) = param_1[10];
    *(undefined4 *)(&DAT_00e375ec + iVar1) = param_1[0xb];
  }
  return;
}



void FUN_0044b7e0(float *param_1)

{
  int iVar1;
  int iVar2;

  DAT_004c3c0c = 1;
  if (DAT_0050c6f4 < 0x20) {
    iVar1 = DAT_0050c6f4 + 1;
    iVar2 = iVar1 * 0x30;
    DAT_0050c6f4 = iVar1;
    *(float *)(&DAT_00e375c0 + iVar2) =
         (float)(&DAT_00e375a8)[iVar1 * 0xc] * param_1[2] +
         *(float *)(&DAT_00e3759c + iVar2) * param_1[1] +
         *(float *)(&DAT_00e37590 + iVar2) * *param_1;
    *(float *)(&DAT_00e375c4 + iVar2) =
         *(float *)(&DAT_00e375a0 + iVar2) * param_1[1] +
         (float)(&DAT_00e375ac)[iVar1 * 0xc] * param_1[2] +
         *param_1 * *(float *)(&DAT_00e37594 + iVar2);
    *(float *)(&DAT_00e375c8 + iVar2) =
         param_1[1] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[2] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         *param_1 * *(float *)(&DAT_00e37598 + iVar2);
    *(float *)(&DAT_00e375cc + iVar2) =
         *(float *)(&DAT_00e3759c + iVar2) * param_1[4] +
         (float)(&DAT_00e375a8)[iVar1 * 0xc] * param_1[5] +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[3];
    *(float *)(&DAT_00e375d0 + iVar2) =
         *(float *)(&DAT_00e375a0 + iVar2) * param_1[4] +
         (float)(&DAT_00e375ac)[iVar1 * 0xc] * param_1[5] +
         param_1[3] * *(float *)(&DAT_00e37594 + iVar2);
    *(float *)(&DAT_00e375d4 + iVar2) =
         param_1[4] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[5] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[3] * *(float *)(&DAT_00e37598 + iVar2);
    *(float *)(&DAT_00e375d8 + iVar2) =
         param_1[7] * *(float *)(&DAT_00e3759c + iVar2) +
         param_1[8] * (float)(&DAT_00e375a8)[iVar1 * 0xc] +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[6];
    *(float *)(&DAT_00e375dc + iVar2) =
         param_1[7] * *(float *)(&DAT_00e375a0 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e37594 + iVar2) +
         param_1[8] * (float)(&DAT_00e375ac)[iVar1 * 0xc];
    *(float *)(&DAT_00e375e0 + iVar2) =
         param_1[6] * *(float *)(&DAT_00e37598 + iVar2) +
         param_1[8] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[7] * (float)(&DAT_00e375a4)[iVar1 * 0xc];
    *(float *)(&DAT_00e375e4 + iVar2) =
         param_1[0xb] * (float)(&DAT_00e375a8)[iVar1 * 0xc] +
         param_1[10] * *(float *)(&DAT_00e3759c + iVar2) +
         *(float *)(&DAT_00e37590 + iVar2) * param_1[9] + *(float *)(&DAT_00e375b4 + iVar2);
    *(float *)(&DAT_00e375e8 + iVar2) =
         param_1[10] * *(float *)(&DAT_00e375a0 + iVar2) +
         param_1[0xb] * (float)(&DAT_00e375ac)[iVar1 * 0xc] +
         param_1[9] * *(float *)(&DAT_00e37594 + iVar2) + *(float *)(&DAT_00e375b8 + iVar2);
    *(float *)(&DAT_00e375ec + iVar2) =
         param_1[10] * (float)(&DAT_00e375a4)[iVar1 * 0xc] +
         param_1[0xb] * (float)(&DAT_00e375b0)[iVar1 * 0xc] +
         param_1[9] * *(float *)(&DAT_00e37598 + iVar2) + *(float *)(&DAT_00e375bc + iVar2);
  }
  return;
}



void FUN_0044b9b0(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(&DAT_00e375c0 + DAT_0050c6f4 * 0x30);
  param_1[1] = *(undefined4 *)(&DAT_00e375c4 + DAT_0050c6f4 * 0x30);
  param_1[2] = *(undefined4 *)(&DAT_00e375c8 + DAT_0050c6f4 * 0x30);
  param_1[3] = *(undefined4 *)(&DAT_00e375cc + DAT_0050c6f4 * 0x30);
  param_1[4] = *(undefined4 *)(&DAT_00e375d0 + DAT_0050c6f4 * 0x30);
  param_1[5] = *(undefined4 *)(&DAT_00e375d4 + DAT_0050c6f4 * 0x30);
  param_1[6] = *(undefined4 *)(&DAT_00e375d8 + DAT_0050c6f4 * 0x30);
  param_1[7] = *(undefined4 *)(&DAT_00e375dc + DAT_0050c6f4 * 0x30);
  param_1[8] = *(undefined4 *)(&DAT_00e375e0 + DAT_0050c6f4 * 0x30);
  param_1[9] = *(undefined4 *)(&DAT_00e375e4 + DAT_0050c6f4 * 0x30);
  param_1[10] = *(undefined4 *)(&DAT_00e375e8 + DAT_0050c6f4 * 0x30);
  param_1[0xb] = *(undefined4 *)(&DAT_00e375ec + DAT_0050c6f4 * 0x30);
  return;
}



void FUN_0044bab0(void)

{
  DAT_004c3c0c = 1;
  if (0 < DAT_0050c6f4) {
    DAT_0050c6f4 = DAT_0050c6f4 + -1;
  }
  return;
}



void FUN_0044bad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  iVar5 = 4;
  puVar3 = param_1;
  do {
    iVar4 = 3;
    puVar2 = puVar3;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0xf] = 0x3f800000;
  return;
}



void FUN_0044bb10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = 4;
  puVar1 = param_1;
  do {
    iVar2 = 4;
    do {
      *puVar1 = *(undefined4 *)((param_2 - (int)param_1) + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044bb40(void)

{
  DAT_0050c6f4 = 0;
  DAT_004c3c0c = 1;
  _DAT_0050c6f8 = 0;
  FUN_0042f7b0(&DAT_00e375c0,0x3f800000,0,0);
  FUN_0042f7b0(&DAT_00e375cc + DAT_0050c6f4 * 0x30,0,0x3f800000,0);
  FUN_0042f7b0(&DAT_00e375d8 + DAT_0050c6f4 * 0x30,0,0,0x3f800000);
  FUN_0042f7b0(&DAT_00e375e4 + DAT_0050c6f4 * 0x30,0,0,0);
  return;
}



void FUN_0044bbe0(void)

{
  int iVar1;

  iVar1 = DAT_0050c6f4 * 0x30;
  DAT_00e3752c = FUN_0044b660();
  FUN_0044bad0(DAT_00e3752c,&DAT_00e375c0 + iVar1);
  DAT_00e37520 = FUN_0044b660();
  FUN_0044bb10(DAT_00e37520,&DAT_00e37480);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044bc20(void)

{
  int iVar1;
  float *pfVar2;

  DAT_004c3c0c = 0;
  _DAT_0050c6f8 = 1;
  iVar1 = DAT_0050c6f4 * 0x30;
  pfVar2 = (float *)(&DAT_00e375c0 + iVar1);
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375e4 + iVar1) = *(float *)(&DAT_00e375e4 + iVar1) - _DAT_0050c6e8;
    *(float *)(&DAT_00e375e8 + iVar1) = *(float *)(&DAT_00e375e8 + iVar1) - _DAT_0050c6ec;
    *(float *)(&DAT_00e375ec + iVar1) = *(float *)(&DAT_00e375ec + iVar1) - _DAT_0050c6f0;
  }
  _DAT_00e37480 =
       *pfVar2 * _DAT_00e37580 +
       *(float *)(&DAT_00e375c8 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37590;
  _DAT_00e37484 =
       *pfVar2 * _DAT_00e37584 +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37594;
  _DAT_00e37488 =
       *pfVar2 * _DAT_00e37588 +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e37598;
  _DAT_00e3748c =
       *pfVar2 * _DAT_00e3758c +
       *(float *)(&DAT_00e375c8 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375c4 + iVar1) * _DAT_00e3759c;
  _DAT_00e37490 =
       *(float *)(&DAT_00e375d4 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37580 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37590;
  _DAT_00e37494 =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37584 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37594;
  _DAT_00e37498 =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e37588 +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e37598;
  _DAT_00e3749c =
       *(float *)(&DAT_00e375d4 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375cc + iVar1) * _DAT_00e3758c +
       *(float *)(&DAT_00e375d0 + iVar1) * _DAT_00e3759c;
  _DAT_00e374a0 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37590 +
       *(float *)(&DAT_00e375e0 + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37580;
  _DAT_00e374a4 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37594 +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37584;
  _DAT_00e374a8 =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e37598 +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e37588;
  _DAT_00e374ac =
       *(float *)(&DAT_00e375dc + iVar1) * _DAT_00e3759c +
       *(float *)(&DAT_00e375e0 + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375d8 + iVar1) * _DAT_00e3758c;
  _DAT_00e374b0 =
       *(float *)(&DAT_00e375ec + iVar1) * _DAT_00e375a0 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37590 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37580 + DAT_00e375b0;
  _DAT_00e374b4 =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375a4 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37594 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37584 + _DAT_00e375b4;
  _DAT_00e374b8 =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375a8 +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e37598 +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e37588 + _DAT_00e375b8;
  _DAT_00e374bc =
       *(float *)(&DAT_00e375ec + iVar1) * DAT_00e375ac +
       *(float *)(&DAT_00e375e8 + iVar1) * _DAT_00e3759c +
       *(float *)(&DAT_00e375e4 + iVar1) * _DAT_00e3758c + _DAT_00e375bc;
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375e4 + iVar1) = _DAT_0050c6e8 + *(float *)(&DAT_00e375e4 + iVar1);
    *(float *)(&DAT_00e375e8 + iVar1) = _DAT_0050c6ec + *(float *)(&DAT_00e375e8 + iVar1);
    *(float *)(&DAT_00e375ec + iVar1) = _DAT_0050c6f0 + *(float *)(&DAT_00e375ec + iVar1);
  }
  FUN_0044bbe0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044bfb0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  iVar2 = DAT_0050c6f4;
  iVar3 = DAT_0050c6f4 * 0x30;
  pfVar1 = (float *)(&DAT_00e37590 + iVar3);
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375b4 + iVar3) = *(float *)(&DAT_00e375b4 + iVar3) - _DAT_0050c6e8;
    *(float *)(&DAT_00e375b8 + iVar3) = *(float *)(&DAT_00e375b8 + iVar3) - _DAT_0050c6ec;
    *(float *)(&DAT_00e375bc + iVar3) = *(float *)(&DAT_00e375bc + iVar3) - _DAT_0050c6f0;
  }
  local_40 = *pfVar1 * _DAT_00e37580 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37590 +
             *(float *)(&DAT_00e37598 + iVar3) * _DAT_00e375a0;
  local_3c = *pfVar1 * _DAT_00e37584 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37594 +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375a4;
  local_38 = *pfVar1 * _DAT_00e37588 +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e37598 +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375a8;
  local_34 = *pfVar1 * _DAT_00e3758c +
             *(float *)(&DAT_00e37594 + iVar3) * _DAT_00e3759c +
             *(float *)(&DAT_00e37598 + iVar3) * DAT_00e375ac;
  local_30 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37580 +
             (&DAT_00e375a4)[iVar2 * 0xc] * _DAT_00e375a0 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37590;
  local_2c = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37584 +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375a4 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37594;
  local_28 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e37588 +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375a8 +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e37598;
  local_24 = *(float *)(&DAT_00e3759c + iVar3) * _DAT_00e3758c +
             (&DAT_00e375a4)[iVar2 * 0xc] * DAT_00e375ac +
             *(float *)(&DAT_00e375a0 + iVar3) * _DAT_00e3759c;
  local_20 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37580 +
             (&DAT_00e375b0)[iVar2 * 0xc] * _DAT_00e375a0 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37590;
  local_1c = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37584 +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375a4 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37594;
  local_18 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e37588 +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375a8 +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e37598;
  local_14 = (&DAT_00e375a8)[iVar2 * 0xc] * _DAT_00e3758c +
             (&DAT_00e375b0)[iVar2 * 0xc] * DAT_00e375ac +
             (&DAT_00e375ac)[iVar2 * 0xc] * _DAT_00e3759c;
  local_10 = *(float *)(&DAT_00e375bc + iVar3) * _DAT_00e375a0 +
             *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37590 +
             *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37580 + DAT_00e375b0;
  local_c = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375a4 +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37594 +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37584 + _DAT_00e375b4;
  local_8 = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375a8 +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e37598 +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e37588 + _DAT_00e375b8;
  local_4 = *(float *)(&DAT_00e375bc + iVar3) * DAT_00e375ac +
            *(float *)(&DAT_00e375b8 + iVar3) * _DAT_00e3759c +
            *(float *)(&DAT_00e375b4 + iVar3) * _DAT_00e3758c + _DAT_00e375bc;
  if (DAT_004c3c08 != 0) {
    *(float *)(&DAT_00e375b4 + iVar3) = _DAT_0050c6e8 + *(float *)(&DAT_00e375b4 + iVar3);
    *(float *)(&DAT_00e375b8 + iVar3) = _DAT_0050c6ec + *(float *)(&DAT_00e375b8 + iVar3);
    *(float *)(&DAT_00e375bc + iVar3) = _DAT_0050c6f0 + *(float *)(&DAT_00e375bc + iVar3);
  }
  uVar4 = FUN_0044b660();
  FUN_0044bad0(uVar4,pfVar1);
  uVar4 = FUN_0044b660();
  FUN_0044bb10(uVar4,&local_40);
  *(float *)(param_1 + 0xf4) = *pfVar1;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(&DAT_00e37594 + iVar3);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(&DAT_00e37598 + iVar3);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(&DAT_00e3759c + iVar3);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(&DAT_00e375a0 + iVar3);
  *(float *)(param_1 + 0x108) = (&DAT_00e375a4)[iVar2 * 0xc];
  *(float *)(param_1 + 0x10c) = (&DAT_00e375a8)[iVar2 * 0xc];
  *(float *)(param_1 + 0x110) = (&DAT_00e375ac)[iVar2 * 0xc];
  *(float *)(param_1 + 0x114) = (&DAT_00e375b0)[iVar2 * 0xc];
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(&DAT_00e375b4 + iVar3);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(&DAT_00e375b8 + iVar3);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(&DAT_00e375bc + iVar3);
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}



void FUN_0044c3b0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0xf4) = *puVar1;
  *(undefined4 *)(param_2 + 0xf8) = puVar1[1];
  *(undefined4 *)(param_2 + 0xfc) = puVar1[2];
  *(undefined4 *)(param_2 + 0x100) = puVar1[4];
  *(undefined4 *)(param_2 + 0x104) = puVar1[5];
  *(undefined4 *)(param_2 + 0x108) = puVar1[6];
  *(undefined4 *)(param_2 + 0x10c) = puVar1[8];
  *(undefined4 *)(param_2 + 0x110) = puVar1[9];
  *(undefined4 *)(param_2 + 0x114) = puVar1[10];
  *(undefined4 *)(param_2 + 0x118) = puVar1[0xc];
  *(undefined4 *)(param_2 + 0x11c) = puVar1[0xd];
  *(undefined4 *)(param_2 + 0x120) = puVar1[0xe];
  *(undefined4 *)(param_2 + 0xf0) = param_3;
  return;
}



uint FUN_0044c440(byte param_1,short param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (((param_1 & 8) != 0) && (DAT_004c3b98 != 0)) {
    DAT_004c3b98 = 0;
    uVar1 = 8;
  }
  if ((param_1 & 1) != 0) {
    DAT_0050c6d0 = (uint)(DAT_0050c6d0 == 0);
    uVar1 = uVar1 | 1;
  }
  if (((param_1 & 4) != 0) && (DAT_0050c704 == 0)) {
    DAT_0050c704 = 1;
    DAT_0050c70c = 1;
    DAT_0050c708 = param_2 + 1;
    DAT_004c3c10 = *(undefined4 *)(&DAT_004c3ba0 + param_2 * 4);
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}



void FUN_0044c4c0(byte param_1)

{
  if ((param_1 & 1) != 0) {
    DAT_0050c6d0 = (uint)(DAT_0050c6d0 == 0);
  }
  if ((param_1 & 8) != 0) {
    DAT_004c3b98 = 1;
  }
  if ((param_1 & 4) != 0) {
    DAT_0050c704 = 0;
    DAT_0050c70c = 0;
    FUN_00409510(0,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0044c510(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined4 in_EAX;
  ushort uVar10;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  uint local_78;
  uint local_74;
  uint local_70;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18 [4];
  float local_8;
  float local_4;

  uVar10 = (ushort)((uint)in_EAX >> 0x10);
  uVar9 = (uint)uVar10 << 0x10;
  if (((*param_1 <= param_1[3]) && (uVar9 = (uint)uVar10 << 0x10, param_1[1] <= param_1[4])) &&
     (uVar9 = (uint)uVar10 << 0x10, param_1[2] <= param_1[5])) {
    local_48[0] = _DAT_00e37480 * *param_1;
    local_48[3] = _DAT_00e37480 * param_1[3];
    local_48[1] = _DAT_00e37490 * param_1[1];
    local_38 = _DAT_00e37490 * param_1[4];
    local_48[2] = _DAT_00e374a0 * param_1[2];
    local_34 = _DAT_00e374a0 * param_1[5];
    local_30[0] = _DAT_00e37484 * *param_1;
    local_30[3] = _DAT_00e37484 * param_1[3];
    local_30[1] = _DAT_00e37494 * param_1[1];
    local_20 = _DAT_00e37494 * param_1[4];
    local_30[2] = _DAT_00e374a4 * param_1[2];
    local_1c = _DAT_00e374a4 * param_1[5];
    local_18[0] = _DAT_00e37488 * *param_1;
    local_18[3] = _DAT_00e37488 * param_1[3];
    local_18[1] = _DAT_00e37498 * param_1[1];
    local_8 = _DAT_00e37498 * param_1[4];
    local_18[2] = _DAT_00e374a8 * param_1[2];
    local_4 = _DAT_00e374a8 * param_1[5];
    local_60[0] = _DAT_00e3748c * *param_1;
    local_60[3] = _DAT_00e3748c * param_1[3];
    local_60[1] = _DAT_00e3749c * param_1[1];
    uVar15 = 0;
    local_50 = _DAT_00e3749c * param_1[4];
    local_60[2] = _DAT_00e374ac * param_1[2];
    local_4c = _DAT_00e374ac * param_1[5];
    if (param_2 == 0) {
      sVar12 = 0;
      sVar3 = 0;
      sVar5 = 0;
      sVar14 = 0;
    }
    else {
      sVar12 = -1;
      sVar5 = -1;
      sVar3 = -1;
      sVar14 = -1;
    }
    local_78 = 0xfffffffe;
    local_74 = 0xfffffffe;
    local_70 = 0xfffffffe;
    do {
      uVar6 = uVar15 & 1;
      uVar7 = (int)uVar15 >> 1 & 1;
      uVar8 = (int)uVar15 >> 2 & 1;
      fVar1 = local_60[uVar7 * 3 + 1] + local_60[uVar8 * 3] + local_60[uVar6 * 3 + 2] +
              _DAT_00e374bc;
      sVar13 = (short)local_74;
      if ((sVar12 != 0) || (uVar9 = uVar8, sVar13 != 0)) {
        fVar2 = local_48[uVar7 * 3 + 1] + local_48[uVar8 * 3] + local_48[uVar6 * 3 + 2] +
                _DAT_00e374b0;
        if (fVar1 <= 0.0) {
          if (fVar2 <= -fVar1) {
            if (fVar1 <= fVar2) goto LAB_0044c7ca;
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 1;
          }
        }
        else if (fVar2 <= fVar1) {
          if (-fVar1 <= fVar2) {
LAB_0044c7ca:
            uVar9 = 0;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar12 == 0) {
LAB_0044c7fc:
            local_74 = 0;
          }
          else {
            local_74 = 0;
            sVar5 = 1;
          }
        }
        else {
          sVar5 = 0;
          if ((int)sVar13 == -(int)(short)uVar9) goto LAB_0044c7fc;
          if (sVar13 == -2) {
            local_74 = uVar9;
          }
        }
      }
      sVar12 = sVar5;
      uVar4 = local_78;
      if ((sVar3 != 0) || ((short)local_78 != 0)) {
        fVar2 = local_30[uVar7 * 3 + 1] + local_30[uVar8 * 3] + local_30[uVar6 * 3 + 2] +
                _DAT_00e374b4;
        if (fVar1 <= 0.0) {
          if (fVar2 <= -fVar1) {
            if (fVar1 <= fVar2) goto LAB_0044c8a1;
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 1;
          }
        }
        else if (fVar2 <= fVar1) {
          if (-fVar1 <= fVar2) {
LAB_0044c8a1:
            uVar9 = 0;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar3 != 0) {
            sVar3 = 1;
          }
          local_78 = 0;
          uVar4 = local_78;
        }
        else {
          sVar3 = 0;
          if ((int)(short)local_78 == -(int)(short)uVar9) {
            local_78 = 0;
            uVar4 = local_78;
          }
          else if ((short)local_78 == -2) {
            uVar4 = uVar9;
          }
        }
      }
      local_78 = uVar4;
      uVar4 = local_70;
      sVar13 = (short)local_70;
      if ((sVar14 != 0) || ((short)local_70 != 0)) {
        if (fVar1 <= 0.0) {
          uVar9 = 0xffffffff;
        }
        else if (local_18[uVar7 * 3 + 1] + local_18[uVar8 * 3] + local_18[uVar6 * 3 + 2] +
                 _DAT_00e374b8 <= fVar1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        if ((short)uVar9 == 0) {
          if (sVar14 == 0) {
LAB_0044c95c:
            uVar6 = 0;
          }
          else {
            sVar14 = 1;
            uVar6 = 0;
          }
LAB_0044c968:
          uVar4 = uVar6;
          sVar13 = (short)uVar6;
        }
        else {
          sVar14 = 0;
          if ((int)(short)local_70 == -(int)(short)uVar9) goto LAB_0044c95c;
          uVar6 = uVar9;
          if ((short)local_70 == -2) goto LAB_0044c968;
        }
      }
      local_70 = uVar4;
      uVar15 = uVar15 + 1;
      sVar5 = sVar12;
    } while ((int)uVar15 < 8);
    uVar11 = (undefined2)(uVar9 >> 0x10);
    if (((sVar12 != 0) && (sVar3 != 0)) && (sVar14 != 0)) {
      return CONCAT22(uVar11,2);
    }
    if ((((short)local_74 == 0) && ((short)local_78 == 0)) && (sVar13 == 0)) {
      return CONCAT22(uVar11,1);
    }
  }
  return uVar9 & 0xffff0000;
}



undefined4 FUN_0044c9d0(int param_1)

{
  char *_Str1;
  int iVar1;

  _Str1 = *(char **)(param_1 + 0x30);
  iVar1 = _strncmp(_Str1,(char *)&PTR_DAT_004c3c14,3);
  if (iVar1 == 0) {
    return *(undefined4 *)(_Str1 + 10);
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044ca00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint **ppuVar3;
  uint *_Str1;
  short sVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_1c;
  short local_18;
  float local_c;
  float local_8;
  int local_4;

  local_c = 0.0;
  local_8 = 0.0;
  local_1c = 0;
  if ((DAT_004c3c04 != 0) && (DAT_004c3c0c != 0)) {
    FUN_0044bc20();
  }
  param_1[0xd] = DAT_00e3752c;
  param_1[0xe] = DAT_00e37520;
  if (DAT_004c3b98 == 0) {
    local_18 = 2;
  }
  else {
    local_18 = FUN_0044c510(param_1 + 7,1);
  }
  if (local_18 != 0) {
    puVar8 = param_1;
    if (DAT_004c3c04 != 0) {
      _DAT_0050c6f8 = 0;
      puVar8 = (undefined4 *)(&DAT_00e375c0 + DAT_0050c6f4 * 0x30);
    }
    iVar9 = *(int *)(DAT_0050c6b0 + 0x74);
    iVar2 = *(int *)(DAT_0050c6b0 + 0x78);
    iVar12 = iVar9 + param_1[5];
    *(int *)(iVar2 + 0x90) = iVar12 + -1;
    puVar1 = (undefined4 *)(iVar2 + iVar9 * 0x124);
    if (puVar1 + -0x49 == *(undefined4 **)(DAT_0050c6b0 + 0x78)) {
      puVar1[-0x24] = puVar1;
    }
    else {
      puVar1[-0x23] = puVar1;
    }
    puVar5 = puVar1;
    for (iVar9 = *(int *)(DAT_0050c6b0 + 0x74); iVar9 < iVar12; iVar9 = iVar9 + 1) {
      puVar5[0x20] = iVar9;
      puVar5[0x22] = 0xffffffff;
      *puVar5 = DAT_004c3c18;
      puVar5[1] = PTR_DAT_004c3c1c;
      puVar5[0x23] = *(undefined4 *)(DAT_0050c6b0 + 0x78);
      if (iVar9 < iVar12 + -1) {
        puVar5[0x26] = puVar5 + 0x49;
      }
      else {
        puVar5[0x26] = 0;
      }
      puVar5[0x25] = 0;
      puVar5[0x24] = 0;
      puVar5[0x3c] = 0;
      puVar5[0x21] = 1;
      puVar5[0x30] = *puVar8;
      puVar5[0x31] = puVar8[1];
      puVar5[0x32] = puVar8[2];
      puVar5[0x33] = puVar8[3];
      puVar5[0x34] = puVar8[4];
      puVar5[0x35] = puVar8[5];
      puVar5[0x36] = puVar8[6];
      puVar5[0x37] = puVar8[7];
      puVar5[0x38] = puVar8[8];
      puVar5[0x39] = puVar8[9];
      puVar5[0x3a] = puVar8[10];
      puVar5[0x3b] = puVar8[0xb];
      puVar5 = puVar5 + 0x49;
    }
    *(int *)(DAT_0050c6b0 + 0x74) = iVar12;
    local_4 = 0;
    if (0 < (int)param_1[5]) {
      puVar11 = puVar1 + 0x22;
      do {
        ppuVar3 = *(uint ***)(param_1[6] + local_4 * 4);
        if ((local_18 == 2) || (sVar4 = FUN_0044c510(ppuVar3 + 2,0), sVar4 != 0)) {
          _Str1 = ppuVar3[0xc];
          FUN_00433680(DAT_00e996dc & 0x2000,*ppuVar3);
          puVar13 = *ppuVar3;
          if ((puVar13 != (uint *)0x0) && ((*puVar13 & 8) == 0)) {
            if ((*puVar13 & 0x40) == 0) {
              local_1c = local_1c | 1;
            }
            else {
              local_1c = local_1c | 0x800;
            }
          }
          if ((((DAT_00e996dc & 0x10) == 0) && (puVar13 != (uint *)0x0)) &&
             (uVar7 = puVar13[2], uVar7 != 0)) {
            local_c = (float)(int)*(short *)(uVar7 + 4) / (float)(int)*(short *)(puVar13 + 1);
            iVar9 = *(int *)(uVar7 + 0x1c);
            local_8 = (float)(int)*(short *)((int)puVar13 + 6) / (float)(int)*(short *)(uVar7 + 6);
            if (iVar9 == 0) {
              uVar16 = 0;
              uVar15 = 0;
              uVar6 = FUN_00409040(puVar13,0,0);
            }
            else {
              uVar6 = *(undefined4 *)(uVar7 + 0x38);
              uVar10 = CONCAT31((int3)((uint)iVar9 >> 8),*(undefined *)(iVar9 + 3)) & 0xffffff0f;
              uVar7 = CONCAT31((int3)((uint)puVar13 >> 8),*(undefined *)(iVar9 + 3)) & 0xfffffff0;
              uVar16 = CONCAT22((short)(uVar10 >> 0x10),(ushort)(byte)uVar10);
              uVar15 = CONCAT22((short)(uVar7 >> 0x10),(ushort)(byte)uVar7);
            }
            FUN_00432190(uVar6,uVar15,uVar16);
          }
          else {
            uVar6 = FUN_00409040(ppuVar3,0,0);
            FUN_00432190(uVar6);
          }
          iVar9 = _strncmp((char *)_Str1,(char *)&PTR_DAT_004c3c14,3);
          if (iVar9 == 0) {
            uVar7 = _Str1[0x10];
            puVar11[0x1a] = 0;
            *puVar11 = uVar7;
            puVar13 = _Str1;
            if (DAT_0050c0cc != 0) {
              FUN_00432580(_Str1);
            }
          }
          else {
            uVar7 = FUN_00409230(_Str1);
            iVar9 = *(int *)(DAT_00e37bf0 + 4);
            *(undefined4 *)(iVar9 + 0x44 + uVar7 * 0x94) = 3;
            *puVar11 = uVar7;
            *(uint *)(iVar9 + 0x40 + uVar7 * 0x94) = uVar7;
            puVar13 = (uint *)(iVar9 + uVar7 * 0x94);
            *(char *)puVar13 = 'a';
            *(char *)((int)puVar13 + 1) = 'e';
            *(char *)((int)puVar13 + 2) = 's';
            FUN_00432d30(_Str1,puVar13,ppuVar3,local_1c);
            *(uint **)((int)puVar13 + 10) = ppuVar3[0xc];
            ppuVar3[0xc] = puVar13;
            fVar14 = (float10)FUN_0042f950(ppuVar3 + 2,ppuVar3 + 5);
            puVar13[0x20] = (uint)(float)(fVar14 * (float10)0.5);
            FUN_00409290(puVar13);
          }
          *(short *)(puVar13 + 0x21) = *(short *)(puVar13 + 0x21) + 1;
          *(short *)((int)puVar13 + 0x86) = *(short *)((int)puVar13 + 0x86) + 1;
          puVar13[0x23] = (uint)(1.0 - local_c);
          puVar13[0x24] = (uint)(1.0 - local_8);
          if (DAT_0050c70c == 0) {
            *(char *)((int)puVar13 + 0x89) = '\0';
          }
          else {
            *(char *)((int)puVar13 + 0x89) = '\x01';
          }
          if (DAT_0050c530 != 0) {
            *(char *)((int)puVar13 + 0x89) = '\0';
          }
          DAT_0050c0cc = 0;
          if (*(char *)(puVar13 + 0x22) != '\0') {
            FUN_00432b80(puVar13,ppuVar3);
          }
          if ((_Str1 != (uint *)0x0) && (sVar4 = *(short *)((int)ppuVar3 + 0x3e), sVar4 != 0)) {
            if (ppuVar3[10] == (uint *)0x0) {
              FUN_0044bfb0(puVar11 + -0x22,(int)sVar4);
            }
            else {
              FUN_0044c3b0(ppuVar3[10],puVar11 + -0x22,(int)sVar4);
            }
          }
        }
        local_4 = local_4 + 1;
        puVar11 = puVar11 + 0x49;
      } while (local_4 < (int)param_1[5]);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044ceb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint **ppuVar2;
  uint *_Str1;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  uint *local_8;
  int local_4;

  if ((DAT_004c3c04 != 0) && (DAT_004c3c0c != 0)) {
    FUN_0044bc20();
  }
  param_1[0xd] = DAT_00e3752c;
  param_1[0xe] = DAT_00e37520;
  puVar8 = param_1;
  if (DAT_004c3c04 != 0) {
    _DAT_0050c6f8 = 0;
    puVar8 = (undefined4 *)(&DAT_00e375c0 + DAT_0050c6f4 * 0x30);
  }
  if (param_1[5] != 0) {
    iVar9 = *(int *)(DAT_0050c6b0 + 0x74);
    iVar6 = *(int *)(DAT_0050c6b0 + 0x78);
    iVar11 = param_1[5] + iVar9;
    *(int *)(iVar6 + 0x90) = iVar11 + -1;
    puVar1 = (undefined4 *)(iVar6 + iVar9 * 0x124);
    if (puVar1 + -0x49 == *(undefined4 **)(DAT_0050c6b0 + 0x78)) {
      puVar1[-0x24] = puVar1;
    }
    else {
      puVar1[-0x23] = puVar1;
    }
    puVar4 = puVar1;
    for (iVar9 = *(int *)(DAT_0050c6b0 + 0x74); iVar9 < iVar11; iVar9 = iVar9 + 1) {
      puVar4[0x20] = iVar9;
      puVar4[0x22] = 0xffffffff;
      *puVar4 = DAT_004c3c18;
      puVar4[1] = PTR_DAT_004c3c1c;
      puVar4[0x23] = *(undefined4 *)(DAT_0050c6b0 + 0x78);
      if (iVar9 < iVar11 + -1) {
        puVar4[0x26] = puVar4 + 0x49;
      }
      else {
        puVar4[0x26] = 0;
      }
      puVar4[0x25] = 0;
      puVar4[0x24] = 0;
      puVar4[0x21] = 1;
      puVar4[0x30] = *puVar8;
      puVar4[0x31] = puVar8[1];
      puVar4[0x32] = puVar8[2];
      puVar4[0x33] = puVar8[3];
      puVar4[0x34] = puVar8[4];
      puVar4[0x35] = puVar8[5];
      puVar4[0x36] = puVar8[6];
      puVar4[0x37] = puVar8[7];
      puVar4[0x38] = puVar8[8];
      puVar4[0x39] = puVar8[9];
      puVar4[0x3a] = puVar8[10];
      puVar4[0x3b] = puVar8[0xb];
      puVar4 = puVar4 + 0x49;
    }
    *(int *)(DAT_0050c6b0 + 0x74) = iVar11;
    local_4 = 0;
    if (0 < (int)param_1[5]) {
      local_8 = puVar1 + 0x22;
      do {
        ppuVar2 = *(uint ***)(param_1[6] + local_4 * 4);
        _Str1 = ppuVar2[0xc];
        if (_Str1 != (uint *)0x0) {
          iVar9 = 0;
          FUN_00433680(DAT_00e996dc & 0x2000,*ppuVar2);
          puVar3 = *ppuVar2;
          if ((puVar3 != (uint *)0x0) && ((*puVar3 & 8) == 0)) {
            iVar9 = (-(uint)((*puVar3 & 0x40) != 0) & 0x7ff) + 1;
          }
          if (((((DAT_00e996dc & 0x10) == 0) && (puVar3 != (uint *)0x0)) &&
              (uVar7 = puVar3[2], uVar7 != 0)) && (iVar6 = *(int *)(uVar7 + 0x1c), iVar6 != 0)) {
            uVar5 = CONCAT31((int3)((uint)iVar6 >> 8),*(undefined *)(iVar6 + 3)) & 0xfffffff0;
            uVar10 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined *)(iVar6 + 3)) &
                     0xffffff0f;
            FUN_00432190(*(undefined4 *)(uVar7 + 0x38),
                         CONCAT22((short)(uVar5 >> 0x10),(ushort)(byte)uVar5),
                         CONCAT22((short)(uVar10 >> 0x10),(ushort)(byte)uVar10));
          }
          else {
            FUN_00432190(0,0,0);
          }
          iVar6 = _strncmp((char *)_Str1,(char *)&PTR_DAT_004c3c14,3);
          if (iVar6 == 0) {
            *local_8 = _Str1[0x10];
          }
          else {
            uVar7 = FUN_00409230(_Str1);
            iVar6 = *(int *)(DAT_00e37bf0 + 4);
            *(undefined4 *)(iVar6 + 0x44 + uVar7 * 0x94) = 3;
            puVar3 = (uint *)(iVar6 + uVar7 * 0x94);
            *local_8 = uVar7;
            puVar3[0x10] = uVar7;
            *(undefined *)puVar3 = 0x61;
            *(undefined *)((int)puVar3 + 1) = 0x65;
            *(undefined *)((int)puVar3 + 2) = 0x73;
            *(undefined2 *)(puVar3 + 0x21) = 0;
            *(undefined2 *)((int)puVar3 + 0x86) = 0;
            FUN_00432d30(_Str1,puVar3,ppuVar2,iVar9);
            *(uint **)((int)puVar3 + 10) = ppuVar2[0xc];
            ppuVar2[0xc] = puVar3;
            fVar12 = (float10)FUN_0042f950(ppuVar2 + 2,ppuVar2 + 5);
            puVar3[0x20] = (uint)(float)(fVar12 * (float10)0.5);
            FUN_00409290(puVar3);
          }
        }
        local_4 = local_4 + 1;
        local_8 = local_8 + 0x49;
      } while (local_4 < (int)param_1[5]);
    }
  }
  return;
}



void FUN_0044d1e0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;

  iVar5 = 3;
  pfVar2 = (float *)(param_1 + 0x24);
  pfVar3 = (float *)(param_2 + 0x18);
  pfVar4 = param_3;
  do {
    iVar5 = iVar5 + -1;
    fVar1 = -(pfVar3[-6] * *param_3) + *pfVar2;
    *pfVar2 = fVar1;
    fVar1 = -(pfVar3[-3] * param_3[1]) + fVar1;
    *pfVar2 = fVar1;
    fVar1 = -(param_3[2] * *pfVar3) + fVar1;
    *pfVar2 = fVar1;
    *pfVar2 = *pfVar4 + fVar1;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar5 != 0);
  return;
}



void FUN_0044d240(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  DAT_0050c6e0 = DAT_0050c6e0 + 1;
  if (DAT_0050c6e0 < 0x21) {
    bVar2 = false;
    if (DAT_004c3c04 != 0) {
      FUN_0044b7e0(param_2);
    }
  }
  else {
    bVar2 = true;
  }
  iVar3 = FUN_00431780(param_3);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_3 + 0x18) + iVar6 * 4);
      if (iVar1 != 0) {
        uVar5 = *(uint *)(DAT_00e67c04 + 0x158);
        uVar4 = FUN_00431b00(iVar1,2);
        if ((uVar4 & uVar5) == uVar5) {
          uVar5 = FUN_00431b00(iVar1,2);
          if ((*(uint *)(DAT_00e67c04 + 0x15c) & uVar5) != 0) {
            FUN_0044d7c0(iVar1);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  if ((!bVar2) && (DAT_004c3c04 != 0)) {
    FUN_0044bab0();
  }
  DAT_0050c6e0 = DAT_0050c6e0 + -1;
  return;
}



void FUN_0044d310(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float local_80;
  undefined local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  float local_c;
  float local_8;
  float local_4;

  iVar7 = 0;
  if (DAT_004c3c04 == 0) {
    local_60 = 1.0;
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 0.0;
    local_50 = 1.0;
    local_4c = 0.0;
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = 1.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    goto LAB_0044d68a;
  }
  if (*(short *)(param_1 + 0x1e) == 0) {
    FUN_0044b9b0(&local_60);
  }
  else {
    FUN_0044b9b0(local_30);
    local_38 = local_8;
    local_3c = local_c;
    local_34 = local_4;
    local_6c = local_c - *(float *)(DAT_00e67c04 + 0xa0);
    local_68 = local_8 - *(float *)(DAT_00e67c04 + 0xa4);
    local_64 = local_4 - *(float *)(DAT_00e67c04 + 0xa8);
    FUN_0042f9b0(&local_6c);
    sVar1 = *(short *)(param_1 + 0x1e);
    if (sVar1 == 1) {
      FUN_0042fa50(local_78,*(undefined4 *)(param_1 + 0x20),local_30);
      FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x24),local_24);
      FUN_0042fa80(&local_48,local_78,*(undefined4 *)(param_1 + 0x28),local_18);
      fVar8 = (float10)FUN_0042f9b0(&local_48);
      local_80 = (float)fVar8;
      FUN_0042f9f0(&local_60,&local_6c,&local_48);
      FUN_0042f9b0(&local_60);
      pfVar11 = &local_60;
      pfVar10 = &local_48;
      pfVar9 = &local_54;
LAB_0044d573:
      FUN_0042f9f0(pfVar9,pfVar10,pfVar11);
    }
    else {
      local_54 = local_6c;
      local_50 = local_68;
      local_4c = local_64;
      if (sVar1 == 2) {
        fVar8 = (float10)FUN_0042f8c0(local_18);
        local_80 = (float)fVar8;
        FUN_0042f9f0(&local_60,&local_54,DAT_00e67c04 + 0x90);
        FUN_0042f9b0(&local_60);
        pfVar11 = &local_54;
        pfVar10 = &local_60;
        pfVar9 = &local_48;
        goto LAB_0044d573;
      }
      if (sVar1 == 3) {
        FUN_0042fa50(local_78,*(undefined4 *)(param_1 + 0x20),local_30);
        FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x24),local_24);
        FUN_0042fa80(local_78,local_78,*(undefined4 *)(param_1 + 0x28),local_18);
        fVar8 = (float10)FUN_0042f9b0(local_78);
        local_80 = (float)fVar8;
        FUN_0042f9f0(&local_60,&local_54,local_78);
        FUN_0042f9b0(&local_60);
        pfVar11 = &local_54;
        pfVar10 = &local_60;
        pfVar9 = &local_48;
        goto LAB_0044d573;
      }
    }
    local_60 = local_80 * local_60;
    local_5c = local_80 * local_5c;
    local_58 = local_80 * local_58;
    local_54 = local_80 * local_54;
    local_50 = local_80 * local_50;
    local_4c = local_80 * local_4c;
    local_48 = local_80 * local_48;
    local_44 = local_80 * local_44;
    local_40 = local_80 * local_40;
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    local_3c = *(float *)(DAT_00e67c04 + 0xa0);
    local_38 = *(float *)(DAT_00e67c04 + 0xa4);
    local_34 = *(float *)(DAT_00e67c04 + 0xa8);
  }
LAB_0044d68a:
  DAT_0050c6e0 = DAT_0050c6e0 + 1;
  bVar3 = DAT_0050c6e0 < 0x21;
  if (bVar3) {
    FUN_0044b750(&local_60);
  }
  iVar4 = FUN_00431780(param_1);
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
      if (((iVar2 != 0) &&
          (uVar6 = *(uint *)(DAT_00e67c04 + 0x158), uVar5 = FUN_00431b00(iVar2,2),
          (uVar5 & uVar6) == uVar6)) &&
         (uVar6 = FUN_00431b00(iVar2,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar6) != 0)) {
        FUN_0044d7c0(iVar2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (bVar3) {
    FUN_0044bab0();
  }
  DAT_0050c6e0 = DAT_0050c6e0 + -1;
  return;
}



int FUN_0044d740(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;

  iVar1 = FUN_00431780(param_1);
  if (iVar1 < 1) {
    return -1;
  }
  if (DAT_004c3c04 == 0) {
    return 0;
  }
  if (10.0 < *(float *)(param_1 + 0x1c)) {
    return -1;
  }
  iVar2 = 1;
  pfVar3 = (float *)(param_1 + 0x20);
  do {
    if ((*pfVar3 == -1.0) || (10.0 <= *pfVar3)) break;
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 8);
  if (iVar1 <= iVar2 + -1) {
    return -1;
  }
  return iVar2 + -1;
}



void FUN_0044d7c0(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
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

  iVar7 = 0;
  if (param_1 == 0) {
    return;
  }
  uVar3 = *(uint *)(DAT_00e67c04 + 0x158);
  uVar2 = FUN_00431b00(param_1,2);
  if ((uVar2 & uVar3) != uVar3) {
    return;
  }
  uVar3 = FUN_00431b00(param_1,2);
  if ((*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) == 0) {
    return;
  }
  bVar1 = 10 < DAT_0050c710;
  DAT_0050c710 = DAT_0050c710 + 1;
  if (bVar1) {
    DAT_0050c710 = 0;
    FUN_00426910();
  }
  iVar4 = FUN_00431770(param_1);
  uVar5 = FUN_0044c440(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xe));
  if (iVar4 < 0x5065) {
    if (iVar4 == 0x5064) {
      iVar4 = FUN_00431780(param_1);
      if (0 < iVar4) {
        do {
          iVar6 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
          if (((iVar6 != 0) &&
              (uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar6,2),
              (uVar2 & uVar3) == uVar3)) &&
             (uVar3 = FUN_00431b00(iVar6,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)) {
            FUN_0044d7c0(iVar6);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
    }
    else if (iVar4 == 0x3064) {
      FUN_0044ca00(param_1);
    }
    goto LAB_0044dac0;
  }
  if (iVar4 < 0xd065) {
    if (iVar4 != 0xd064) {
      if (iVar4 == 0x5065) {
        iVar6 = FUN_00431780(param_1);
        iVar4 = *(int *)(param_1 + 0x1c);
        if (iVar4 == -2) goto LAB_0044dac0;
        if (iVar4 == -1) {
          if (0 < iVar6) {
            do {
              iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
              if (((iVar4 != 0) &&
                  (uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar4,2),
                  (uVar2 & uVar3) == uVar3)) &&
                 (uVar3 = FUN_00431b00(iVar4,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)) {
                FUN_0044d7c0(iVar4);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
          goto LAB_0044dac0;
        }
        if ((iVar4 < 0) || (iVar6 <= iVar4)) goto LAB_0044dac0;
      }
      else if ((iVar4 != 0x5066) || (iVar4 = FUN_0044d740(param_1), iVar4 == -1)) goto LAB_0044dac0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
      if ((iVar7 != 0) &&
         ((uVar3 = *(uint *)(DAT_00e67c04 + 0x158), uVar2 = FUN_00431b00(iVar7,2),
          (uVar2 & uVar3) == uVar3 &&
          (uVar3 = FUN_00431b00(iVar7,2), (*(uint *)(DAT_00e67c04 + 0x15c) & uVar3) != 0)))) {
        FUN_0044d7c0(iVar7);
      }
      goto LAB_0044dac0;
    }
    puVar8 = (undefined4 *)(param_1 + 0x1c);
    uVar9 = 0;
  }
  else {
    if (iVar4 != 0xd065) {
      if (iVar4 == 0xd066) {
        FUN_0044d310(param_1);
      }
      goto LAB_0044dac0;
    }
    iVar7 = FUN_00431780(param_1);
    if (iVar7 < 1) goto LAB_0044dac0;
    if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
      puVar8 = (undefined4 *)(param_1 + 0x1c);
    }
    else {
      local_30 = *(undefined4 *)(param_1 + 0x1c);
      local_2c = *(undefined4 *)(param_1 + 0x20);
      local_28 = *(undefined4 *)(param_1 + 0x24);
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      local_1c = *(undefined4 *)(param_1 + 0x30);
      local_18 = *(undefined4 *)(param_1 + 0x34);
      local_14 = *(undefined4 *)(param_1 + 0x38);
      local_10 = *(undefined4 *)(param_1 + 0x3c);
      local_c = *(undefined4 *)(param_1 + 0x40);
      local_8 = *(undefined4 *)(param_1 + 0x44);
      local_4 = *(undefined4 *)(param_1 + 0x48);
      FUN_0044d1e0(&local_30,param_1 + 0x1c,param_1 + 0x4c);
      puVar8 = &local_30;
    }
    uVar9 = 1;
  }
  FUN_0044d240(uVar9,puVar8,param_1);
LAB_0044dac0:
  FUN_0044c4c0(uVar5);
  return;
}



void FUN_0044dae0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  if (param_1 != 0) {
    uVar2 = FUN_00431770(param_1);
    uVar3 = FUN_0044c440(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xe));
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x3064) != 0) {
        FUN_0044ceb0(param_1);
      }
    }
    else {
      iVar4 = FUN_00431780(param_1);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
          if (iVar1 != 0) {
            FUN_0044dae0(iVar1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
        FUN_0044c4c0(uVar3);
        return;
      }
    }
    FUN_0044c4c0(uVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044db70(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  DAT_00e374c0 = *param_1;
  DAT_00e67c04 = param_2;
  if ((DAT_0050c6b0 == 0) && (DAT_0050c6b4 == (undefined4 *)0x0)) {
    DAT_0050c6b0 = FUN_00408e40(0x90);
    FUN_0048ee10(DAT_0050c6b0);
    *(undefined4 *)(DAT_0050c6b0 + 0x40) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x68) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x6c) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 100) = 1;
    DAT_00e37bf0 = DAT_0050c6b0 + 0x44 + *(int *)(DAT_0050c6b0 + 0x70) * 8;
    FUN_00409270();
    uVar1 = FUN_00408e40(0xd8cc0);
    *(undefined4 *)(DAT_00e37bf0 + 4) = uVar1;
    puVar4 = *(undefined4 **)(DAT_00e37bf0 + 4);
    for (iVar3 = 0x36330; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_0050c6b4 = (undefined4 *)FUN_00490b70(0);
    *DAT_0050c6b4 = 1;
    DAT_0050c6b4[5] = 1;
    DAT_0050c6b4[1] = DAT_0050c6b0;
    DAT_0050c6b4[0xb] = 0xffffffff;
    DAT_0050c6b4[0xc] = 4;
    DAT_0050c6b4[2] = 4;
    DAT_0050c6b4[9] = 0;
    DAT_0050c6b4[8] = 0;
    uVar1 = FUN_00408e40(0x1abbc0);
    *(undefined4 *)(DAT_0050c6b0 + 0x78) = uVar1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x80) = 0;
    puVar4 = *(undefined4 **)(DAT_0050c6b0 + 0x78);
    *puVar4 = DAT_004c3c20;
    *(undefined *)(puVar4 + 1) = DAT_004c3c24;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x98) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x94) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x90) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x84) = 1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x88) = 0xffffffff;
    puVar4 = &DAT_004af880;
    puVar5 = (undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0xc0);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x74) = 1;
  FUN_00408f70(DAT_0050c6b0);
  DAT_0050c6e0 = 0;
  FUN_0044bb40();
  DAT_0050c6c0 = DAT_0050c6c0 + 1;
  puVar4 = &DAT_00e374e0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0050c6bc = 0;
  DAT_0050c6d0 = DAT_00e996dc >> 0xe & 1;
  FUN_0044d7c0(*(undefined4 *)(param_2 + 0x168));
  piVar2 = &DAT_00e374e4;
  do {
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    DAT_00e374e0 = DAT_00e374e0 + iVar3;
  } while ((int)piVar2 < 0xe37520);
  FUN_00490c80(DAT_0050c6b4,&DAT_004af880,(DAT_00e996dc & 0x4000) != 0,DAT_00ec86c4);
  *param_1 = DAT_00e374c0;
  return;
}



void FUN_0044de10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  DAT_00e67c04 = param_1;
  if ((DAT_0050c6b0 == 0) && (DAT_0050c6b4 == (undefined4 *)0x0)) {
    DAT_0050c6b0 = FUN_00408e40(0x90);
    FUN_0048ee10(DAT_0050c6b0);
    *(undefined4 *)(DAT_0050c6b0 + 0x40) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x68) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x6c) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 100) = 1;
    DAT_00e37bf0 = DAT_0050c6b0 + 0x44 + *(int *)(DAT_0050c6b0 + 0x70) * 8;
    FUN_00409270();
    uVar1 = FUN_00408e40(0xd8cc0);
    *(undefined4 *)(DAT_00e37bf0 + 4) = uVar1;
    puVar3 = *(undefined4 **)(DAT_00e37bf0 + 4);
    for (iVar2 = 0x36330; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_0050c6b4 = (undefined4 *)FUN_00490b70(0);
    *DAT_0050c6b4 = 1;
    DAT_0050c6b4[5] = 1;
    DAT_0050c6b4[1] = DAT_0050c6b0;
    DAT_0050c6b4[0xb] = 0xffffffff;
    DAT_0050c6b4[0xc] = 4;
    DAT_0050c6b4[2] = 4;
    DAT_0050c6b4[9] = 0;
    DAT_0050c6b4[8] = 0;
    uVar1 = FUN_00408e40(0x1abbc0);
    *(undefined4 *)(DAT_0050c6b0 + 0x78) = uVar1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x80) = 0;
    puVar3 = *(undefined4 **)(DAT_0050c6b0 + 0x78);
    *puVar3 = DAT_004c3c20;
    *(undefined *)(puVar3 + 1) = DAT_004c3c24;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x98) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x94) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x90) = 0;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x84) = 1;
    *(undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0x88) = 0xffffffff;
    puVar3 = &DAT_004af880;
    puVar4 = (undefined4 *)(*(int *)(DAT_0050c6b0 + 0x78) + 0xc0);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)(DAT_0050c6b0 + 0x74) = 1;
  FUN_00408f70(DAT_0050c6b0);
  DAT_0050c6e0 = 0;
  FUN_0044dae0(*(undefined4 *)(param_1 + 0x168));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044e000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar2;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar3 = &DAT_004c3bd0;
  puVar4 = &DAT_00e37540;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00e67c00 = 0xffffffff;
  _DAT_00e67c08 = 0xffffffff;
  _DAT_00e37528 = 0xffffffff;
  _DAT_00e37524 = 0;
  _DAT_00e374c4 = 0;
  uVar1 = *param_1;
  if (((byte)DAT_00e996dc & 0x40) == 0) {
    FUN_004094e0(1);
    FUN_00409380(CONCAT22(extraout_var_01,DAT_004c3b90),CONCAT22(extraout_var,DAT_004c3b94));
    FUN_00409450(CONCAT22(extraout_var_03,DAT_004c3b88),CONCAT22(extraout_var_02,DAT_004c3b8a),
                 CONCAT22(extraout_var_00,DAT_004c3b8c),CONCAT22(extraout_var_03,DAT_004c3b8e));
    FUN_00409510(0,1);
    *param_1 = uVar1;
    return;
  }
  FUN_004094e0(0);
  FUN_00409510(0,1);
  *param_1 = uVar1;
  return;
}



void FUN_0044e0c0(int param_1)

{
  if (param_1 != 0) {
    DAT_00e996dc = DAT_00e996dc & 0xffffffbf;
    return;
  }
  DAT_00e996dc = DAT_00e996dc | 0x40;
  return;
}



void FUN_0044e0e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (-1 < param_1) {
    DAT_004c3b90 = (undefined2)param_1;
  }
  if (-1 < param_2) {
    DAT_004c3b94 = (undefined2)param_2;
  }
  if (-1 < param_3) {
    DAT_004c3b88 = (undefined2)param_3;
  }
  if (-1 < param_4) {
    DAT_004c3b8a = (undefined2)param_4;
  }
  if (-1 < param_5) {
    DAT_004c3b8c = (undefined2)param_5;
  }
  if (-1 < param_6) {
    DAT_004c3b8e = (undefined2)param_6;
  }
  return;
}



void FUN_0044e140(undefined2 *param_1,undefined2 *param_2,short *param_3)

{
  FUN_00409600(0,*param_1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],-*param_3,-param_3[1]
               ,-param_3[2]);
  return;
}



void FUN_0044e190(int param_1,undefined2 *param_2,undefined2 *param_3,short *param_4)

{
  if ((-1 < param_1) && (param_1 < 0xc)) {
    FUN_00409600(param_1 + 1,*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2],-*param_4
                 ,-param_4[1],-param_4[2]);
  }
  return;
}



void FUN_0044e1f0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0xc)) {
    FUN_00409700(param_1 + 1);
    *(undefined4 *)(&DAT_004c3ba0 + param_1 * 4) = 1;
  }
  return;
}



void FUN_0044e220(int param_1,int param_2,undefined2 *param_3,short *param_4)

{
  if ((-1 < param_1) && (param_1 < 0xc)) {
    if (param_2 == 0) {
      *(undefined4 *)(&DAT_004c3ba0 + param_1 * 4) = 1;
      return;
    }
    *(undefined4 *)(&DAT_004c3ba0 + param_1 * 4) = 2;
    FUN_00409750(param_1 + 1,*param_3,param_3[1],param_3[2],-*param_4,-param_4[1],-param_4[2]);
  }
  return;
}



void FUN_0044e290(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  DAT_00e37530 = (float)(param_3 & 0xff) * 0.003921569;
  DAT_00e37534 = (float)(param_4 & 0xff) * 0.003921569;
  DAT_00e37538 = (float)(param_5 & 0xff) * 0.003921569;
  DAT_00e3753c = (float)(param_6 & 0xff) * 0.003921569;
  return;
}

#endif

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044e320(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;

  puVar1 = param_1;
  puVar4 = param_1;
  for (iVar3 = 0x3f5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)((int)param_1 + 5) = 0xe1;
  *(undefined *)((int)param_1 + 6) = 200;
  *(undefined *)((int)param_1 + 7) = 0;
  param_1[2] = 3;
  _DAT_0050c75c = 0;
#if 0
  FUN_00426910();
#endif
  param_1[4] = 0x22e01;
  *(undefined *)(param_1 + 3) = 7;
  *(undefined *)((int)param_1 + 0xd) = 3;
  *(undefined *)((int)param_1 + 0xe) = 1;
  *(undefined *)((int)param_1 + 0xf) = 0;
  param_1 = (undefined4 *)0x0;
  puVar4 = puVar1 + 0x87;
  puVar2 = puVar1 + 0x249;
  local_4 = 0x19;
  do {
    iVar6 = 0;
    local_8 = 2;
    do {
      puVar4[-0x32] = 0x4560ffd7;
      *puVar4 = 0x4560ffd7;
      iVar5 = 0x20;
      do {
        *(undefined *)(puVar2 + -400) = 0x41;
        *(undefined *)puVar2 = 0x41;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
      *(undefined *)((int)puVar1 + iVar6 + iVar3 * 2 + 0xf63) = (char)(int)(&DAT_004bfef2)[(int)param_1];
      *(undefined *)((int)puVar1 + iVar6 + iVar3 * 2 + 0xf95) = (char)(int)(&DAT_004bfef2)[(int)param_1];
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar3 = iVar3 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0xc);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar3 = 0;
  iVar6 = 4;
  do {
#if 0
    FUN_0043ea00(1,iVar3);
#endif
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
#if 0
  DAT_00e364a0 = FUN_0044e440(&DAT_00e364a0);
#endif
  return;
}

#if 0

void FUN_0044e440(int param_1)

{
  FUN_0044e460(param_1 + 4,0xfd0);
  return;
}



uint FUN_0044e460(byte *param_1,int param_2)

{
  uint uVar1;

  if (DAT_00e360a4 == 0) {
    FUN_0044e4a0();
  }
  uVar1 = 0xffffffff;
  if (0 < param_2) {
    do {
      uVar1 = uVar1 << 8 ^ (&DAT_00e360a0)[uVar1 >> 0x18 ^ (uint)*param_1];
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return ~uVar1;
}



void FUN_0044e4a0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  puVar2 = &DAT_00e360a0;
  do {
    iVar4 = 8;
    uVar1 = iVar3 << 0x18;
    do {
      if ((uVar1 & 0x80000000) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 * 2 ^ 0x4c11db7;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0xe364a0);
  return;
}



void FUN_0044e4e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = &DAT_00e364a0;
  puVar3 = &DAT_00e34a80;
  for (iVar1 = 0x3f5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



void FUN_0044e500(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = &DAT_00e364b4 + param_2 * 0x14;
  puVar3 = (undefined4 *)(&DAT_00e35a60 + param_1 * 0x50);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

#endif

void FUN_0044e530(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = (undefined4 *)(&DAT_00e35a60 + param_2 * 0x50);
  puVar3 = (unsigned int*)&DAT_00e364b4 + param_1 * 0x14;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

void FUN_0044e560(void)

{
  if (DAT_00e35a81 == '\x01') {
    FUN_0044e530((int)DAT_00e35a82,0);
  }
  FUN_0044e530(0,0);
  FUN_00421c90();
#if 0
  FUN_004219d0(&DAT_00e364b4);
#endif
  return;
}

#if 0

void FUN_0044e5a0(int param_1,int param_2,undefined4 *param_3)

{
  param_2 = param_2 * 0x54;
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10 + param_2);
  param_3[1] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14 + param_2);
  param_3[2] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18 + param_2);
  return;
}



int FUN_0044e5e0(int param_1,int param_2,int param_3)

{
  short *psVar1;

  if (param_3 < *(int *)(param_1 + 4)) {
    psVar1 = (short *)(*(int *)(param_1 + 0xc) + 0x40 + param_3 * 0x54);
    do {
      if (*psVar1 == param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      psVar1 = psVar1 + 0x2a;
    } while (param_3 < *(int *)(param_1 + 4));
  }
  return -1;
}



int FUN_0044e620(int *param_1,int param_2)

{
  int iVar1;

  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    return param_1[param_2 + 4];
  }
  if (param_2 != 0) {
    iVar1 = iVar1 >> ((byte)param_2 & 0x1f);
  }
  return (int)*(short *)(*(int *)(*param_1 + 0xc) + 0x42 + (iVar1 + param_1[param_2 + 4] * 0x2a) * 2
                        );
}



void FUN_0044e660(short *param_1,byte param_2,float param_3,int *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined *puVar10;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;

  local_8 = param_3;
  local_c = param_3 * param_3;
  local_4 = 0x3f800000;
  local_10 = local_c * param_3;
  if (*param_1 == 0) {
    FUN_00430ab0(&local_20,&local_10,&DAT_004c3c38);
    iVar4 = *(int *)(param_1 + 6);
    pfVar9 = (float *)(iVar4 + 0x10 + *param_4 * 0x54);
    pfVar8 = (float *)(iVar4 + 0x10 + param_4[1] * 0x54);
    pfVar7 = (float *)(iVar4 + 0x10 + param_4[2] * 0x54);
    pfVar6 = (float *)(iVar4 + 0x10 + param_4[3] * 0x54);
  }
  else {
    FUN_00430ab0(&local_20,&local_10,&DAT_004c3cf8);
    iVar4 = *(int *)(param_1 + 6) + *param_4 * 0x54;
    pfVar9 = (float *)(iVar4 + 0x10);
    pfVar8 = (float *)(iVar4 + 0x34);
    iVar4 = *(int *)(param_1 + 6) + param_4[1] * 0x54;
    pfVar7 = (float *)(iVar4 + 0x28);
    pfVar6 = (float *)(iVar4 + 0x10);
  }
  if ((param_2 & 1) != 0) {
    *param_5 = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[1] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[2] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  if ((param_2 & 8) != 0) {
    if (*param_1 == 1) {
      param_5[0xb] = 1.0;
      param_5[9] = 0.0;
      param_5[10] = 0.0;
    }
    else {
      iVar5 = *(int *)(param_1 + 6);
      pfVar1 = (float *)(iVar5 + 0x1c + *param_4 * 0x54);
      pfVar2 = (float *)(iVar5 + 0x1c + param_4[1] * 0x54);
      iVar4 = iVar5 + 0x1c + param_4[2] * 0x54;
      iVar3 = iVar5 + 0x1c + param_4[3] * 0x54;
      param_5[9] = *(float *)(iVar5 + 0x1c + param_4[3] * 0x54) * local_14 +
                   *pfVar1 * local_20 +
                   *(float *)(iVar5 + 0x1c + param_4[2] * 0x54) * local_18 + *pfVar2 * local_1c;
      param_5[10] = pfVar2[1] * local_1c +
                    *(float *)(iVar4 + 4) * local_18 +
                    pfVar1[1] * local_20 + *(float *)(iVar3 + 4) * local_14;
      param_5[0xb] = *(float *)(iVar3 + 8) * local_14 +
                     pfVar2[2] * local_1c + *(float *)(iVar4 + 8) * local_18 + pfVar1[2] * local_20;
    }
  }
  if ((param_2 & 2) != 0) {
    if (*param_1 == 0) {
      puVar10 = &DAT_004c3c78;
    }
    else {
      puVar10 = &DAT_004c3d38;
    }
    FUN_00430ab0(&local_20,&local_10,puVar10);
    param_5[3] = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[4] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[5] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  if ((param_2 & 4) != 0) {
    if (*param_1 == 0) {
      puVar10 = &DAT_004c3cb8;
    }
    else {
      puVar10 = &DAT_004c3d78;
    }
    FUN_00430ab0(&local_20,&local_10,puVar10);
    param_5[6] = *pfVar9 * local_20 + *pfVar7 * local_18 + *pfVar8 * local_1c + *pfVar6 * local_14;
    param_5[7] = pfVar8[1] * local_1c +
                 pfVar7[1] * local_18 + pfVar9[1] * local_20 + pfVar6[1] * local_14;
    param_5[8] = pfVar8[2] * local_1c +
                 pfVar7[2] * local_18 + pfVar9[2] * local_20 + pfVar6[2] * local_14;
  }
  return;
}



void FUN_0044eaa0(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;

  if ((short)param_2 == 1) {
    *(undefined4 *)(param_3 + 0x24) = 0;
    if (*(int *)(param_3 + 0x20) == 0) {
      if (*param_1 == 0) {
        iVar6 = *(int *)(param_3 + 0x1c);
      }
      else {
        iVar6 = *(int *)(param_3 + 0x14);
      }
      sVar5 = *(short *)(*(int *)(param_1 + 6) + iVar6 * 0x54);
      if (sVar5 == 0) {
        param_2 = -1;
        *(undefined4 *)(param_3 + 0x20) = 1;
        *(undefined4 *)(param_3 + 8) = 0x3f800000;
      }
      else {
        if (*(int *)(param_3 + 0x28) < (int)sVar5) {
          sVar5 = *(short *)(param_3 + 0x28);
        }
        else {
          sVar5 = (short)(*(int *)(param_3 + 0x28) % (int)sVar5);
        }
        uVar4 = (uint)sVar5;
        param_2 = (int)*(short *)(*(int *)(param_1 + 6) + iVar6 * 0x54 + 4 + uVar4 * 2);
        uVar7 = *(int *)(param_3 + 0x2c) >> 1;
        if (*param_1 == 0) {
          *(uint *)(param_3 + 0x2c) = uVar7 | uVar4 << 2;
        }
        else {
          *(uint *)(param_3 + 0x2c) = uVar7 | uVar4;
        }
      }
    }
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x14);
      if (*param_1 != 0) {
        *(int *)(param_3 + 0x14) = param_2;
        return;
      }
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x1c);
      *(int *)(param_3 + 0x1c) = param_2;
      return;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x24) == 0) {
      iVar1 = *(int *)(param_3 + 0x10);
      iVar6 = *(int *)(param_1 + 6) + iVar1 * 0x54;
      sVar5 = *(short *)(*(int *)(param_1 + 6) + 2 + iVar1 * 0x54);
      if (sVar5 == 0) {
        param_2 = -1;
        *(undefined4 *)(param_3 + 0x24) = 1;
        *(undefined4 *)(param_3 + 8) = 0;
      }
      else {
        iVar2 = *(int *)(param_3 + 0x28);
        if (iVar2 < sVar5) {
          sVar5 = *(short *)(iVar6 + 8 + iVar2 * 2);
        }
        else {
          sVar5 = *(short *)(iVar6 + 8 + (iVar2 % (int)sVar5) * 2);
        }
        param_2 = (int)sVar5;
        if (*param_1 == 0) {
          *(uint *)(param_3 + 0x2c) = (*(uint *)(param_3 + 0x2c) & 3) << 1;
        }
        else {
          *(undefined4 *)(param_3 + 0x2c) = 0;
        }
        if (iVar1 != *(short *)(*(int *)(param_1 + 6) + 4 + param_2 * 0x54)) {
          *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 1;
        }
      }
    }
    if (*(int *)(param_3 + 0x24) == 0) {
      if (*param_1 == 0) {
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x14);
      }
      uVar3 = *(undefined4 *)(param_3 + 0x10);
      *(int *)(param_3 + 0x10) = param_2;
      *(undefined4 *)(param_3 + 0x14) = uVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044ec40(undefined4 *param_1,int param_2)

{
  float fVar1;
  float10 fVar2;

  if (((0.0 < (float)param_1[1]) && (param_1[8] == 0)) ||
     (((float)param_1[1] < 0.0 && (param_1[9] == 0)))) {
    fVar1 = (float)param_1[1] * (float)_DAT_00e22a40;
    param_1[2] = fVar1 + (float)param_1[2];
    if (0.0 <= fVar1) {
      if (0.0 < fVar1) {
        param_1[9] = 0;
      }
    }
    else {
      param_1[8] = 0;
    }
  }
  fVar1 = (float)param_1[2];
  while ((1.0 <= fVar1 && (param_1[8] == 0))) {
    param_1[2] = (float)param_1[2] - 1.0;
    FUN_0044eaa0(*param_1,1,param_1);
    fVar1 = (float)param_1[2];
  }
  fVar1 = (float)param_1[2];
  while ((fVar1 < 0.0 && (param_1[9] == 0))) {
    param_1[2] = (float)param_1[2] - -1.0;
    FUN_0044eaa0(*param_1,2,param_1);
    fVar1 = (float)param_1[2];
  }
  if ((float)param_1[2] < 0.0) {
    param_1[2] = 0;
  }
  if (1.0 < (float)param_1[2]) {
    param_1[2] = 0x3f800000;
  }
  FUN_0044e660(*param_1,0xb,param_1[2],param_1 + 4,param_2);
  fVar2 = (float10)FUN_0042f8c0(param_2 + 0xc);
  param_1[3] = (float)fVar2;
  return;
}



void FUN_0044ed80(undefined4 *param_1,int param_2)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined local_54 [12];
  undefined local_48 [12];
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [24];
  undefined local_c [12];

  FUN_0044ec40(param_1,local_30);
  fVar1 = (float10)FUN_0042f8c0(local_24);
  if (fVar1 < (float10)0.0001) {
    if (0.5 <= (float)param_1[2]) {
      uVar2 = 0x3f7fbe77;
    }
    else {
      uVar2 = 0x3a83126f;
    }
    FUN_0044e660(*param_1,2,uVar2,param_1 + 4,local_30);
  }
  FUN_0042f9f0(local_54,local_24,local_c);
  FUN_0042f9f0(local_48,local_54,local_24);
  FUN_0042f9b0(local_54);
  FUN_0042f9b0(local_48);
  FUN_0042f9b0(local_24);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  FUN_0042fb10(param_2,0,local_54);
  FUN_0042fb10(param_2,1,local_24);
  FUN_0042fb10(param_2,2,local_48);
  FUN_0042fb40(param_2,3,local_3c);
  FUN_0042fb10(param_2,3,local_30);
  return;
}



void FUN_0044eeb0(float *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  float local_30 [12];

  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_1;
    param_1 = param_1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  local_30[2] = local_30[2] + param_3;
  local_30[1] = 0.0;
  FUN_0044ed80(local_30,param_2);
  return;
}



void FUN_0044eef0(short **param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;

  psVar1 = *param_1;
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_2;
  param_1[7] = param_2;
  if (*(short *)(*(int *)(psVar1 + 6) + (int)param_2 * 0x54) != 0) {
    psVar2 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)param_2 * 0x54 + 4);
    param_1[5] = psVar2;
    if ((*psVar1 == 0) && (*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54) != 0)) {
      psVar2 = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54 + 4);
      param_1[6] = psVar2;
      if (*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54) != 0) {
        param_1[7] = (short *)(int)*(short *)(*(int *)(psVar1 + 6) + (int)psVar2 * 0x54 + 4);
      }
    }
  }
  return;
}



void FUN_0044ef70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_0050c73c = param_1;
  DAT_0050c734 = param_3;
  DAT_0050c740 = param_2;
  DAT_0050c738 = param_4;
  return;
}



void FUN_0044efa0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  float param_10;
  float param_11;

  sVar1 = __ftol(((float)param_4 - (float)(param_5 + param_4) * 0.5) * param_10,
                 ((float)param_2 - (float)(param_3 + param_2) * 0.5) * param_11);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  sVar1 = __ftol(sVar1 >> 2);
  FUN_004327e0(sVar1 >> 2);
  return;
}



void FUN_0044f160(undefined4 *param_1,int param_2,short *param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11_00,int param_11,int param_12,uint param_13,short param_14,
                 undefined4 param_15,undefined4 param_16,uint param_17)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 extraout_ST0;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;

  iVar8 = DAT_0050c734;
  local_c = (int)*(short *)(param_2 + 0xe);
  uVar6 = param_13;
  switch(*(undefined *)(param_2 + 5)) {
  case 0:
    uVar6 = 0xf;
    break;
  case 1:
    uVar6 = 7;
    break;
  case 2:
    uVar6 = 3;
    break;
  case 3:
    uVar6 = 1;
  }
  local_10 = (int)*param_3 + uVar6 & ~uVar6;
  local_8 = param_17 & 0x40;
  if (local_8 != 0) {
    DAT_0050c740 = DAT_0050c740 * 2;
    DAT_0050c738 = DAT_0050c738 * 2;
  }
  iVar10 = DAT_0050c740;
  local_18 = (float)DAT_0050c740;
  local_20 = *param_1;
  if ((((param_4 < local_18) && (local_14 = (float)DAT_0050c738, param_5 < local_14)) &&
      (local_1c = (float)DAT_0050c73c, local_1c <= param_6)) &&
     (fVar13 = (float10)DAT_0050c734, fVar13 <= (float10)param_7)) {
    local_4 = param_17 & 0x400000;
    if (local_4 != 0) {
      if (param_8 < DAT_0050c73c) {
        param_8 = DAT_0050c73c * 4;
      }
      if (DAT_0050c740 < param_8) {
        param_8 = DAT_0050c740 * 4;
      }
      if (param_9 < DAT_0050c734) {
        param_9 = DAT_0050c734 * 4;
      }
      if (DAT_0050c738 < param_9) {
        param_9 = DAT_0050c738 * 4;
      }
      iVar5 = param_8 << 2;
      param_8 = param_9 << 2;
      param_9 = iVar5;
    }
    if (local_1c <= param_4) {
      iVar5 = __ftol();
      fVar13 = extraout_ST0;
    }
    else {
      iVar5 = DAT_0050c73c * 4;
    }
    if (fVar13 <= (float10)param_5) {
      iVar8 = __ftol();
    }
    else {
      iVar8 = iVar8 << 2;
    }
    if (param_6 < local_18) {
      iVar10 = __ftol();
    }
    else {
      iVar10 = iVar10 * 4;
    }
    if (param_7 < local_14) {
      iVar9 = __ftol();
    }
    else {
      iVar9 = DAT_0050c738 * 4;
    }
    if ((param_17 & 0x1000000) == 0) {
      uVar6 = ~param_17 >> 0x19 & 2;
    }
    else {
      uVar6 = 0;
    }
    if ((param_17 & 0x2000000) == 0) {
      uVar3 = ~param_17 >> 0x1a & 2;
    }
    else {
      uVar3 = 0;
    }
    if (*(int *)(param_3 + 2) != DAT_0050c744) {
      FUN_00432190(*(int *)(param_3 + 2),uVar6 == 2,uVar3 == 2);
      DAT_0050c744 = *(int *)(param_3 + 2);
    }
    if ((param_17 & 0xc00000) == 0) {
      iVar7 = iVar5 - iVar10;
      iVar4 = iVar8 - iVar9;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      fVar1 = (float)(iVar7 >> 2) * (float)param_11 * 0.0009765625 - 0.5;
      fVar2 = (float)(iVar4 >> 2) * (float)param_12 * 0.0009765625 - 0.5;
      if (local_8 == 0) {
        iVar10 = iVar10 >> 2;
        iVar9 = iVar9 >> 2;
        iVar5 = iVar5 >> 2;
        iVar8 = iVar8 >> 2;
      }
      else {
        iVar10 = iVar10 >> 3;
        iVar9 = iVar9 >> 3;
        iVar5 = iVar5 >> 3;
        iVar8 = iVar8 >> 3;
      }
      bVar11 = (param_17 & 0x10000000) != 0;
      bVar12 = (param_17 & 0x10) != 0;
      iVar7 = iVar5;
      if ((short)param_13 != 0) {
        iVar7 = iVar10;
        iVar10 = iVar5;
      }
      iVar5 = iVar8;
      if (param_14 == 0) {
        iVar5 = iVar9;
        iVar9 = iVar8;
      }
      if ((param_2 == DAT_0050c9fc) || (param_2 == DAT_0050ca00)) {
        FUN_004321b0(iVar10,iVar9,iVar7,iVar5,fVar1,fVar2,bVar11,bVar12,param_2);
      }
      else {
        FUN_004325b0(iVar10,iVar9,iVar7,iVar5,fVar1,fVar2,bVar11,bVar12);
      }
    }
    else {
      iVar7 = 0;
      if ((short)param_13 == 0) {
        param_13 = local_10 << 6;
        param_17 = 0;
      }
      else {
        param_13 = 0;
        param_17 = local_10 << 6;
      }
      if (param_14 == 0) {
        iVar4 = 0;
        iVar7 = local_c << 6;
      }
      else {
        iVar4 = local_c << 6;
      }
      if (local_4 == 0) {
        FUN_0044efa0(&local_20,iVar5,iVar10,iVar8,iVar9,param_17,param_13,iVar4,iVar7,param_15,
                     param_16);
      }
      else {
        FUN_00426910(&local_20,iVar5,iVar10,iVar8,iVar9,param_9,param_8,param_17,param_13,iVar4,
                     iVar7);
      }
    }
  }
  *param_1 = local_20;
  if (local_8 != 0) {
    DAT_0050c740 = DAT_0050c740 / 2;
    DAT_0050c738 = DAT_0050c738 / 2;
  }
  return;
}



void FUN_0044f5f0(void)

{
  FUN_00426910();
  DAT_0050c744 = 0;
  return;
}



void FUN_0044f600(void)

{
  FUN_0044f5f0();
  FUN_0044ef70(0,DAT_00ec86c4 + -1,0,DAT_00ec85e8 + -1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044f630(uint param_1)

{
  _DAT_004c3db8 = param_1 & 0xffff;
  return;
}



void FUN_0044f640(float *param_1,float *param_2)

{
  *param_1 = (float)DAT_00ec86c4 * 0.003125;
  *param_2 = (float)DAT_00ec85e8 * 0.004166667;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0044f670(short *param_1,short param_2,int param_3,float param_4,float param_5,int param_6,
                 short param_7,short param_8,uint param_9,undefined4 param_10,int param_11,
                 float param_12,int param_13)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_48;
  short *local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined local_4 [4];

  if ((((param_9 & 8) == 0) && (1e-05 < param_4)) && (1e-05 < param_5)) {
    if ((param_4 == 1.0) && (param_5 == 1.0)) {
      param_9 = param_9 | 0x20;
    }
    else {
      param_9 = param_9 & 0xffffffdf;
    }
    if (param_1 != (short *)0x0) {
      local_40 = *(short **)(param_1 + 8);
      if ((param_9 & 0x800000) == 0) {
        local_30 = 0;
        local_34 = 0x3f800000;
      }
      else {
        FUN_0042f380(param_6,&local_30,&local_34);
      }
      if ((param_9 & 0x20000) == 0) {
        local_38 = 0.0;
        local_3c = 0.0;
      }
      else {
        local_1c = (int)param_1[1];
        local_38 = (float)(int)*param_1 * 0.5 * param_4;
        local_3c = (float)local_1c * 0.5 * param_5;
      }
      _DAT_0050c748 = param_9;
      FUN_0044e290(0,0,param_10,param_11,param_12,param_13);
      uVar2 = __ftol();
      local_8 = uVar2;
      local_18 = __ftol();
      local_10 = param_9 & 0x5000000;
      local_28 = 0x400;
      if (local_10 == 0) {
        local_28 = uVar2;
      }
      local_14 = param_9 & 0xa000000;
      local_2c = 0x400;
      if (local_14 == 0) {
        local_2c = local_18;
      }
      if (local_40 != (short *)0x0) {
        iVar6 = -1;
        iVar5 = -1;
        param_11 = -1;
        param_13 = 9000;
        param_6 = 9000;
        local_1c = 0;
        iVar7 = param_3;
        if (0 < param_1[6]) {
          while (0 < *local_40) {
            local_48 = (short)(param_9 & 0x2000);
            iVar4 = (int)*local_40;
            if (local_48 == 0) {
              param_13 = iVar6 + iVar4;
            }
            else {
              iVar6 = param_13 - iVar4;
              param_11 = iVar6;
            }
            if ((iVar6 < 0) || (fVar1 = param_12, *param_1 < param_13)) {
              if (iVar5 == -1) {
                if ((param_9 & 0x4000) == 0) {
                  param_12 = 0.0;
                  if (local_40[1] == 0) {
                    param_6 = (int)param_1[7];
                  }
                  else {
                    param_6 = (int)local_40[1];
                  }
                }
                else {
                  param_6 = (int)param_1[1];
                  if (local_40[1] == 0) {
                    param_12 = (float)(param_6 - param_1[7]);
                  }
                  else {
                    param_12 = (float)(param_6 - local_40[1]);
                  }
                }
              }
              else if ((param_9 & 0x4000) == 0) {
                param_12 = (float)param_6;
                if (local_40[1] == 0) {
                  param_6 = param_6 + param_1[7];
                }
                else {
                  param_6 = param_6 + local_40[1];
                }
              }
              else {
                param_6 = iVar5;
                if (local_40[1] == 0) {
                  param_12 = (float)(iVar5 - param_1[7]);
                }
                else {
                  param_12 = (float)(iVar5 - local_40[1]);
                }
              }
              if ((int)param_12 < 0) {
                return;
              }
              if (param_1[1] < param_6) {
                return;
              }
              if (local_48 == 0) {
                param_11 = 0;
                param_13 = iVar4;
              }
              else {
                param_11 = *param_1 - iVar4;
                param_13 = (int)*param_1;
              }
              fVar1 = (float)(int)param_12 * param_5 + ((float)(int)(short)param_3 - local_3c);
              local_24 = (float)param_6 * param_5 + ((float)(int)(short)param_3 - local_3c);
              __ftol();
              iVar5 = (int)param_12;
              iVar6 = param_11;
              if ((param_9 & 0x4000) == 0) {
                iVar7 = ((param_6 - (int)param_12) + -1) * 0x20;
              }
              else {
                iVar7 = __ftol();
                iVar7 = iVar7 + 0x10 >> 5;
                if ((param_9 & 0x100) != 0) {
                  iVar7 = iVar7 + 0x10;
                }
                if (local_14 != 0) {
                  iVar4 = __ftol();
                  iVar7 = iVar7 + iVar4;
                }
              }
            }
            param_12 = fVar1;
            local_20 = (float)param_13 * param_4 + ((float)(int)param_2 - local_38);
            local_c = __ftol();
            if (local_48 == 0) {
              iVar4 = __ftol();
              iVar4 = iVar4 + 0x10 >> 5;
              if ((param_9 & 0x100) != 0) {
                iVar4 = iVar4 + 0x10;
              }
            }
            else {
              iVar4 = ((param_13 - iVar6) + -1) * 0x20;
              if (local_10 != 0) {
                iVar3 = __ftol();
                iVar4 = iVar4 + iVar3;
              }
            }
            if (*(int *)(local_40 + 2) != 0) {
              FUN_0044f160(local_4,param_1,local_40,
                           (float)param_11 * param_4 + ((float)(int)param_2 - local_38),param_12,
                           local_20,local_24,(int)param_7,(int)param_8,iVar4,iVar7,local_28,local_2c
                           ,param_9 & 0x2000,(param_9 & 0x4000) == 0,local_30,local_34,param_9);
            }
            if (local_48 == 0) {
              iVar6 = iVar6 + *local_40;
              param_11 = iVar6;
            }
            else {
              param_13 = param_13 - *local_40;
            }
            local_40 = local_40 + 4;
            local_1c = local_1c + 1;
            if (param_1[6] <= local_1c) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}
#endif
