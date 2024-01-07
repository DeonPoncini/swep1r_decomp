#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
undefined4 * FUN_004a8cc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  undefined4 *puVar3;
  undefined4 *puVar4;

  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    puVar3 = (undefined4 *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_004d422c < dwBytes) {
LAB_004a8d34:
        if (puVar3 != (undefined4 *)0x0) {
          return puVar3;
        }
      }
      else {
        FUN_004a1670(9);
        puVar3 = (undefined4 *)FUN_004a34c0(dwBytes >> 4);
        FUN_004a16f0(9);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = puVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          goto LAB_004a8d34;
        }
      }
      puVar3 = (undefined4 *)HeapAlloc(DAT_00ecd604,8,dwBytes);
    }
    if ((puVar3 != (undefined4 *)0x0) || (DAT_00dfab64 == 0)) {
      return puVar3;
    }
    iVar1 = FUN_004a3950(dwBytes);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}



int FUN_004a8d70(uint param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar1 = *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar2 = (undefined4 *)FUN_004a3dc0();
      *puVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



int FUN_004a8de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;

  iVar1 = 0;
  if (DAT_00dfaf24 != (FARPROC)0x0) {
LAB_004a8e30:
    if (DAT_00dfaf28 != (FARPROC)0x0) {
      iVar1 = (*DAT_00dfaf28)();
    }
    if ((iVar1 != 0) && (DAT_00dfaf2c != (FARPROC)0x0)) {
      iVar1 = (*DAT_00dfaf2c)(iVar1);
    }
    iVar1 = (*DAT_00dfaf24)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00dfaf24 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_00dfaf24 != (FARPROC)0x0) {
      DAT_00dfaf28 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_00dfaf2c = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_004a8e30;
    }
  }
  return 0;
}



void FUN_004a8e70(void)

{
  if (DAT_00dfafe8 == 0) {
    FUN_004a1670(0xb);
    if (DAT_00dfafe8 == 0) {
      FUN_004a8eb0();
      DAT_00dfafe8 = DAT_00dfafe8 + 1;
    }
    FUN_004a16f0(0xb);
  }
  return;
}



