#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004173c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,
                 undefined4 param_10,int param_11)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_400 [1024];

  if (param_8 != (char *)0x0) {
    if (param_11 != 0) {
      param_7 = 100;
    }
    FUN_0049eb80(local_400,&DAT_004b6670,param_1);
    uVar2 = 0xffffffff;
    do {
      pcVar6 = param_8;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = param_8 + 1;
      cVar1 = *param_8;
      param_8 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar7 = local_400;
    do {
      pcVar8 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    puVar5 = (undefined4 *)(pcVar6 + -uVar2);
    puVar9 = (undefined4 *)(pcVar8 + -1);
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (param_1 == 6) {
      param_3 = param_3 + 6;
    }
    FUN_00450530(param_2,param_3,param_4,param_5,param_6,param_7,local_400);
    FUN_00450310(param_10);
    _DAT_004b5d88 = _DAT_004b5d8c + _DAT_004b5d88;
    if (255.0 < _DAT_004b5d88) {
      _DAT_004b5d8c = -1.0;
    }
    if (_DAT_004b5d88 < 40.0) {
      _DAT_004b5d8c = 0.5;
    }
  }
  return;
}



char * FUN_004174e0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  size_t _Count;
  char *pcVar3;

  pcVar3 = (char *)0x0;
  if (param_1 != 0) {
    FUN_0049f200(param_1);
  }
  if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Count = ~uVar2 - 1;
    pcVar3 = (char *)FUN_0049f270(~uVar2);
    _strncpy(pcVar3,param_2,_Count);
    pcVar3[_Count] = '\0';
  }
  return pcVar3;
}



void FUN_00417540(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_1]);
  iVar2 = FUN_0042df70(param_2,(&DAT_00e99720)[param_1]);
  uVar4 = (uint)*(ushort *)param_3;
  uVar3 = (uint)*(ushort *)(param_3 + 1);
  if ((param_4 & 0x40000) == 0) {
    if ((param_4 & 0x10000) == 0) {
      if ((param_4 & 0x20000) == 0) {
        if ((param_4 & 0x80000) != 0) {
          uVar4 = (uint)(ushort)(*(ushort *)(param_3 + 2) - (short)iVar1);
        }
      }
      else {
        uVar3 = uVar3 + (((param_3[3] - iVar2) - param_3[1]) + 1U >> 1);
      }
    }
    else {
      uVar4 = uVar4 + (((param_3[2] - iVar1) - *param_3) + 1U >> 1);
    }
  }
  else {
    uVar4 = uVar4 + (((param_3[2] - iVar1) - *param_3) + 1U >> 1);
    uVar3 = uVar3 + (((param_3[3] - iVar2) - param_3[1]) + 1U >> 1);
  }
  if ((param_4 & 0x100000) == 0) {
    if ((param_4 & 0x200000) == 0) goto LAB_00417633;
    iVar1 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[param_1]);
  }
  else {
    iVar1 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[param_1]);
    iVar1 = iVar1 * 5;
  }
  uVar4 = uVar4 + iVar1;
LAB_00417633:
  FUN_004173c0(param_1,uVar4,uVar3,param_5,param_6,param_7,param_8,param_2,param_9,param_10,param_11
              );
  return;
}



undefined4 FUN_00417670(int param_1)

{
  if ((param_1 != 0) && (param_1 == DAT_004d8794)) {
    return 1;
  }
  return 0;
}



void FUN_00417690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;

  if (param_3 == 0) {
    uVar1 = *(uint *)(param_2 + 0x20) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x20) | 2;
  }
  *(uint *)(param_2 + 0x20) = uVar1;
  if (param_5 != 0) {
    FUN_004172f0(param_2);
  }
  if (param_4 != 0) {
    FUN_004151a0(*(undefined4 *)(param_2 + 8),(param_1 != 1) + 1000,*(undefined4 *)(param_2 + 0x1c),
                 param_2);
  }
  return;
}



void FUN_004176f0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_3]);
  iVar2 = FUN_0042df70(param_2,(&DAT_00e99720)[param_3]);
  param_1[2] = iVar1 + 0x13;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = iVar2 + 0x1d;
  return;
}



void FUN_00417740(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  FUN_0042de30(param_2,(&DAT_00e99720)[param_3]);
  FUN_0042df70(param_2,(&DAT_00e99720)[param_3]);
  iVar1 = __ftol();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = iVar1 * 8 + 0x3b;
  param_1[3] = iVar1 + 0x4f;
  return;
}



uint FUN_004177b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_4;

  uVar2 = 0;
  local_4 = 0;
  uVar3 = 0x96;
  if (param_2 != 0) {
    iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_5]);
    if (0x95 < (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_2,(&DAT_00e99720)[param_5]);
    if (-1 < iVar1) {
      local_4 = FUN_0042df70(param_2,(&DAT_00e99720)[param_5]);
    }
    uVar2 = 1;
  }
  if (param_3 != 0) {
    iVar1 = FUN_0042de30(param_3,(&DAT_00e99720)[param_5]);
    if (uVar3 <= (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_3,(&DAT_00e99720)[param_5]);
    if (local_4 <= iVar1) {
      local_4 = FUN_0042df70(param_3,(&DAT_00e99720)[param_5]);
    }
    uVar2 = uVar2 + 1;
  }
  if (param_4 != 0) {
    iVar1 = FUN_0042de30(param_4,(&DAT_00e99720)[param_5]);
    if (uVar3 <= (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_4,(&DAT_00e99720)[param_5]);
    if (local_4 <= iVar1) {
      local_4 = FUN_0042df70(param_4,(&DAT_00e99720)[param_5]);
    }
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 3) {
    iVar1 = uVar3 * uVar2;
  }
  else {
    iVar1 = uVar3 << 1;
  }
  local_4 = local_4 + 0x14;
  if (2 < uVar2) {
    local_4 = local_4 * 2;
  }
  param_1[2] = iVar1 + uVar2 * 0x14 + -1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = local_4 + -1;
  return uVar3;
}



void FUN_00417900(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 != (int *)0x0) {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = (param_1[2] - iVar2) + param_2;
    param_1[3] = (param_1[3] - iVar1) + param_3;
  }
  return;
}



void FUN_00417be0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  undefined3 uVar6;

  iVar3 = param_2;
  iVar2 = param_1;
  if (param_2 == 9) {
    FUN_00417120(*(undefined4 *)(param_1 + 100),&param_1,&param_2);
    iVar4 = FUN_0042df70(*(undefined4 *)(iVar2 + 0x4d4),(&DAT_00e99720)[*(int *)(iVar2 + 0x4dc)]);
    iVar1 = iVar2 + 0x4e0;
    uVar6 = (undefined3)((uint)iVar1 >> 8);
    uVar5 = (undefined3)((uint)*(undefined4 *)(iVar2 + 0x4d4) >> 8);
    FUN_004173c0(*(undefined4 *)(iVar2 + 0x4dc),*(short *)(iVar2 + 0x24) + (short)param_1,
                 (CONCAT22((short)((uint)iVar1 >> 0x10),*(short *)(iVar2 + 0x28) + (short)param_2) -
                 iVar4) + -8,CONCAT31(uVar5,*(undefined *)(iVar2 + 0x4c0)),
                 CONCAT31(uVar6,*(undefined *)(iVar2 + 0x4c1)),
                 CONCAT31(uVar5,*(undefined *)(iVar2 + 0x4c2)),
                 CONCAT31(uVar6,*(undefined *)(iVar2 + 0x4c3)),*(undefined4 *)(iVar2 + 0x4d4),0,
                 iVar1,*(uint *)(iVar2 + 0x20) & 0x100);
  }
  FUN_00415850(iVar2,iVar3,param_3,param_4);
  return;
}



void FUN_00417ca0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  uVar3 = 0;
  iVar5 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      FUN_00414e60(iVar1,0);
      *(uint *)(iVar1 + 0x528) = uVar3;
      uVar3 = uVar3 + 1;
      if (200 < uVar3) {
        iVar5 = iVar5 + 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar4 = *(int *)(iVar1 + 4);
    FUN_00414d00(iVar1);
    iVar1 = iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x504);
  iVar5 = *(int *)(param_1 + 0xc);
  bVar6 = iVar1 != 0;
  if (iVar5 != 0) {
    do {
      if (iVar1 == 0) break;
      if (((byte)*(undefined4 *)(iVar5 + 0x18) & 0xc) == 0xc) {
        iVar1 = iVar1 + -1;
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
    if (iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0x510);
      do {
        if (*(int *)(param_1 + 0x30) + 0x14 <= iVar1) break;
        if (((byte)*(undefined4 *)(iVar5 + 0x18) & 0xc) == 0xc) {
          iVar4 = (*(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x28)) + 1;
          if (*(int *)(param_1 + 0x518) <= iVar4 + iVar1) {
            bVar6 = true;
          }
          if (iVar1 < *(int *)(param_1 + 0x518)) {
            if ((*(uint *)(iVar5 + 0x508) & 0x20000) == 0) {
              if ((*(uint *)(iVar5 + 0x508) & 0x10000) == 0) {
                iVar2 = *(int *)(param_1 + 0x50c);
              }
              else {
                iVar2 = (((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x2c)) +
                         *(int *)(param_1 + 0x514)) - *(int *)(param_1 + 0x50c) >> 1) +
                        *(int *)(param_1 + 0x50c);
              }
              FUN_00414b60(iVar5,iVar2,iVar1);
            }
            if (((*(uint *)(iVar5 + 0x508) & 0x80000) != 0) &&
               ((*(uint *)(param_1 + 0x508) & 0x100000) == 0)) {
              local_8 = *(int *)(param_1 + 0x514) + 10;
              local_10 = *(int *)(param_1 + 0x50c) + -10;
              local_c = *(int *)(iVar5 + 0x28) + -10;
              local_4 = *(int *)(iVar5 + 0x30) + -10;
              FUN_0041aa90(param_1,iVar5,&local_10);
            }
            FUN_00414e60(iVar5,1);
          }
          iVar1 = iVar1 + *(int *)(param_1 + 0x524) + iVar4;
        }
        iVar5 = *(int *)(iVar5 + 4);
      } while (iVar5 != 0);
      if ((bVar6) && ((*(uint *)(param_1 + 0x508) & 0x200000) == 0)) {
        iVar1 = FUN_00414d60(param_1,6);
        if (iVar1 == 0) {
          local_10 = *(int *)(param_1 + 0x50c);
          iVar5 = *(int *)(param_1 + 0x510) + -0xf;
          FUN_00413a90(param_1,0,*(int *)(param_1 + 0x514) + -0x20,iVar5,
                       (*(int *)(param_1 + 0x518) - iVar5) + 0x10,0x10000,0);
        }
        FUN_00414e60(iVar1,1);
      }
      for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
          FUN_00415810(iVar1,*(undefined4 *)(param_1 + 0x50c),*(int *)(param_1 + 0x510) + -2,
                       *(undefined4 *)(param_1 + 0x514),*(int *)(param_1 + 0x518) + 2);
        }
      }
    }
  }
  return;
}



