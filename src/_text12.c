#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0

void FUN_00440800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined local_44 [12];
  undefined4 local_38 [14];

  iVar3 = DAT_00e295d0;
  iVar1 = DAT_00e295d0 * 0x38;
  iVar4 = (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[iVar1] * 0x10];
  DAT_00e35a98 = (DAT_00e35a98 - DAT_00e99220) + DAT_00e9935c;
  if (*(int *)(param_1 + 0x38) == 1) {
    (&DAT_00e2985e)[*(int *)(param_1 + 0x34) * 3] = (&DAT_00e35aa8)[iVar4];
  }
  puVar5 = (undefined4 *)(&DAT_00e2a6c0 + iVar1);
  puVar6 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(&DAT_00e2b220 + iVar4 * 0x38);
  puVar6 = puVar5;
  puVar7 = (undefined4 *)(&DAT_00e2a6c0 + iVar1);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = local_38;
  puVar7 = puVar5;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0042f7d0(local_44,&DAT_00e2a6c4 + iVar3 * 0xe);
  FUN_0042f7d0(&DAT_00e2a6c4 + DAT_00e295d0 * 0xe,&DAT_00e2b224 + iVar4 * 0xe);
  FUN_0042f7d0(&DAT_00e2b224 + iVar4 * 0xe,local_44);
  (&DAT_00e35aa8)[iVar4] = (&DAT_00e2b221)[iVar4 * 0x38];
  iVar3 = DAT_00e295d0 + 0x62;
  *(undefined *)((int)&DAT_00e35aa0 + iVar4 + 1) = (&DAT_004c1cb9)[*(char *)puVar5 * 0x10];
  FUN_0045cf30(iVar3,iVar4 + 0x8e);
  DAT_0050c474 = 1;
  FUN_0044e560();
  FUN_0045cf60((int)*(char *)(param_1 + 0x73),
               (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
               (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
               (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
  FUN_0043eb50();
  return;
}



undefined4 FUN_00440990(char *param_1,char *param_2)

{
  if ((DAT_0050c048 & 0x4000) == 0) {
    return 0;
  }
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}



undefined4 FUN_004409d0(char *param_1,char *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}



undefined FUN_00440a00(char param_1,char param_2)

{
  undefined uVar1;

  if (('\x02' < param_1) || (uVar1 = 4, '\x05' < param_2)) {
    uVar1 = 3;
  }
  return uVar1;
}



undefined4 FUN_00440a20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;

  uVar2 = param_2;
  uVar1 = param_1;
  cVar5 = (char)param_1;
  cVar3 = (char)param_2;
  param_2._0_1_ = cVar3 * '\x02';
  param_1._0_2_ = (short)(&DAT_00e35a8a)[cVar5] >> ((byte)param_2 & 0x1f) & 3;
  cVar4 = FUN_00440a00(uVar1,uVar2);
  if (((cVar4 != '\x03') || ((ushort)param_1 != 0)) &&
     (('\x02' < cVar5 || (((&DAT_00e35a85)[cVar5] & (byte)(1 << (cVar3 + 1U & 0x1f))) != 0)))) {
    return 0;
  }
  return 1;
}



bool FUN_00440aa0(int param_1,char param_2,byte param_3)

{
  byte bVar1;

  bVar1 = (&DAT_00e35a85)[param_2];
  if ((DAT_004d5e00 != 0) && (param_2 < '\x03')) {
    return true;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    bVar1 = (&DAT_00e364ac)[param_2];
  }
  return ((byte)(1 << (param_3 & 0x1f)) & bVar1) != 0;
}



int FUN_00440af0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = -1;
  iVar4 = 0;
  cVar1 = *(char *)(param_1 + 0x5e);
  if ((char)(&DAT_004bfee0)[cVar1] < '\x01') {
    return -1;
  }
  while ((iVar2 = FUN_00440aa0(param_1,cVar1,iVar4), iVar2 == 0 ||
         (iVar3 = iVar3 + 1, iVar3 != param_2))) {
    cVar1 = *(char *)(param_1 + 0x5e);
    iVar4 = iVar4 + 1;
    if ((char)(&DAT_004bfee0)[cVar1] <= iVar4) {
      return -1;
    }
  }
  return iVar4;
}



undefined4 FUN_00440b50(int param_1)

{
  int iVar1;

  iVar1 = FUN_0042f7f0(&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e2af90);
  if (iVar1 != 0) {
    iVar1 = FUN_0042f7f0(&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e2b470);
    if (iVar1 != 0) {
      iVar1 = FUN_0042f7f0(&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e29b90);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_00440bc0(int param_1)

{
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if ((DAT_00e364a8 & 0x20) != 0) {
      return 1;
    }
  }
  else if ((((DAT_00e35a8a == 0x3fff) && (DAT_00e35a8c == 0x3fff)) && (DAT_00e35a8e == 0x3fff)) &&
          (DAT_00e35a90 == 0xff)) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00440c10(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;

  _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  DAT_0050ca3c = 1;
  bVar8 = 0;
  bVar4 = 0;
  bVar3 = false;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 8;
  iVar5 = FUN_004409d0(&DAT_00e35a60,&DAT_004c0948);
  if ((iVar5 != 0) && (((byte)DAT_0050c908 & 4) != 0)) {
    DAT_00e29890 = *(undefined *)(param_1 + 0x5d);
    bVar8 = 1;
    bVar4 = 1;
    bVar3 = true;
  }
  if (bVar8 < 5) {
    do {
      FUN_004816b0();
      iVar5 = __ftol();
      FUN_004816b0();
      iVar6 = __ftol();
      bVar1 = (&DAT_00e35a85)[iVar5];
      if (bVar3) {
        bVar1 = (&DAT_00e364ac)[iVar5];
      }
      if ((bVar1 & (byte)(1 << ((byte)iVar6 & 0x1f))) != 0) {
        iVar9 = (int)(char)bVar8;
        bVar2 = false;
        iVar7 = 0;
        if (0 < iVar9) {
          do {
            bVar8 = bVar4;
            if (*(int *)(&DAT_004c0018 + (iVar5 * 7 + iVar6) * 4) ==
                (int)(char)(&DAT_00e29890)[iVar7]) {
              bVar2 = true;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar9);
        }
        if (!bVar2) {
          bVar8 = bVar8 + 1;
          (&DAT_00e29890)[iVar9] = (&DAT_004c0018)[(iVar5 * 7 + iVar6) * 4];
          bVar4 = bVar8;
        }
      }
    } while ((char)bVar8 < '\x05');
  }
  return;
}



void FUN_00440d50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = FUN_00411810();
  uVar2 = FUN_00414d90(uVar1,2);
  FUN_00414e60(uVar2,param_1);
  uVar1 = FUN_00414d90(uVar1,4);
  FUN_00414e60(uVar1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 * FUN_00440d90(void)

{
  if ((DAT_004c1770 != 0) || ((DAT_00e996dc & 0x1000) != 0)) {
    _DAT_00e98ef4 = 0;
    _DAT_00e98ee4 = 0;
    DAT_00e98ee0 = 0;
    _DAT_00e98ee8 = 0;
    DAT_00e98ee2 = 0;
    _DAT_00e98eec = 0;
    _DAT_00e98ef0 = 0;
  }
  DAT_004c1770 = 0;
  return &DAT_00e98ee0;
}



undefined4 FUN_00440de0(int param_1)

{
  return *(undefined4 *)(&DAT_0050c5b0 + param_1 * 4);
}



void FUN_00440df0(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;

  FUN_00440d90();
  pcVar6 = &DAT_00e98ef2;
  iVar7 = 0;
  do {
    uVar4 = (uint)(pcVar6[1] != '\0');
    if (*pcVar6 != '\0') {
      uVar4 = uVar4 | 2;
    }
    if (pcVar6[-0xb] != '\0') {
      uVar4 = uVar4 | 4;
    }
    if (pcVar6[-0xc] != '\0') {
      uVar4 = uVar4 | 8;
    }
    if (pcVar6[-0xd] != '\0') {
      uVar4 = uVar4 | 0x10;
    }
    if (pcVar6[-0xe] != '\0') {
      uVar4 = uVar4 | 0x20;
    }
    if (pcVar6[-9] != '\0') {
      uVar4 = uVar4 | 0x40;
    }
    if (pcVar6[-10] != '\0') {
      uVar4 = uVar4 | 0x80;
    }
    if (pcVar6[-1] != '\0') {
      uVar4 = uVar4 | 0x100;
    }
    if (pcVar6[-2] != '\0') {
      uVar4 = uVar4 | 0x200;
    }
    if (pcVar6[-3] != '\0') {
      uVar4 = uVar4 | 0x400;
    }
    if (pcVar6[-4] != '\0') {
      uVar4 = uVar4 | 0x800;
    }
    if (pcVar6[-5] != '\0') {
      uVar4 = uVar4 | 0x1000;
    }
    if (pcVar6[-6] != '\0') {
      uVar4 = uVar4 | 0x2000;
    }
    fVar2 = (float)(int)*(short *)(pcVar6 + -0x10) * 0.01;
    if (0.3 < fVar2) {
      uVar4 = uVar4 | 0x4000;
    }
    if (fVar2 < -0.3) {
      uVar4 = uVar4 | 0x8000;
    }
    fVar3 = (float)(int)*(short *)(pcVar6 + -0x12) * 0.01;
    if (fVar3 < -0.3) {
      uVar4 = uVar4 | 0x10000;
    }
    if (0.3 < fVar3) {
      uVar4 = uVar4 | 0x20000;
    }
    if ((-0.2 < fVar3) && (fVar3 < 0.2)) {
      uVar4 = uVar4 | 0x40000;
    }
    if ((-0.2 < fVar2) && (fVar2 < 0.2)) {
      uVar4 = uVar4 | 0x80000;
    }
    if ((fVar3 <= -0.2) && (-0.3 <= fVar3)) {
      uVar4 = uVar4 | 0x100000;
    }
    if ((0.2 <= fVar3) && (fVar3 <= 0.3)) {
      uVar4 = uVar4 | 0x200000;
    }
    if ((0.2 <= fVar2) && (fVar2 <= 0.3)) {
      uVar4 = uVar4 | 0x400000;
    }
    if ((fVar2 <= -0.2) && (-0.3 <= fVar2)) {
      uVar4 = uVar4 | 0x800000;
    }
    uVar1 = *(uint *)((int)&DAT_00e98e90 + iVar7);
    *(float *)((int)&DAT_00e98ea0 + iVar7) = fVar3;
    *(uint *)((int)&DAT_00e98e90 + iVar7) = uVar4;
    *(float *)((int)&DAT_00e98e80 + iVar7) = fVar2;
    uVar5 = uVar1 ^ uVar4;
    pcVar6 = pcVar6 + 0x18;
    *(uint *)((int)&DAT_00e98eb0 + iVar7) = uVar4 & uVar5;
    *(uint *)((int)&DAT_00e98ec0 + iVar7) = uVar1 & uVar5;
    iVar7 = iVar7 + 4;
  } while ((int)pcVar6 < 0xe98f52);
  return;
}



void FUN_00441010(undefined4 param_1)

{
  DAT_0050c5c8 = param_1;
  return;
}



void FUN_00441020(void)

{
  DAT_0050c5d0 = 0;
  return;
}



undefined4 FUN_00441030(void)

{
  return DAT_0050c5d0;
}



undefined4
FUN_00441040(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  float local_48 [6];
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_24 = *param_2 - *param_1;
  local_20 = param_2[1] - param_1[1];
  local_1c = param_2[2] - param_1[2];
  local_18 = *param_3 - *param_1;
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  local_c = *param_4 - *param_1;
  local_8 = param_4[1] - param_1[1];
  local_4 = param_4[2] - param_1[2];
  FUN_0042f9f0(local_48,param_5,param_6);
  if (((local_48[0] != 0.0) || (local_48[1] != 0.0)) || (local_48[2] != 0.0)) {
    FUN_0042f9f0(local_48,local_48 + 9,param_5);
    FUN_0042f9f0(local_48 + 3,&local_18,param_6);
    FUN_0042f9f0(local_48 + 6,&local_c,param_7);
    if (0.0 <= local_48[0]) {
      param_3 = (float *)local_48[0];
    }
    else {
      param_3 = (float *)-local_48[0];
    }
    if (0.0 <= local_48[1]) {
      param_2 = (float *)local_48[1];
    }
    else {
      param_2 = (float *)-local_48[1];
    }
    if (local_48[2] < 0.0) {
      local_48[2] = -local_48[2];
    }
    if (local_48[2] + (float)param_2 + (float)param_3 <= 0.0001) {
      if (0.0 <= local_48[3]) {
        param_3 = (float *)local_48[3];
      }
      else {
        param_3 = (float *)-local_48[3];
      }
      if (0.0 <= local_48[4]) {
        param_2 = (float *)local_48[4];
      }
      else {
        param_2 = (float *)-local_48[4];
      }
      if (local_48[5] < 0.0) {
        local_48[5] = -local_48[5];
      }
      if (local_48[5] + (float)param_2 + (float)param_3 < 0.001) {
        return 1;
      }
      if ((float)param_2 <= (float)param_3) {
        if (local_48[5] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[5] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if (0.0 <= local_48[iVar1 + 3]) {
        if (0.0 <= local_48[iVar1 + 6]) {
          return 1;
        }
      }
      else if (local_48[iVar1 + 6] <= 0.0) {
        return 1;
      }
    }
    else {
      if ((float)param_2 <= (float)param_3) {
        if (local_48[2] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[2] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if (0.0 <= local_48[iVar1]) {
        if ((0.0 <= local_48[iVar1 + 3]) && (0.0 <= local_48[iVar1 + 6])) {
          return 1;
        }
      }
      else if ((local_48[iVar1 + 3] <= 0.0) && (local_48[iVar1 + 6] <= 0.0)) {
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00441390(float param_1,float *param_2,float *param_3,float *param_4)

{
  if (param_1 <= DAT_00e98258 - 0.01) {
    DAT_00e98258 = param_1;
    _DAT_00e98e60 = *param_3;
    DAT_00e98e64 = param_3[1];
    DAT_00e98e68 = param_3[2];
    _DAT_00e98290 = *param_4;
    DAT_00e98294 = param_4[1];
    DAT_00e98298 = param_4[2];
    DAT_00e98254 = DAT_00e98284;
    DAT_00e98250 = 1;
  }
  else if ((param_2[2] - param_3[2]) * DAT_00e98298 +
           (param_2[1] - param_3[1]) * DAT_00e98294 + (*param_2 - *param_3) * _DAT_00e98290 <
           *param_4 * (*param_2 - *param_3) +
           (param_2[1] - param_3[1]) * param_4[1] + (param_2[2] - param_3[2]) * param_4[2]) {
    DAT_00e98258 = param_1;
    _DAT_00e98e60 = *param_3;
    DAT_00e98e64 = param_3[1];
    DAT_00e98e68 = param_3[2];
    _DAT_00e98290 = *param_4;
    DAT_00e98294 = param_4[1];
    DAT_00e98254 = DAT_00e98284;
    DAT_00e98298 = param_4[2];
    DAT_00e98250 = 1;
    return;
  }
  return;
}



void FUN_004414e0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 param_6)

{
  float fVar1;
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

  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = *param_4 - *param_3;
  local_20 = param_4[1] - param_3[1];
  local_1c = param_4[2] - param_3[2];
  local_18 = *param_2 - *param_4;
  local_14 = param_2[1] - param_4[1];
  local_10 = param_2[2] - param_4[2];
  FUN_004808f0(param_1,param_2,param_3,&local_30);
  FUN_004808f0(param_1,param_3,param_4,&local_24);
  FUN_004808f0(param_1,param_4,param_2,&local_18);
  param_3 = (float *)((param_5[2] - local_28) * (param_5[2] - local_28) +
                     (param_5[1] - local_2c) * (param_5[1] - local_2c) +
                     (*param_5 - local_30) * (*param_5 - local_30));
  fVar1 = (param_5[2] - local_1c) * (param_5[2] - local_1c) +
          (param_5[1] - local_20) * (param_5[1] - local_20) +
          (*param_5 - local_24) * (*param_5 - local_24);
  local_c = local_30;
  local_8 = local_2c;
  local_4 = local_28;
  if (fVar1 < (float)param_3) {
    local_c = local_24;
    local_8 = local_20;
    local_4 = local_1c;
    param_3 = (float *)fVar1;
  }
  fVar1 = (param_5[2] - local_10) * (param_5[2] - local_10) +
          (param_5[1] - local_14) * (param_5[1] - local_14) +
          (*param_5 - local_18) * (*param_5 - local_18);
  if (fVar1 < (float)param_3) {
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    param_3 = (float *)fVar1;
  }
  if ((float)param_3 <= DAT_00e98258) {
    FUN_00441390(param_3,param_5,&local_c,param_6);
  }
  return;
}



void FUN_00441710(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;

  local_c = *param_3 - *param_2;
  local_8 = param_3[1] - param_2[1];
  local_4 = param_3[2] - param_2[2];
  FUN_0042f9b0(&local_c);
  fVar1 = (local_c * *param_4 + local_8 * param_4[1] + local_4 * param_4[2]) /
          (param_5 - (*param_2 * *param_4 + param_4[1] * param_2[1] + param_4[2] * param_2[2]));
  *param_1 = local_c * fVar1;
  param_1[1] = local_8 * fVar1;
  param_1[2] = local_4 * fVar1;
  *param_1 = *param_2 + local_c * fVar1;
  param_1[1] = param_2[1] + local_8 * fVar1;
  param_1[2] = param_2[2] + local_4 * fVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00441810(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined local_3c [12];
  undefined local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  undefined local_18 [12];
  undefined local_c [12];

  pfVar6 = param_3;
  pfVar8 = param_2;
  pfVar5 = param_1;
  fVar2 = param_1[2] * _DAT_00e985a8 + param_1[1] * _DAT_00e985a4 + _DAT_00e985a0 * *param_1;
  if ((DAT_00e98e00 < fVar2) && (fVar2 < DAT_00e9827c)) {
    FUN_00441390(param_6,param_5,param_1,param_7);
    return;
  }
  fVar2 = _DAT_00e985a0 * *param_2 + _DAT_00e985a4 * param_2[1] + _DAT_00e985a8 * param_2[2];
  pfVar7 = param_3 + 2;
  pfVar1 = param_3 + 1;
  param_2._0_2_ = 0;
  param_6._0_2_ = 0;
  param_3._0_2_ = 0;
  fVar3 = _DAT_00e985a0 * *pfVar6 + _DAT_00e985a4 * *pfVar1 + _DAT_00e985a8 * *pfVar7;
  fVar4 = _DAT_00e985a0 * *param_4 + _DAT_00e985a4 * param_4[1] + _DAT_00e985a8 * param_4[2];
  if (DAT_00e98e00 <= fVar2) {
    if (DAT_00e9827c < fVar2) {
      param_2._0_2_ = 2;
    }
  }
  else {
    param_2._0_2_ = -1;
  }
  if (DAT_00e98e00 <= fVar3) {
    if (DAT_00e9827c < fVar3) {
      param_6._0_2_ = 2;
    }
  }
  else {
    param_6._0_2_ = -1;
  }
  if (DAT_00e98e00 <= fVar4) {
    if (DAT_00e9827c < fVar4) {
      param_3._0_2_ = 2;
    }
  }
  else {
    param_3._0_2_ = -1;
  }
  param_1 = (float *)DAT_00e9827c;
  switch((int)(short)param_6 + (int)(short)param_3 + 3 + (int)(short)param_2) {
  default:
    return;
  case 1:
    param_1 = (float *)DAT_00e98e00;
    break;
  case 2:
    param_1 = (float *)DAT_00e98e00;
  case 5:
    if ((short)param_2 != 0) {
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,param_1);
      FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,param_1);
      FUN_004414e0(pfVar5,local_30,pfVar6,local_3c,param_5,param_7);
      FUN_004414e0(pfVar5,local_3c,pfVar6,param_4,param_5,param_7);
      return;
    }
    if ((short)param_6 == 0) {
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,param_1);
      FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,param_1);
      FUN_004414e0(pfVar5,local_30,pfVar8,local_3c,param_5,param_7);
      FUN_004414e0(pfVar5,local_3c,pfVar8,pfVar6,param_5,param_7);
      return;
    }
    FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,local_30,param_4,local_3c,param_5,param_7);
    FUN_004414e0(pfVar5,local_3c,param_4,pfVar8,param_5,param_7);
    return;
  case 3:
  case 6:
    if ((short)param_6 == (short)param_3) {
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,pfVar8,param_4,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar8;
      pfVar8 = pfVar6;
    }
    else if ((short)param_3 == (short)param_2) {
      FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar6;
      pfVar8 = param_4;
    }
    else {
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(&local_24,param_4,pfVar6,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = param_4;
    }
    FUN_00441710(local_18,pfVar7,pfVar8,&DAT_00e985a0,DAT_00e98e00);
    FUN_004414e0(pfVar5,local_30,local_3c,&local_24,param_5,param_7);
    FUN_004414e0(pfVar5,local_30,&local_24,local_18,param_5,param_7);
    return;
  case 4:
    if ((short)param_2 == 0) {
      local_24 = *pfVar8;
      local_20 = pfVar8[1];
      local_1c = pfVar8[2];
      FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,pfVar6,param_4,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar8;
      if ((short)param_6 == 2) {
        FUN_00441710(local_3c,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = param_4;
      }
      else {
        FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = pfVar6;
      }
    }
    else if ((short)param_6 == 0) {
      local_24 = *pfVar6;
      local_20 = pfVar6[1];
      local_1c = pfVar6[2];
      FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,param_4,pfVar8,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = pfVar6;
      if ((short)param_3 == 2) {
        FUN_00441710(local_3c,pfVar6,param_4,&DAT_00e985a0,DAT_00e9827c);
      }
      else {
        FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = param_4;
      }
    }
    else {
      local_24 = *param_4;
      local_20 = param_4[1];
      local_1c = param_4[2];
      FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      FUN_00441710(local_c,pfVar8,pfVar6,&DAT_00e985a0,DAT_00e98e00);
      pfVar7 = param_4;
      if ((short)param_2 == 2) {
        FUN_00441710(local_3c,param_4,pfVar8,&DAT_00e985a0,DAT_00e9827c);
        pfVar8 = pfVar6;
      }
      else {
        FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,DAT_00e9827c);
      }
    }
    FUN_00441710(local_18,pfVar7,pfVar8,&DAT_00e985a0,DAT_00e98e00);
    FUN_004414e0(pfVar5,local_30,local_3c,&local_24,param_5,param_7);
    FUN_004414e0(pfVar5,local_30,&local_24,local_c,param_5,param_7);
    FUN_004414e0(pfVar5,&local_24,local_18,local_c,param_5,param_7);
    return;
  case 7:
    break;
  }
  if ((short)param_2 == 0) {
    FUN_00441710(local_30,pfVar8,pfVar6,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,pfVar8,param_4,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,pfVar8,local_30,local_3c,param_5,param_7);
    return;
  }
  if ((short)param_6 != 0) {
    FUN_00441710(local_30,param_4,pfVar8,&DAT_00e985a0,param_1);
    FUN_00441710(local_3c,param_4,pfVar6,&DAT_00e985a0,param_1);
    FUN_004414e0(pfVar5,param_4,local_30,local_3c,param_5,param_7);
    return;
  }
  FUN_00441710(local_30,pfVar6,param_4,&DAT_00e985a0,param_1);
  FUN_00441710(local_3c,pfVar6,pfVar8,&DAT_00e985a0,param_1);
  FUN_004414e0(pfVar5,pfVar6,local_30,local_3c,param_5,param_7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00442090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
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

  pfVar5 = param_5;
  bVar4 = false;
  if ((param_5[1] - param_2[1]) * param_1[1] +
      (param_5[2] - param_2[2]) * param_1[2] + (*param_5 - *param_2) * *param_1 < 0.0) {
    if (DAT_004c1778 == 0) {
      return;
    }
    bVar4 = true;
  }
  FUN_00480890(param_1,param_5,&local_30);
  fVar2 = (param_5[2] - local_28) * (param_5[2] - local_28) +
          (param_5[1] - local_2c) * (param_5[1] - local_2c) +
          (*param_5 - local_30) * (*param_5 - local_30);
  if (fVar2 <= _DAT_00e98e6c) {
    local_24 = *param_3 - *param_2;
    local_20 = param_3[1] - param_2[1];
    local_1c = param_3[2] - param_2[2];
    local_18 = *param_4 - *param_3;
    local_14 = param_4[1] - param_3[1];
    local_10 = param_4[2] - param_3[2];
    local_c = *param_2 - *param_4;
    local_8 = param_2[1] - param_4[1];
    local_4 = param_2[2] - param_4[2];
    iVar6 = FUN_00441040(&local_30,param_2,param_3,param_4,&local_24,&local_18,&local_c);
    if (iVar6 == 0) {
      FUN_004808f0(&local_30,param_2,param_3,&local_24);
      FUN_004808f0(&local_30,param_3,param_4,&local_18);
      FUN_004808f0(&local_30,param_4,param_2,&local_c);
      fVar2 = *param_5;
      pfVar7 = param_5 + 1;
      pfVar1 = param_5 + 2;
      param_5 = (float *)((param_5[2] - local_1c) * (param_5[2] - local_1c) +
                         (param_5[1] - local_20) * (param_5[1] - local_20) +
                         (*param_5 - local_24) * (*param_5 - local_24));
      fVar2 = (*pfVar1 - local_10) * (*pfVar1 - local_10) +
              (*pfVar7 - local_14) * (*pfVar7 - local_14) + (fVar2 - local_18) * (fVar2 - local_18);
      local_2c = local_20;
      local_30 = local_24;
      local_28 = local_1c;
      if (fVar2 < (float)param_5) {
        local_30 = local_18;
        local_2c = local_14;
        local_28 = local_10;
        param_5 = (float *)fVar2;
      }
      fVar3 = (pfVar5[2] - local_4) * (pfVar5[2] - local_4) +
              (pfVar5[1] - local_8) * (pfVar5[1] - local_8) +
              (*pfVar5 - local_c) * (*pfVar5 - local_c);
      fVar2 = (float)param_5;
      if (fVar3 < (float)param_5) {
        local_30 = local_c;
        local_2c = local_8;
        local_28 = local_4;
        fVar2 = fVar3;
      }
    }
    param_5 = (float *)fVar2;
    if ((DAT_0050c5d8 != 0) && (DAT_0050c5d4 < 0x3f)) {
      iVar6 = DAT_0050c5d4 * 0xc;
      DAT_0050c5d4 = DAT_0050c5d4 + 1;
      *(float *)(&DAT_00e982a0 + iVar6) = local_30;
      *(float *)(&DAT_00e982a4 + iVar6) = local_2c;
      *(float *)(&DAT_00e982a8 + iVar6) = local_28;
    }
    if ((float)param_5 <= DAT_00e98258) {
      if (DAT_00e98e1c == 3) {
        pfVar7 = param_3;
        if (bVar4) {
          *param_1 = -*param_1;
          param_1[1] = -param_1[1];
          param_1[2] = -param_1[2];
          pfVar7 = param_4;
          param_4 = param_3;
        }
        FUN_00441810(&local_30,param_2,pfVar7,param_4,pfVar5,param_5,param_1);
        return;
      }
      DAT_00e98258 = (float)param_5;
      DAT_00e98254 = DAT_00e98284;
      DAT_00e98250 = 1;
      _DAT_00e98e60 = local_30;
      DAT_00e98e64 = local_2c;
      DAT_00e98e68 = local_28;
    }
  }
  return;
}



float10 FUN_00442470(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;

  fVar1 = (float10)param_2[4] * (float10)param_1[1] +
          (float10)param_2[5] * (float10)param_1[2] + (float10)*param_1 * (float10)param_2[3];
  if (((float10)-0.0001 <= fVar1) && (fVar1 <= (float10)0.0001)) {
    return (float10)-1.0;
  }
  fVar1 = fVar1 / ((float10)param_1[3] -
                  ((float10)*param_1 * (float10)*param_2 +
                  (float10)param_1[1] * (float10)param_2[1] +
                  (float10)param_1[2] * (float10)param_2[2]));
  if (fVar1 < (float10)0.0) {
    return (float10)-1.0;
  }
  if ((float10)param_2[6] < fVar1) {
    return (float10)-1.0;
  }
  *param_3 = (float)(fVar1 * (float10)param_2[3]);
  param_3[1] = (float)(fVar1 * (float10)param_2[4]);
  param_3[2] = (float)(fVar1 * (float10)param_2[5]);
  *param_3 = *param_3 + *param_2;
  param_3[1] = param_2[1] + param_3[1];
  param_3[2] = param_2[2] + param_3[2];
  return fVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00442550(float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  bVar2 = false;
  if (*(float *)(param_5 + 0xc) * *param_1 +
      *(float *)(param_5 + 0x14) * param_1[2] + *(float *)(param_5 + 0x10) * param_1[1] <= 0.0) {
    if (DAT_004c1774 == 0) {
      return;
    }
  }
  else {
    if (DAT_0050c5cc == 0) {
      return;
    }
    bVar2 = true;
  }
  fVar4 = (float10)FUN_00442470(param_1,param_5,&local_30);
  fVar1 = (float)fVar4;
  if (((float10)0.0 <= fVar4) && (fVar1 < DAT_00e98258)) {
    local_24 = *param_3 - *param_2;
    local_20 = param_3[1] - param_2[1];
    local_1c = param_3[2] - param_2[2];
    local_18 = *param_4 - *param_3;
    local_14 = param_4[1] - param_3[1];
    local_10 = param_4[2] - param_3[2];
    local_c = *param_2 - *param_4;
    local_8 = param_2[1] - param_4[1];
    local_4 = param_2[2] - param_4[2];
    iVar3 = FUN_00441040(&local_30,param_2,param_3,param_4,&local_24,&local_18,&local_c);
    if (iVar3 != 0) {
      DAT_00e98258 = fVar1;
      _DAT_00e98e60 = local_30;
      DAT_00e98250 = 1;
      DAT_00e98e64 = local_2c;
      DAT_00e98e68 = local_28;
      DAT_00e98254 = DAT_00e98284;
      if (bVar2) {
        _DAT_00e98290 = -*param_1;
        DAT_00e98294 = -param_1[1];
        DAT_00e98298 = -param_1[2];
        return;
      }
      _DAT_00e98290 = *param_1;
      DAT_00e98294 = param_1[1];
      DAT_00e98298 = param_1[2];
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00443110(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;

  fVar1 = -_DAT_00e985b0;
  if ((((((fVar1 <= *param_1 - _DAT_00e98e30) || (fVar1 <= *param_2 - _DAT_00e98e30)) ||
        (fVar1 <= *param_3 - _DAT_00e98e30)) || (fVar1 <= *param_4 - _DAT_00e98e30)) &&
      (((*param_1 - _DAT_00e98e30 <= _DAT_00e985b0 || (*param_2 - _DAT_00e98e30 <= _DAT_00e985b0))
       || ((*param_3 - _DAT_00e98e30 <= _DAT_00e985b0 || (*param_4 - _DAT_00e98e30 <= _DAT_00e985b0)
           ))))) &&
     ((((fVar1 <= param_1[1] - _DAT_00e98e34 || (fVar1 <= param_2[1] - _DAT_00e98e34)) ||
       ((fVar1 <= param_3[1] - _DAT_00e98e34 || (fVar1 <= param_4[1] - _DAT_00e98e34)))) &&
      (((((param_1[1] - _DAT_00e98e34 <= _DAT_00e985b0 ||
          (param_2[1] - _DAT_00e98e34 <= _DAT_00e985b0)) ||
         (param_3[1] - _DAT_00e98e34 <= _DAT_00e985b0)) ||
        (param_4[1] - _DAT_00e98e34 <= _DAT_00e985b0)) &&
       (((fVar1 <= param_1[2] - _DAT_00e98e38 || (fVar1 <= param_2[2] - _DAT_00e98e38)) ||
        ((fVar1 <= param_3[2] - _DAT_00e98e38 || (fVar1 <= param_4[2] - _DAT_00e98e38)))))))))) {
    if (((_DAT_00e985b0 < param_1[2] - _DAT_00e98e38) &&
        (_DAT_00e985b0 < param_2[2] - _DAT_00e98e38)) &&
       ((_DAT_00e985b0 < param_3[2] - _DAT_00e98e38 && (_DAT_00e985b0 < param_4[2] - _DAT_00e98e38))
       )) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00443380(float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  fVar1 = -_DAT_00e985b0;
  if ((((fVar1 <= *param_1 - _DAT_00e98e30) || (fVar1 <= *param_2 - _DAT_00e98e30)) ||
      (fVar1 <= *param_3 - _DAT_00e98e30)) &&
     ((((((*param_1 - _DAT_00e98e30 <= _DAT_00e985b0 || (*param_2 - _DAT_00e98e30 <= _DAT_00e985b0))
         || (*param_3 - _DAT_00e98e30 <= _DAT_00e985b0)) &&
        (((fVar1 <= param_1[1] - _DAT_00e98e34 || (fVar1 <= param_2[1] - _DAT_00e98e34)) ||
         (fVar1 <= param_3[1] - _DAT_00e98e34)))) &&
       (((param_1[1] - _DAT_00e98e34 <= _DAT_00e985b0 ||
         (param_2[1] - _DAT_00e98e34 <= _DAT_00e985b0)) ||
        (param_3[1] - _DAT_00e98e34 <= _DAT_00e985b0)))) &&
      (((fVar1 <= param_1[2] - _DAT_00e98e38 || (fVar1 <= param_2[2] - _DAT_00e98e38)) ||
       (fVar1 <= param_3[2] - _DAT_00e98e38)))))) {
    if (((_DAT_00e985b0 < param_1[2] - _DAT_00e98e38) &&
        (_DAT_00e985b0 < param_2[2] - _DAT_00e98e38)) &&
       (_DAT_00e985b0 < param_3[2] - _DAT_00e98e38)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



float10 FUN_004439f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  int local_4;

  iVar5 = param_1;
  DAT_00e98284 = param_1;
  uVar1 = FUN_004317c0(param_1);
  iVar2 = FUN_004317b0(iVar5);
  iVar4 = 0;
  FUN_004317e0(iVar5,0,&param_1,&local_8);
  if (param_1 != 0) {
    if (local_8 == 0) {
      local_c = 0;
      switch(uVar1) {
      case 3:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e98e20)(param_1 + iVar5,0);
            iVar5 = iVar5 + 0x12;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        break;
      case 4:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e98e20)(param_1 + iVar5,2);
            iVar5 = iVar5 + 0x18;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)0.0;
        }
        break;
      case 5:
      case 7:
        piVar3 = (int *)FUN_004317d0(iVar5);
        local_4 = iVar2;
        if (0 < iVar2) {
          do {
            iVar5 = 0;
            iVar2 = 0;
            if (*piVar3 != 2 && -1 < *piVar3 + -2) {
              iVar4 = local_c * 6;
              do {
                (*DAT_00e98e20)(param_1 + iVar4,iVar5);
                iVar5 = 1 - iVar5;
                local_c = local_c + 1;
                iVar4 = iVar4 + 6;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *piVar3 + -2);
            }
            local_c = local_c + 2;
            piVar3 = piVar3 + 1;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
          return (float10)0.0;
        }
      }
    }
    else {
      switch(uVar1) {
      case 3:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e985ac)(param_1,0,local_8 + iVar5);
            iVar5 = iVar5 + 6;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)0.0;
        }
        break;
      case 4:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e985ac)(param_1,2,local_8 + iVar5);
            iVar5 = iVar5 + 8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)0.0;
        }
        break;
      case 5:
      case 7:
        piVar3 = (int *)FUN_004317d0(iVar5);
        local_c = iVar2;
        if (0 < iVar2) {
          do {
            iVar5 = 0;
            iVar2 = 0;
            if (*piVar3 != 2 && -1 < *piVar3 + -2) {
              do {
                (*DAT_00e985ac)(param_1,iVar5,local_8 + iVar4 * 2);
                iVar5 = 1 - iVar5;
                iVar4 = iVar4 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *piVar3 + -2);
            }
            iVar4 = iVar4 + 2;
            piVar3 = piVar3 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
          return (float10)0.0;
        }
      }
    }
  }
  return (float10)0.0;
}



void FUN_00443c50(byte param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;

  if ((param_1 & 1) == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    if (DAT_00e98e1c == 3) {
      *param_4 = *param_5;
      param_4[1] = param_5[1];
      param_4[2] = param_5[2];
      DAT_00e9827c = DAT_00e9826c;
      DAT_00e98e00 = DAT_00e98280;
    }
  }
  else {
    FUN_00445500(local_80);
    if ((param_1 & 2) == 0) {
      *param_2 = *param_3 - local_50;
      param_2[1] = param_3[1] - local_4c;
      param_2[2] = param_3[2] - local_48;
      if (DAT_00e98e1c == 3) {
        *param_4 = *param_5;
        param_4[1] = param_5[1];
        fVar1 = param_5[2];
        param_4[2] = fVar1;
        DAT_00e9827c = DAT_00e9826c -
                       (*param_4 * local_50 + local_48 * fVar1 + local_4c * param_4[1]);
        DAT_00e98e00 = DAT_00e98280 -
                       (*param_4 * local_50 + local_4c * param_4[1] + local_48 * param_4[2]);
        return;
      }
    }
    else {
      FUN_00430310(local_40,local_80);
      FUN_00430a00(param_2,param_3,local_40);
      if (DAT_00e98e1c == 3) {
        FUN_00430980(param_4,param_5,local_40);
        DAT_00e9827c = *param_4 * local_10 + local_8 * param_4[2] + local_c * param_4[1] +
                       DAT_00e9826c;
        DAT_00e98e00 = *param_4 * local_10 + local_8 * param_4[2] + local_c * param_4[1] +
                       DAT_00e98280;
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00443e70(byte param_1)

{
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;

  if ((param_1 & 1) != 0) {
    FUN_00445500(local_40);
    if ((param_1 & 2) == 0) {
      _DAT_00e98e60 = local_10 + _DAT_00e98e60;
      DAT_00e98e64 = local_c + DAT_00e98e64;
      DAT_00e98e68 = local_8 + DAT_00e98e68;
    }
    else {
      FUN_00430a00(&DAT_00e98e60,&DAT_00e98e60,local_40);
      if (DAT_00e98e1c != 2) {
        FUN_00430980(&DAT_00e98290,&DAT_00e98290,local_40);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00443f10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;

  if (param_1 != 0) {
    if (DAT_00e98e70 != 0) {
      DAT_00e98e70 = 0;
      FUN_00443c50(param_3,&DAT_00e98e30,param_2,&DAT_00e985a0,&DAT_00e98e10);
    }
    fVar2 = _DAT_00e98e30 + _DAT_00e985b0;
    fVar3 = _DAT_00e98e34 + _DAT_00e985b0;
    fVar4 = _DAT_00e98e38 + _DAT_00e985b0;
    fVar5 = _DAT_00e98e30 - _DAT_00e985b0;
    fVar6 = _DAT_00e98e34 - _DAT_00e985b0;
    fVar7 = _DAT_00e98e38 - _DAT_00e985b0;
    if (((float *)(param_1 + 0x1c) == (float *)0x0) ||
       ((((fVar5 <= *(float *)(param_1 + 0x28) && (*(float *)(param_1 + 0x1c) <= fVar2)) &&
         (fVar6 <= *(float *)(param_1 + 0x2c))) &&
        (((*(float *)(param_1 + 0x20) <= fVar3 && (fVar7 <= *(float *)(param_1 + 0x30))) &&
         (*(float *)(param_1 + 0x24) <= fVar4)))))) {
      iVar8 = FUN_00431780(param_1);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar9 * 4);
          if (((fVar5 <= *(float *)(iVar1 + 0x14)) && (*(float *)(iVar1 + 8) <= fVar2)) &&
             ((fVar6 <= *(float *)(iVar1 + 0x18) &&
              (((*(float *)(iVar1 + 0xc) <= fVar3 && (fVar7 <= *(float *)(iVar1 + 0x1c))) &&
               (*(float *)(iVar1 + 0x10) <= fVar4)))))) {
            FUN_004439f0(iVar1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      if (DAT_00e98250 != 0) {
        FUN_00443e70(param_3);
        DAT_00e98250 = 0;
      }
    }
  }
  return;
}



void FUN_004440e0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_40 [64];

  uVar2 = FUN_00431770(param_1);
  if (uVar2 != 0x3064) {
    if ((uVar2 & 0x4000) != 0) {
      if ((uVar2 & 0x8000) != 0) {
        if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
          param_3 = param_3 | 3;
        }
        else {
          param_3 = param_3 | 1;
        }
        if (uVar2 == 0xd064) {
          FUN_004316a0(param_1,local_40);
        }
        else {
          FUN_004316a0(param_1,local_40);
        }
        FUN_00445200(local_40);
        DAT_00e98e70 = 1;
      }
      iVar3 = FUN_00431780(param_1);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
          if (((iVar1 != 0) &&
              (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_0050c5dc) == DAT_0050c5dc)) &&
             (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_004c177c) != 0)) {
            FUN_004440e0(iVar1,param_2,param_3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      if ((uVar2 & 0x8000) != 0) {
        FUN_00445630();
        DAT_00e98e70 = 1;
      }
    }
    return;
  }
  FUN_00443f10(param_1,param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00444200(float *param_1,float param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;

  _DAT_00e98e6c = param_2 * param_2;
  _DAT_00e985b0 = param_2;
  _DAT_00e98e30 = *param_1;
  _DAT_00e98e34 = param_1[1];
  _DAT_00e98e38 = param_1[2];
  _DAT_00e985a0 = *param_3;
  _DAT_00e985a4 = param_3[1];
  _DAT_00e985a8 = param_3[2];
  DAT_00e98258 = _DAT_00e98e6c * 1.1;
  _DAT_00e98e10 = *param_3;
  _DAT_00e98e14 = param_3[1];
  _DAT_00e98e18 = param_3[2];
  DAT_00e98e1c = 3;
  fVar1 = *param_1 * *param_3 + param_3[2] * param_1[2] + param_3[1] * param_1[1];
  DAT_00e98254 = 0;
  DAT_00e98e70 = 0;
  DAT_00e98250 = 0;
  DAT_00e98e20 = &LAB_004437c0;
  DAT_00e9826c = fVar1 + param_4;
  DAT_00e98280 = fVar1 + param_5;
  DAT_00e985ac = &LAB_00443560;
  DAT_00e9827c = DAT_00e9826c;
  DAT_00e98e00 = DAT_00e98280;
  FUN_00445150();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_00444300(float *param_1,float param_2,float *param_3,float param_4,float param_5,float *param_6,
            float *param_7,float *param_8)

{
  float10 fVar1;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  if (_DAT_00e98e6c <= DAT_00e98258) {
    return 0;
  }
  *param_6 = _DAT_00e98290;
  param_6[1] = DAT_00e98294;
  param_6[2] = DAT_00e98298;
  local_78 = *param_1 - _DAT_00e98e60;
  local_74 = param_1[1] - DAT_00e98e64;
  local_70 = param_1[2] - DAT_00e98e68;
  FUN_0042f9b0(&local_78);
  FUN_0042f9f0(local_24,&local_78,param_3);
  FUN_0042f9f0(local_54,local_24,param_3);
  fVar1 = (float10)FUN_0042f8c0(local_54);
  if ((float10)0.01 <= fVar1) {
    FUN_0042fa50(local_54,(float)((float10)1.0 / fVar1),local_54);
    fVar1 = (float10)FUN_00480670(_DAT_00e98e6c - param_4 * param_4,local_54);
    FUN_0042fa50(local_18,(float)fVar1);
    FUN_0042fa80(&local_48,local_18,param_4,param_3);
    fVar1 = (float10)FUN_00480670(_DAT_00e98e6c - param_5 * param_5,local_54);
    FUN_0042fa50(local_c,(float)fVar1);
    FUN_0042fa80(&local_6c,local_c,param_5,param_3);
    FUN_0042f9f0(&local_30,&local_48,&local_78);
    FUN_0042f9f0(&local_3c,&local_6c,&local_78);
    if (0.0 <= local_34 * local_28 + local_38 * local_2c + local_3c * local_30) {
      if (0.0 < *param_6 * *param_3 + param_3[1] * param_6[1] + param_3[2] * param_6[2]) {
        local_44 = local_68;
        local_40 = local_64;
        local_48 = local_6c;
      }
      local_60 = *param_1 + local_48;
      local_5c = local_44 + param_1[1];
      local_58 = local_40 + param_1[2];
      *param_7 = local_6c;
      param_7[1] = local_68;
      param_7[2] = local_64;
      FUN_0042f9b0(param_7);
      FUN_0042fa80(param_1,param_1,
                   (*param_6 * _DAT_00e98e60 + DAT_00e98e68 * param_6[2] + DAT_00e98e64 * param_6[1]
                   ) - (*param_6 * local_60 + local_5c * param_6[1] + local_58 * param_6[2]),param_6
                  );
    }
    else {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,&local_78);
      FUN_0042fa50(&local_78,(float)((float10)param_2 - fVar1));
      *param_1 = *param_1 + local_78;
      param_1[1] = local_74 + param_1[1];
      param_1[2] = local_70 + param_1[2];
      *param_7 = -*param_6;
      param_7[1] = -param_6[1];
      param_7[2] = -param_6[2];
    }
  }
  else {
    if (0.0 <= param_3[2] * local_70 + param_3[1] * local_74 + *param_3 * local_78) {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,param_6);
      fVar1 = (float10)-param_5 - fVar1;
    }
    else {
      fVar1 = (float10)FUN_00480670(DAT_00e98258,param_6);
      fVar1 = -((float10)param_4 - fVar1);
    }
    FUN_0042fa50(&local_78,(float)fVar1);
    *param_1 = *param_1 + local_78;
    param_1[1] = local_74 + param_1[1];
    param_1[2] = local_70 + param_1[2];
    *param_7 = -*param_6;
    param_7[1] = -param_6[1];
    param_7[2] = -param_6[2];
  }
  *param_8 = _DAT_00e98e60;
  param_8[1] = DAT_00e98e64;
  param_8[2] = DAT_00e98e68;
  if (DAT_00e98254 != 0) {
    DAT_0050c5d0 = DAT_00e98254;
  }
  return 1;
}



undefined4
FUN_00444740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;

  if (param_1 == 0) {
    return 0;
  }
  FUN_00444200(param_2,param_3,param_4,param_5,param_6);
  FUN_004440e0(param_1,param_2,0);
  uVar1 = FUN_00444300(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar1;
}



void FUN_004447b0(byte param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [64];

  if ((param_1 & 1) == 0) {
    if (0 < param_2) {
      puVar2 = (undefined4 *)(param_3 + 4);
      puVar4 = (undefined4 *)(param_4 + 0xc);
      do {
        puVar2[-1] = puVar4[-3];
        *puVar2 = *(undefined4 *)((int)puVar2 + (param_4 - param_3));
        puVar2[1] = puVar4[-1];
        puVar2[2] = *puVar4;
        puVar2[3] = puVar4[1];
        puVar2[4] = puVar4[2];
        puVar2 = puVar2 + 7;
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 7;
      } while (param_2 != 0);
    }
  }
  else {
    FUN_00445500(local_80);
    if ((param_1 & 2) == 0) {
      if (0 < param_2) {
        pfVar1 = (float *)(param_3 + 4);
        pfVar3 = (float *)(param_4 + 0xc);
        do {
          param_2 = param_2 + -1;
          pfVar1[-1] = pfVar3[-3] - local_50;
          *pfVar1 = *(float *)((int)pfVar1 + (param_4 - param_3)) - local_4c;
          pfVar1[1] = pfVar3[-1] - local_48;
          pfVar1[2] = *pfVar3;
          pfVar1[3] = pfVar3[1];
          pfVar1[4] = pfVar3[2];
          pfVar1 = pfVar1 + 7;
          pfVar3 = pfVar3 + 7;
        } while (param_2 != 0);
        return;
      }
    }
    else {
      FUN_00430310(local_40,local_80);
      if (0 < param_2) {
        iVar5 = param_3 + 0xc;
        param_3 = param_4 - param_3;
        do {
          FUN_00430a00(iVar5 + -0xc,param_4,local_40);
          FUN_00430980(iVar5,param_3 + iVar5,local_40);
          param_4 = param_4 + 0x1c;
          iVar5 = iVar5 + 0x1c;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00444910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  float local_8;
  float local_4;

  iVar5 = 0;
  if (param_1 == 0) {
    DAT_00e98258 = 0xbf800000;
    return;
  }
  if (DAT_00e98e70 != 0) {
    DAT_00e98e70 = 0;
    FUN_004447b0(param_3,1,&DAT_00e98e40,param_2);
  }
  FUN_0042fa80(&local_c,&DAT_00e98e40,DAT_00e98e58,&DAT_00e98e4c);
  if (0.0 <= _DAT_00e98e4c) {
    _DAT_00e98270 = DAT_00e98e40;
    _DAT_00e98260 = local_c;
  }
  else {
    _DAT_00e98260 = DAT_00e98e40;
    _DAT_00e98270 = local_c;
  }
  if (0.0 <= _DAT_00e98e50) {
    _DAT_00e98274 = DAT_00e98e44;
    _DAT_00e98264 = local_8;
  }
  else {
    _DAT_00e98264 = DAT_00e98e44;
    _DAT_00e98274 = local_8;
  }
  if (0.0 <= _DAT_00e98e54) {
    _DAT_00e98278 = DAT_00e98e48;
    _DAT_00e98268 = local_4;
  }
  else {
    _DAT_00e98268 = DAT_00e98e48;
    _DAT_00e98278 = local_4;
  }
  if (((float *)(param_1 + 0x1c) == (float *)0x0) ||
     (((((*(float *)(param_1 + 0x1c) <= _DAT_00e98260 &&
         (_DAT_00e98270 <= *(float *)(param_1 + 0x28))) &&
        (*(float *)(param_1 + 0x20) <= _DAT_00e98264)) &&
       ((_DAT_00e98274 <= *(float *)(param_1 + 0x2c) &&
        (*(float *)(param_1 + 0x24) <= _DAT_00e98268)))) &&
      (_DAT_00e98278 <= *(float *)(param_1 + 0x30))))) {
    iVar2 = FUN_00431780(param_1);
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
        if (((*(float *)(iVar1 + 8) <= _DAT_00e98260) && (_DAT_00e98270 <= *(float *)(iVar1 + 0x14))
            ) && ((*(float *)(iVar1 + 0xc) <= _DAT_00e98264 &&
                  (((_DAT_00e98274 <= *(float *)(iVar1 + 0x18) &&
                    (*(float *)(iVar1 + 0x10) <= _DAT_00e98268)) &&
                   (_DAT_00e98278 <= *(float *)(iVar1 + 0x1c))))))) {
          if (DAT_0050c5c8 == 0) {
            uVar3 = FUN_00431770(iVar1,1);
            iVar4 = FUN_00431880(uVar3);
            if ((iVar4 == 1) || (DAT_0050c5cc = 1, iVar4 == 3)) {
              DAT_0050c5cc = 0;
            }
            if ((iVar4 == 2) || (DAT_004c1774 = 1, iVar4 == 3)) {
              DAT_004c1774 = 0;
            }
          }
          else {
            DAT_0050c5cc = 1;
            DAT_004c1774 = 1;
          }
          FUN_004439f0(iVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (DAT_00e98250 != 0) {
      FUN_00443e70(param_3);
      DAT_00e98250 = 0;
    }
  }
  return;
}



void FUN_00444bf0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_40 [64];

  uVar2 = FUN_00431770(param_1);
  if (uVar2 != 0x3064) {
    if ((uVar2 & 0x4000) != 0) {
      if ((uVar2 & 0x8000) != 0) {
        if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
          param_3 = param_3 | 3;
        }
        else {
          param_3 = param_3 | 1;
        }
        if (uVar2 == 0xd064) {
          FUN_004316a0(param_1,local_40);
        }
        else {
          FUN_004316a0(param_1,local_40);
        }
        FUN_00445200(local_40);
        DAT_00e98e70 = 1;
      }
      iVar3 = FUN_00431780(param_1);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
          if (((iVar1 != 0) &&
              (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_0050c5dc) == DAT_0050c5dc)) &&
             (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_004c177c) != 0)) {
            FUN_00444bf0(iVar1,param_2,param_3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      if ((uVar2 & 0x8000) != 0) {
        FUN_00445630();
        DAT_00e98e70 = 1;
      }
    }
    return;
  }
  FUN_00444910(param_1,param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_00444d10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 == 0) {
    DAT_00e98258 = -1.0;
  }
  else {
    DAT_00e98258 = (float)param_2[6] - -200.0;
    DAT_00e98254 = 0;
    DAT_00e98e58 = param_2[6];
    _DAT_00e98e4c = param_2[3];
    _DAT_00e98e50 = param_2[4];
    _DAT_00e98e54 = param_2[5];
    DAT_00e98e40 = *param_2;
    DAT_00e98e44 = param_2[1];
    DAT_00e98e48 = param_2[2];
    DAT_00e98e1c = 1;
    DAT_00e98e20 = &LAB_00442c30;
    DAT_00e985ac = &LAB_00442720;
    DAT_00e98e70 = 0;
    DAT_00e98250 = 0;
    FUN_00445150();
    FUN_00444bf0(param_1,param_2,0);
    if (DAT_00e98258 <= (float)param_2[6]) {
      *param_3 = _DAT_00e98e60;
      param_3[1] = DAT_00e98e64;
      param_3[2] = DAT_00e98e68;
      *param_4 = _DAT_00e98290;
      param_4[1] = DAT_00e98294;
      param_4[2] = DAT_00e98298;
    }
    else {
      DAT_00e98258 = -1.0;
    }
  }
  if (DAT_00e98254 != 0) {
    DAT_0050c5d0 = DAT_00e98254;
  }
  return (float10)DAT_00e98258;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00444e40(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  DAT_00e98258 = (float)param_2[6] - -200.0;
  DAT_00e98254 = 0;
  DAT_00e98e58 = param_2[6];
  _DAT_00e98e4c = param_2[3];
  _DAT_00e98e50 = param_2[4];
  _DAT_00e98e54 = param_2[5];
  DAT_00e98e40 = *param_2;
  DAT_00e98e44 = param_2[1];
  DAT_00e98e48 = param_2[2];
  DAT_00e98e1c = 1;
  DAT_00e98e20 = &LAB_00442c30;
  DAT_00e985ac = &LAB_00442720;
  DAT_00e98e70 = 0;
  DAT_00e98250 = 0;
  FUN_00445150();
  FUN_00444bf0(param_1,param_2,0);
  if ((float)param_2[6] < DAT_00e98258) {
    return 0;
  }
  return DAT_00e98254;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_00444f10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  if (param_1 == 0) {
    DAT_00e98258 = -1.0;
  }
  else {
    DAT_00e98258 = (float)param_2[6] - -200.0;
    DAT_00e98e58 = param_2[6];
    _DAT_00e98e4c = (float)param_2[3];
    _DAT_00e98e50 = (float)param_2[4];
    _DAT_00e98e54 = (float)param_2[5];
    DAT_00e98e40 = *param_2;
    DAT_00e98e44 = param_2[1];
    DAT_00e98e48 = param_2[2];
    DAT_00e98e1c = 1;
    DAT_00e98e20 = &LAB_00442c30;
    DAT_00e985ac = &LAB_00442720;
    FUN_0042fa80(&local_c,&DAT_00e98e40,DAT_00e98e58,&DAT_00e98e4c);
    if (0.0 <= _DAT_00e98e4c) {
      _DAT_00e98270 = DAT_00e98e40;
      _DAT_00e98260 = local_c;
    }
    else {
      _DAT_00e98260 = DAT_00e98e40;
      _DAT_00e98270 = local_c;
    }
    if (0.0 <= _DAT_00e98e50) {
      _DAT_00e98274 = DAT_00e98e44;
      _DAT_00e98264 = local_8;
    }
    else {
      _DAT_00e98264 = DAT_00e98e44;
      _DAT_00e98274 = local_8;
    }
    if (0.0 <= _DAT_00e98e54) {
      _DAT_00e98278 = DAT_00e98e48;
      _DAT_00e98268 = local_4;
    }
    else {
      _DAT_00e98268 = DAT_00e98e48;
      _DAT_00e98278 = local_4;
    }
    if (DAT_0050c5c8 == 0) {
      uVar1 = FUN_00431770(param_1,1);
      iVar2 = FUN_00431880(uVar1);
      if ((iVar2 == 1) || (DAT_0050c5cc = 1, iVar2 == 3)) {
        DAT_0050c5cc = 0;
      }
      if ((iVar2 == 2) || (DAT_004c1774 = 1, iVar2 == 3)) {
        DAT_004c1774 = 0;
      }
    }
    else {
      DAT_0050c5cc = 1;
      DAT_004c1774 = 1;
    }
    FUN_004439f0(param_1);
    if (DAT_00e98258 <= (float)param_2[6]) {
      *param_3 = _DAT_00e98e60;
      param_3[1] = DAT_00e98e64;
      param_3[2] = DAT_00e98e68;
      *param_4 = _DAT_00e98290;
      param_4[1] = DAT_00e98294;
      param_4[2] = DAT_00e98298;
    }
    else {
      DAT_00e98258 = -1.0;
    }
  }
  if (DAT_00e98254 != 0) {
    DAT_0050c5d0 = DAT_00e98254;
  }
  return (float10)DAT_00e98258;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00445150(void)

{
  DAT_0050c5e8 = 0;
  _DAT_00e985c0 = 0x3f800000;
  _DAT_00e985c4 = 0;
  _DAT_00e985c8 = 0;
  _DAT_00e985cc = 0;
  _DAT_00e985d0 = 0;
  _DAT_00e985d4 = 0x3f800000;
  _DAT_00e985d8 = 0;
  _DAT_00e985dc = 0;
  _DAT_00e985e0 = 0;
  _DAT_00e985e4 = 0;
  _DAT_00e985e8 = 0x3f800000;
  _DAT_00e985ec = 0;
  _DAT_00e985f0 = 0;
  _DAT_00e985f4 = 0;
  _DAT_00e985f8 = 0;
  _DAT_00e985fc = 0x3f800000;
  return;
}



void FUN_00445200(float *param_1)

{
  int iVar1;
  int iVar2;

  if (DAT_0050c5e8 < 0x20) {
    iVar1 = DAT_0050c5e8 + 1;
    iVar2 = iVar1 * 0x40;
    DAT_0050c5e8 = iVar1;
    *(float *)(&DAT_00e985c0 + iVar2) =
         *(float *)(&DAT_00e98590 + iVar2) * param_1[1] +
         param_1[3] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e985a0 + iVar2) * param_1[2] +
         *param_1 * *(float *)(&DAT_00e98580 + iVar2);
    *(float *)(&DAT_00e985c4 + iVar2) =
         *(float *)(&DAT_00e98594 + iVar2) * param_1[1] +
         *(float *)(&DAT_00e985a4 + iVar2) * param_1[2] +
         *(float *)(&DAT_00e985b4 + iVar2) * param_1[3] +
         *param_1 * *(float *)(&DAT_00e98584 + iVar2);
    *(float *)(&DAT_00e985c8 + iVar2) =
         *(float *)(&DAT_00e985b8 + iVar2) * param_1[3] +
         *(float *)(&DAT_00e985a8 + iVar2) * param_1[2] +
         *(float *)(&DAT_00e98598 + iVar2) * param_1[1] +
         *param_1 * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985cc + iVar2) =
         *(float *)(&DAT_00e985bc + iVar2) * param_1[3] +
         *(float *)(&DAT_00e9859c + iVar2) * param_1[1] +
         (float)(&DAT_00e985ac)[iVar1 * 0x10] * param_1[2] +
         *param_1 * *(float *)(&DAT_00e9858c + iVar2);
    *(float *)(&DAT_00e985d0 + iVar2) =
         param_1[5] * *(float *)(&DAT_00e98590 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[4];
    *(float *)(&DAT_00e985d4 + iVar2) =
         param_1[4] * *(float *)(&DAT_00e98584 + iVar2) +
         param_1[5] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b4 + iVar2) +
         param_1[6] * *(float *)(&DAT_00e985a4 + iVar2);
    *(float *)(&DAT_00e985d8 + iVar2) =
         param_1[6] * *(float *)(&DAT_00e985a8 + iVar2) +
         param_1[5] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[4] * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985dc + iVar2) =
         param_1[4] * *(float *)(&DAT_00e9858c + iVar2) +
         param_1[5] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[7] * *(float *)(&DAT_00e985bc + iVar2) +
         param_1[6] * (float)(&DAT_00e985ac)[iVar1 * 0x10];
    *(float *)(&DAT_00e985e0 + iVar2) =
         param_1[0xb] * *(float *)(&DAT_00e985b0 + iVar2) +
         param_1[10] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98590 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[8];
    *(float *)(&DAT_00e985e4 + iVar2) =
         param_1[10] * *(float *)(&DAT_00e985a4 + iVar2) +
         param_1[0xb] * *(float *)(&DAT_00e985b4 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[8] * *(float *)(&DAT_00e98584 + iVar2);
    *(float *)(&DAT_00e985e8 + iVar2) =
         param_1[0xb] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[9] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[10] * *(float *)(&DAT_00e985a8 + iVar2) +
         param_1[8] * *(float *)(&DAT_00e98588 + iVar2);
    *(float *)(&DAT_00e985ec + iVar2) =
         param_1[10] * (float)(&DAT_00e985ac)[iVar1 * 0x10] +
         param_1[0xb] * *(float *)(&DAT_00e985bc + iVar2) +
         param_1[9] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[8] * *(float *)(&DAT_00e9858c + iVar2);
    *(float *)(&DAT_00e985f0 + iVar2) =
         param_1[0xe] * *(float *)(&DAT_00e985a0 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98590 + iVar2) +
         param_1[0xf] * *(float *)(&DAT_00e985b0 + iVar2) +
         *(float *)(&DAT_00e98580 + iVar2) * param_1[0xc];
    *(float *)(&DAT_00e985f4 + iVar2) =
         param_1[0xc] * *(float *)(&DAT_00e98584 + iVar2) +
         param_1[0xe] * *(float *)(&DAT_00e985a4 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98594 + iVar2) +
         param_1[0xf] * *(float *)(&DAT_00e985b4 + iVar2);
    *(float *)(&DAT_00e985f8 + iVar2) =
         param_1[0xf] * *(float *)(&DAT_00e985b8 + iVar2) +
         param_1[0xc] * *(float *)(&DAT_00e98588 + iVar2) +
         param_1[0xd] * *(float *)(&DAT_00e98598 + iVar2) +
         param_1[0xe] * *(float *)(&DAT_00e985a8 + iVar2);
    *(float *)(&DAT_00e985fc + iVar2) =
         param_1[0xd] * *(float *)(&DAT_00e9859c + iVar2) +
         param_1[0xc] * *(float *)(&DAT_00e9858c + iVar2) +
         param_1[0xe] * (float)(&DAT_00e985ac)[iVar1 * 0x10] +
         param_1[0xf] * *(float *)(&DAT_00e985bc + iVar2);
  }
  return;
}



void FUN_00445500(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(&DAT_00e985c0 + DAT_0050c5e8 * 0x40);
  param_1[1] = *(undefined4 *)(&DAT_00e985c4 + DAT_0050c5e8 * 0x40);
  param_1[2] = *(undefined4 *)(&DAT_00e985c8 + DAT_0050c5e8 * 0x40);
  param_1[3] = *(undefined4 *)(&DAT_00e985cc + DAT_0050c5e8 * 0x40);
  param_1[4] = *(undefined4 *)(&DAT_00e985d0 + DAT_0050c5e8 * 0x40);
  param_1[5] = *(undefined4 *)(&DAT_00e985d4 + DAT_0050c5e8 * 0x40);
  param_1[6] = *(undefined4 *)(&DAT_00e985d8 + DAT_0050c5e8 * 0x40);
  param_1[7] = *(undefined4 *)(&DAT_00e985dc + DAT_0050c5e8 * 0x40);
  param_1[8] = *(undefined4 *)(&DAT_00e985e0 + DAT_0050c5e8 * 0x40);
  param_1[9] = *(undefined4 *)(&DAT_00e985e4 + DAT_0050c5e8 * 0x40);
  param_1[10] = *(undefined4 *)(&DAT_00e985e8 + DAT_0050c5e8 * 0x40);
  param_1[0xb] = *(undefined4 *)(&DAT_00e985ec + DAT_0050c5e8 * 0x40);
  param_1[0xc] = *(undefined4 *)(&DAT_00e985f0 + DAT_0050c5e8 * 0x40);
  param_1[0xd] = *(undefined4 *)(&DAT_00e985f4 + DAT_0050c5e8 * 0x40);
  param_1[0xe] = *(undefined4 *)(&DAT_00e985f8 + DAT_0050c5e8 * 0x40);
  param_1[0xf] = *(undefined4 *)(&DAT_00e985fc + DAT_0050c5e8 * 0x40);
  return;
}



void FUN_00445630(void)

{
  if (0 < DAT_0050c5e8) {
    DAT_0050c5e8 = DAT_0050c5e8 + -1;
  }
  return;
}



void FUN_00445640(int param_1,undefined4 param_2)

{
  if (param_1 == 3) {
    DAT_004c177c = param_2;
  }
  if (param_1 == 5) {
    DAT_0050c5dc = param_2;
  }
  return;
}



undefined4 FUN_00445660(int param_1)

{
  if (param_1 == 3) {
    return DAT_004c177c;
  }
  if (param_1 == 5) {
    return DAT_0050c5dc;
  }
  return 0xffffffff;
}



void FUN_00445680(void)

{
  if (DAT_0050c5f4 == 0) {
    FUN_004457d0();
    return;
  }
  return;
}



undefined4 FUN_00445690(void)

{
  return DAT_0050c5f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_004456a0(void)

{
  return (float10)_DAT_00e9824c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004456b0(void)

{
  undefined4 local_10;
  undefined4 local_c;

  if (DAT_0050c5f4 == 0) {
    if (DAT_004d5e00 != 0) {
      _DAT_004c4a58 = 0x3f800000;
      return;
    }
    FUN_00449e50();
    FUN_00426c80(0x4e,6,0x3e800000,0x3f800000,0);
    DAT_0050c5f0 = 2;
    local_10 = 0x50617773;
    local_c = 1;
    FUN_00450c50(0x416c6c21,&local_10);
    FUN_0042ad60();
    FUN_0040a120(1);
  }
  return;
}



void FUN_00445730(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (DAT_0050c5f4 == 0) {
    DAT_0050c5f0 = 0;
    local_10 = 0x50617773;
    local_c = 0xffffffff;
    local_8 = FUN_0042adf0();
    FUN_00450c50(0x416c6c21,&local_10);
    FUN_0040a0b0(0x11);
  }
  return;
}



void FUN_00445780(void)

{
  if (DAT_0050c5f4 == 0) {
    FUN_00426c80(0x4d,6,0x3e800000,0x3f800000,0);
    DAT_0050c5f0 = 3;
  }
  return;
}



void FUN_004457b0(void)

{
  DAT_0050c5f4 = 0;
  DAT_0050c5f8 = 1;
  return;
}



void FUN_004457d0(void)

{
  int iVar1;

  if (DAT_0050c5f0 == 0) {
    iVar1 = FUN_00450b30(0x4a646765,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00450b30(0x4a646765,0);
      if ((*(ushort *)(iVar1 + 6) & 0x1000) == 0) {
        iVar1 = FUN_00462d40();
        if (iVar1 != 0) {
          FUN_004456b0();
          return;
        }
      }
      else if (((((byte)DAT_0050c048 & 1) != 0) &&
               (((DAT_00e98eb0 & 0x200) != 0 || ((DAT_00e98eb4 & 0x200) != 0)))) &&
              ((DAT_0050c5f0 == 1 || ((DAT_00e98e90 & 0x400) != 0)))) {
        FUN_004456b0();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00445860(void)

{
  int iVar1;
  undefined local_100 [256];

  if (((byte)DAT_0050c048 & 1) != 0) {
    FUN_0049eb80(local_100,s_Version___s_004c178c,s_GNOME_000_004c17c8);
    FUN_00450560(0x1e,0xd2,local_100);
  }
  if (DAT_0050c5f0 == 3) {
    if (0.0 < _DAT_00e9824c) {
      _DAT_00e9824c = _DAT_00e9824c - (float)_DAT_00e22a40 * 4.0;
      if (_DAT_00e9824c < 0.0) {
        _DAT_00e9824c = 0.0;
      }
    }
    else {
      FUN_00445730();
    }
  }
  else if (DAT_0050c5f0 == 2) {
    _DAT_00e9824c = (float)_DAT_00e22a40 * 4.0 + _DAT_00e9824c;
    if (1.0 < _DAT_00e9824c) {
      _DAT_00e9824c = 1.0;
      DAT_0050c5f0 = 1;
    }
  }
  iVar1 = FUN_00450b30(0x4a646765,0);
  if ((*(ushort *)(iVar1 + 6) & 0x1000) == 0) {
    FUN_00462cf0();
  }
  FUN_0042ae00();
  return;
}



void FUN_00445960(void)

{
  FUN_00431ba0();
  DAT_00e996dc = DAT_00e996dc | 0x40;
  return;
}



void FUN_00445980(short param_1,short param_2)

{
  int iVar1;

  if ((param_2 == 1) || (param_2 == 0)) {
    FUN_00426920();
    FUN_00426910();
    FUN_004270c0();
    FUN_00426910();
    FUN_00440df0();
    FUN_00426910();
    FUN_00480540();
    FUN_004270c0();
    FUN_004276c0();
    FUN_00427880();
    FUN_00445680();
    iVar1 = FUN_00445690();
    if (iVar1 == 0) {
      FUN_00426660();
      FUN_004508b0();
      FUN_004270c0();
      FUN_00450930();
      FUN_004509b0();
      FUN_004270c0();
      FUN_00450a30();
    }
    else {
      FUN_00445860();
    }
    FUN_00429540();
    FUN_004270c0();
  }
  if ((param_2 == 2) || (param_2 == 0)) {
    thunk_FUN_0042be60();
    FUN_00489bc0();
    FUN_00483cb0();
    if (param_1 == 0) {
      FUN_00426910();
      FUN_00482e20();
    }
    FUN_00426910();
    FUN_00426910();
    FUN_004270c0();
    FUN_004270d0();
  }
  return;
}



void FUN_00445a50(void)

{
  FUN_00426910(1);
  FUN_00426910();
  FUN_00426910();
  FUN_00426910();
  FUN_00426910(1);
  FUN_004834b0();
  FUN_00426910();
  thunk_FUN_00449d60();
  FUN_00426910(1);
  FUN_004491f0(0,1);
  return;
}



void FUN_00445aa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;

  DAT_0050c614 = param_1;
  uVar1 = *(undefined4 *)(&DAT_00e981fc + param_1 * 4);
  (&DAT_00e98200)[param_1] = uVar1;
  FUN_004475d0(uVar1);
  FUN_00426910(1);
  iVar2 = DAT_0050c614;
  if (DAT_0050c614 < 9) {
    puVar3 = &DAT_00e98224;
    iVar4 = 9 - DAT_0050c614;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 9;
  DAT_0050c610 = 0;
  if (iVar2 < 10) {
    do {
      FUN_00408eb0(iVar4);
      iVar4 = iVar4 + -1;
    } while (DAT_0050c614 <= iVar4);
  }
  return;
}



void FUN_00445b20(undefined4 param_1)

{
  (&DAT_00e98200)[DAT_0050c614] = param_1;
  FUN_00426910(1);
  return;
}



undefined4 FUN_00445b40(void)

{
  return (&DAT_00e98200)[DAT_0050c614];
}



bool FUN_00445b50(uint param_1)

{
  uint uVar1;

  uVar1 = FUN_00445b40();
  return param_1 < uVar1;
}



int FUN_00445b60(uint param_1)

{
  int iVar1;
  uint *puVar2;

  iVar1 = DAT_0050c614 + -1;
  if (0 < iVar1) {
    puVar2 = &DAT_00e98200 + iVar1;
    do {
      if (*puVar2 <= param_1) break;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (0 < iVar1);
  }
  return iVar1 + 1;
}



void FUN_00445b90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined local_40 [64];

  iVar2 = 1;
  if (DAT_00e98204 != 0) {
    puVar3 = &DAT_00e98204;
    do {
      if (DAT_0050c608 != 0) {
        FUN_0049eb80(local_40,s__DP___d_004c17ec,iVar2);
      }
      piVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != 0);
  }
  if (DAT_00e981e4 <= *(uint *)(&DAT_00e981fc + iVar2 * 4)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



int FUN_00445bf0(void)

{
  int iVar1;

  iVar1 = FUN_00445b40();
  return DAT_00e981e4 - iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00445c00(void)

{
  _DAT_00e996c0 = 0;
  _DAT_00e996c4 = 0;
  _DAT_00e996c8 = 0;
  _DAT_00e996cc = 0;
  _DAT_00e996d0 = 0;
  _DAT_00e996d4 = 0;
  _DAT_00e996d8 = 0;
  _DAT_00e996e0 = 2;
  FUN_00428740(0xffffff99,0,0,0,0xffffffff);
  FUN_0044e0e0(0x3e4,1000,0xff,0xff,0xff,0xff);
  return;
}



int FUN_00445c90(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = 0x40000000;
  iVar3 = 0x1f;
  do {
    if (iVar3 == 0) break;
    uVar2 = uVar1 & param_1;
    uVar1 = (int)uVar1 >> 1;
    iVar3 = iVar3 + -1;
  } while (uVar2 == 0);
  iVar3 = uVar1 * 2;
  if (iVar3 < (int)param_1) {
    iVar3 = uVar1 << 2;
  }
  if (iVar3 < 0x10) {
    iVar3 = 0x10;
  }
  return iVar3;
}



void FUN_00445cd0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_e4;
  undefined4 local_e0 [56];

  local_e4 = local_e0;
  iVar1 = FUN_0048e680(s___data_default_mat_004b48cc);
  FUN_00408fb0(param_5,iVar1);
  FUN_0049eb80(iVar1,s_Rovermatic_004b48c0);
  *(float *)(iVar1 + 10) = (float)param_1 / (float)param_3;
  *(float *)(iVar1 + 0xe) = (float)param_2 / (float)param_4;
  *(undefined4 *)(iVar1 + 0x4c) = 5;
  *(undefined4 *)(iVar1 + 0x50) = 5;
  *(undefined4 *)(iVar1 + 0x54) = 5;
  *(undefined4 *)(iVar1 + 100) = 3;
  *(undefined4 *)(iVar1 + 0x68) = 3;
  *(undefined4 *)(iVar1 + 0x6c) = 3;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 2;
  *(undefined4 *)(iVar1 + 0x48) = 0x10;
  *(undefined4 *)(iVar1 + 0x70) = 1;
  *(undefined4 *)(iVar1 + 0x58) = 0xb;
  *(undefined4 *)(iVar1 + 0x5c) = 6;
  *(undefined4 *)(iVar1 + 0x60) = 1;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 7;
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  *(int *)(iVar1 + 0x80) = param_3;
  *(int *)(iVar1 + 0x84) = param_4;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *local_e4 = 0;
  local_e4[1] = 0;
  local_e4[2] = 0;
  local_e4[3] = param_3;
  local_e4[4] = param_4;
  local_e4[5] = param_4 * param_3 * 2;
  local_e4[6] = param_3 * 2;
  local_e4[7] = param_3;
  puVar3 = (undefined4 *)(iVar1 + 0x44);
  puVar4 = local_e4 + 8;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_e4[0x16] = param_7;
  local_e4[0x17] = 0;
  FUN_0048aa40(*(undefined4 *)(iVar1 + 0x90));
  FUN_0048a5e0(*(undefined4 *)(iVar1 + 0x90),&local_e4,1,*(undefined4 *)(iVar1 + 0x7c));
  *param_6 = iVar1;
  return;
}



void FUN_00445e50(int param_1,int param_2,int param_3,byte *param_4,int param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;

  pbVar9 = param_4;
  puVar7 = (undefined4 *)*param_6;
  if (0 < param_2) {
    param_4 = (byte *)param_2;
    do {
      iVar4 = 0;
      puVar6 = puVar7;
      iVar10 = param_1;
      if (0 < param_1) {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          puVar7 = (undefined4 *)((int)puVar6 + 2);
          uVar2 = *(undefined2 *)(param_5 + (uint)bVar1 * 2);
          uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
          iVar10 = iVar10 + -1;
          *(ushort *)puVar6 = uVar3 >> 1 | uVar3 << 0xf;
          iVar4 = param_1;
          puVar6 = puVar7;
        } while (iVar10 != 0);
      }
      if (iVar4 < param_3) {
        uVar8 = param_3 - iVar4;
        puVar6 = puVar7;
        for (uVar5 = uVar8 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        puVar7 = (undefined4 *)((int)puVar7 + uVar8 * 2);
        for (uVar5 = (uint)((uVar8 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined2 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
        }
      }
      param_4 = (byte *)((int)param_4 + -1);
    } while (param_4 != (byte *)0x0);
  }
  *param_6 = puVar7;
  return;
}



void FUN_00445ee0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                 uint **param_7,int *param_8,char param_9,byte param_10)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_100;
  int local_fc;
  undefined4 *local_f8;
  char local_f2;
  char local_f1;
  int local_f0;
  undefined4 *local_ec;
  int local_e8;
  uint *local_e4;
  undefined4 local_e0 [56];

  iVar12 = *param_8;
  local_f1 = '\0';
  local_f2 = '\0';
  puVar14 = *param_7;
  *param_7 = (uint *)0x0;
  *param_8 = 0;
  if (puVar14 == (uint *)0x0) {
    return;
  }
  puVar5 = (uint *)FUN_0048e680(s___data_default_mat_004b48cc);
  local_e4 = puVar5;
  FUN_00408fb0(puVar14,puVar5);
  local_f8 = local_e0;
  *param_7 = puVar5;
  local_f0 = param_3;
  local_e8 = param_4;
  if ((param_10 & 0x10) != 0) {
    local_f0 = param_3 * 2;
    local_f1 = '\x01';
    if ((int)param_5 < local_f0) {
      param_5 = FUN_00445c90(local_f0);
    }
  }
  if ((param_10 & 1) != 0) {
    local_e8 = param_4 * 2;
    local_f2 = '\x01';
    if ((int)param_6 < local_e8) {
      param_6 = FUN_00445c90(local_e8);
    }
  }
  iVar13 = param_6 * param_5 * 2;
  local_ec = (undefined4 *)FUN_00408e60(puVar14,iVar13);
  FUN_0049eb80(puVar5,s_Rovermatic_004b48c0);
  puVar4 = local_e4;
  *(float *)((int)puVar5 + 10) = (float)local_f0 / (float)param_5;
  *(float *)((int)puVar5 + 0xe) = (float)local_e8 / (float)param_6;
  puVar5[0x10] = 0;
  if (((((param_1 == 0) && (param_2 == 3)) || ((param_1 == 5 && ((param_2 == 1 || (param_2 == 3)))))
       ) || (param_1 == 4)) || ((param_1 == 3 && (param_2 == 0)))) {
    puVar5[0x12] = 0x10;
    puVar5[0x13] = 4;
    puVar5[0x14] = 4;
    puVar5[0x11] = 2;
    puVar5[0x15] = 4;
    puVar5[0x1c] = 4;
    puVar5[0x16] = 0xc;
    puVar5[0x17] = 8;
    puVar5[0x18] = 4;
    puVar5[0x1d] = 0;
    puVar5[0x19] = 4;
    puVar5[0x1a] = 4;
    puVar5[0x1b] = 4;
    puVar5[0x1e] = 4;
    puVar5[0x1f] = 2;
  }
  else {
    puVar5[0x13] = 5;
    puVar5[0x14] = 5;
    puVar5[0x15] = 5;
    puVar5[0x11] = 2;
    puVar5[0x12] = 0x10;
    puVar5[0x1c] = 1;
    puVar5[0x16] = 0xb;
    puVar5[0x17] = 6;
    puVar5[0x18] = 1;
    puVar5[0x1d] = 0;
    puVar5[0x19] = 3;
    puVar5[0x1a] = 3;
    puVar5[0x1b] = 3;
    puVar5[0x1e] = 7;
    puVar5[0x1f] = 1;
  }
  local_e4[0x20] = param_5;
  local_e4[0x21] = param_6;
  local_e4[0x22] = 1;
  local_e4[0x23] = 0;
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = param_5;
  local_f8[4] = param_6;
  local_f8[5] = iVar13;
  local_f8[6] = param_5 * 2;
  local_f8[7] = param_5;
  puVar5 = puVar5 + 0x11;
  puVar15 = local_f8 + 8;
  for (iVar13 = 0xe; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar15 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar15 = puVar15 + 1;
  }
  local_f8[0x16] = local_ec;
  local_f8[0x17] = 0;
  puVar9 = local_ec;
  if ((param_1 == 4) && (param_2 == 0)) {
    local_fc = 0;
    iVar12 = param_4;
    if (0 < param_4) {
      do {
        iVar13 = 0;
        puVar10 = puVar9;
        if (0 < param_3) {
          do {
            iVar13 = iVar13 + 2;
            uVar6 = (uint)(*(byte *)puVar14 >> 4);
            puVar9 = puVar10 + 1;
            *(ushort *)puVar10 =
                 (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) |
                 (ushort)(*(byte *)puVar14 >> 4);
            uVar6 = *(byte *)puVar14 & 0xf;
            puVar14 = (uint *)((int)puVar14 + 1);
            *(ushort *)((int)puVar10 + 2) =
                 (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) | (ushort)uVar6;
            puVar10 = puVar9;
          } while (iVar13 < param_3);
        }
        if (iVar13 < (int)param_5) {
          uVar11 = param_5 - iVar13;
          puVar10 = puVar9;
          for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
          for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
          }
        }
        iVar12 = iVar12 + -1;
        local_fc = param_4;
      } while (iVar12 != 0);
    }
  }
  else if ((param_1 == 3) && (param_2 == 0)) {
    local_fc = 0;
    iVar12 = param_4;
    if (0 < param_4) {
      do {
        iVar13 = 0;
        puVar10 = puVar9;
        if (0 < param_3) {
          do {
            puVar9 = puVar10 + 1;
            *(ushort *)puVar10 = (ushort)((*(byte *)puVar14 & 0xfffffff0) << 8) | 0xfff;
            bVar1 = *(byte *)puVar14;
            puVar14 = (uint *)((int)puVar14 + 1);
            *(ushort *)((int)puVar10 + 2) = (ushort)((bVar1 & 0xf) << 0xc) | 0xfff;
            iVar13 = iVar13 + 2;
            puVar10 = puVar9;
          } while (iVar13 < param_3);
        }
        if (iVar13 < (int)param_5) {
          uVar11 = param_5 - iVar13;
          puVar10 = puVar9;
          for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
          for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
          }
        }
        iVar12 = iVar12 + -1;
        local_fc = param_4;
      } while (iVar12 != 0);
    }
  }
  else if ((param_1 == 4) && (param_2 == 1)) {
    if (param_9 == '\x01') {
      local_fc = 0;
      if (0 < param_4) {
        local_100 = (uint *)param_4;
        do {
          puVar10 = puVar9;
          iVar12 = 0;
          iVar13 = param_3;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              bVar1 = *(byte *)puVar14;
              uVar6 = (uint)(bVar1 >> 4);
              puVar14 = (uint *)((int)puVar14 + 1);
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 =
                   (ushort)(((uVar6 << 4 | uVar6) << 4 | uVar6) << 4) | (ushort)(bVar1 >> 4);
              puVar10 = puVar9;
              iVar12 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar12 < (int)param_5) {
            uVar11 = param_5 - iVar12;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          local_100 = (uint *)((int)local_100 + -1);
          local_fc = param_4;
        } while (local_100 != (uint *)0x0);
      }
    }
    else {
      local_fc = 0;
      iVar12 = param_4;
      if (0 < param_4) {
        do {
          iVar13 = param_3;
          puVar10 = puVar9;
          iVar8 = 0;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              bVar1 = *(byte *)puVar14 >> 4;
              puVar14 = (uint *)((int)puVar14 + 1);
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 =
                   (ushort)(((bVar1 | 0xfff0) << 4 | (uint)bVar1) << 4) | (ushort)bVar1;
              puVar10 = puVar9;
              iVar8 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar8 < (int)param_5) {
            uVar11 = param_5 - iVar8;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          iVar12 = iVar12 + -1;
          local_fc = param_4;
        } while (iVar12 != 0);
      }
    }
  }
  else {
    if (param_1 == 2) {
      if (param_2 == 0) {
        local_fc = 0;
        if (0 < param_4) {
          local_100 = (uint *)param_4;
          do {
            iVar13 = 0;
            puVar10 = puVar9;
            if (0 < param_3) {
              do {
                puVar9 = puVar10 + 1;
                uVar2 = *(undefined2 *)(iVar12 + (uint)(*(byte *)puVar14 >> 4) * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                uVar2 = *(undefined2 *)(iVar12 + (bVar1 & 0xf) * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                *(ushort *)((int)puVar10 + 2) = uVar3 >> 1 | uVar3 << 0xf;
                iVar13 = iVar13 + 2;
                puVar10 = puVar9;
              } while (iVar13 < param_3);
            }
            if (iVar13 < (int)param_5) {
              uVar11 = param_5 - iVar13;
              puVar10 = puVar9;
              for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
              for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined2 *)puVar10 = 0;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
              }
            }
            local_100 = (uint *)((int)local_100 + -1);
            local_fc = param_4;
          } while (local_100 != (uint *)0x0);
        }
        goto LAB_00446257;
      }
      if (param_2 == 1) {
        local_fc = 0;
        if (0 < param_4) {
          local_100 = (uint *)param_4;
          do {
            puVar10 = puVar9;
            iVar13 = param_3;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                uVar2 = *(undefined2 *)(iVar12 + (uint)bVar1 * 2);
                uVar3 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
                iVar13 = iVar13 + -1;
                *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              uVar11 = param_5 - iVar8;
              puVar10 = puVar9;
              for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
              for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined2 *)puVar10 = 0;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
              }
            }
            local_100 = (uint *)((int)local_100 + -1);
            local_fc = param_4;
          } while (local_100 != (uint *)0x0);
        }
        goto LAB_00446257;
      }
    }
    local_100 = puVar14;
    if (param_1 == 5) {
      if (param_2 == 1) {
        local_fc = 0;
        iVar12 = param_4;
        if (0 < param_4) {
          do {
            iVar13 = param_3;
            puVar10 = puVar9;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                bVar1 = *(byte *)puVar14;
                puVar14 = (uint *)((int)puVar14 + 1);
                *(ushort *)puVar10 = (ushort)(bVar1 >> 4) << 0xc | 0xfff;
                iVar13 = iVar13 + -1;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              iVar8 = param_5 - iVar8;
              do {
                *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                puVar9 = (undefined4 *)((int)puVar9 + 2);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            iVar12 = iVar12 + -1;
            local_fc = param_4;
          } while (iVar12 != 0);
        }
        goto LAB_00446257;
      }
      if (param_2 == 2) {
        local_fc = 0;
        iVar12 = param_4;
        if (0 < param_4) {
          do {
            puVar10 = puVar9;
            iVar13 = param_3;
            iVar8 = 0;
            if (0 < param_3) {
              do {
                puVar9 = (undefined4 *)((int)puVar10 + 2);
                uVar3 = *(ushort *)local_100;
                local_100 = (uint *)((int)local_100 + 2);
                iVar13 = iVar13 + -1;
                *(ushort *)puVar10 = uVar3 | 0x8000;
                puVar10 = puVar9;
                iVar8 = param_3;
              } while (iVar13 != 0);
            }
            if (iVar8 < (int)param_5) {
              iVar8 = param_5 - iVar8;
              do {
                *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                puVar9 = (undefined4 *)((int)puVar9 + 2);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            iVar12 = iVar12 + -1;
            local_fc = param_4;
          } while (iVar12 != 0);
        }
        goto LAB_00446257;
      }
    }
    if ((param_1 == 0) && (param_2 == 2)) {
      local_fc = param_1;
      iVar12 = param_4;
      if (0 < param_4) {
        do {
          puVar10 = puVar9;
          iVar13 = param_3;
          iVar8 = 0;
          if (0 < param_3) {
            do {
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              uVar3 = *(ushort *)local_100;
              local_100 = (uint *)((int)local_100 + 2);
              uVar3 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
              iVar13 = iVar13 + -1;
              *(ushort *)puVar10 = uVar3 >> 1 | uVar3 << 0xf;
              puVar10 = puVar9;
              iVar8 = param_3;
            } while (iVar13 != 0);
          }
          if (iVar8 < (int)param_5) {
            uVar11 = param_5 - iVar8;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          iVar12 = iVar12 + -1;
          local_fc = param_4;
        } while (iVar12 != 0);
      }
    }
    else {
      if (param_1 == 5) {
        if (param_2 == 3) {
          local_fc = 0;
          if (0 < param_4) {
            local_100 = (uint *)param_4;
            do {
              iVar12 = param_3;
              puVar10 = puVar9;
              iVar13 = 0;
              if (0 < param_3) {
                do {
                  uVar6 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar9 = (undefined4 *)((int)puVar10 + 2);
                  iVar12 = iVar12 + -1;
                  *(ushort *)puVar10 =
                       (ushort)((((uVar6 >> 0x1c) << 4 | uVar6 >> 0x14 & 0xf) << 4 |
                                uVar6 >> 0xc & 0xf) << 4) | (ushort)(uVar6 >> 4) & 0xf;
                  puVar10 = puVar9;
                  iVar13 = param_3;
                } while (iVar12 != 0);
              }
              if (iVar13 < (int)param_5) {
                iVar13 = param_5 - iVar13;
                do {
                  *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              local_100 = (uint *)((int)local_100 + -1);
              local_fc = param_4;
            } while (local_100 != (uint *)0x0);
          }
          goto LAB_00446257;
        }
        if (param_2 == 7) {
          local_fc = 0;
          if (0 < param_4) {
            local_100 = (uint *)param_4;
            do {
              iVar12 = param_3;
              puVar10 = puVar9;
              iVar13 = 0;
              if (0 < param_3) {
                do {
                  uVar6 = *puVar14;
                  puVar9 = (undefined4 *)((int)puVar10 + 2);
                  puVar14 = (uint *)((int)puVar14 + 3);
                  iVar12 = iVar12 + -1;
                  *(ushort *)puVar10 =
                       (ushort)(((uVar6 >> 0x13 | 0xffe0) << 5 | uVar6 >> 0xb & 0x1f) << 5) |
                       (ushort)(uVar6 >> 3) & 0x1f;
                  puVar10 = puVar9;
                  iVar13 = param_3;
                } while (iVar12 != 0);
              }
              if (iVar13 < (int)param_5) {
                iVar13 = param_5 - iVar13;
                do {
                  *(undefined2 *)puVar9 = *(undefined2 *)((int)puVar9 + -2);
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              local_100 = (uint *)((int)local_100 + -1);
              local_fc = param_4;
            } while (local_100 != (uint *)0x0);
          }
          goto LAB_00446257;
        }
      }
      if (((param_1 == 0) && (param_2 == 3)) && (local_fc = param_1, 0 < param_4)) {
        local_100 = (uint *)param_4;
        do {
          puVar10 = puVar9;
          iVar12 = param_3;
          iVar13 = 0;
          if (0 < param_3) {
            do {
              uVar6 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar9 = (undefined4 *)((int)puVar10 + 2);
              uVar11 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8;
              iVar12 = iVar12 + -1;
              *(ushort *)puVar10 =
                   (ushort)((((uVar6 >> 0x10 & 0xfffff000) >> 8 | uVar11 >> 0x1c) << 4 |
                            uVar11 >> 0x14 & 0xf) << 4) | ((ushort)(uVar6 >> 0x10) & 0xff) >> 4;
              puVar10 = puVar9;
              iVar13 = param_3;
            } while (iVar12 != 0);
          }
          if (iVar13 < (int)param_5) {
            uVar11 = param_5 - iVar13;
            puVar10 = puVar9;
            for (uVar6 = uVar11 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            puVar9 = (undefined4 *)((int)puVar9 + uVar11 * 2);
            for (uVar6 = (uint)((uVar11 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined2 *)puVar10 = 0;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
          }
          local_100 = (uint *)((int)local_100 + -1);
          local_fc = param_4;
        } while (local_100 != (uint *)0x0);
      }
    }
  }
LAB_00446257:
  if (local_fc < (int)param_6) {
    local_100 = (uint *)(param_6 - local_fc);
    do {
      uVar6 = param_5;
      puVar10 = puVar9;
      if (0 < (int)param_5) {
        do {
          puVar9 = (undefined4 *)((int)puVar10 + 2);
          uVar6 = uVar6 - 1;
          *(undefined2 *)puVar10 = *(undefined2 *)((int)puVar10 + param_3 * -2);
          puVar10 = puVar9;
        } while (uVar6 != 0);
      }
      local_100 = (uint *)((int)local_100 + -1);
    } while (local_100 != (uint *)0x0);
  }
  if ((local_f1 != '\0') &&
     (puVar7 = (undefined2 *)((int)local_ec + local_f0 * 2 + -2), 0 < param_4)) {
    local_100 = (uint *)param_4;
    puVar9 = local_ec;
    do {
      iVar12 = param_3;
      if (0 < param_3) {
        do {
          uVar2 = *(undefined2 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          *puVar7 = uVar2;
          puVar7 = puVar7 + -1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      puVar7 = puVar7 + param_5 + param_3;
      puVar9 = (undefined4 *)((int)puVar9 + (param_5 - param_3) * 2);
      local_100 = (uint *)((int)local_100 + -1);
    } while (local_100 != (uint *)0x0);
  }
  if ((local_f2 != '\0') &&
     (puVar7 = (undefined2 *)((int)local_ec + (local_e8 + -1) * param_5 * 2), puVar9 = local_ec,
     0 < param_4)) {
    do {
      iVar12 = local_f0;
      if (0 < local_f0) {
        do {
          uVar2 = *(undefined2 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      puVar7 = puVar7 + -(local_f0 + param_5);
      param_4 = param_4 + -1;
      puVar9 = (undefined4 *)((int)puVar9 + (param_5 - local_f0) * 2);
    } while (param_4 != 0);
  }
  FUN_0048aa40(local_e4[0x24]);
  FUN_0048a5e0(puVar4[0x24],&local_f8,1,puVar4[0x1f]);
  return;
}

#endif