void FUN_004a8eb0(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  bool bVar12;

  FUN_004a1670(0xc);
  DAT_00dfaf30 = 0;
  DAT_004d50d8 = 0xffffffff;
  DAT_004d50c8 = 0xffffffff;
  pbVar3 = (byte *)FUN_004aa990(&DAT_004b04c0);
  if (pbVar3 == (byte *)0x0) {
    FUN_004a16f0(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00dfaf38);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_00dfaf30 = 1;
    DAT_004d5030 = DAT_00dfaf38 * 0x3c;
    if (DAT_00dfaf7e != 0) {
      DAT_004d5030 = DAT_004d5030 + DAT_00dfaf8c * 0x3c;
    }
    if ((DAT_00dfafd2 == 0) || (DAT_00dfafe0 == 0)) {
      DAT_004d5034 = 0;
      DAT_004d5038 = 0;
    }
    else {
      DAT_004d5034 = 1;
      DAT_004d5038 = (DAT_00dfafe0 - DAT_00dfaf8c) * 0x3c;
    }
    FUN_004aa6e0(PTR_s_Pacific_Standard_Time_004d50c0,&DAT_00dfaf3c,0x40);
    FUN_004aa6e0(PTR_s_Pacific_Daylight_Time_004d50c4,&DAT_00dfaf90,0x40);
    PTR_s_Pacific_Daylight_Time_004d50c4[0x3f] = 0;
    PTR_s_Pacific_Standard_Time_004d50c0[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    pbVar8 = pbVar3;
    puVar9 = DAT_00dfafe4;
    if (DAT_00dfafe4 != (undefined4 *)0x0) {
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *(byte *)puVar9;
        if (bVar1 != *(byte *)puVar9) {
LAB_004a9007:
          iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_004a900c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < *(byte *)((int)puVar9 + 1);
        if (bVar1 != *(byte *)((int)puVar9 + 1)) goto LAB_004a9007;
        pbVar8 = pbVar8 + 2;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004a900c:
      if (iVar5 == 0) goto LAB_004a9179;
    }
    FUN_0049f200(DAT_00dfafe4);
    uVar6 = 0xffffffff;
    pbVar8 = pbVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    DAT_00dfafe4 = (undefined4 *)FUN_0049f270(~uVar6);
    if (DAT_00dfafe4 != (undefined4 *)0x0) {
      uVar6 = 0xffffffff;
      pbVar8 = pbVar3;
      do {
        pbVar10 = pbVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar10 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar10;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      puVar9 = (undefined4 *)(pbVar10 + -uVar6);
      puVar11 = DAT_00dfafe4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar11 = *(undefined *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_004a16f0(0xc);
      _strncpy(PTR_s_Pacific_Standard_Time_004d50c0,(char *)pbVar3,3);
      pbVar8 = pbVar3 + 3;
      PTR_s_Pacific_Standard_Time_004d50c0[3] = 0;
      bVar1 = *pbVar8;
      if (bVar1 == 0x2d) {
        pbVar8 = pbVar3 + 4;
      }
      iVar5 = FUN_0049f040(pbVar8);
      DAT_004d5030 = iVar5 * 0xe10;
      for (; (bVar2 = *pbVar8, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar8 = pbVar8 + 1) {
      }
      if (*pbVar8 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        iVar5 = FUN_0049f040(pbVar8);
        DAT_004d5030 = DAT_004d5030 + iVar5 * 0x3c;
        bVar2 = *pbVar8;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar8 == 0x3a) {
          pbVar8 = pbVar8 + 1;
          iVar5 = FUN_0049f040(pbVar8);
          DAT_004d5030 = DAT_004d5030 + iVar5;
          bVar2 = *pbVar8;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_004d5030 = -DAT_004d5030;
      }
      DAT_004d5034 = (int)(char)*pbVar8;
      if (DAT_004d5034 == 0) {
        *PTR_s_Pacific_Daylight_Time_004d50c4 = 0;
        return;
      }
      _strncpy(PTR_s_Pacific_Daylight_Time_004d50c4,(char *)pbVar8,3);
      PTR_s_Pacific_Daylight_Time_004d50c4[3] = 0;
      return;
    }
  }
LAB_004a9179:
  FUN_004a16f0(0xc);
  return;
}



// Library Function - Single Match
//  __isindst
//
// Library: Visual Studio 1998 Release

int __cdecl __isindst(tm *_Time)

{
  int iVar1;

  FUN_004a1670(0xb);
  iVar1 = FUN_004a91c0(_Time);
  FUN_004a16f0(0xb);
  return iVar1;
}



bool FUN_004a91c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;

  if (DAT_004d5034 == 0) {
    return false;
  }
  iVar6 = param_1[5];
  if ((iVar6 == DAT_004d50c8) && (iVar6 == DAT_004d50d8)) goto LAB_004a9394;
  if (DAT_00dfaf30 == 0) {
    FUN_004a9430(1,1,iVar6,4,1,0,0,2,0,0,0);
    iVar6 = param_1[5];
    uVar8 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar7 = 10;
LAB_004a9388:
    uVar5 = 1;
    uVar11 = 0;
  }
  else {
    if (DAT_00dfafd0 != 0) {
      uVar3 = 0;
      uVar8 = 0;
      uVar10 = DAT_00dfafd4._2_2_;
    }
    else {
      uVar3 = DAT_00dfafd4 & 0xffff;
      uVar8 = DAT_00dfafd4._2_2_;
      uVar10 = 0;
    }
    FUN_004a9430(1,DAT_00dfafd0 == 0,iVar6,DAT_00dfafd2,uVar8,uVar3,uVar10,DAT_00dfafd8 & 0xffff,
                 DAT_00dfafd8 >> 0x10,DAT_00dfafdc & 0xffff,DAT_00dfafdc >> 0x10);
    uVar8 = DAT_00dfaf88._2_2_;
    uVar10 = DAT_00dfaf84._2_2_;
    uVar7 = DAT_00dfaf7e;
    if (DAT_00dfaf7c == 0) {
      uVar3 = DAT_00dfaf88 & 0xffff;
      uVar4 = DAT_00dfaf84 & 0xffff;
      uVar1 = DAT_00dfaf80 & 0xffff;
      iVar6 = param_1[5];
      uVar9 = DAT_00dfaf80._2_2_;
      goto LAB_004a9388;
    }
    uVar3 = DAT_00dfaf88 & 0xffff;
    uVar4 = DAT_00dfaf84 & 0xffff;
    iVar6 = param_1[5];
    uVar1 = 0;
    uVar9 = 0;
    uVar5 = 0;
    uVar11 = DAT_00dfaf80._2_2_;
  }
  FUN_004a9430(0,uVar5,iVar6,uVar7,uVar9,uVar1,uVar11,uVar4,uVar10,uVar3,uVar8);
LAB_004a9394:
  iVar6 = param_1[7];
  if (DAT_004d50cc < DAT_004d50dc) {
    if ((iVar6 < DAT_004d50cc) || (DAT_004d50dc < iVar6)) {
      return false;
    }
    if ((DAT_004d50cc < iVar6) && (iVar6 < DAT_004d50dc)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_004d50dc) || (DAT_004d50cc < iVar6)) {
      return true;
    }
    if ((DAT_004d50dc < iVar6) && (iVar6 < DAT_004d50cc)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_004d50cc) {
    return iVar2 < DAT_004d50e0;
  }
  return (int)PTR_DAT_004d50d0 <= iVar2;
}



void FUN_004a9430(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;

  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_004d50e4 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_004d511c + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + -0x63db + param_3 * 0x16d + iVar1 + 1) % 7;
    if (iVar2 < param_6) {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_004d50e8 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_004d5120 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_004d50e4 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_004d511c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_004d50cc = iVar1;
    DAT_004d50c8 = param_3;
    PTR_DAT_004d50d0 =
         (undefined *)(param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000);
    return;
  }
  DAT_004d50dc = iVar1;
  DAT_004d50e0 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c + DAT_004d5038) * 1000;
  if (DAT_004d50e0 < 0) {
    DAT_004d50d8 = param_3;
    DAT_004d50e0 = DAT_004d50e0 + 86399999;
    return;
  }
  if (86399999 < DAT_004d50e0) {
    DAT_004d50e0 = DAT_004d50e0 + -86399999;
  }
  DAT_004d50d8 = param_3;
  return;
}



undefined4 FUN_004a95d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;

  InterlockedIncrement((LONG *)&DAT_00ecd60c);
  bVar2 = DAT_00ecd608 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    FUN_004a1670(0x13);
  }
  uVar1 = FUN_004a9650(param_1,param_2,param_3);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    return uVar1;
  }
  FUN_004a16f0(0x13);
  return uVar1;
}