void FUN_00417f00(int *param_1,int *param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_1 < *param_2) {
      *param_1 = *param_2;
    }
    if (param_1[1] < param_2[1]) {
      param_1[1] = param_2[1];
    }
    if (param_2[2] < param_1[2]) {
      param_1[2] = param_2[2];
    }
    if (param_2[3] < param_1[3]) {
      param_1[3] = param_2[3];
    }
  }
  return;
}



void FUN_00417fe0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;

  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (~uVar5 - 1 == 0) {
    return;
  }
  uVar4 = FUN_0042de30(param_2,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  FUN_0042df70(param_2,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  iVar2 = *(int *)(param_1 + 0x50c);
  iVar3 = *(int *)(param_1 + 0x514);
  while( true ) {
    cVar1 = *param_2;
    pcVar8 = (char *)0x0;
    pcVar7 = param_2;
    for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < ((iVar3 - iVar2) + 1U) / (uVar4 / (~uVar5 - 1) + 1)))
        ; uVar6 = uVar6 + 1) {
      if (cVar1 == ' ') {
        pcVar8 = pcVar7;
      }
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    if ((*pcVar7 != '\0') && (pcVar8 != (char *)0x0)) {
      *pcVar8 = '\0';
    }
    FUN_004138f0(param_1,param_2,-(uint)(param_3 != 0) & 0x10000,0,0);
    if (*pcVar7 != '\0') {
      if (pcVar8 == (char *)0x0) {
        return;
      }
      *pcVar8 = ' ';
    }
    if (pcVar8 == (char *)0x0) break;
    if (*pcVar7 == '\0') {
      return;
    }
    param_2 = pcVar8 + 1;
  }
  return;
}



void FUN_004180c0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;

  uVar2 = __ftol();
  puVar4 = &DAT_004d8164;
  do {
    if (puVar4[1] != 0) {
      uVar1 = *puVar4;
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      *puVar4 = uVar1 - uVar3;
      if (uVar1 - uVar3 == 0) {
        *puVar4 = puVar4[-1];
        FUN_004151a0(puVar4[1],0x45,puVar4[2],0);
      }
    }
    puVar4 = puVar4 + 4;
  } while ((int)puVar4 < 0x4d8204);
  return;
}



void FUN_00418120(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 local_400;
  undefined local_1;

  if (param_1 == 0) {
    return;
  }
  puVar11 = &local_400;
  for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  if (*(char **)(param_1 + 0x4d4) != (char *)0x0) {
    _strncpy((char *)&local_400,*(char **)(param_1 + 0x4d4),0x3ff);
    local_1 = 0;
  }
  switch(param_2) {
  case 8:
    iVar9 = *(int *)(param_1 + 0x530);
    if (iVar9 == 0) break;
    FUN_0049f4e0(&stack0xfffffbff + iVar9,(int)&local_400 + iVar9,0x400 - iVar9);
    local_1 = 0;
    *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + -1;
    goto LAB_004183dd;
  default:
    if (DAT_004d1f9c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_004d1d90 + param_2 * 2) & 0x107;
    }
    else {
      uVar5 = FUN_0049f440(param_2,0x107);
    }
    if ((uVar5 == 0) && (param_2 != 0x20)) break;
    uVar5 = *(uint *)(param_1 + 0x534);
    if (0x3ff < uVar5) {
      uVar5 = 0x400;
    }
    uVar2 = *(uint *)(param_1 + 0x530);
    if ((uVar5 <= uVar2) || ((param_2 == 0x20 && (uVar2 == 0)))) break;
    FUN_0049f4e0((int)&local_400 + uVar2 + 1,(int)&local_400 + uVar2,0x3ff - uVar2);
    iVar9 = *(int *)(param_1 + 0x530);
    *(char *)((int)&local_400 + iVar9) = (char)param_2;
    *(int *)(param_1 + 0x530) = iVar9 + 1;
LAB_004183dd:
    puVar11 = &local_400;
LAB_004183e4:
    FUN_00414b80(param_1,puVar11,0);
    break;
  case 0xd:
    FUN_00440550(0x46);
    DAT_004d8bd0 = DAT_004d8bd0 | 8;
    FUN_004151a0(param_1,0x49,0,*(undefined4 *)(param_1 + 0x1c));
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0xbb9,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x4d4));
    if ((*(uint *)(param_1 + 0x52c) & 0x10000) != 0) {
      uVar4 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),0);
      *(undefined4 *)(param_1 + 0x4d4) = uVar4;
      break;
    }
    pcVar10 = *(char **)(param_1 + 0x4d4);
    if (pcVar10 == (char *)0x0) break;
    pcVar3 = (char *)(*(uint *)(param_1 + 0x52c) & 0x20000);
    goto LAB_004182e4;
  case 0x1b:
    FUN_00440550(0x47);
    FUN_00414b80(param_1,&DAT_004d87d0,*(undefined4 *)(param_1 + 0x4d8));
    DAT_004d8bd0 = DAT_004d8bd0 | 8;
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0xbba,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x4d4));
    break;
  case 0x23:
    pcVar10 = *(char **)(param_1 + 0x4d4);
    pcVar3 = pcVar10;
LAB_004182e4:
    if (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x530) = ~uVar5 - 1;
    }
    break;
  case 0x24:
    *(undefined4 *)(param_1 + 0x530) = 0;
    break;
  case 0x25:
    if (*(int *)(param_1 + 0x530) != 0) {
      *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + -1;
    }
    break;
  case 0x27:
    if (*(char **)(param_1 + 0x4d4) != (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar10 = *(char **)(param_1 + 0x4d4);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (*(uint *)(param_1 + 0x530) < ~uVar5 - 1) {
        *(uint *)(param_1 + 0x530) = *(uint *)(param_1 + 0x530) + 1;
      }
    }
    break;
  case 0x2e:
    if (*(int *)(param_1 + 0x530) == 0) {
      if (*(char **)(param_1 + 0x4d4) == (char *)0x0) break;
      iVar9 = -1;
      pcVar10 = *(char **)(param_1 + 0x4d4);
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (iVar9 == -2) break;
    }
    *(undefined4 *)(param_1 + 0x530) = 0;
    puVar11 = (undefined4 *)0x0;
    goto LAB_004183e4;
  }
  iVar6 = FUN_00418680(*(undefined4 *)(param_1 + 0x4d4),*(undefined4 *)(param_1 + 0x4dc),0,
                       *(undefined4 *)(param_1 + 0x530));
  iVar9 = *(int *)(param_1 + 0x24);
  iVar7 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  iVar8 = FUN_0042df70(&DAT_004b6668,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  FUN_00411740(iVar7 * 5 + iVar6 + iVar9,
               (((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + 1 >> 1) -
               ((iVar8 << 1) >> 1)) + *(int *)(param_1 + 0x28),1,iVar8 << 1);
  return;
}



void FUN_004184d0(void)

{
  float fVar1;
  uint uVar2;
  undefined2 extraout_var;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 uStack_4;

  uVar2 = __ftol();
  FUN_004285d0(0xfa,0);
  if (DAT_004d87bc != 0) {
    FUN_00417120(0x3f1,&local_10,&local_c);
    FUN_00428660(0xfa,DAT_004d79f0,CONCAT22(extraout_var,DAT_004d7c4c));
    if (DAT_00ec86c4 == 0x200) {
      local_8 = DAT_004d8780;
      fVar1 = (float)(ulonglong)DAT_004d8788 * 1.25;
    }
    else {
      local_8 = DAT_004d8788;
      fVar1 = (float)(ulonglong)DAT_004d8788;
    }
    uStack_4 = 0;
    FUN_004286f0(0xfa,fVar1 / (float)(ulonglong)local_10,
                 (float)(ulonglong)DAT_004d8780 / (float)(ulonglong)local_c);
    FUN_00428740(0xfa,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = DAT_004d8784;
    if (uVar2 <= DAT_004d8784) {
      uVar3 = uVar2;
    }
    DAT_004d8784 = DAT_004d8784 - uVar3;
    if (DAT_004d8784 == 0) {
      DAT_004d8784 = 0xfa;
      DAT_004d87c0 = (uint)(DAT_004d87c0 == 0);
    }
    FUN_004285d0(0xfa,DAT_004d87c0);
    FUN_004287e0(0xfa,0x800);
    FUN_004287e0(0xfa,0x10000);
  }
  return;
}



// WARNING: Type propagation algorithm not settling

char * FUN_00418680(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *in_EAX;
  uint uVar3;
  char *pcVar4;
  int iVar5;

  iVar2 = param_2;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (param_2 != -1) {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= param_3) {
      return (char *)0x0;
    }
    pcVar4 = param_1 + param_3;
    iVar5 = param_4 - param_3;
    in_EAX = (char *)0x0;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      if (*pcVar4 == '\0') {
        return in_EAX;
      }
      FUN_0042e0e0(*pcVar4,(&DAT_00e99720)[iVar2],&param_1,&param_2);
      in_EAX = in_EAX + (int)param_1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return in_EAX;
}



undefined4 FUN_00418700(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined auStack_c [4];
  uint local_8;
  undefined4 uStack_4;

  puVar4 = param_2;
  if (param_4 < 1) {
    return 0;
  }
  do {
    iVar1 = (**(code **)(DAT_00ecc420 + 0x38))(param_1,&local_8,1);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if ((local_8 & 0x80) == 0) {
      iVar1 = (local_8 & 0x7f) + 1;
      param_4 = param_4 - iVar1;
      iVar1 = iVar1 * param_3;
      (**(code **)(DAT_00ecc420 + 0x38))(param_1,puVar4,iVar1);
      puVar4 = (undefined4 *)((int)puVar4 + iVar1);
    }
    else {
      uVar2 = (local_8 & 0x7f) + 1;
      param_4 = param_4 - uVar2;
      switch(param_3) {
      case 1:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,auStack_c,1);
        puVar5 = puVar4;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = CONCAT22(CONCAT11(auStack_c[0],auStack_c[0]),CONCAT11(auStack_c[0],auStack_c[0])
                            );
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + uVar2);
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined *)puVar5 = auStack_c[0];
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        break;
      case 2:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_2,2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined2 *)puVar4 = param_2._0_2_;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        break;
      case 3:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,auStack_c,1);
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_2,2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined *)puVar4 = auStack_c[0];
          *(undefined2 *)((int)puVar4 + 1) = param_2._0_2_;
          puVar4 = (undefined4 *)((int)puVar4 + 3);
        }
        break;
      case 4:
        (**(code **)(DAT_00ecc420 + 0x38))(param_1,&uStack_4,4);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uStack_4;
          puVar4 = puVar4 + 1;
        }
      }
    }
  } while (0 < param_4);
  return 0;
}



short * FUN_004188b0(short *param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_20;
  int local_14;
  int local_c;

  psVar6 = param_1;
  psVar2 = *(short **)(param_1 + 8);
  sVar7 = *psVar2;
  if (sVar7 < 0x21) {
    uVar14 = 0x20;
  }
  else if (sVar7 < 0x41) {
    uVar14 = 0x40;
  }
  else {
    uVar14 = ((0x80 < sVar7) - 1 & 0xffffff80) + 0x100;
  }
  sVar1 = psVar2[1];
  if (sVar1 < 0x21) {
    param_1 = (short *)0x20;
  }
  else if (sVar1 < 0x41) {
    param_1 = (short *)0x40;
  }
  else {
    param_1 = (short *)(((0x80 < sVar1) - 1 & 0xffffff80) + 0x100);
  }
  psVar6[7] = (short)param_1;
  uVar4 = (ulonglong)((uVar14 - 1) + (int)sVar7) / (ulonglong)uVar14;
  iVar8 = (int)uVar4;
  uVar5 = (ulonglong)(((int)param_1 - 1U) + (int)sVar1) / ZEXT48(param_1);
  local_c = (int)uVar5;
  sVar7 = (short)uVar5 * (short)uVar4;
  psVar6[6] = sVar7;
  local_20 = FUN_0049f270((int)sVar7 << 3);
  *(int *)(psVar6 + 8) = local_20;
  uVar3 = *(undefined4 *)(psVar2 + 2);
  if (local_c != 0) {
    iVar9 = (int)param_1 * local_c;
    do {
      uVar11 = (uint)*psVar6;
      if (iVar8 != 0) {
        iVar13 = 0;
        local_14 = iVar8;
        do {
          uVar12 = uVar11;
          if (uVar14 < uVar11) {
            uVar12 = uVar14;
          }
          uVar10 = (int)psVar6[1] - (iVar9 - (int)param_1);
          if (param_1 < uVar10) {
            uVar10 = (uint)param_1;
          }
          FUN_00418a80(local_20,uVar3,iVar13,iVar9 - (int)param_1,uVar12,uVar10,param_2,(int)*psVar6
                      );
          local_20 = local_20 + 8;
          uVar11 = uVar11 - uVar14;
          iVar13 = iVar13 + uVar14;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar9 = iVar9 - (int)param_1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  FUN_0049f200(uVar3);
  FUN_0049f200(psVar2);
  uVar14 = 0;
  if (psVar6[6] != 0) {
    do {
      uVar3 = *(undefined4 *)(*(int *)(psVar6 + 8) + 4 + uVar14 * 8);
      FUN_00446b60(psVar6,*(int *)(psVar6 + 8) + uVar14 * 8);
      FUN_00408f90();
      FUN_0049f200(uVar3);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)(int)psVar6[6]);
  }
  return psVar6;
}



undefined4 *
FUN_00418a80(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;

  uVar5 = param_5 + 1U & 0xfffffffe;
  uVar7 = uVar5 * param_7 * param_6;
  puVar1 = (undefined4 *)FUN_0049f270(uVar7);
  puVar4 = puVar1;
  for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if ((DAT_0050c96c != 0) && (0 < param_4)) {
    param_4 = param_4 + -1;
  }
  if (param_6 != 0) {
    puVar2 = (undefined4 *)((param_8 * param_4 + param_3) * param_7 + param_2);
    param_4 = param_6;
    puVar4 = puVar1;
    do {
      puVar6 = puVar2;
      puVar8 = puVar4;
      for (uVar3 = (uint)(param_7 * param_5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = param_7 * param_5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + param_8 * param_7);
      puVar4 = (undefined4 *)((int)puVar4 + uVar5 * param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *param_1 = (undefined2)param_5;
  *(undefined4 **)(param_1 + 2) = puVar1;
  param_1[1] = (undefined2)param_6;
  return puVar1;
}



void FUN_00418b70(int **param_1)

{
  int *piVar1;

  piVar1 = param_1[7];
  if (param_1 != (int **)0x0) {
    do {
      if (((*(byte *)(param_1 + 8) & 0x80) != 0) && ((int *)(*param_1)[7] != piVar1)) break;
      param_1 = (int **)*param_1;
    } while (param_1 != (int **)0x0);
    for (; ((param_1 != (int **)0x0 && (param_1[6] == (int *)0xa)) && (param_1[7] == piVar1));
        param_1 = (int **)param_1[1]) {
      FUN_00414420(param_1,0);
    }
  }
  return;
}



void FUN_00418bc0(int param_1)

{
  int iVar1;

  if (param_1 != 0) {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
        FUN_00414be0(iVar1,*(undefined *)(param_1 + 0x4c0),*(undefined *)(param_1 + 0x4c1),
                     *(undefined *)(param_1 + 0x4c2),*(undefined *)(param_1 + 0x4c3));
        FUN_00414ca0(iVar1,*(undefined *)(param_1 + 0x4c4),*(undefined *)(param_1 + 0x4c5),
                     *(undefined *)(param_1 + 0x4c6),*(undefined *)(param_1 + 0x4c7));
        FUN_00414c10(iVar1,*(undefined *)(param_1 + 0x4cc),*(undefined *)(param_1 + 0x4cd),
                     *(undefined *)(param_1 + 0x4ce),*(undefined *)(param_1 + 0x4cf));
        FUN_00414c40(iVar1,*(undefined *)(param_1 + 0x4c8),*(undefined *)(param_1 + 0x4c9),
                     *(undefined *)(param_1 + 0x4ca),*(undefined *)(param_1 + 0x4cb));
        FUN_00414c70(iVar1,*(undefined *)(param_1 + 0x4d0),*(undefined *)(param_1 + 0x4d1),
                     *(undefined *)(param_1 + 0x4d2),*(undefined *)(param_1 + 0x4d3));
      }
    }
  }
  return;
}



void FUN_00418cb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  iVar2 = param_1;
  uVar5 = 0;
  uVar1 = *(uint *)(param_1 + 0x4f0);
  local_18 = 0;
  if (uVar1 == 0) {
    return;
  }
  bVar6 = (uVar1 & 0x20000) != 0;
  if (bVar6) {
    uVar5 = 0x200000;
  }
  if ((uVar1 & 0x40000) != 0) {
    uVar5 = uVar5 | 0x400000;
  }
  if ((uVar1 & 0x200000) == 0) {
    if ((uVar1 & 0x400000) == 0) {
      if ((uVar1 & 0x800000) == 0) {
        if ((uVar1 & 0x1010000) == 0) {
          if ((uVar1 & 0x80000) == 0) {
            iVar3 = param_2;
            iVar4 = param_2;
            if ((uVar1 & 0x100000) != 0) {
              local_18 = -0x14;
              if (param_2 == 0) {
                local_1c = 0x7d1;
                iVar3 = 2000;
                iVar4 = 2000;
              }
              else {
                local_1c = 0x7d3;
                iVar3 = 0x7d2;
                iVar4 = 0x7d2;
              }
            }
          }
          else {
            local_18 = -7;
            if (param_2 == 0) {
              local_1c = 0x7d5;
              iVar3 = 0x7d4;
              iVar4 = 0x7d4;
            }
            else {
              local_1c = 0x7d7;
              iVar3 = 0x7d6;
              iVar4 = 0x7d6;
            }
          }
        }
        else {
          local_18 = (-(uint)bVar6 & 0xc) - 0x1a;
          if (param_2 == 0) {
            local_1c = 0x7d9;
            iVar3 = (-(uint)((uVar1 & 0x1000000) != 0) & 6) + 0x7d8;
            iVar4 = 0x7da;
          }
          else {
            local_1c = 0x7dc;
            iVar3 = 0x7db;
            iVar4 = 0x7dd;
          }
        }
        FUN_00417120(iVar3,&local_20,&param_1);
        FUN_00417120(iVar4,&local_14,&param_1);
        local_10 = *(int *)(iVar2 + 0x24);
        local_c = *(int *)(iVar2 + 0x28);
        local_8 = local_20 + -1 + local_10;
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,0,iVar3,&local_10,1,uVar5);
        iVar3 = local_18;
        FUN_00419030(iVar2,0,0,local_18);
        local_10 = local_20 + *(int *)(iVar2 + 0x24);
        local_c = *(int *)(iVar2 + 0x28);
        local_8 = *(int *)(iVar2 + 0x2c) - local_14;
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,1,local_1c,&local_10,1,uVar5);
        FUN_00419030(iVar2,1,0,iVar3);
        local_8 = *(int *)(iVar2 + 0x2c);
        local_10 = (local_8 - local_14) + 1;
        local_c = *(int *)(iVar2 + 0x28);
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,2,iVar4,&local_10,1,uVar5 | 0x400000);
        FUN_00419030(iVar2,2,0,iVar3);
        FUN_00414e30(iVar2,param_2);
        return;
      }
      FUN_00417120(0xbc3,&local_20,&param_1);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = *(int *)(iVar2 + 0x28);
      local_8 = local_20 + -1 + local_10;
      local_4 = param_1 + -1 + local_c;
      uVar7 = 0xbc3;
    }
    else {
      FUN_00417120(0xbc1,&local_20,&param_1);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = *(int *)(iVar2 + 0x28);
      local_8 = local_20 + -1 + local_10;
      local_4 = param_1 + -1 + local_c;
      uVar7 = 0xbc1;
    }
    FUN_00412fb0(iVar2,0,uVar7,&local_10,1,uVar5);
    uVar7 = 0xfffffffc;
  }
  else {
    FUN_00417120(0x3f8,&local_20,&param_1);
    local_10 = *(int *)(iVar2 + 0x24);
    local_c = *(int *)(iVar2 + 0x28);
    local_8 = local_20 + -1 + local_10;
    local_4 = param_1 + -1 + local_c;
    FUN_00412fb0(iVar2,0,0x3f8,&local_10,1,uVar5);
    uVar7 = 0;
  }
  FUN_00419030(iVar2,0,0,uVar7);
  FUN_00414e30(iVar2,param_2);
  return;
}



void FUN_00419030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    param_1 = param_1 + param_2 * 0x38;
    *(undefined4 *)(param_1 + 0x8c) = param_3;
    *(undefined4 *)(param_1 + 0x90) = param_4;
  }
  return;
}