uint FUN_004a9650(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;

  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_00dfab38 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((PTR_DAT_004d1d90[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_00dfab48,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)DAT_004d1f9c) && ((int)DAT_004d1f9c <= (int)param_3)) &&
           (iVar2 = MultiByteToWideChar(DAT_00dfab48,9,(LPCSTR)param_2,DAT_004d1f9c,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          return DAT_004d1f9c;
        }
        if (DAT_004d1f9c <= param_3) {
          if (param_2[1] != 0) {
            return DAT_004d1f9c;
          }
          puVar3 = (undefined4 *)FUN_004a3dc0();
          *puVar3 = 0x2a;
          return 0xffffffff;
        }
      }
      puVar3 = (undefined4 *)FUN_004a3dc0();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}



uint FUN_004a9750(uint param_1,byte **param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_8;
  byte bStack_7;

  if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
    pbVar4 = param_2[4];
    if (pbVar4 == (byte *)0xffffffff) {
      puVar1 = &DAT_004d43a0;
    }
    else {
      puVar1 = (undefined *)((&DAT_00ecd500)[(int)pbVar4 >> 5] + ((uint)pbVar4 & 0x1f) * 0x24);
    }
    if ((puVar1[4] & 0x80) != 0) {
      iVar2 = FUN_004a6aa0(&local_8,param_1);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_004a3dc0();
        *puVar3 = 0x2a;
        return 0xffff;
      }
      if (iVar2 == 1) {
        pbVar4 = param_2[1] + -1;
        param_2[1] = pbVar4;
        if ((int)pbVar4 < 0) {
          uVar5 = FUN_004a17f0((int)(char)local_8,param_2);
        }
        else {
          **param_2 = local_8;
          uVar5 = CONCAT11(bStack_7,local_8) & 0xff;
          *param_2 = *param_2 + 1;
        }
        if (uVar5 == 0xffffffff) {
          return 0xffffffff;
        }
LAB_004a9868:
        return param_1 & 0xffff;
      }
      pbVar4 = param_2[1] + -1;
      param_2[1] = pbVar4;
      if ((int)pbVar4 < 0) {
        uVar5 = FUN_004a17f0((int)(char)local_8,param_2);
      }
      else {
        **param_2 = local_8;
        uVar5 = CONCAT11(bStack_7,local_8) & 0xff;
        *param_2 = *param_2 + 1;
      }
      if (uVar5 != 0xffffffff) {
        pbVar4 = param_2[1];
        param_2[1] = pbVar4 + -1;
        if ((int)(pbVar4 + -1) < 0) {
          uVar5 = FUN_004a17f0((int)(char)bStack_7,param_2);
        }
        else {
          **param_2 = bStack_7;
          uVar5 = (uint)bStack_7;
          *param_2 = *param_2 + 1;
        }
        if (uVar5 != 0xffffffff) goto LAB_004a9868;
      }
      return 0xffff;
    }
  }
  pbVar4 = param_2[1];
  param_2[1] = pbVar4 + -2;
  if (-1 < (int)(pbVar4 + -2)) {
    *(short *)*param_2 = (short)param_1;
    *param_2 = *param_2 + 2;
    return param_1;
  }
  uVar5 = FUN_004aaa20(param_1 & 0xffff,param_2);
  return uVar5;
}