void FUN_00419070(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;

  if (param_1 != 0) {
    if ((param_1 & 0x200000) != 0) {
      FUN_00417120(0x3f8,param_2,param_3);
      return;
    }
    if ((param_1 & 0x400000) != 0) {
      FUN_00417120(0xbc1,param_2,param_3);
      return;
    }
    if ((param_1 & 0x800000) != 0) {
      FUN_00417120(0xbc3,param_2,param_3);
      return;
    }
    if ((param_1 & 0x10000) != 0) {
      FUN_00417120(0x7d9,param_2,param_3);
      return;
    }
    if ((param_1 & 0x80000) != 0) {
      FUN_00417120(0x7d5,param_2,param_3);
      return;
    }
    uVar1 = 0x7d1;
    if ((param_1 & 0x100000) == 0) {
      uVar1 = param_1;
    }
    FUN_00417120(uVar1,param_2,param_3);
  }
  return;
}



void FUN_00419140(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;

  iVar2 = param_1;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 0x58);
    uVar7 = *(uint *)(param_1 + 0x54);
    if (iVar5 == 0) {
      iVar5 = 0x14;
    }
    uVar1 = *(uint *)(param_1 + 0x5c);
    if (uVar7 <= uVar1) {
      if (uVar1 < iVar5 + uVar7) {
        iVar5 = uVar1 - uVar7;
      }
      FUN_004816b0();
      iVar4 = __ftol();
      uVar1 = iVar5 + uVar7;
      if (uVar7 < uVar1) {
        uVar3 = __ftol();
        param_1._1_3_ = (undefined3)((uint)(100 - iVar4) >> 8);
        param_1 = CONCAT31(param_1._1_3_,uVar3);
        puVar6 = (undefined *)(iVar2 + 0x95 + uVar7 * 0x38);
        do {
          FUN_00413090(iVar2,uVar7,CONCAT31(param_1._1_3_,puVar6[-1]),*puVar6,puVar6[1],param_1);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x38;
        } while (uVar7 < uVar1);
        return;
      }
    }
  }
  return;
}



void FUN_004197f0(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    param_1[2] = 0x14;
    *param_1 = 0x14;
    param_1[3] = 0x1a;
    param_1[1] = 0x1a;
  }
  return;
}



void FUN_00419830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  iVar2 = param_2;
  iVar1 = param_1;
  if (param_1 != 0) {
    if ((param_2 == 0) || (iVar4 = 0xc1c, param_2 != 1)) {
      iVar4 = 3000;
    }
    FUN_00417120(iVar4 + 1,&local_24,&local_18);
    FUN_00417120(iVar4,&param_1,&local_2c);
    FUN_00417120(iVar4 + 2,&local_1c,&local_28);
    if (iVar2 == 1) {
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28) + 4;
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_4 = *(int *)(iVar1 + 0x30) + -3;
    }
    else {
      local_10 = *(int *)(iVar1 + 0x24) + 10;
      local_c = *(int *)(iVar1 + 0x28) + 10;
      local_8 = *(int *)(iVar1 + 0x2c) + -10;
      local_4 = *(int *)(iVar1 + 0x30) + -10;
    }
    FUN_00412fb0(iVar1,0,0x3f1,&local_10,1,0);
    FUN_00413090(iVar1,0,0,0,0,0x96);
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = *(int *)(iVar1 + 0x28);
    local_8 = param_1 + -1 + local_10;
    local_4 = local_2c + -1 + local_c;
    FUN_00412fb0(iVar1,1,iVar4,&local_10,1,0x200000);
    local_8 = *(int *)(iVar1 + 0x24);
    iVar2 = ((*(int *)(iVar1 + 0x2c) + param_1 * -2) - local_8) + 1;
    if (DAT_00ec86c4 != 0x280) {
      iVar2 = iVar2 + local_1c * 2;
    }
    local_10 = param_1 + local_8;
    local_c = *(int *)(iVar1 + 0x28);
    local_8 = param_1 + iVar2 + -1 + local_8;
    local_4 = local_28 + -1 + local_c;
    FUN_00412fb0(iVar1,2,iVar4 + 2,&local_10,1,0x200000);
    local_8 = *(int *)(iVar1 + 0x2c);
    local_c = *(int *)(iVar1 + 0x28);
    local_10 = (local_8 - param_1) + 1;
    local_4 = local_2c + -1 + local_c;
    FUN_00412fb0(iVar1,3,iVar4,&local_10,1,0x600000);
    local_4 = *(int *)(iVar1 + 0x28);
    iVar5 = ((*(int *)(iVar1 + 0x30) + local_2c * -2) - local_4) + 1;
    if (DAT_00ec86c4 != 0x280) {
      iVar5 = iVar5 + local_18 * 2;
    }
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = local_2c + local_4;
    local_8 = local_24 + -1 + local_10;
    local_4 = iVar5 + local_2c + -1 + local_4;
    FUN_00412fb0(iVar1,4,iVar4 + 1,&local_10,1,0);
    local_8 = *(int *)(iVar1 + 0x2c) - param_1;
    local_10 = local_8 + 1;
    local_c = local_2c + *(int *)(iVar1 + 0x28);
    local_8 = local_24 + local_8;
    local_4 = iVar5 + local_2c + -1 + *(int *)(iVar1 + 0x28);
    FUN_00412fb0(iVar1,5,iVar4 + 1,&local_10,1,0x400000);
    local_4 = *(int *)(iVar1 + 0x30);
    local_10 = *(int *)(iVar1 + 0x24);
    local_c = (local_4 - local_2c) + 1;
    local_8 = param_1 + -1 + local_10;
    FUN_00412fb0(iVar1,6,iVar4,&local_10,1,0);
    local_10 = param_1 + *(int *)(iVar1 + 0x24);
    local_4 = *(int *)(iVar1 + 0x30);
    local_c = (local_4 - local_28) + 1;
    local_8 = iVar2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
    FUN_00412fb0(iVar1,7,iVar4 + 2,&local_10,1,0);
    local_8 = *(int *)(iVar1 + 0x2c);
    local_10 = (local_8 - param_1) + 1;
    local_28 = *(int *)(iVar1 + 0x30) - local_28;
    local_c = local_28 + 1;
    local_4 = local_2c + local_28;
    FUN_00412fb0(iVar1,8,iVar4,&local_10,1,0x400000);
    iVar2 = param_3;
    if (param_2 == 0) {
      FUN_00414e30(iVar1,param_3);
      if (iVar2 == 0) {
        uVar6 = 0xbbb;
        uVar3 = 0xbbc;
      }
      else {
        uVar6 = 0xbbd;
        uVar3 = 0xbbe;
      }
      FUN_00417120(uVar6,&param_2,&local_20);
      FUN_00417120(uVar3,local_14,&param_3);
      *(undefined4 *)(iVar1 + 0x54) = 9;
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_8 = param_2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28);
      local_4 = local_20 + -1 + local_c;
      FUN_00412fb0(iVar1,9,uVar6,&local_10,1,0);
      local_10 = param_2 + param_1 + *(int *)(iVar1 + 0x24);
      local_c = *(int *)(iVar1 + 0x28);
      local_8 = (*(int *)(iVar1 + 0x2c) - param_1) - param_2;
      local_4 = param_3 + -1 + local_c;
      FUN_00412fb0(iVar1,10,uVar3,&local_10,1,0);
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_10 = (local_8 - param_2) + 1;
      local_c = *(int *)(iVar1 + 0x28);
      local_4 = param_3 + -1 + local_c;
      FUN_00412fb0(iVar1,0xb,uVar6,&local_10,1,0x400000);
      local_10 = param_1 + *(int *)(iVar1 + 0x24);
      local_4 = *(int *)(iVar1 + 0x30) - param_3;
      local_c = local_4 + 1;
      local_4 = local_20 + local_4;
      local_8 = param_2 + param_1 + -1 + *(int *)(iVar1 + 0x24);
      FUN_00412fb0(iVar1,0xc,uVar6,&local_10,1,0);
      local_10 = param_2 + param_1 + *(int *)(iVar1 + 0x24);
      local_4 = *(int *)(iVar1 + 0x30);
      local_c = (local_4 - param_3) + 1;
      local_8 = (*(int *)(iVar1 + 0x2c) - param_1) - param_2;
      FUN_00412fb0(iVar1,0xd,uVar3,&local_10,1,0);
      local_4 = *(int *)(iVar1 + 0x30);
      local_8 = *(int *)(iVar1 + 0x2c) - param_1;
      local_10 = (local_8 - param_2) + 1;
      local_c = (local_4 - param_3) + 1;
      FUN_00412fb0(iVar1,0xe,uVar6,&local_10,1,0x400000);
      *(int *)(iVar1 + 0x58) = 0xf - *(int *)(iVar1 + 0x54);
    }
  }
  return;
}



void FUN_00419db0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  uVar1 = param_1;
  if (param_1 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (param_2 == 0) {
    if ((uVar4 & 0x10000) == 0) {
      uVar3 = 5000;
      uVar5 = 0x1389;
      uVar6 = 5000;
    }
    else {
      uVar3 = 0x1392;
      uVar5 = 0x1393;
      uVar6 = 0x1392;
    }
  }
  else if ((uVar4 & 0x10000) == 0) {
    uVar3 = 0x138a;
    uVar5 = 0x138b;
    uVar6 = 0x138a;
  }
  else {
    uVar3 = 0x1394;
    uVar5 = 0x1395;
    uVar6 = 0x1394;
  }
  if ((uVar4 & 0x20000) == 0) {
    local_48 = 0x138f;
    local_44 = 0x138e;
  }
  else {
    local_44 = 0x138f;
    local_48 = 0x138e;
  }
  if ((uVar4 & 0x10000) == 0) {
    FUN_00417120(uVar6,&param_1,&param_2);
    local_20 = *(int *)(uVar1 + 0x24);
    local_1c = *(int *)(uVar1 + 0x28);
    local_18 = (param_1 - 1) + local_20;
    local_14 = param_2 + -1 + local_1c;
    FUN_00417120(uVar3,&param_1,&param_2);
    local_8 = *(int *)(uVar1 + 0x548) + *(int *)(uVar1 + 0x24);
    local_10 = local_8 - param_1;
    local_c = *(int *)(uVar1 + 0x28);
    local_8 = local_8 + -1;
    local_4 = param_2 + -1 + local_c;
    FUN_00417120(uVar5,&param_1,&param_2);
    local_2c = *(int *)(uVar1 + 0x28);
    local_30 = local_18 + 1;
    local_28 = local_10 + -1;
    local_24 = param_2 + -1 + local_2c;
  }
  else {
    FUN_00417120(uVar6,&param_1,&param_2);
    local_20 = *(int *)(uVar1 + 0x24);
    local_1c = *(int *)(uVar1 + 0x28);
    local_18 = (param_1 - 1) + local_20;
    local_14 = param_2 + -1 + local_1c;
    FUN_00417120(uVar3,&param_1,&param_2);
    local_10 = *(int *)(uVar1 + 0x24);
    local_4 = *(int *)(uVar1 + 0x548) + *(int *)(uVar1 + 0x28);
    local_c = local_4 - param_2;
    local_4 = local_4 + -1;
    local_8 = (param_1 - 1) + local_10;
    FUN_00417120(uVar5,&param_1,&param_2);
    local_30 = *(int *)(uVar1 + 0x24);
    local_28 = (param_1 - 1) + local_30;
    local_2c = local_14 + 1;
    local_24 = local_c + -1;
  }
  if ((*(byte *)(uVar1 + 0x22) & 1) == 0) {
    local_3c = local_2c + 0xf;
    local_34 = local_24 + -0xf;
    local_40 = local_30 + -7;
    local_38 = local_28 + 7;
  }
  else {
    local_3c = local_2c + -7;
    local_34 = local_24 + 7;
    local_40 = local_30 + 0xf;
    local_38 = local_28 + -0xf;
  }
  FUN_00412fb0(uVar1,0,0x3f1,&local_40,1,0);
  FUN_00413090(uVar1,0,0,0,0,0x82);
  FUN_00412fb0(uVar1,1,uVar6,&local_20,1,0);
  FUN_00412fb0(uVar1,2,uVar5,&local_30,1,0);
  iVar7 = 4;
  FUN_00412fb0(uVar1,3,uVar3,&local_10,1,
               (-(uint)((*(uint *)(uVar1 + 0x20) & 0x10000) != 0) & 0xffe00000) + 0x400000);
  if ((*(uint *)(uVar1 + 0x20) & 0x200100) == 0) {
    FUN_00417150(local_48,&local_40);
    FUN_0041a9a0(&local_40,&local_20,1,1);
    FUN_00412fb0(uVar1,4,local_48,&local_40,1,0);
    iVar2 = local_44;
    FUN_00417150(local_44,&local_40);
    FUN_0041a9a0(&local_40,&local_10,1,1);
    iVar7 = 6;
    FUN_00412fb0(uVar1,5,iVar2,&local_40,1,0);
  }
  if ((*(uint *)(uVar1 + 0x20) & 0x80000) != 0) {
    if ((*(uint *)(uVar1 + 0x20) & 0x100000) == 0) {
      uVar4 = (uint)(((local_28 - local_30) + 1) * *(int *)(uVar1 + 0x54c)) / 100;
      FUN_00417120(0x138d,0,&local_44);
      local_40 = local_30;
      local_38 = (uVar4 - 1) + local_30;
      local_34 = local_44 + -1;
      local_3c = 0;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) != 0) {
        FUN_00417900(&local_40,(local_28 - local_38) + local_40,local_3c);
      }
      FUN_00412fb0(uVar1,iVar7,0x138d,&local_40,1,(*(uint *)(uVar1 + 0x20) & 0x20000) << 5);
      if ((*(uint *)(uVar1 + 0x20) & 0x40000) == 0) goto LAB_0041a5e5;
      FUN_00417120(0x1390,&param_1,&param_2);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) == 0) {
        local_38 = uVar4 - (param_1 >> 1);
        local_40 = local_30 + local_38;
        local_38 = param_1 + local_30 + -1 + local_38;
      }
      else {
        local_40 = ((local_28 - uVar4) - (param_1 >> 1)) + 1;
        local_38 = ((param_1 - uVar4) + local_28) - (param_1 >> 1);
      }
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      iVar2 = iVar7 + 2;
      FUN_00412fb0(uVar1,iVar7 + 1,0x1390,&local_40,1,(*(uint *)(uVar1 + 0x20) & 0x20000) << 5);
      FUN_00417120(0x1391,&param_1,&param_2);
      if ((*(uint *)(uVar1 + 0x20) & 0x20000) == 0) {
        local_38 = uVar4 - (param_1 >> 1);
        local_40 = local_30 + local_38;
        local_38 = param_1 + local_30 + -1 + local_38;
      }
      else {
        local_40 = ((local_28 - uVar4) - (param_1 >> 1)) + 1;
        local_38 = ((param_1 - uVar4) + local_28) - (param_1 >> 1);
      }
      local_34 = param_2 + -1 + local_2c;
      local_3c = local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      iVar7 = (*(uint *)(uVar1 + 0x20) & 0x20000) << 5;
      uVar3 = 0x1391;
    }
    else {
      FUN_00417120(0x1390,&param_1,&param_2);
      local_38 = ((local_28 - local_30) + 1 >> 1) - (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      FUN_00412fb0(uVar1,iVar7,0x1390,&local_40,1,0);
      local_38 = (uint)(((local_28 - local_30) + 1) * (*(int *)(uVar1 + 0x554) + 100)) / 200 -
                 (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,0,1);
      FUN_00412fb0(uVar1,iVar7 + 1,0x1391,&local_40,1,0);
      FUN_00417120(0x138c,&param_1,&param_2);
      iVar2 = ((local_28 - local_30) + 1 >> 1) - (param_1 >> 1);
      local_40 = local_30 + iVar2;
      local_38 = param_1 + local_30 + -1 + iVar2;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      uVar4 = (uint)(*(int *)(uVar1 + 0x550) * (iVar2 + -4)) / 100;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,-4 - uVar4,0);
      iVar2 = iVar7 + 3;
      FUN_00412fb0(uVar1,iVar7 + 2,0x138c,&local_40,1,0);
      local_38 = ((local_28 - local_30) + 1 >> 1) + (param_1 >> 1);
      local_40 = local_30 + local_38;
      local_38 = param_1 + local_30 + -1 + local_38;
      local_3c = local_2c;
      local_34 = param_2 + -1 + local_2c;
      FUN_0041a9a0(&local_40,&local_30,0,1);
      FUN_0041aa10(&local_40,uVar4 - 0xf,0);
      iVar7 = 0x400000;
      uVar3 = 0x138c;
    }
    FUN_00412fb0(uVar1,iVar2,uVar3,&local_40,1,iVar7);
  }
LAB_0041a5e5:
  local_40 = local_20;
  local_38 = local_8;
  local_34 = local_14;
  if ((*(uint *)(uVar1 + 0x20) & 0x10000) != 0) {
    local_38 = local_18;
    local_34 = local_4;
  }
  local_3c = local_1c;
  FUN_00414b40(uVar1,(local_38 - local_20) + 1,(local_34 - local_1c) + 1);
  return;
}



void FUN_0041a640(int param_1,UINT param_2)

{
  uint uVar1;
  int iVar2;
  UINT UVar3;
  UINT UVar4;

  UVar3 = MapVirtualKeyA(0xc,1);
  UVar4 = MapVirtualKeyA(0xd,1);
  if ((param_2 == 0x6d) || (param_2 == UVar3)) {
    FUN_00440550(0x48);
    uVar1 = *(uint *)(param_1 + 0x558);
    if (uVar1 < *(uint *)(param_1 + 0x54c)) {
      *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x54c) - uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x54c) = 0;
    }
    if (uVar1 < *(uint *)(param_1 + 0x550)) {
      *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) - uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x550) = 0;
    }
    FUN_004151a0(*(undefined4 *)(param_1 + 8),2000,*(undefined4 *)(param_1 + 0x1c),param_1);
    FUN_00419db0(param_1,1);
  }
  if ((param_2 == 0x6b) || (param_2 == UVar4)) {
    FUN_00440550(0x48);
    iVar2 = *(int *)(param_1 + 0x558);
    if (*(uint *)(param_1 + 0x54c) < 100U - iVar2) {
      *(uint *)(param_1 + 0x54c) = *(uint *)(param_1 + 0x54c) + iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x54c) = 100;
    }
    if (*(uint *)(param_1 + 0x550) < 100U - iVar2) {
      *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) + iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x550) = 100;
    }
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0x7d1,*(undefined4 *)(param_1 + 0x1c),param_1);
    FUN_00419db0(param_1,1);
  }
  return;
}