undefined2 FUN_004a98c0(undefined4 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;

  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) != 0) {
      param_1[3] = uVar2 | 0x20;
      return 0xffff;
    }
    param_1[3] = uVar2 | 1;
    if ((uVar2 & 0x10c) == 0) {
      FUN_004a6a10(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar3 = FUN_004a41e0(param_1[4],param_1[2],param_1[6]);
    param_1[1] = iVar3;
    if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
      if ((param_1[3] & 0x82) == 0) {
        uVar2 = param_1[4];
        if (uVar2 == 0xffffffff) {
          puVar4 = &DAT_004d43a0;
        }
        else {
          puVar4 = (undefined *)((&DAT_00ecd500)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = iVar3 + -2;
      uVar1 = *(undefined2 *)*param_1;
      *param_1 = (undefined2 *)*param_1 + 1;
      return uVar1;
    }
    param_1[1] = 0;
    param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
  }
  return 0xffff;
}



undefined4 FUN_004a99c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_004a1710(param_2);
  uVar1 = FUN_004a99f0(param_1,param_2);
  FUN_004a1780(param_2);
  return uVar1;
}



uint FUN_004a99f0(uint param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;

  if ((param_1 != 0xffffffff) &&
     ((pcVar1 = param_2[3], ((uint)pcVar1 & 1) != 0 ||
      ((((uint)pcVar1 & 0x80) != 0 && (((uint)pcVar1 & 2) == 0)))))) {
    if (param_2[2] == (char *)0x0) {
      FUN_004a6a10(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != (char *)0x0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      pcVar1 = *param_2;
      *param_2 = pcVar1 + -1;
      pcVar1[-1] = (char)param_1;
    }
    else {
      pcVar1 = *param_2;
      pcVar2 = pcVar1 + -1;
      *param_2 = pcVar2;
      if (*pcVar2 != (char)param_1) {
        *param_2 = pcVar1;
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = (char *)((uint)param_2[3] & 0xffffffef | 1);
    return param_1 & 0xff;
  }
  return 0xffffffff;
}



undefined4 FUN_004a9b40(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  uVar1 = param_2 + param_1;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



void FUN_004a9b70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;

  iVar1 = FUN_004a9b40(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004a9b40(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_004a9b40(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_004a9b40(param_1[2],param_2[2],param_1 + 2);
  return;
}



void FUN_004a9be0(uint *param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



void FUN_004a9c10(uint *param_1)

{
  uint uVar1;

  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



void FUN_004a9c40(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  uint local_c;
  uint local_8;
  uint local_4;

  puVar2 = param_3;
  sVar3 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_c = *puVar2;
      local_8 = puVar2[1];
      local_4 = puVar2[2];
      FUN_004a9be0(puVar2);
      FUN_004a9be0(puVar2);
      FUN_004a9b70(puVar2,&local_c);
      FUN_004a9be0(puVar2);
      local_c = (uint)*param_1;
      local_8 = 0;
      local_4 = 0;
      FUN_004a9b70(puVar2,&local_c);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  uVar1 = puVar2[2];
  while (uVar1 == 0) {
    sVar3 = sVar3 + -0x10;
    puVar2[2] = puVar2[1] >> 0x10;
    uVar1 = puVar2[2];
    puVar2[1] = *puVar2 >> 0x10 | puVar2[1] << 0x10;
    *puVar2 = *puVar2 << 0x10;
  }
  uVar1 = puVar2[2];
  while ((uVar1 & 0x8000) == 0) {
    FUN_004a9be0(puVar2);
    sVar3 = sVar3 + -1;
    uVar1 = puVar2[2];
  }
  *(short *)((int)puVar2 + 10) = sVar3;
  return;
}



undefined4
FUN_004a9d40(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined local_6;
  char cStack_5;

  psVar1 = param_6;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  uVar4 = param_3 & 0x7fff;
  local_12 = 0xfb;
  local_11 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar4 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
LAB_004a9f4f:
    *(undefined *)(psVar1 + 1) = 0x20;
    *(undefined *)((int)psVar1 + 3) = 1;
    *(undefined *)(psVar1 + 2) = 0x30;
    *(undefined *)((int)psVar1 + 5) = 0;
    return 1;
  }
  if ((short)uVar4 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      *(undefined4 *)(param_6 + 2) = 0x4e532331;
      param_6[4] = 0x4e41;
      *(undefined *)((int)param_6 + 3) = 6;
      *(undefined *)(param_6 + 5) = 0;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = 0x4e492331;
      *(undefined *)((int)param_6 + 3) = 5;
      param_6[4] = 0x44;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      *(undefined4 *)(param_6 + 2) = 0x4e492331;
      *(undefined *)((int)param_6 + 3) = 5;
      param_6[4] = 0x46;
      return 0;
    }
    *(undefined4 *)(param_6 + 2) = 0x4e512331;
    param_6[4] = 0x4e41;
    *(undefined *)((int)param_6 + 3) = 6;
    *(undefined *)(param_6 + 5) = 0;
    return 0;
  }
  local_6 = (undefined)uVar4;
  cStack_5 = (char)(uVar4 >> 8);
  uStack_a = (undefined2)param_2;
  uStack_8 = (undefined2)(param_2 >> 0x10);
  uStack_e = (undefined2)param_1;
  uStack_c = (undefined2)((uint)param_1 >> 0x10);
  local_10 = 0;
  sVar9 = (short)(((uVar4 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar4 * 0x4d10 >>
                 0x10);
  FUN_004aa650(&local_10,-(int)sVar9,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar9 = sVar9 + 1;
    FUN_004aa390(&local_10,&local_1c);
  }
  *psVar1 = sVar9;
  iVar8 = param_4;
  if (((param_5 & 1) != 0) && (iVar8 = param_4 + sVar9, param_4 + sVar9 < 1)) {
    *psVar1 = 0;
    goto LAB_004a9f4f;
  }
  if (0x15 < iVar8) {
    iVar8 = 0x15;
  }
  uVar2 = CONCAT11(cStack_5,local_6);
  local_6 = 0;
  cStack_5 = '\0';
  iVar5 = 8;
  iVar10 = uVar2 - 0x3ffe;
  do {
    FUN_004a9be0(&local_10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar10 < 0) {
    for (uVar4 = -iVar10 & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_004a9c10(&local_10);
    }
  }
  psVar1 = psVar1 + 2;
  iVar8 = iVar8 + 1;
  psVar6 = psVar1;
  if (0 < iVar8) {
    do {
      param_1 = CONCAT22(uStack_e,local_10);
      param_2 = CONCAT22(uStack_a,uStack_c);
      param_3 = CONCAT13(cStack_5,CONCAT12(local_6,uStack_8));
      FUN_004a9be0(&local_10);
      FUN_004a9be0(&local_10);
      FUN_004a9b70(&local_10,&param_1);
      FUN_004a9be0(&local_10);
      cVar3 = cStack_5 + '0';
      cStack_5 = '\0';
      *(char *)psVar6 = cVar3;
      psVar6 = (short *)((int)psVar6 + 1);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  psVar7 = psVar6 + -1;
  if (*(char *)((int)psVar6 + -1) < '5') {
    if (psVar1 <= psVar7) {
      do {
        if (*(char *)psVar7 != '0') break;
        psVar7 = (short *)((int)psVar7 + -1);
      } while (psVar1 <= psVar7);
      if (psVar1 <= psVar7) goto LAB_004aa0a6;
    }
    *(undefined *)psVar1 = 0x30;
    *param_6 = 0;
    *(undefined *)(param_6 + 1) = 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
    *(undefined *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (psVar1 <= psVar7) {
    do {
      if (*(char *)psVar7 != '9') break;
      *(undefined *)psVar7 = 0x30;
      psVar7 = (short *)((int)psVar7 + -1);
    } while (psVar1 <= psVar7);
    if (psVar1 <= psVar7) {
      *(char *)psVar7 = *(char *)psVar7 + '\x01';
      goto LAB_004aa0a6;
    }
  }
  psVar7 = (short *)((int)psVar7 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar7 = *(char *)psVar7 + '\x01';
LAB_004aa0a6:
  cVar3 = ((char)psVar7 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar3;
  *(undefined *)((int)param_6 + cVar3 + 4) = 0;
  return 1;
}



undefined4 FUN_004aa0d0(int param_1,undefined4 param_2,undefined4 param_3,char **param_4)

{
  byte bVar1;
  bool bVar2;
  size_t _Count;
  DWORD DVar3;
  int iVar4;
  char *_Source;
  char *_Dest;
  uint uVar5;
  byte *pbVar6;
  char local_80 [128];

  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_004aab70(param_2,param_3,&DAT_00dfb008,4,0);
    if (iVar4 != 0) {
      pbVar6 = &DAT_00dfb008;
      *(char *)param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_004d1f9c < 2) {
          uVar5 = (byte)PTR_DAT_004d1d90[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar5 = FUN_0049f440(bVar1,4);
        }
        if (uVar5 == 0) break;
        pbVar6 = pbVar6 + 2;
        *(byte *)param_4 = *(char *)param_4 * '\n' + bVar1 + -0x30;
        if (0xdfb00f < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  _Count = FUN_004aaca0(param_2,param_3,local_80,0x80,0);
  if (_Count == 0) {
    DVar3 = GetLastError();
    if (((DVar3 != 0x7a) || (iVar4 = FUN_004aaca0(param_2,param_3,0,0,0), iVar4 == 0)) ||
       (_Source = (char *)FUN_0049f270(iVar4), _Source == (char *)0x0)) goto LAB_004aa180;
    bVar2 = true;
    _Count = FUN_004aaca0(param_2,param_3,_Source,iVar4,0);
    if (_Count == 0) goto LAB_004aa180;
  }
  _Dest = (char *)FUN_0049f270(_Count);
  *param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,_Count);
    if (!bVar2) {
      return 0;
    }
    FUN_0049f200(_Source);
    return 0;
  }
LAB_004aa180:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_0049f200(_Source);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_004aa280(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;

  iVar2 = _DAT_00ecd60c;
  if (param_3 != 0) {
    if (DAT_00dfab38 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar6 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar6;
        bVar3 = (byte)uVar6;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar7 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_004aa2df;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      param_3 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar7 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_004aa2df:
        param_3 = -1;
        if (!bVar7) {
          param_3 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_00ecd60c = _DAT_00ecd60c + 1;
      UNLOCK();
      bVar7 = 0 < DAT_00ecd608;
      if (bVar7) {
        LOCK();
        UNLOCK();
        _DAT_00ecd60c = iVar2;
        FUN_004a1670(0x13);
      }
      uVar8 = (uint)bVar7;
      uVar6 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar6 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar6 = FUN_0049fee0(uVar6,uVar5);
        uVar5 = FUN_0049fee0();
        bVar7 = uVar5 < uVar6;
        if (uVar5 != uVar6) goto LAB_004aa355;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      param_3 = 0;
      bVar7 = uVar5 < uVar6;
      if (uVar5 != uVar6) {
LAB_004aa355:
        param_3 = -1;
        if (!bVar7) {
          param_3 = 1;
        }
      }
      if (uVar8 == 0) {
        LOCK();
        _DAT_00ecd60c = _DAT_00ecd60c + -1;
        UNLOCK();
      }
      else {
        FUN_004a16f0(0x13);
      }
    }
  }
  return param_3;
}



void FUN_004aa390(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  int *piVar8;
  short *local_20;
  int local_18;
  int local_14;
  int local_10;
  byte local_c;
  undefined uStack_b;
  undefined2 uStack_a;
  short local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  ushort uStack_2;

  local_14 = 0;
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar3 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar1 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = uVar3 + uVar1;
  local_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < uVar1) || (0x7ffe < uVar3)) || (0xbffd < uVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  if (uVar4 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar1 == 0) && (uVar4 = uVar4 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar3 == 0) && (uVar4 = uVar4 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  local_20 = &local_8;
  local_18 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar5) {
      piVar8 = param_2 + 2;
      puVar7 = (ushort *)(local_18 * 2 + (int)param_1);
      local_10 = iVar5;
      do {
        iVar2 = FUN_004a9b40(*(undefined4 *)(local_20 + -2),(uint)*(ushort *)piVar8 * (uint)*puVar7,
                             local_20 + -2);
        if (iVar2 != 0) {
          *local_20 = *local_20 + 1;
        }
        puVar7 = puVar7 + 1;
        piVar8 = (int *)((int)piVar8 + -2);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  uVar4 = uVar4 + 0xc002;
  while ((0 < (short)uVar4 && ((uStack_2 & 0x8000) == 0))) {
    FUN_004a9be0(&local_c);
    uVar4 = uVar4 - 1;
  }
  if ((short)uVar4 < 1) {
    uVar4 = uVar4 - 1;
    if ((short)uVar4 < 0) {
      iVar5 = -(int)(short)uVar4;
      uVar4 = uVar4 + (short)iVar5;
      do {
        if ((local_c & 1) != 0) {
          local_14 = local_14 + 1;
        }
        FUN_004a9c10(&local_c);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_14 != 0) {
      local_c = local_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,local_c)) ||
     (iVar2 = CONCAT22(local_4,uStack_6), iVar5 = CONCAT22(local_8,uStack_a),
     (CONCAT22(uStack_a,CONCAT11(uStack_b,local_c)) & 0x1ffff) == 0x18000)) {
    if (CONCAT22(local_8,uStack_a) == -1) {
      iVar5 = 0;
      if (CONCAT22(local_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar4 = uVar4 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
      }
      else {
        iVar2 = CONCAT22(local_4,uStack_6) + 1;
      }
    }
    else {
      iVar5 = CONCAT22(local_8,uStack_a) + 1;
      iVar2 = CONCAT22(local_4,uStack_6);
    }
  }
  local_8 = (short)((uint)iVar5 >> 0x10);
  uStack_a = (undefined2)iVar5;
  local_4 = (undefined2)((uint)iVar2 >> 0x10);
  uStack_6 = (undefined2)iVar2;
  if (0x7ffe < uVar4) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  *(undefined2 *)param_1 = uStack_a;
  *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,local_8);
  *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,local_4);
  *(ushort *)((int)param_1 + 10) = uVar4 | uVar6;
  return;
}



void FUN_004aa650(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined *local_4;

  ppuVar3 = &PTR_s_November_004d51f0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x4d5350;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        ppuVar2 = ppuVar3 + uVar1 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar1 * 3)) {
          local_c = SUB42(*ppuVar2,0);
          uStack_a._0_2_ = (undefined2)((uint)*ppuVar2 >> 0x10);
          uStack_a._2_2_ = SUB42(ppuVar2[1],0);
          uStack_6 = (undefined2)((uint)ppuVar2[1] >> 0x10);
          local_4 = ppuVar2[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          ppuVar2 = (undefined **)&local_c;
        }
        FUN_004aa390(param_1,ppuVar2);
      }
    }
  }
  return;
}



undefined4 FUN_004aa6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;

  InterlockedIncrement((LONG *)&DAT_00ecd60c);
  bVar2 = DAT_00ecd608 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    FUN_004a1670(0x13);
  }
  uVar1 = FUN_004aa760(param_1,param_2,param_3);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    return uVar1;
  }
  FUN_004a16f0(0x13);
  return uVar1;
}



uint FUN_004aa760(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  LPCWSTR pWVar7;
  int iVar8;
  int local_4;

  uVar3 = param_3;
  pWVar7 = param_2;
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_00dfab38 == 0) {
      uVar3 = FUN_004a1150(param_2);
      return uVar3;
    }
    iVar4 = WideCharToMultiByte(DAT_00dfab48,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      return iVar4 - 1;
    }
  }
  else if (DAT_00dfab38 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*pWVar7 < 0x100) {
      param_1[uVar2] = *(CHAR *)pWVar7;
      if (*pWVar7 == L'\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pWVar7 = pWVar7 + 1;
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  else if (DAT_004d1f9c == 1) {
    if (param_3 != 0) {
      uVar3 = FUN_004aa950(param_2,param_3);
    }
    uVar3 = WideCharToMultiByte(DAT_00dfab48,0x220,pWVar7,uVar3,param_1,uVar3,(LPCSTR)0x0,&local_4);
    if ((uVar3 != 0) && (local_4 == 0)) {
      if (param_1[uVar3 - 1] != '\0') {
        return uVar3;
      }
      return uVar3 - 1;
    }
  }
  else {
    iVar4 = WideCharToMultiByte(DAT_00dfab48,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4);
    if (iVar4 == 0) {
      if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            iVar4 = WideCharToMultiByte(DAT_00dfab48,0,pWVar7,1,(LPSTR)&param_2,DAT_004d1f9c,
                                        (LPCSTR)0x0,&local_4);
            if ((iVar4 == 0) || (local_4 != 0)) goto LAB_004aa936;
            if (uVar3 < iVar4 + uVar2) {
              return uVar2;
            }
            iVar8 = 0;
            if (0 < iVar4) {
              do {
                cVar1 = *(char *)((int)&param_2 + iVar8);
                param_1[uVar2] = cVar1;
                if (cVar1 == '\0') {
                  return uVar2;
                }
                iVar8 = iVar8 + 1;
                uVar2 = uVar2 + 1;
              } while (iVar8 < iVar4);
            }
            pWVar7 = pWVar7 + 1;
          } while (uVar2 < uVar3);
        }
        return uVar2;
      }
    }
    else if (local_4 == 0) {
      return iVar4 - 1;
    }
  }
LAB_004aa936:
  puVar6 = (undefined4 *)FUN_004a3dc0();
  *puVar6 = 0x2a;
  return 0xffffffff;
}



int FUN_004aa950(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;

  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}



char * FUN_004aa990(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;

  if (((DAT_00dfaa94 != (char **)0x0) ||
      (((DAT_00dfaa9c == 0 || (iVar2 = FUN_004aae20(), iVar2 == 0)) &&
       (DAT_00dfaa94 != (char **)0x0)))) && (param_1 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar6 = *DAT_00dfaa94;
    pcVar8 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar3 - 1;
    ppcVar7 = DAT_00dfaa94;
    if (pcVar6 != (char *)0x0) {
      do {
        uVar5 = 0xffffffff;
        pcVar8 = pcVar6;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (((uVar4 < ~uVar5 - 1) && (pcVar6[uVar4] == '=')) &&
           (iVar2 = FUN_004aade0(pcVar6,param_1,uVar4), iVar2 == 0)) {
          return *ppcVar7 + ~uVar3;
        }
        pcVar6 = ppcVar7[1];
        ppcVar7 = ppcVar7 + 1;
        if (pcVar6 == (char *)0x0) {
          return (char *)0x0;
        }
      } while( true );
    }
  }
  return (char *)0x0;
}



uint FUN_004aaa20(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;

  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_004aab58:
    param_2[3] = uVar6 | 0x20;
    return 0xffff;
  }
  if ((uVar6 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar6 & 0x10) == 0) goto LAB_004aab58;
    *param_2 = param_2[2];
    param_2[3] = uVar6 & 0xfffffffe;
  }
  uVar6 = param_2[3];
  param_2[1] = 0;
  param_2 = (int *)0x0;
  piVar3[3] = uVar6 & 0xffffffef | 2;
  if ((uVar6 & 0x10c) == 0) {
    if ((piVar3 == (int *)&DAT_004d4618) || (piVar3 == (int *)&DAT_004d4638)) {
      iVar4 = FUN_004a6a70(uVar1);
      if (iVar4 != 0) goto LAB_004aaa97;
    }
    FUN_004a6a10(piVar3);
  }
LAB_004aaa97:
  uVar6 = param_1;
  if ((piVar3[3] & 0x108U) == 0) {
    iVar4 = 2;
    param_2 = (int *)FUN_004a4490(uVar1,&param_1,2);
  }
  else {
    iVar2 = piVar3[2];
    iVar4 = *piVar3 - iVar2;
    *piVar3 = iVar2 + 2;
    piVar3[1] = piVar3[6] + -2;
    if (iVar4 < 1) {
      if (uVar1 == 0xffffffff) {
        puVar5 = &DAT_004d43a0;
      }
      else {
        puVar5 = (undefined *)((&DAT_00ecd500)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
      }
      if ((puVar5[4] & 0x20) != 0) {
        FUN_004a3ff0(uVar1,0,2);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    else {
      param_2 = (int *)FUN_004a4490(uVar1,iVar2,iVar4);
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
  }
  if (param_2 != (int *)iVar4) {
    piVar3[3] = piVar3[3] | 0x20;
    return 0xffff;
  }
  return uVar6 & 0xffff;
}



int FUN_004aab70(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPSTR lpLCData;

  if (DAT_00dfb014 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfb014 = 2;
    }
    else {
      DAT_00dfb014 = 1;
    }
  }
  if (DAT_00dfb014 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_00dfb014 != 2) {
    return DAT_00dfb014;
  }
  if (param_5 == 0) {
    param_5 = DAT_00dfab48;
  }
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPSTR)FUN_0049f270(iVar1);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_0049f200(lpLCData);
    return 0;
  }
  return 0;
}



int FUN_004aaca0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;

  if (DAT_00dfb018 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfb018 = 2;
    }
    else {
      DAT_00dfb018 = 1;
    }
  }
  if (DAT_00dfb018 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_00dfb018 != 1) {
    return DAT_00dfb018;
  }
  if (param_5 == 0) {
    param_5 = DAT_00dfab48;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_0049f270(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_0049f200(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_0049f200(lpLCData);
    return 0;
  }
  return 0;
}



int FUN_004aade0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  if (param_3 == 0) {
    return param_3;
  }
  iVar1 = FUN_004aaea0(DAT_00dfae94,1,param_1,param_3,param_2,param_3,DAT_00dfae90);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



LPCWSTR FUN_004aae20(void)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  LPSTR lpMultiByteStr;
  LPCWSTR *ppWVar2;

  lpWideCharStr = *DAT_00dfaa9c;
  ppWVar2 = DAT_00dfaa9c;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return (LPCWSTR)0x0;
  }
  while (((iVar1 = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0),
          iVar1 != 0 && (lpMultiByteStr = (LPSTR)FUN_0049f270(iVar1), lpMultiByteStr != (LPSTR)0x0))
         && (iVar1 = WideCharToMultiByte(1,0,*ppWVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                         (LPBOOL)0x0), iVar1 != 0))) {
    FUN_004ab1a0(lpMultiByteStr,0);
    lpWideCharStr = ppWVar2[1];
    ppWVar2 = ppWVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return lpWideCharStr;
    }
  }
  return (LPCWSTR)0xffffffff;
}



int FUN_004aaea0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
                UINT param_7)

{
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  int cchWideChar;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iStack_18;
  _cpinfo _Stack_14;

  if (DAT_00dfb020 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00dfb020 = 2;
    }
    else {
      DAT_00dfb020 = 1;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_004ab170(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_004ab170(param_5,param_6);
  }
  if (DAT_00dfb020 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,iVar1,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  iStack_18 = DAT_00dfb020;
  if (DAT_00dfb020 == 1) {
    iStack_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_00dfab48;
    }
    if ((iVar1 == 0) || (param_6 == 0)) {
      if (iVar1 == param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < iVar1) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&_Stack_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < iVar1) {
        if (_Stack_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (_Stack_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    cchWideChar = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,iVar1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_0049f270(cchWideChar * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,iVar1,lpWideCharStr,cchWideChar);
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (param_4 = (LPWSTR)FUN_0049f270(iVar1 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar1), iVar4 != 0)) {
      iStack_18 = CompareStringW(param_1,param_2,lpWideCharStr,cchWideChar,param_4,iVar1);
    }
    FUN_0049f200(lpWideCharStr);
    FUN_0049f200(param_4);
  }
  return iStack_18;
}



int FUN_004ab170(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;

  pcVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      if (*pcVar1 == '\0') break;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 != 0);
  }
  if (*pcVar1 == '\0') {
    return (int)pcVar1 - (int)param_1;
  }
  return param_2;
}



undefined4 FUN_004ab1a0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *lpName;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;

  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar4 = (char *)FUN_004ab4a0(param_1,0x3d);
  if (pcVar4 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar4) {
    return 0xffffffff;
  }
  bVar12 = pcVar4[1] == '\0';
  if (DAT_00dfaa94 == DAT_00dfaa98) {
    DAT_00dfaa94 = (int *)FUN_004ab430(DAT_00dfaa94);
  }
  if (DAT_00dfaa94 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00dfaa9c == (undefined4 *)0x0)) {
      if (bVar12) {
        return 0;
      }
      DAT_00dfaa94 = (int *)FUN_0049f270(4);
      if (DAT_00dfaa94 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_00dfaa94 = 0;
      if (DAT_00dfaa9c == (undefined4 *)0x0) {
        DAT_00dfaa9c = (undefined4 *)FUN_0049f270(4);
        if (DAT_00dfaa9c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_00dfaa9c = 0;
      }
    }
    else {
      iVar5 = FUN_004aae20();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar7 = DAT_00dfaa94;
  iVar6 = (int)pcVar4 - (int)param_1;
  iVar5 = FUN_004ab3b0(param_1,iVar6);
  if ((iVar5 < 0) || (*piVar7 == 0)) {
    if (bVar12) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar7 = (int *)FUN_004a1380(piVar7,iVar5 * 4 + 8);
    if (piVar7 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar7[iVar5] = (int)param_1;
    piVar7[iVar5 + 1] = 0;
    DAT_00dfaa94 = piVar7;
  }
  else if (bVar12) {
    FUN_0049f200(piVar7[iVar5]);
    iVar2 = piVar7[iVar5];
    piVar3 = piVar7 + iVar5;
    while (iVar2 != 0) {
      *piVar3 = piVar3[1];
      iVar5 = iVar5 + 1;
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar7 = (int *)FUN_004a1380(piVar7,iVar5 * 4);
    if (piVar7 != (int *)0x0) {
      DAT_00dfaa94 = piVar7;
    }
  }
  else {
    piVar7[iVar5] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar8 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    lpName = (undefined4 *)FUN_0049f270(~uVar8 + 1);
    if (lpName != (undefined4 *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar4 = param_1;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar4 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar4;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar10 = (undefined4 *)(pcVar4 + -uVar8);
      puVar11 = lpName;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar11 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined *)((int)lpName + iVar6) = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar12 & (int)lpName + iVar6 + 1));
      FUN_0049f200(lpName);
      return 0;
    }
  }
  return 0;
}



int FUN_004ab3b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;

  iVar1 = *DAT_00dfaa94;
  piVar2 = DAT_00dfaa94;
  if (iVar1 == 0) {
    return 0;
  }
  while ((iVar1 = FUN_004aade0(param_1,iVar1,param_2), iVar1 != 0 ||
         ((*(char *)(*piVar2 + param_2) != '=' && (*(char *)(*piVar2 + param_2) != '\0'))))) {
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_00dfaa94 >> 2);
    }
  }
  return (int)piVar2 - (int)DAT_00dfaa94 >> 2;
}



undefined4 * FUN_004ab430(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;

  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = (undefined4 *)FUN_0049f270(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    iVar5 = *param_1;
    puVar6 = puVar3;
    while (iVar5 != 0) {
      param_1 = param_1 + 1;
      uVar4 = FUN_004ab570(iVar5);
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
      iVar5 = *param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



byte * FUN_004ab4a0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;

  if (DAT_00dfae90 == 0) {
    pbVar3 = (byte *)FUN_0049fb10(param_1,param_2);
    return pbVar3;
  }
  FUN_004a1670(0x19);
  bVar1 = *param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if (((&DAT_00dfac89)[uVar2] & 4) == 0) {
      pbVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      pbVar3 = param_1 + 1;
      if (param_1[1] == 0) {
        FUN_004a16f0(0x19);
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,param_1[1])) {
        FUN_004a16f0(0x19);
        return param_1;
      }
    }
    param_1 = pbVar3 + 1;
    bVar1 = pbVar3[1];
  }
  FUN_004a16f0(0x19);
  return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
}



undefined4 * FUN_004ab570(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;

  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = (undefined4 *)FUN_0049f270(~uVar3);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      puVar5 = (undefined4 *)(pcVar6 + -uVar3);
      puVar7 = puVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x004ab5c0. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



undefined4 * FUN_004ab5d0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;

  pcVar6 = (char *)0x0;
  if (DAT_00dfab38 == 0) {
    puVar2 = param_1;
    if (*(char *)param_1 != '\0') {
      do {
        cVar1 = *(char *)param_1;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *(char *)param_1 = cVar1 + -0x20;
        }
        pcVar6 = (char *)((int)param_1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      } while (*pcVar6 != '\0');
      return puVar2;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00ecd60c);
    bVar10 = DAT_00ecd608 != 0;
    if (bVar10) {
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_004a1670(0x13);
    }
    if (DAT_00dfab38 == 0) {
      if (bVar10) {
        FUN_004a16f0(0x13);
      }
      else {
        InterlockedDecrement((LONG *)&DAT_00ecd60c);
      }
      puVar2 = param_1;
      if (*(char *)param_1 != '\0') {
        do {
          cVar1 = *(char *)param_1;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *(char *)param_1 = cVar1 + -0x20;
          }
          pcVar6 = (char *)((int)param_1 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        } while (*pcVar6 != '\0');
        return puVar2;
      }
    }
    else {
      iVar3 = FUN_004a29a0(DAT_00dfab38,0x200,param_1,0xffffffff,0,0,0,1);
      if (((iVar3 != 0) && (pcVar6 = (char *)FUN_0049f270(iVar3), pcVar6 != (char *)0x0)) &&
         (iVar3 = FUN_004a29a0(DAT_00dfab38,0x200,param_1,0xffffffff,pcVar6,iVar3,0,1), iVar3 != 0))
      {
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        puVar2 = (undefined4 *)(pcVar8 + -uVar4);
        puVar9 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar9 = *(undefined *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      if (bVar10) {
        FUN_004a16f0(0x13);
        FUN_0049f200(pcVar6);
        return param_1;
      }
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_0049f200(pcVar6);
    }
  }
  return param_1;
}
#endif