void FUN_0041a750(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  iVar2 = param_1;
  bVar1 = false;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x20) & 0x10000) == 0) {
      FUN_00417120(5000,&param_1,&local_38);
      local_30 = *(int *)(iVar2 + 0x24);
      local_2c = *(int *)(iVar2 + 0x28);
      local_28 = param_1 + -1 + local_30;
      local_24 = local_38 + -1 + local_2c;
      FUN_00417120(5000,&param_1,&local_38);
      local_18 = *(int *)(iVar2 + 0x548) + *(int *)(iVar2 + 0x24);
      local_1c = *(int *)(iVar2 + 0x28);
      local_20 = local_18 - param_1;
      local_18 = local_18 + -1;
      local_14 = local_38 + -1 + local_1c;
      FUN_00417120(0x1389,&param_1,&local_38);
      local_c = *(int *)(iVar2 + 0x28);
      local_10 = local_28 + 1;
      local_8 = local_20 + -1;
      local_4 = local_38 + -1 + local_c;
    }
    else {
      FUN_00417120(5000,&param_1,&local_38);
      local_30 = *(int *)(iVar2 + 0x24);
      local_2c = *(int *)(iVar2 + 0x28);
      local_28 = param_1 + -1 + local_30;
      local_24 = local_38 + -1 + local_2c;
      FUN_00417120(5000,&param_1,&local_38);
      local_20 = *(int *)(iVar2 + 0x24);
      local_14 = *(int *)(iVar2 + 0x548) + *(int *)(iVar2 + 0x28);
      local_1c = local_14 - local_38;
      local_14 = local_14 + -1;
      local_18 = param_1 + -1 + local_20;
      FUN_00417120(0x1389,&param_1,&local_38);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = local_24 + 1;
      local_8 = param_1 + -1 + local_10;
      local_4 = local_1c + -1;
    }
    uVar4 = param_3;
    uVar3 = param_2;
    local_34 = 0;
    iVar5 = FUN_004172c0(&local_30,param_2,param_3);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x20000) == 0) {
        bVar1 = true;
      }
      else {
        local_34 = 1;
      }
    }
    iVar5 = FUN_004172c0(&local_20,uVar3,uVar4);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x20000) == 0) {
        local_34 = 1;
      }
      else {
        bVar1 = true;
      }
    }
    FUN_004172c0(&local_10,uVar3,uVar4);
    if (bVar1) {
      FUN_0041a640(iVar2,0x6d);
    }
    if (local_34 != 0) {
      FUN_0041a640(iVar2,0x6b);
    }
  }
  return;
}



void FUN_0041a9a0(int *param_1,int *param_2,int param_3,int param_4)

{
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_3 != 0) {
      FUN_00417900(param_1,(((param_2[2] - param_1[2]) + *param_1) - *param_2 >> 1) + *param_2,
                   param_1[1]);
    }
    if (param_4 != 0) {
      FUN_00417900(param_1,*param_1,
                   (((param_1[1] + param_2[3]) - param_1[3]) - param_2[1] >> 1) + param_2[1]);
    }
  }
  return;
}



void FUN_0041aa10(int *param_1,int param_2,int param_3)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + param_2;
    param_1[2] = param_1[2] + param_2;
    param_1[1] = param_1[1] + param_3;
    param_1[3] = param_1[3] + param_3;
  }
  return;
}



void FUN_0041aa40(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    do {
      if ((*(byte *)(param_1 + 0x20) & 0x40) != 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_0041aa40(*(int *)(param_1 + 0xc),param_2,param_3);
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          FUN_004151a0(param_1,0x4a,param_2,param_3);
        }
      }
      param_1 = *(int *)(param_1 + 4);
    } while (param_1 != 0);
  }
  return;
}



void FUN_0041aa90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  iVar1 = param_2;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00417120(0xbbf,&param_1,&param_2);
    piVar2 = param_3;
    local_10 = *param_3;
    local_c = param_3[1];
    local_8 = param_1 + -1 + local_10;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,0,0xbbf,&local_10,1,0);
    local_c = piVar2[1];
    local_10 = *piVar2 + param_1;
    local_8 = piVar2[2] - param_1;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,1,0xbc0,&local_10,1,0);
    local_8 = piVar2[2];
    local_c = piVar2[1];
    local_10 = (local_8 - param_1) + 1;
    local_4 = param_2 + -1 + local_c;
    FUN_00412fb0(iVar1,2,0xbbf,&local_10,1,0x400000);
    FUN_00414e30(iVar1,1);
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 3;
  }
  return;
}



int FUN_0041abb0(undefined4 param_1)

{
  int iVar1;

  iVar1 = FUN_00416d90(0,param_1,0xffffffff,0,0,0,0,FUN_0041ac00,0);
  FUN_00414b40(iVar1,500,0x32);
  *(undefined4 *)(iVar1 + 0x18) = 0xc;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x204;
  return iVar1;
}



void FUN_0041ac00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 9) {
    FUN_0041ac30(param_1);
  }
  FUN_00415850(param_1,param_2,param_3,param_4);
  return;
}



void FUN_0041ac30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined local_100 [256];

  bVar7 = *(int *)(param_1 + 0x528) == 0x29a;
  bVar8 = (&DAT_00ea04e0)[*(int *)(param_1 + 0x56c)] != 0;
  bVar4 = bVar8 || bVar7;
  iVar1 = (&DAT_00ea02c0)[*(int *)(param_1 + 0x56c)];
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x28);
  if (!bVar8 && !bVar7) {
    FUN_0049eb80(local_100,&DAT_004b666c,*(int *)(param_1 + 0x528) + 1);
    FUN_004173c0(0,iVar2 + 5,iVar3 + 0x14,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0,
                 0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x56c);
  iVar5 = FUN_00420f70(uVar6);
  if (iVar5 == 0) {
    iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c));
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar5 * 0xd]);
  }
  else {
    uVar6 = FUN_0041bce0(uVar6);
  }
  FUN_0049eb80(local_100,&DAT_004b2304,uVar6);
  FUN_004173c0(6,iVar2 + 0x19,iVar3 + 10,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0,0
              );
  iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c));
  uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[iVar5 * 0xd]);
  iVar5 = FUN_0041c4d0(*(undefined4 *)(param_1 + 0x1c),uVar6);
  uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[iVar5 * 0xd]);
  FUN_0049eb80(local_100,s__s__s_004b6708,uVar6);
  FUN_004173c0(0,iVar2 + 0x19,iVar3 + 0x23,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0
               ,0);
  if (bVar4) {
LAB_0041ae0c:
    if (iVar1 == 0) {
      if (bVar8 || bVar7) {
        uVar6 = FUN_00421360(s__MONDOTEXT_H_0549_Retired_004b66b8);
        FUN_0049eb80(local_100,uVar6);
      }
      else {
        uVar6 = FUN_0041bc20(*(undefined4 *)(param_1 + 0x564));
        uVar6 = FUN_00421360(s__MONDOTEXT_H_0550_Current____s_004b6698,uVar6);
        FUN_0049eb80(local_100,uVar6);
      }
      goto LAB_0041ae7d;
    }
  }
  else if (iVar1 == 0) {
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0548_Lap__d_004b66ec,*(int *)(param_1 + 0x560) + 1);
    FUN_0049eb80(local_100,uVar6);
    FUN_004173c0(0,iVar2 + 0xd2,iVar3 + 0x14,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0
                 ,0,0);
    goto LAB_0041ae0c;
  }
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0531_Final_004b66d4);
  FUN_0049eb80(local_100,uVar6);
LAB_0041ae7d:
  FUN_004173c0(0,iVar2 + 0xd2,iVar3 + 0x1e,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,0,0
               ,0);
  if (!bVar8 && !bVar7) {
    uVar6 = FUN_0041bc20(*(undefined4 *)(param_1 + 0x568));
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0551_Total____s_004b6678,uVar6);
    FUN_0049eb80(local_100,uVar6);
    FUN_004173c0(0,iVar2 + 0x154,iVar3 + 0x1e,0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_100,
                 bVar4,bVar4,bVar4);
  }
  return;
}



int FUN_0041af00(uint param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;

  iVar1 = param_1;
  FUN_00417120(0x3f4,&local_18,local_14);
  iVar2 = *(int *)(param_1 + 0x24);
  param_1 = (local_18 + 10) * param_4 - 10;
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  else {
    iVar2 = iVar2 + ((param_3 >> 1) - (param_1 >> 1));
  }
  FUN_00417120(0x44e,&local_1c,&local_20);
  local_8 = iVar2 + -1 + param_1;
  local_4 = local_20 + -1 + param_2;
  local_c = param_2;
  local_10 = iVar2;
  FUN_00412fb0(iVar1,0,0x44e,&local_10,1,0);
  FUN_00419030(iVar1,0,0,0);
  FUN_00417120(0x44d,&local_1c,&local_20);
  local_c = param_2;
  local_8 = iVar2 + -5 + local_1c;
  local_4 = local_20 + -1 + param_2;
  local_10 = iVar2 + -4;
  FUN_00412fb0(iVar1,1,0x44d,&local_10,1,0);
  FUN_00419030(iVar1,1,0,0);
  *param_5 = ((iVar2 + -4) - (local_18 >> 1)) + 2;
  iVar3 = 1;
  if (param_4 == 4) {
    uVar4 = (param_1 + local_18 * -3) / 3;
    FUN_00417120(0x44c,&local_1c,&local_20);
    iVar3 = uVar4 + 5 + iVar2;
    local_10 = (local_18 >> 1) + iVar3;
    local_c = param_2;
    local_8 = (local_1c - 1) + local_10;
    local_4 = local_20 + -1 + param_2;
    FUN_00412fb0(iVar1,2,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,2,0,0);
    param_5[1] = iVar3 + 6;
    iVar3 = iVar3 + uVar4 + local_18;
    local_10 = (local_18 >> 1) + iVar3;
    local_8 = (local_1c - 1) + local_10;
    local_4 = local_20 + -1 + param_2;
    local_c = param_2;
    FUN_00412fb0(iVar1,3,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,3,0,0);
    param_5[2] = iVar3 + 4;
    iVar3 = 3;
  }
  else if (param_4 == 3) {
    FUN_00417120(0x44c,&local_1c,&local_20);
    local_c = param_2;
    local_10 = (iVar2 + (param_1 >> 1)) - (local_1c >> 1);
    local_8 = local_10 + -1 + local_1c;
    local_4 = local_20 + -1 + param_2;
    FUN_00412fb0(iVar1,2,0x44c,&local_10,1,0);
    FUN_00419030(iVar1,2,0,0);
    iVar3 = 2;
    param_5[1] = (iVar2 - (local_18 >> 1)) + -6 + (param_1 >> 1);
  }
  FUN_00417120(0x44d,&local_1c,&local_20);
  local_c = param_2;
  iVar2 = (iVar2 - local_1c) + 4 + param_1;
  local_8 = iVar2 + -1 + local_1c;
  local_4 = local_20 + -1 + param_2;
  local_10 = iVar2;
  FUN_00412fb0(iVar1,iVar3 + 1,0x44d,&local_10,1,0x400000);
  FUN_00419030(iVar1,iVar3 + 1,0,0);
  param_5[iVar3] = ((local_1c >> 1) - (local_18 >> 1)) + iVar2;
  return local_20 + 4;
}



int FUN_0041b260(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;

  iVar2 = 0;
  iVar3 = 0;
  local_c = 0;
  iVar4 = 0;
  iVar1 = FUN_00416d90(param_1,param_2,0xffffffff,0,0,0,0,0,0);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  if (param_3 != (int *)0x0) {
    local_c = param_3[1];
    iVar3 = *param_3;
    iVar4 = param_3[2];
    iVar2 = param_3[3];
  }
  FUN_00414b40(iVar1,(iVar4 - iVar3) + 1,(iVar2 - local_c) + 1);
  FUN_00414b60(iVar1,iVar3,local_c);
  FUN_00419830(iVar1,param_4,0);
  FUN_00414e60(iVar1,1);
  *(undefined4 *)(iVar1 + 0x18) = 8;
  return iVar1;
}



void FUN_0041b300(int param_1)

{
  byte bVar1;
  int iVar2;

  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    do {
      bVar1 = (byte)*(undefined4 *)(iVar2 + 0x18);
      if ((bVar1 & 0xc) == 0xc) {
        if ((bVar1 & 3) != 3) {
          FUN_00412fb0(iVar2,0,0,0,0,0);
          FUN_00412fb0(iVar2,1,0,0,0,0);
          FUN_00412fb0(iVar2,2,0,0,0,0);
        }
        *(uint *)(iVar2 + 0x508) = *(uint *)(iVar2 + 0x508) & 0xfff7ffff;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
    FUN_00417ca0(param_1);
  }
  return;
}



undefined4 FUN_0041b380(int param_1)

{
  int iVar1;

  if (((byte)*(undefined4 *)(param_1 + 0x18) & 0xc) == 0xc) {
    return 1;
  }
  if (((*(uint *)(param_1 + 0x20) & 4) == 0) && ((*(uint *)(param_1 + 0x20) & 0x100) == 0)) {
    iVar1 = FUN_00414e80(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



int FUN_0041b3c0(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1;
  if (param_1 != 0) {
    do {
      iVar1 = FUN_0041b380(iVar2);
      if ((iVar1 != 0) && (param_1 != iVar2)) {
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  return iVar2;
}



int * FUN_0041b3f0(int *param_1)

{
  int iVar1;
  int *piVar2;

  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = FUN_0041b380(piVar2);
      if ((iVar1 != 0) && (param_1 != piVar2)) {
        return piVar2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return piVar2;
}



void FUN_0041b420(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00411810();
  if (((*(int *)(DAT_0050c454 + 8) == 1) &&
      (((param_1 == 9 || ((0x24 < param_1 && (param_1 < 0x29)))) && (DAT_004d87c8 == 0)))) &&
     ((iVar1 != 0 && (*(int *)(iVar1 + 0xc) != 0)))) {
    uVar2 = FUN_0041b3c0(*(int *)(iVar1 + 0xc),1);
    FUN_00414f10(uVar2);
  }
  return;
}



void FUN_0041b470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = FUN_00414d90(param_1,4);
  if (iVar1 != 0) {
    FUN_00414e60(iVar1,param_2);
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  }
  iVar1 = FUN_00414d90(param_1,2);
  if (iVar1 != 0) {
    FUN_00414e60(iVar1,param_3);
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 4;
  }
  return;
}



void FUN_0041b4d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_570 [348];

  if (param_1 != 0) {
    piVar3 = local_570;
    for (iVar1 = 0x15c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar1 = FUN_004137d0(param_1);
    while (iVar2 = local_570[3], iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = iVar1;
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if ((*(int *)(iVar1 + 0x18) == 0xc) && (*(uint *)(iVar1 + 0x528) < *(uint *)(iVar2 + 0x528))
           ) {
          iVar2 = iVar1;
        }
      }
      FUN_00416890(iVar2);
      FUN_00416840(local_570,iVar2);
      iVar1 = FUN_004137d0(param_1);
    }
    while (iVar2 != 0) {
      local_570[3] = iVar2;
      FUN_00416890(iVar2);
      FUN_00416840(param_1,iVar2);
      iVar2 = local_570[3];
    }
    FUN_00417ca0(param_1);
  }
  return;
}



int ** FUN_0041b590(int **param_1)

{
  int **ppiVar1;

  if (param_1 == (int **)0x0) {
    return (int **)0x0;
  }
  ppiVar1 = param_1 + 7;
  do {
    if (((*(byte *)(param_1 + 8) & 0x80) != 0) && ((int *)(*param_1)[7] != *ppiVar1)) break;
    param_1 = (int **)*param_1;
  } while (param_1 != (int **)0x0);
  while( true ) {
    if (param_1 == (int **)0x0) {
      return (int **)0x0;
    }
    if ((param_1[6] == (int *)0xa) && (((uint)param_1[8] & 0x20000) != 0)) break;
    param_1 = (int **)param_1[1];
  }
  return param_1;
}



int ** FUN_0041b5e0(int **param_1,int *param_2)

{
  int **ppiVar1;

  if (param_1 == (int **)0x0) {
    return (int **)0x0;
  }
  ppiVar1 = param_1 + 7;
  do {
    if (((*(byte *)(param_1 + 8) & 0x80) != 0) && ((int *)(*param_1)[7] != *ppiVar1)) break;
    param_1 = (int **)*param_1;
  } while (param_1 != (int **)0x0);
  while( true ) {
    if (param_1 == (int **)0x0) {
      return (int **)0x0;
    }
    if (((param_1[6] == (int *)0xa) && (param_1[7] == *ppiVar1)) && (param_1[0x150] == param_2))
    break;
    param_1 = (int **)param_1[1];
  }
  return param_1;
}



void FUN_0041b630(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 0x20) != 0) {
    FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4d0),*(undefined *)(param_1 + 0x4d1),
                 *(undefined *)(param_1 + 0x4d2),*(undefined *)(param_1 + 0x4d3));
    return;
  }
  FUN_00414be0(param_1,*(undefined *)(param_1 + 0x4c4),*(undefined *)(param_1 + 0x4c5),
               *(undefined *)(param_1 + 0x4c6),*(undefined *)(param_1 + 0x4c7));
  return;
}



void FUN_0041b690(void)

{
  if (((DAT_004b5d7c != 0) && (DAT_004d87b0 == 0)) && (DAT_004d87b4 != 0)) {
    FUN_00414d00(DAT_004d87b4);
    DAT_004d87b4 = 0;
    FUN_00414e60(DAT_004d87b8,1);
    FUN_004151a0(DAT_004d87b8,100,DAT_004d87ac,0);
    DAT_004d87b8 = 0;
    DAT_004b5d7c = 0;
  }
  return;
}



undefined4 FUN_0041b700(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_004e9ebc != 0) {
    return 0;
  }
  puVar2 = &DAT_004e9d18;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_004e9918;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004e9ec0 = 0;
  DAT_004b6710 = 1;
  FUN_0041ba00();
  DAT_004e9ebc = 1;
  return 1;
}



void FUN_0041b750(int param_1,undefined4 param_2)

{
  (&DAT_004e9d18)[param_1] = param_2;
  return;
}



undefined4 FUN_0041b760(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;

  param_3 = param_3 & DAT_004e9eac;
  uVar1 = 1;
  if (param_3 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = DAT_004eb3b4;
  if ((param_3 & 1) == 0) goto LAB_0041b7dc;
  if (param_4 == 0) {
LAB_0041b7ca:
    *(undefined2 *)(param_1 + 0x26) = 0;
  }
  else {
    if (DAT_004b6710 == 0) {
      DAT_004b6710 = 1;
    }
    *(short *)(param_1 + 0x26) = DAT_004b6710;
    DAT_004b6710 = DAT_004b6710 + 1;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    FUN_0041b950(param_1);
    if (*(int *)(param_1 + 0x14) == 0) goto LAB_0041b7ca;
  }
  uVar1 = FUN_004047b0(param_1,param_2);
LAB_0041b7dc:
  if ((param_3 & 4) != 0) {
    FUN_00426910(param_1);
  }
  return uVar1;
}



int FUN_0041b7f0(void)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  iVar1 = FUN_0041d6b0();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_004e9eb0 == 0) {
    return 0;
  }
  DAT_004e9ea8 = 0;
  do {
    iVar1 = FUN_00404880(&DAT_00ec7ba0);
    if (iVar1 != 1) break;
    iVar2 = iVar2 + 1;
    if (DAT_00ec7bbc == 0) {
      FUN_0041b940(&DAT_00ec7ba0);
    }
    else {
      iVar1 = FUN_0041d350(DAT_00ec7bbc);
      if ((((iVar1 < 0) && (DAT_00ec7bc4 != 0x21)) && (DAT_00ec7bc4 != 0x22)) &&
         ((DAT_00ec7bc4 != 0x28 && (DAT_00ec7bc4 != 0x20)))) {
        if (DAT_004eb1c8 != 0) {
          FUN_0041d2a0(DAT_00ec7bbc);
        }
      }
      else {
        if (DAT_00ec7bc6 != 0) {
          FUN_0041b960(DAT_00ec7bbc,DAT_00ec7bc6);
          iVar1 = FUN_0041b9a0(DAT_00ec7bbc,DAT_00ec7bc6);
          if (iVar1 != 0) goto LAB_0041b8cf;
        }
        FUN_0041b8f0(&DAT_00ec7ba0);
      }
    }
LAB_0041b8cf:
  } while (DAT_004e9ea8 == 0);
  FUN_00426910();
  return iVar2;
}



undefined4 FUN_0041b8f0(int param_1)

{
  undefined4 uVar1;

  if ((*(ushort *)(param_1 + 0x24) < 100) &&
     ((code *)(&DAT_004e9d18)[*(ushort *)(param_1 + 0x24)] != (code *)0x0)) {
    uVar1 = (*(code *)(&DAT_004e9d18)[*(ushort *)(param_1 + 0x24)])(param_1);
    return uVar1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041b920(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004d9418;
  for (iVar1 = 0x4140; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_004e9eb8 = 0;
  return;
}



undefined4 FUN_0041b940(void)

{
  return 1;
}



void FUN_0041b950(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041b960(undefined4 param_1,undefined2 param_2)

{
  _DAT_004d8c16 = 0;
  _DAT_004d8c18 = param_2;
  _DAT_004d8bfc = param_1;
  _DAT_004d8c14 = 0x28;
  _DAT_004d8c10 = 2;
  FUN_004047b0(&DAT_004d8bf0,param_1);
  return;
}



undefined4 FUN_0041b9a0(int param_1,int param_2)

{
  int *piVar1;

  piVar1 = &DAT_004e991c;
  while ((param_1 != piVar1[-1] || (param_2 != *piVar1))) {
    piVar1 = piVar1 + 2;
    if ((int *)((int)&DAT_004e9d18 + 3) < piVar1) {
      (&DAT_004e9918)[DAT_004e9ec0 * 2] = param_1;
      (&DAT_004e991c)[DAT_004e9ec0 * 2] = param_2;
      DAT_004e9ec0 = DAT_004e9ec0 + 1;
      if (0x7f < DAT_004e9ec0) {
        DAT_004e9ec0 = 0;
      }
      return 0;
    }
  }
  return 1;
}



void FUN_0041ba00(void)

{
  FUN_0041b750(0x22,&LAB_0041ce60);
  FUN_0041b750(0x21,&LAB_0041cb90);
  FUN_0041b750(0x20,&LAB_0041ccd0);
  FUN_0041b750(2,&LAB_0041d160);
  FUN_0041b750(0x26,&LAB_0041d1d0);
  FUN_0041b750(0x27,&LAB_0041d200);
  FUN_0041b750(0x29,&LAB_00404a70);
  FUN_0041b750(0x28,&LAB_0041bba0);
  FUN_0041b750(0x2a,&LAB_0041d2f0);
  FUN_0041b750(0x24,&LAB_0041d0b0);
  FUN_0041b750(0x2c,&LAB_0041d5b0);
  FUN_0041b750(0x2d,&LAB_0041d540);
  FUN_0041b750(0x2e,&LAB_0041d600);
  FUN_0041b750(0x32,FUN_0041d6f0);
  FUN_0041b750(0x2f,&LAB_0041d0b0);
  FUN_0041b750(0x33,&LAB_0041dca0);
  FUN_0041b750(0x34,&LAB_0041dce0);
  FUN_0041b750(0x35,&LAB_0041dd20);
  FUN_0041b750(0x36,&LAB_0041de60);
  FUN_0041b750(0x17,&LAB_0041e260);
  FUN_0041b750(0x37,&LAB_0041e590);
  FUN_0041b750(0x38,&LAB_0041e620);
  FUN_0041b750(0x39,&LAB_0041e6c0);
  FUN_0041b750(0x3a,FUN_0041c330);
  FUN_0041b750(0x3b,&LAB_0041c3e0);
  FUN_0041b750(0x3c,&LAB_0041c490);
  FUN_0041b750(0x3d,&LAB_0041c490);
  return;
}



undefined * FUN_0041bc20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = __ftol();
  iVar2 = __ftol();
  iVar3 = __ftol();
  if (iVar3 == 100) {
    iVar3 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x3c) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 != 0) {
    FUN_0049eb80(&DAT_004e9f20,s__d___2d___2d_004b6738,iVar1);
    return &DAT_004e9f20;
  }
  FUN_0049eb80(&DAT_004e9f20,s___2d___2d_004b672c,iVar2,iVar3);
  return &DAT_004e9f20;
}



undefined * FUN_0041bcc0(int param_1)

{
  return &DAT_00e9f3c4 + param_1 * 0xb0;
}



undefined * FUN_0041bce0(int param_1)

{
  FUN_0048c380(&DAT_004ead88,&DAT_00e9f3c4 + param_1 * 0xb0,0x20);
  return &DAT_004ead88;
}



undefined * FUN_0041bd10(void)

{
  int iVar1;
  undefined local_104 [88];
  undefined local_ac [172];

  iVar1 = FUN_00486f50(local_104);
  if (iVar1 == 0) {
    FUN_0048c380(&DAT_004ea098,local_ac,0x40);
    return &DAT_004ea098;
  }
  return (undefined *)0x0;
}



void FUN_0041bd50(undefined4 param_1)

{
  DAT_004eb1e0 = param_1;
  return;
}



void FUN_0041bd60(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_004e9ed8;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_004ea940;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_004eb188;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void FUN_0041bd90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  DAT_004eb224 = param_2;
  DAT_004eb228 = param_3;
  DAT_004eb1dc = param_1;
  iVar1 = 0;
  do {
    FUN_0041e7c0(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  return;
}



void FUN_0041bdd0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;

  if (DAT_004eb1dc != 0) {
    FUN_0041e880();
    DAT_004eb1c4 = 4;
    puVar5 = (undefined4 *)&DAT_004ea988;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_004b6748;
    do {
      pcVar6 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar7 = &DAT_004ea988;
    do {
      pcVar8 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    puVar5 = (undefined4 *)(pcVar6 + -uVar3);
    puVar9 = (undefined4 *)(pcVar8 + -1);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00411730(1);
    FUN_00411740(DAT_004eb224,DAT_004eb228,1,7);
    DAT_004e9ecc = DAT_004b2940;
    DAT_004b2940 = 1;
    DAT_004eb22c = 1;
    DAT_00ea0250 = 1;
    DAT_004b2948 = 0;
  }
  return;
}



void FUN_0041be80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined local_400 [1024];

  if ((DAT_004eb1dc != 0) && (DAT_00ea0250 != 0)) {
    if (DAT_004eb22c != 0) {
      DAT_004eb22c = 0;
      return;
    }
    switch(param_1) {
    case 8:
      if (4 < DAT_004eb1c4) {
        FUN_0049f4e0(DAT_004eb1c4 + 0x4ea987,&DAT_004ea988 + DAT_004eb1c4,0x400 - DAT_004eb1c4);
        DAT_004eb1c4 = DAT_004eb1c4 - 1;
        DAT_004ead87 = 0;
      }
      break;
    default:
      if (DAT_004d1f9c < 2) {
        uVar4 = *(ushort *)(PTR_DAT_004d1d90 + param_1 * 2) & 0x107;
      }
      else {
        uVar4 = FUN_0049f440(param_1,0x107);
      }
      if ((((uVar4 != 0) || (param_1 == 0x20)) && (DAT_004eb1c4 < 0x400)) &&
         ((param_1 != 0x20 || (DAT_004eb1c4 != 0)))) {
        FUN_0049f4e0(&DAT_004ea989 + DAT_004eb1c4,&DAT_004ea988 + DAT_004eb1c4,0x3ff - DAT_004eb1c4)
        ;
        (&DAT_004ea988)[DAT_004eb1c4] = (char)param_1;
        DAT_004eb1c4 = DAT_004eb1c4 + 1;
      }
      break;
    case 0xd:
      FUN_00411730(0);
      DAT_00ea0250 = 0;
      DAT_004b2948 = 1;
      DAT_004b2940 = DAT_004e9ecc;
      uVar2 = FUN_0041bce0(DAT_004eb3b4,&DAT_004ea98c);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0393__s_says___s__004b6750,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
      break;
    case 0x1b:
      FUN_00411730(0);
      DAT_004b2940 = DAT_004e9ecc;
      DAT_00ea0250 = 0;
      DAT_004b2948 = 1;
      break;
    case 0x23:
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_004ea988;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      DAT_004eb1c4 = ~uVar4 - 1;
      break;
    case 0x24:
      DAT_004eb1c4 = 0;
      break;
    case 0x25:
      if (DAT_004eb1c4 != 0) {
        DAT_004eb1c4 = DAT_004eb1c4 - 1;
      }
      break;
    case 0x27:
      uVar4 = 0xffffffff;
      pcVar5 = &DAT_004ea988;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (DAT_004eb1c4 < ~uVar4 - 1) {
        DAT_004eb1c4 = DAT_004eb1c4 + 1;
      }
      break;
    case 0x2e:
      break;
    }
    iVar3 = FUN_00418680(&DAT_004ea98c,0,0,DAT_004eb1c4 - 4);
    FUN_00411740(iVar3 + 5 + DAT_004eb224,DAT_004e9f18,1,7);
  }
  return;
}



void FUN_0041c130(undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  FUN_0041e880();
  FUN_0041e800(param_1);
  iVar1 = FUN_00414d90(0,0x186b4);
  FUN_00417fe0(iVar1,param_1,0);
  uVar2 = FUN_004137d0(iVar1);
  if (6 < uVar2) {
    *(uint *)(iVar1 + 0x504) = uVar2 - 6;
    FUN_00417ca0(iVar1);
  }
  return;
}



void FUN_0041c190(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;

  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    pcVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      FUN_0041d0c0(param_1,0xffffffff,DAT_004eb3b4);
      FUN_0041c130(param_1);
    }
  }
  return;
}


#endif
