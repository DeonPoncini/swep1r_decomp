#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_004a4ed0(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *local_4;

  iVar8 = 0;
  cVar2 = *DAT_00dfaac0;
  pcVar7 = DAT_00dfaac0;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar10 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcVar10 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar10;
  }
  piVar3 = (int *)FUN_0049f270(iVar8 * 4 + 4);
  DAT_00dfaa94 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_00dfaac0;
  local_4 = piVar3;
  pcVar7 = DAT_00dfaac0;
  do {
    if (cVar2 == '\0') {
      FUN_0049f200(DAT_00dfaac0);
      DAT_00dfaac0 = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar10 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_0049f270(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar10 = pcVar7;
      do {
        pcVar11 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      puVar9 = (undefined4 *)(pcVar11 + -uVar5);
      puVar12 = (undefined4 *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar12 = *(undefined *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004a4fc0(void)

{
  int iVar1;
  char *pcVar2;
  int iStack_8;
  int iStack_4;

  GetModuleFileNameA((HMODULE)0x0,&DAT_00dfab78,0x104);
  _DAT_00dfaaa4 = &DAT_00dfab78;
  pcVar2 = DAT_00ecd610;
  if (*DAT_00ecd610 == '\0') {
    pcVar2 = &DAT_00dfab78;
  }
  FUN_004a5060(pcVar2,0,0,&iStack_8,&iStack_4);
  iVar1 = FUN_0049f270(iStack_4 + iStack_8 * 4);
  if (iVar1 == 0) {
    __amsg_exit(8);
  }
  FUN_004a5060(pcVar2,iVar1,iVar1 + iStack_8 * 4,&iStack_8,&iStack_4);
  _DAT_00dfaa8c = iVar1;
  _DAT_00dfaa88 = iStack_8 + -1;
  return;
}



void FUN_004a5060(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;

  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (byte **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar7 = param_1 + 1;
    bVar2 = param_1[1];
    while ((bVar2 != 0x22 && (bVar2 != 0))) {
      if ((((&DAT_00dfac89)[bVar2] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0))
      {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = pbVar7 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = pbVar7 + 1;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if (((&DAT_00dfac89)[(int)param_5] & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_004a5139;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_004a5139:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (byte **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if (((&DAT_00dfac89)[bVar2] & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_004a5235;
        }
        if (((&DAT_00dfac89)[bVar2] & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_004a5235:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (byte **)0x0) {
    *param_2 = (byte *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}



undefined4 * FUN_004a5270(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  int cbMultiByte;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPWCH lpWideCharStr;
  undefined4 *puVar10;
  undefined4 *puVar11;
  WCHAR *pWVar4;

  lpWideCharStr = (LPWCH)0x0;
  puVar9 = (undefined4 *)0x0;
  if (DAT_00dfac80 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      puVar9 = (undefined4 *)GetEnvironmentStrings();
      if (puVar9 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      DAT_00dfac80 = 2;
    }
    else {
      DAT_00dfac80 = 1;
    }
  }
  if (DAT_00dfac80 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                       );
      if ((cbMultiByte != 0) &&
         (puVar9 = (undefined4 *)FUN_0049f270(cbMultiByte), puVar9 != (undefined4 *)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)puVar9,cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_0049f200(puVar9);
          puVar9 = (undefined4 *)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return puVar9;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (undefined4 *)0x0;
    }
  }
  else if ((DAT_00dfac80 == 2) &&
          ((puVar9 != (undefined4 *)0x0 ||
           (puVar9 = (undefined4 *)GetEnvironmentStrings(), puVar9 != (undefined4 *)0x0)))) {
    cVar1 = *(char *)puVar9;
    puVar6 = puVar9;
    while (cVar1 != '\0') {
      do {
        puVar10 = puVar6;
        puVar6 = (undefined4 *)((int)puVar10 + 1);
      } while (*(char *)((int)puVar10 + 1) != '\0');
      puVar6 = (undefined4 *)((int)puVar10 + 2);
      cVar1 = *(char *)((int)puVar10 + 2);
    }
    uVar7 = (int)puVar6 + (1 - (int)puVar9);
    puVar6 = (undefined4 *)FUN_0049f270(uVar7);
    if (puVar6 != (undefined4 *)0x0) {
      puVar10 = puVar9;
      puVar11 = puVar6;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined *)puVar11 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FreeEnvironmentStringsA((LPCH)puVar9);
      return puVar6;
    }
    FreeEnvironmentStringsA((LPCH)puVar9);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004a53d0(undefined4 param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  byte bVar3;
  UINT CodePage;
  UINT *pUVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  BYTE *pBVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_14;

  FUN_004a1670(0x19);
  CodePage = FUN_004a5600(param_1);
  if (CodePage == DAT_00dfae90) {
    FUN_004a16f0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_004a56b0();
    FUN_004a56f0();
    FUN_004a16f0(0x19);
    return 0;
  }
  iVar9 = 0;
  pUVar4 = &DAT_004d4458;
  do {
    if (*pUVar4 == CodePage) {
      puVar13 = (undefined4 *)&DAT_00dfac88;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined *)puVar13 = 0;
      uVar6 = 0;
      pbVar11 = &DAT_004d4468 + iVar9 * 0x30;
      do {
        bVar2 = *pbVar11;
        for (pbVar12 = pbVar11; (bVar2 != 0 && (bVar2 = pbVar12[1], bVar2 != 0));
            pbVar12 = pbVar12 + 2) {
          uVar7 = (uint)*pbVar12;
          if (uVar7 <= bVar2) {
            bVar3 = (&DAT_004d4450)[uVar6];
            do {
              (&DAT_00dfac89)[uVar7] = (&DAT_00dfac89)[uVar7] | bVar3;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= bVar2);
          }
          bVar2 = pbVar12[2];
        }
        uVar6 = uVar6 + 1;
        pbVar11 = pbVar11 + 8;
      } while (uVar6 < 4);
      _DAT_00ecd4e4 = 1;
      DAT_00dfae90 = CodePage;
      DAT_00dfae94 = FUN_004a5650(CodePage);
      _DAT_00dfae98 = (&DAT_004d445c)[iVar9 * 0xc];
      _DAT_00dfae9c = (&DAT_004d4460)[iVar9 * 0xc];
      _DAT_00dfaea0 = (&DAT_004d4464)[iVar9 * 0xc];
      goto LAB_004a5522;
    }
    pUVar4 = pUVar4 + 0xc;
    iVar9 = iVar9 + 1;
  } while (pUVar4 < &DAT_004d4548);
  BVar5 = GetCPInfo(CodePage,&local_14);
  if (BVar5 == 1) {
    puVar13 = (undefined4 *)&DAT_00dfac88;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined *)puVar13 = 0;
    DAT_00dfae94 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_00ecd4e4 = 0;
      DAT_00dfae90 = CodePage;
    }
    else {
      DAT_00dfae90 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar10 = local_14.LeadByte + 1;
        do {
          bVar2 = *pBVar10;
          if (bVar2 == 0) break;
          for (uVar6 = (uint)pBVar10[-1]; uVar6 <= bVar2; uVar6 = uVar6 + 1) {
            (&DAT_00dfac89)[uVar6] = (&DAT_00dfac89)[uVar6] | 4;
          }
          pBVar1 = pBVar10 + 1;
          pBVar10 = pBVar10 + 2;
        } while (*pBVar1 != 0);
      }
      uVar6 = 1;
      do {
        (&DAT_00dfac89)[uVar6] = (&DAT_00dfac89)[uVar6] | 8;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0xff);
      DAT_00dfae94 = FUN_004a5650(CodePage);
      _DAT_00ecd4e4 = 1;
    }
    _DAT_00dfae98 = 0;
    _DAT_00dfae9c = 0;
    _DAT_00dfaea0 = 0;
  }
  else {
    if (DAT_00dfaea4 == 0) {
      FUN_004a16f0(0x19);
      return 0xffffffff;
    }
    FUN_004a56b0();
  }
LAB_004a5522:
  FUN_004a56f0();
  FUN_004a16f0(0x19);
  return 0;
}



int FUN_004a5600(int param_1)

{
  int iVar1;
  bool bVar2;

  if (param_1 == -2) {
    DAT_00dfaea4 = 1;
                    // WARNING: Could not recover jumptable at 0x004a561d. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00dfaea4 = 1;
                    // WARNING: Could not recover jumptable at 0x004a5632. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00dfab48;
  }
  DAT_00dfaea4 = (uint)bVar2;
  return param_1;
}



undefined4 FUN_004a5650(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004a56b0(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)&DAT_00dfac88;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  DAT_00dfae90 = 0;
  _DAT_00ecd4e4 = 0;
  DAT_00dfae94 = 0;
  _DAT_00dfae98 = 0;
  _DAT_00dfae9c = 0;
  _DAT_00dfaea0 = 0;
  return;
}



void FUN_004a56f0(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  _cpinfo local_514;
  undefined4 auStack_500 [64];
  undefined auStack_400 [256];
  undefined auStack_300 [256];
  ushort auStack_200 [256];

  BVar1 = GetCPInfo(DAT_00dfae90,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      *(char *)((int)auStack_500 + uVar2) = (char)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    auStack_500[0]._0_1_ = 0x20;
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          puVar7 = (undefined4 *)((int)auStack_500 + uVar2);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = 0x20202020;
            puVar7 = puVar7 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined *)puVar7 = 0x20;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_004a3b00(1,auStack_500,0x100,auStack_200,DAT_00dfae90,DAT_00dfae94,0);
    FUN_004a29a0(DAT_00dfae94,0x100,auStack_500,0x100,auStack_400,0x100,DAT_00dfae90,0);
    FUN_004a29a0(DAT_00dfae94,0x200,auStack_500,0x100,auStack_300,0x100,DAT_00dfae90,0);
    uVar2 = 0;
    puVar6 = auStack_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_00dfad90)[uVar2] = 0;
        }
        else {
          (&DAT_00dfac89)[uVar2] = (&DAT_00dfac89)[uVar2] | 0x20;
          (&DAT_00dfad90)[uVar2] = auStack_300[uVar2];
        }
      }
      else {
        (&DAT_00dfac89)[uVar2] = (&DAT_00dfac89)[uVar2] | 0x10;
        (&DAT_00dfad90)[uVar2] = auStack_400[uVar2];
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_00dfad90)[uVar2] = 0;
      }
      else {
        (&DAT_00dfac89)[uVar2] = (&DAT_00dfac89)[uVar2] | 0x20;
        (&DAT_00dfad90)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      (&DAT_00dfac89)[uVar2] = (&DAT_00dfac89)[uVar2] | 0x10;
      (&DAT_00dfad90)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



void FUN_004a58d0(void)

{
  FUN_004a53d0(0xfffffffd);
  return;
}



// Library Function - Single Match
//  __global_unwind2
//
// Library: Visual Studio

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4a58f8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 local_14;
  int iStack_10;

  iStack_10 = param_1;
  puStack_18 = &LAB_004a5900;
  uStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_004a59b6(0x101);
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *unaff_FS_OFFSET = uStack_1c;
  return;
}



void FUN_004a59b6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;

  DAT_004d4550 = *(undefined4 *)(unaff_EBP + 8);
  DAT_004d454c = in_EAX;
  DAT_004d4554 = unaff_EBP;
  return;
}



void FUN_004a5a95(int param_1)

{
  __local_unwind2(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



void FUN_004a5ab0(void)

{
  if ((DAT_00dfaac8 == 1) || ((DAT_00dfaac8 == 0 && (DAT_004d1fb4 == 1)))) {
    FUN_004a5af0(0xfc);
    if (DAT_00dfaea8 != (code *)0x0) {
      (*DAT_00dfaea8)();
    }
    FUN_004a5af0(0xff);
  }
  return;
}



void FUN_004a5af0(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  DWORD local_1a8;
  undefined4 auStack_1a4 [25];
  undefined4 auStack_140 [15];
  undefined4 local_104;

  piVar2 = &DAT_004d4558;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < s______004d45e8);
  if (param_1 == (&DAT_004d4558)[iVar8 * 2]) {
    if ((DAT_00dfaac8 == 1) || ((DAT_00dfaac8 == 0 && (DAT_004d1fb4 == 1)))) {
      if ((DAT_00ecd500 == 0) ||
         (hFile = *(HANDLE *)(DAT_00ecd500 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar11 = *(char **)(iVar8 * 8 + 0x4d455c);
      uVar5 = 0xffffffff;
      pcVar12 = pcVar11;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar11,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_104,0x104);
      if (DVar3 == 0) {
        puVar7 = (undefined4 *)"<program name unknown>";
        puVar9 = &local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
        *(undefined *)((int)puVar9 + 2) = *(undefined *)((int)puVar7 + 2);
      }
      uVar5 = 0xffffffff;
      puVar7 = &local_104;
      puVar9 = &local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *(char *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        puVar7 = &local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *(char *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while (cVar1 != '\0');
        puVar7 = (undefined4 *)((int)auStack_140 + ~uVar5);
        _strncpy((char *)puVar7,"...",3);
      }
      puVar9 = (undefined4 *)"Runtime Error!\n\nProgram: ";
      puVar10 = auStack_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
      uVar5 = 0xffffffff;
      do {
        puVar9 = puVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        puVar9 = (undefined4 *)((int)puVar7 + 1);
        cVar1 = *(char *)puVar7;
        puVar7 = puVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      puVar7 = auStack_1a4;
      do {
        puVar10 = puVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        puVar10 = (undefined4 *)((int)puVar7 + 1);
        cVar1 = *(char *)puVar7;
        puVar7 = puVar10;
      } while (cVar1 != '\0');
      puVar7 = (undefined4 *)((int)puVar9 - uVar5);
      puVar9 = (undefined4 *)((int)puVar10 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar5 = 0xffffffff;
      pcVar11 = &DAT_004d1aa0;
      do {
        pcVar12 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      puVar7 = auStack_1a4;
      do {
        puVar9 = puVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        puVar9 = (undefined4 *)((int)puVar7 + 1);
        cVar1 = *(char *)puVar7;
        puVar7 = puVar9;
      } while (cVar1 != '\0');
      puVar7 = (undefined4 *)(pcVar12 + -uVar5);
      puVar9 = (undefined4 *)((int)puVar9 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar5 = 0xffffffff;
      pcVar11 = *(char **)(iVar8 * 8 + 0x4d455c);
      do {
        pcVar12 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      puVar7 = auStack_1a4;
      do {
        puVar9 = puVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        puVar9 = (undefined4 *)((int)puVar7 + 1);
        cVar1 = *(char *)puVar7;
        puVar7 = puVar9;
      } while (cVar1 != '\0');
      puVar7 = (undefined4 *)(pcVar12 + -uVar5);
      puVar9 = (undefined4 *)((int)puVar9 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004a8de0(auStack_1a4,"Microsoft Visual C++ Runtime Library");
      return;
    }
  }
  return;
}



int FUN_004a5cd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  tm local_24;

  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    return -1;
  }
  param_3 = *(int *)(&DAT_004d511c + param_2 * 4) + param_3;
  if (((uVar3 & 3) == 0) && (2 < param_2)) {
    param_3 = param_3 + 1;
  }
  FUN_004a8e70();
  local_24.tm_hour = param_4;
  local_24.tm_mon = param_2 + -1;
  iVar1 = param_6 + (param_5 +
                    (param_4 + ((param_1 + -0x76d >> 2) + uVar3 * 0x16d + param_3) * 0x18) * 0x3c) *
                    0x3c + 0x7c558180 + DAT_004d5030;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_004d5034 == 0) {
      return iVar1;
    }
    local_24.tm_year = uVar3;
    local_24.tm_yday = param_3;
    iVar2 = __isindst(&local_24);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_004d5038;
}



int FUN_004a5dc0(undefined4 param_1,ushort *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  ushort uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_44c;
  short *local_448;
  uint local_444;
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  undefined local_42a;
  undefined local_429;
  undefined2 local_428;
  short local_426;
  int local_424;
  undefined4 local_420;
  undefined4 local_41c;
  int local_418;
  int local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_404;
  undefined local_400 [511];
  undefined2 local_201;

  local_414 = 0;
  uVar7 = *param_2;
  param_2 = param_2 + 1;
  local_444 = 0;
  local_43c = 0;
  uVar11 = 0;
  psVar9 = local_448;
  do {
    if ((uVar7 == 0) || (local_43c < 0)) {
      return local_43c;
    }
    if ((uVar7 < 0x20) || (0x78 < uVar7)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)(&DAT_004af9b8)[uVar7] & 0xf;
    }
    local_414 = (int)(char)(&DAT_004af9d8)[uVar3 * 8 + local_414] >> 4;
    psVar10 = psVar9;
    uVar3 = uVar11;
    switch(local_414) {
    case 0:
switchD_004a5e51_caseD_0:
      local_434 = 1;
      FUN_004a6720(uVar7,param_1,&local_43c);
      break;
    case 1:
      local_440 = -1;
      local_420 = 0;
      local_424 = 0;
      local_430 = 0;
      local_438 = 0;
      local_44c = 0;
      local_434 = 0;
      break;
    case 2:
      switch(uVar7) {
      case 0x20:
        local_44c = local_44c | 2;
        break;
      case 0x23:
        local_44c = local_44c | 0x80;
        break;
      case 0x2b:
        local_44c = local_44c | 1;
        break;
      case 0x2d:
        local_44c = local_44c | 4;
        break;
      case 0x30:
        local_44c = local_44c | 8;
      }
      break;
    case 3:
      if (uVar7 == 0x2a) {
        local_430 = FUN_004a67d0(&param_3);
        psVar10 = local_448;
        uVar3 = local_444;
        if (local_430 < 0) {
          local_44c = local_44c | 4;
          local_430 = -local_430;
          psVar10 = psVar9;
          uVar3 = uVar11;
        }
      }
      else {
        local_430 = (uVar7 - 0x30) + local_430 * 10;
      }
      break;
    case 4:
      local_440 = 0;
      break;
    case 5:
      if (uVar7 == 0x2a) {
        local_440 = FUN_004a67d0(&param_3);
        psVar10 = local_448;
        uVar3 = local_444;
        if (local_440 < 0) {
          local_440 = -1;
          psVar10 = psVar9;
          uVar3 = uVar11;
        }
      }
      else {
        local_440 = (uVar7 - 0x30) + local_440 * 10;
      }
      break;
    case 6:
      if (uVar7 == 0x49) {
        if ((*param_2 != 0x36) || (param_2[1] != 0x34)) {
          local_414 = 0;
          goto switchD_004a5e51_caseD_0;
        }
        param_2 = param_2 + 2;
        local_44c = local_44c | 0x8000;
      }
      else if (uVar7 == 0x68) {
        local_44c = local_44c | 0x20;
      }
      else if (uVar7 == 0x77) {
        local_44c = local_44c | 0x800;
      }
      break;
    case 7:
      psVar10 = local_448;
      switch(uVar7) {
      case 0x43:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 99:
        uVar11 = 1;
        local_434 = 1;
        local_41c = FUN_004a67d0(&param_3);
        local_444 = uVar11;
        if ((local_44c & 0x20) == 0) {
          local_400._0_2_ = (undefined2)local_41c;
        }
        else {
          local_42a = (undefined)local_41c;
          local_429 = 0;
          iVar8 = FUN_004a95d0(local_400,&local_42a,DAT_004d1f9c);
          if (iVar8 < 0) {
            psVar9 = (short *)local_400;
            local_424 = 1;
            psVar10 = psVar9;
            break;
          }
        }
        psVar9 = (short *)local_400;
        psVar10 = psVar9;
        break;
      case 0x45:
      case 0x47:
        local_420 = 1;
        uVar7 = uVar7 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_440 < 0) {
          local_440 = 6;
        }
        else if ((local_440 == 0) && (uVar7 == 0x67)) {
          local_440 = 1;
        }
        local_410 = *param_3;
        local_40c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR_FUN_004d2088)(&local_410,local_400,(int)(char)uVar7,local_440,local_420);
        if (((local_44c & 0x80) != 0) && (local_440 == 0)) {
          (*(code *)PTR_FUN_004d2094)(local_400);
        }
        if ((uVar7 == 0x67) && ((local_44c & 0x80) == 0)) {
          (*(code *)PTR_FUN_004d208c)(local_400);
        }
        psVar10 = (short *)local_400;
        uVar11 = local_44c | 0x40;
        if (local_400[0] == '-') {
          psVar10 = (short *)(local_400 + 1);
          uVar11 = local_44c | 0x140;
        }
LAB_004a62f5:
        local_44c = uVar11;
        psVar9 = psVar10;
        uVar11 = 0xffffffff;
        psVar10 = psVar9;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar1 = *(byte *)psVar10;
          psVar10 = (short *)((int)psVar10 + 1);
        } while (bVar1 != 0);
        uVar11 = ~uVar11 - 1;
        psVar10 = psVar9;
        local_444 = uVar11;
        break;
      case 0x53:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 0x73:
        iVar8 = 0x7fffffff;
        if (local_440 != -1) {
          iVar8 = local_440;
        }
        psVar9 = (short *)FUN_004a67d0(&param_3);
        if ((local_44c & 0x20) == 0) {
          if (psVar9 == (short *)0x0) {
            psVar9 = (short *)PTR_DAT_004d2084;
          }
          local_434 = 1;
          for (psVar10 = psVar9; (iVar8 != 0 && (iVar8 = iVar8 + -1, *psVar10 != 0));
              psVar10 = psVar10 + 1) {
          }
          uVar11 = (int)psVar10 - (int)psVar9 >> 1;
          psVar10 = psVar9;
          local_444 = uVar11;
        }
        else {
          if (psVar9 == (short *)0x0) {
            psVar9 = (short *)PTR_DAT_004d2080;
          }
          local_444 = 0;
          psVar6 = psVar9;
          uVar11 = 0;
          psVar10 = psVar9;
          if (0 < iVar8) {
            do {
              uVar11 = local_444;
              if (*(byte *)psVar6 == 0) break;
              if ((PTR_DAT_004d1d90[(uint)*(byte *)psVar6 * 2 + 1] & 0x80) != 0) {
                psVar6 = (short *)((int)psVar6 + 1);
              }
              uVar11 = local_444 + 1;
              psVar6 = (short *)((int)psVar6 + 1);
              local_444 = uVar11;
            } while ((int)uVar11 < iVar8);
          }
        }
        break;
      case 0x58:
        goto switchD_004a6039_caseD_58;
      case 0x5a:
        psVar6 = (short *)FUN_004a67d0(&param_3);
        psVar10 = (short *)PTR_DAT_004d2080;
        uVar11 = local_44c;
        if ((psVar6 != (short *)0x0) && (psVar9 = *(short **)(psVar6 + 2), psVar9 != (short *)0x0))
        {
          psVar10 = psVar9;
          if ((local_44c & 0x800) == 0) {
            uVar11 = (uint)*psVar6;
            local_434 = 0;
            local_444 = uVar11;
          }
          else {
            local_434 = 1;
            uVar11 = (uint)(int)*psVar6 >> 1;
            local_444 = uVar11;
          }
          break;
        }
        goto LAB_004a62f5;
      case 100:
      case 0x69:
        local_444 = 10;
        local_44c = local_44c | 0x40;
        goto LAB_004a6383;
      case 0x6e:
        piVar4 = (int *)FUN_004a67d0(&param_3);
        if ((local_44c & 0x20) == 0) {
          local_424 = 1;
          *piVar4 = local_43c;
        }
        else {
          local_424 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_43c;
        }
        break;
      case 0x6f:
        local_444 = 8;
        if ((local_44c & 0x80) != 0) {
          local_44c = local_44c | 0x200;
        }
        goto LAB_004a6383;
      case 0x70:
        local_440 = 8;
switchD_004a6039_caseD_58:
        local_418 = 7;
LAB_004a633a:
        local_444 = 0x10;
        if ((local_44c & 0x80) != 0) {
          local_426 = (short)local_418 + 0x51;
          local_428 = 0x30;
          local_438 = 2;
        }
        goto LAB_004a6383;
      case 0x75:
        local_444 = 10;
LAB_004a6383:
        if ((local_44c & 0x8000) == 0) {
          if ((local_44c & 0x20) == 0) {
            if ((local_44c & 0x40) == 0) {
              uVar11 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)uVar11;
            }
            else {
              iVar8 = FUN_004a67d0(&param_3);
              uVar12 = (ulonglong)iVar8;
            }
          }
          else if ((local_44c & 0x40) == 0) {
            uVar11 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(uVar11 & 0xffff);
          }
          else {
            sVar2 = FUN_004a67d0(&param_3);
            uVar12 = (ulonglong)(int)sVar2;
          }
        }
        else {
          uVar12 = FUN_004a67f0(&param_3);
        }
        if ((((local_44c & 0x40) != 0) && ((longlong)uVar12 < 0x100000000)) &&
           ((longlong)uVar12 < 0)) {
          uVar12 = CONCAT44(-((int)(uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),-(int)uVar12);
          local_44c = local_44c | 0x100;
        }
        uVar11 = (uint)(uVar12 >> 0x20);
        if ((local_44c & 0x8000) == 0) {
          uVar11 = 0;
        }
        lVar13 = CONCAT44(uVar11,(uint)uVar12);
        if (local_440 < 0) {
          local_440 = 1;
        }
        else {
          local_44c = local_44c & 0xfffffff7;
        }
        if (((uint)uVar12 | uVar11) == 0) {
          local_438 = 0;
        }
        local_448 = &local_201;
        iVar8 = local_440;
        while ((local_440 = iVar8 + -1, 0 < iVar8 || (lVar13 != 0))) {
          local_404 = 0;
          iVar8 = __aullrem(lVar13,local_444,0);
          iVar8 = iVar8 + 0x30;
          lVar13 = __aulldiv(lVar13,local_444,local_404);
          if (0x39 < iVar8) {
            iVar8 = iVar8 + local_418;
          }
          *(byte *)local_448 = (byte)iVar8;
          local_448 = (short *)((int)local_448 + -1);
          iVar8 = local_440;
        }
        uVar11 = (int)&local_201 + -(int)local_448;
        psVar9 = (short *)((int)local_448 + 1);
        psVar10 = psVar9;
        local_444 = uVar11;
        if (((local_44c & 0x200) != 0) && ((*(byte *)psVar9 != 0x30 || (uVar11 == 0)))) {
          uVar11 = (int)&local_201 + -(int)local_448 + 1;
          *(byte *)local_448 = 0x30;
          psVar9 = local_448;
          psVar10 = local_448;
          local_444 = uVar11;
        }
        break;
      case 0x78:
        local_418 = 0x27;
        goto LAB_004a633a;
      }
      local_448 = psVar10;
      psVar10 = psVar9;
      uVar3 = uVar11;
      if (local_424 == 0) {
        if ((local_44c & 0x40) != 0) {
          if ((local_44c & 0x100) == 0) {
            if ((local_44c & 1) == 0) {
              if ((local_44c & 2) == 0) goto LAB_004a652c;
              local_428 = 0x20;
            }
            else {
              local_428 = 0x2b;
            }
          }
          else {
            local_428 = 0x2d;
          }
          local_438 = 1;
        }
LAB_004a652c:
        iVar8 = (local_430 - local_438) - uVar11;
        if ((local_44c & 0xc) == 0) {
          FUN_004a6750(0x20,iVar8,param_1,&local_43c);
        }
        FUN_004a6790(&local_428,local_438,param_1,&local_43c);
        if (((local_44c & 8) != 0) && ((local_44c & 4) == 0)) {
          FUN_004a6750(0x30,iVar8,param_1,&local_43c);
        }
        if ((local_434 == 0) && (psVar10 = local_448, uVar3 = local_444, 0 < (int)uVar11)) {
          do {
            uVar3 = uVar3 - 1;
            iVar5 = FUN_004a95d0(&local_41c,psVar10,DAT_004d1f9c);
            if (iVar5 < 1) break;
            FUN_004a6720(local_41c,param_1,&local_43c);
            psVar10 = (short *)((int)psVar10 + iVar5);
          } while (0 < (int)uVar3);
        }
        else {
          FUN_004a6790(psVar9,uVar11,param_1,&local_43c);
        }
        psVar10 = local_448;
        uVar3 = local_444;
        if ((local_44c & 4) != 0) {
          FUN_004a6750(0x20,iVar8,param_1,&local_43c);
        }
      }
    }
    uVar7 = *param_2;
    param_2 = param_2 + 1;
    uVar11 = uVar3;
    psVar9 = psVar10;
  } while( true );
}



void FUN_004a6720(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;

  sVar1 = FUN_004a9750(param_1,param_2);
  if (sVar1 == -1) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



void FUN_004a6750(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_004a6720(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



void FUN_004a6790(undefined2 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined2 uVar1;

  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_004a6720(uVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



undefined4 FUN_004a67d0(int *param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



undefined8 FUN_004a67f0(int *param_1)

{
  undefined8 *puVar1;

  puVar1 = (undefined8 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



uint __thiscall FUN_004a6810(undefined4 param_1_00,ushort **param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort **ppuVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_4;

  ppuVar3 = param_1;
  local_4 = param_1_00;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    puVar2 = param_1[4];
    if (puVar2 == (ushort *)0xffffffff) {
      puVar4 = &DAT_004d43a0;
    }
    else {
      puVar4 = (undefined *)((&DAT_00ecd500)[(int)puVar2 >> 5] + ((uint)puVar2 & 0x1f) * 0x24);
    }
    if ((puVar4[4] & 0x80) != 0) {
      puVar2 = param_1[1];
      uVar8 = 1;
      param_1[1] = (ushort *)((int)puVar2 + -1);
      if ((int)(ushort *)((int)puVar2 + -1) < 0) {
        uVar5 = FUN_004a40f0(param_1);
      }
      else {
        uVar5 = (uint)*(byte *)*param_1;
        *param_1 = (ushort *)((int)*param_1 + 1);
      }
      if (uVar5 == 0xffffffff) {
        return 0xffffffff;
      }
      local_4 = CONCAT31(local_4._1_3_,(char)uVar5);
      if ((PTR_DAT_004d1d90[(uVar5 & 0xff) * 2 + 1] & 0x80) != 0) {
        puVar2 = ppuVar3[1];
        ppuVar3[1] = (ushort *)((int)puVar2 + -1);
        if ((int)(ushort *)((int)puVar2 + -1) < 0) {
          uVar5 = FUN_004a40f0(ppuVar3);
        }
        else {
          uVar5 = (uint)*(byte *)*ppuVar3;
          *ppuVar3 = (ushort *)((int)*ppuVar3 + 1);
        }
        if (uVar5 == 0xffffffff) {
          FUN_004a99c0((int)(char)local_4,ppuVar3);
          return 0xffff;
        }
        uVar8 = 2;
      }
      iVar6 = FUN_004a95d0(&param_1,&local_4,uVar8);
      if (iVar6 == -1) {
        puVar7 = (undefined4 *)FUN_004a3dc0();
        *puVar7 = 0x2a;
        return 0xffff;
      }
      return (uint)param_1 & 0xffff;
    }
  }
  puVar2 = param_1[1];
  param_1[1] = puVar2 + -1;
  if (-1 < (int)(puVar2 + -1)) {
    uVar1 = **param_1;
    *param_1 = *param_1 + 1;
    return (uint)uVar1;
  }
  uVar5 = FUN_004a98c0(param_1);
  return uVar5;
}



void FUN_004a6a10(int *param_1)

{
  int iVar1;

  DAT_00dfaeb8 = DAT_00dfaeb8 + 1;
  iVar1 = FUN_0049f270(0x1000);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  param_1[2] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  param_1[1] = 0;
  return;
}



byte FUN_004a6a70(uint param_1)

{
  if (DAT_00ecd600 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



undefined4 FUN_004a6aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;

  InterlockedIncrement((LONG *)&DAT_00ecd60c);
  bVar2 = DAT_00ecd608 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    FUN_004a1670(0x13);
  }
  uVar1 = FUN_004a6b10(param_1,param_2);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    return uVar1;
  }
  FUN_004a16f0(0x13);
  return uVar1;
}



LPSTR FUN_004a6b10(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  undefined4 *puVar2;

  pCVar1 = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_00dfab38 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    pCVar1 = (LPSTR)WideCharToMultiByte(DAT_00dfab48,0x220,&param_2,1,pCVar1,DAT_004d1f9c,
                                        (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((pCVar1 != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return pCVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 0x2a;
  return (LPSTR)0xffffffff;
}



// Library Function - Single Match
//  __aulldiv
//
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  __aullrem
//
// Library: Visual Studio

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



uint FUN_004a6c80(uint param_1,uint param_2)

{
  uint uVar1;

  uVar1 = FUN_004a6ce0();
  uVar1 = param_2 & param_1 | ~param_2 & uVar1;
  FUN_004a6d80(uVar1);
  return uVar1;
}



void FUN_004a6cc0(undefined4 param_1,uint param_2)

{
  FUN_004a6c80(param_1,param_2 & 0xfff7ffff);
  return;
}



uint FUN_004a6ce0(uint param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 < 0x401) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



void FUN_004a6d80(void)

{
  return;
}



undefined4 FUN_004a6e10(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;

  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if ((*(uint *)(param_1 + iVar3 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    piVar2 = (int *)(param_1 + iVar3 * 4);
    do {
      if (*piVar2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 3);
    return 1;
  }
  return 1;
}



void FUN_004a6e80(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  iVar2 = FUN_004a9b40(*(undefined4 *)(param_1 + iVar3 * 4),
                       1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                            0x1f),param_1 + iVar3 * 4);
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_004a9b40(*puVar4,1,puVar4);
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}



undefined4 FUN_004a6ef0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4;

  local_4 = 0;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(param_1 + iVar3 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_004a6e10(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_004a6e80(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + iVar3 * 4) = *(uint *)(param_1 + iVar3 * 4) & -1 << (bVar2 & 0x1f);
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar1 = 3 - iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return local_4;
}



void FUN_004a6f90(int param_1,undefined4 *param_2)

{
  int iVar1;

  param_1 = param_1 - (int)param_2;
  iVar1 = 3;
  do {
    *(undefined4 *)((int)param_2 + param_1) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_004a6fb0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 FUN_004a6fc0(int *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



void FUN_004a6fe0(uint *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;

  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  uVar5 = 0;
  bVar2 = (((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2;
  param_2 = 3;
  puVar6 = param_1;
  do {
    uVar4 = *puVar6 >> (bVar2 & 0x1f) | uVar5;
    uVar5 = (~(-1 << (bVar2 & 0x1f)) & *puVar6) << (0x20 - bVar2 & 0x1f);
    *puVar6 = uVar4;
    param_2 = param_2 + -1;
    puVar6 = puVar6 + 1;
  } while (param_2 != 0);
  iVar7 = 2;
  iVar3 = 8;
  do {
    if (iVar7 < iVar1) {
      *(undefined4 *)((int)param_1 + iVar3) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + iVar3) = *(undefined4 *)((int)param_1 + iVar3 + iVar1 * -4);
    }
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return;
}



undefined4 FUN_004a70a0(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined local_c [12];

  uVar1 = param_1[5];
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = FUN_004a6fc0(&local_18);
    if (iVar2 == 0) {
      FUN_004a6fb0(&local_18);
      uVar3 = 2;
      goto LAB_004a7221;
    }
  }
  else {
    FUN_004a6f90(local_c,&local_18);
    iVar2 = FUN_004a6ef0(&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_004a6fb0(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_004a7221;
    }
    if (iVar5 <= iVar2) {
      FUN_004a6f90(&local_18,local_c);
      FUN_004a6fe0(&local_18,iVar2 - iVar5);
      FUN_004a6ef0(&local_18,param_3[2]);
      FUN_004a6fe0(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_004a7221;
    }
    if (*param_3 <= iVar5) {
      FUN_004a6fb0(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_004a6fe0(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_004a7221;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_004a6fe0(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_004a7221:
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}



void FUN_004a7270(undefined4 param_1,undefined4 param_2)

{
  FUN_004a70a0(param_1,param_2,&DAT_004d4880);
  return;
}



void FUN_004a7290(undefined4 param_1,undefined4 param_2)

{
  FUN_004a70a0(param_1,param_2,&DAT_004d4898);
  return;
}



void FUN_004a72b0(undefined4 param_1,undefined4 param_2)

{
  undefined local_c [12];

  FUN_004a8490(local_c,&param_2,param_2,0,0,0,0);
  FUN_004a7270(local_c,param_1);
  return;
}



void FUN_004a72f0(undefined4 param_1,undefined4 param_2)

{
  undefined local_c [12];

  FUN_004a8490(local_c,&param_2,param_2,0,0,0,0);
  FUN_004a7290(local_c,param_1);
  return;
}



void FUN_004a7330(undefined4 *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;

  pcVar5 = *(char **)(param_3 + 0xc);
  pcVar8 = (char *)((int)param_1 + 1);
  *(char *)param_1 = '0';
  pcVar1 = pcVar8;
  iVar6 = param_2;
  if (0 < param_2) {
    do {
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        cVar2 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar1 = cVar2;
      pcVar1 = pcVar1 + 1;
      iVar6 = iVar6 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *pcVar1 = '\0';
  if ((-1 < iVar6) && ('4' < *pcVar5)) {
    cVar2 = pcVar1[-1];
    while (pcVar5 = pcVar1 + -1, cVar2 == '9') {
      *pcVar5 = '0';
      cVar2 = pcVar1[-2];
      pcVar1 = pcVar5;
    }
    *pcVar5 = *pcVar5 + '\x01';
  }
  if (*(char *)param_1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    return;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar5;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  puVar7 = (undefined4 *)(pcVar5 + -uVar3);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar7;
    puVar7 = puVar7 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_1 = *(char *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



int * FUN_004a73d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];

  FUN_004a7460(&local_28,&param_1);
  iVar2 = FUN_004a9d40(local_28,local_24,local_20,0x11,0,&local_1c);
  param_3[2] = iVar2;
  param_3[1] = (int)local_1c;
  *param_3 = (int)local_1a;
  uVar3 = 0xffffffff;
  pcVar6 = local_18;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar5 = (undefined4 *)(pcVar7 + -uVar3);
  puVar8 = param_4;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  param_3[3] = (int)param_4;
  return param_3;
}



void FUN_004a7460(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;

  uVar4 = 0x80000000;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  if (uVar3 == 0) {
    uVar4 = 0;
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar6 = 0x3c01;
  }
  else if (uVar3 == 0x7ff) {
    iVar6 = 0x7fff;
  }
  else {
    iVar6 = uVar3 + 0x3c00;
  }
  uVar5 = (ushort)iVar6;
  uVar3 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | uVar4;
  param_1[1] = uVar3;
  *param_1 = uVar2 << 0xb;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x80000000) {
    uVar4 = uVar3 * 2;
    uVar3 = *param_1 >> 0x1f | uVar4;
    iVar6 = iVar6 + 0xffff;
    uVar5 = (ushort)iVar6;
    param_1[1] = uVar3;
    *param_1 = *param_1 * 2;
  }
  *(ushort *)(param_1 + 2) = uVar5 | uVar1 & 0x8000;
  return;
}



uint FUN_004a75e0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;

  uVar2 = DAT_00dfaef8;
  uVar1 = DAT_00dfaef6;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_004aa0d0(1,DAT_00dfaef6,0x31,param_1 + 4);
  uVar4 = FUN_004aa0d0(1,uVar1,0x32,param_1 + 8);
  uVar5 = FUN_004aa0d0(1,uVar1,0x33,param_1 + 0xc);
  uVar6 = FUN_004aa0d0(1,uVar1,0x34,param_1 + 0x10);
  uVar7 = FUN_004aa0d0(1,uVar1,0x35,param_1 + 0x14);
  uVar8 = FUN_004aa0d0(1,uVar1,0x36,param_1 + 0x18);
  uVar9 = FUN_004aa0d0(1,uVar1,0x37,param_1);
  uVar10 = FUN_004aa0d0(1,uVar1,0x2a,param_1 + 0x20);
  uVar11 = FUN_004aa0d0(1,uVar1,0x2b,param_1 + 0x24);
  uVar12 = FUN_004aa0d0(1,uVar1,0x2c,param_1 + 0x28);
  uVar13 = FUN_004aa0d0(1,uVar1,0x2d,param_1 + 0x2c);
  uVar14 = FUN_004aa0d0(1,uVar1,0x2e,param_1 + 0x30);
  uVar15 = FUN_004aa0d0(1,uVar1,0x2f,param_1 + 0x34);
  uVar16 = FUN_004aa0d0(1,uVar1,0x30,param_1 + 0x1c);
  uVar17 = FUN_004aa0d0(1,uVar1,0x44,param_1 + 0x38);
  uVar18 = FUN_004aa0d0(1,uVar1,0x45,param_1 + 0x3c);
  uVar19 = FUN_004aa0d0(1,uVar1,0x46,param_1 + 0x40);
  uVar20 = FUN_004aa0d0(1,uVar1,0x47,param_1 + 0x44);
  uVar21 = FUN_004aa0d0(1,uVar1,0x48,param_1 + 0x48);
  uVar22 = FUN_004aa0d0(1,uVar1,0x49,param_1 + 0x4c);
  uVar23 = FUN_004aa0d0(1,uVar1,0x4a,param_1 + 0x50);
  uVar24 = FUN_004aa0d0(1,uVar1,0x4b,param_1 + 0x54);
  uVar25 = FUN_004aa0d0(1,uVar1,0x4c,param_1 + 0x58);
  uVar26 = FUN_004aa0d0(1,uVar1,0x4d,param_1 + 0x5c);
  uVar27 = FUN_004aa0d0(1,uVar1,0x4e,param_1 + 0x60);
  uVar28 = FUN_004aa0d0(1,uVar1,0x4f,param_1 + 100);
  uVar29 = FUN_004aa0d0(1,uVar1,0x38,param_1 + 0x68);
  uVar30 = FUN_004aa0d0(1,uVar1,0x39,param_1 + 0x6c);
  uVar31 = FUN_004aa0d0(1,uVar1,0x3a,param_1 + 0x70);
  uVar32 = FUN_004aa0d0(1,uVar1,0x3b,param_1 + 0x74);
  uVar33 = FUN_004aa0d0(1,uVar1,0x3c,param_1 + 0x78);
  uVar34 = FUN_004aa0d0(1,uVar1,0x3d,param_1 + 0x7c);
  uVar35 = FUN_004aa0d0(1,uVar1,0x3e,param_1 + 0x80);
  uVar36 = FUN_004aa0d0(1,uVar1,0x3f,param_1 + 0x84);
  uVar37 = FUN_004aa0d0(1,uVar1,0x40,param_1 + 0x88);
  uVar38 = FUN_004aa0d0(1,uVar1,0x41,param_1 + 0x8c);
  uVar39 = FUN_004aa0d0(1,uVar1,0x42,param_1 + 0x90);
  uVar40 = FUN_004aa0d0(1,uVar1,0x43,param_1 + 0x94);
  uVar41 = FUN_004aa0d0(1,uVar1,0x28,param_1 + 0x98);
  uVar42 = FUN_004aa0d0(1,uVar1,0x29,param_1 + 0x9c);
  uVar43 = FUN_004aa0d0(1,uVar2,0x1f,param_1 + 0xa0);
  uVar44 = FUN_004aa0d0(1,uVar2,0x20,param_1 + 0xa4);
  uVar45 = FUN_004a7ba0(uVar2,param_1);
  return uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
         uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 | uVar23 |
         uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 | uVar33 |
         uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 |
         uVar44 | uVar45;
}



void FUN_004a7960(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_0049f200(param_1[1]);
    FUN_0049f200(param_1[2]);
    FUN_0049f200(param_1[3]);
    FUN_0049f200(param_1[4]);
    FUN_0049f200(param_1[5]);
    FUN_0049f200(param_1[6]);
    FUN_0049f200(*param_1);
    FUN_0049f200(param_1[8]);
    FUN_0049f200(param_1[9]);
    FUN_0049f200(param_1[10]);
    FUN_0049f200(param_1[0xb]);
    FUN_0049f200(param_1[0xc]);
    FUN_0049f200(param_1[0xd]);
    FUN_0049f200(param_1[7]);
    FUN_0049f200(param_1[0xe]);
    FUN_0049f200(param_1[0xf]);
    FUN_0049f200(param_1[0x10]);
    FUN_0049f200(param_1[0x11]);
    FUN_0049f200(param_1[0x12]);
    FUN_0049f200(param_1[0x13]);
    FUN_0049f200(param_1[0x14]);
    FUN_0049f200(param_1[0x15]);
    FUN_0049f200(param_1[0x16]);
    FUN_0049f200(param_1[0x17]);
    FUN_0049f200(param_1[0x18]);
    FUN_0049f200(param_1[0x19]);
    FUN_0049f200(param_1[0x1a]);
    FUN_0049f200(param_1[0x1b]);
    FUN_0049f200(param_1[0x1c]);
    FUN_0049f200(param_1[0x1d]);
    FUN_0049f200(param_1[0x1e]);
    FUN_0049f200(param_1[0x1f]);
    FUN_0049f200(param_1[0x20]);
    FUN_0049f200(param_1[0x21]);
    FUN_0049f200(param_1[0x22]);
    FUN_0049f200(param_1[0x23]);
    FUN_0049f200(param_1[0x24]);
    FUN_0049f200(param_1[0x25]);
    FUN_0049f200(param_1[0x26]);
    FUN_0049f200(param_1[0x27]);
    FUN_0049f200(param_1[0x28]);
    FUN_0049f200(param_1[0x29]);
    FUN_0049f200(param_1[0x2a]);
  }
  return;
}



uint FUN_004a7ba0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;

  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_004aa0d0(0,param_1,0x23,&local_4);
  uVar4 = FUN_004aa0d0(0,pcVar7,0x25,&local_8);
  uVar5 = FUN_004aa0d0(1,pcVar7,0x1e,&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined *)FUN_0049f270(0xd);
  *(undefined **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_004a7c3c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_004a7c3c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_004a7c3c:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_0049f200(param_1);
  return 0;
}



uint FUN_004a7f90(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;

  uVar1 = DAT_00dfaeec;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004aa0d0(1,DAT_00dfaeec,0x15,param_1 + 0xc);
  uVar3 = FUN_004aa0d0(1,uVar1,0x14,param_1 + 0x10);
  uVar4 = FUN_004aa0d0(1,uVar1,0x16,param_1 + 0x14);
  uVar5 = FUN_004aa0d0(1,uVar1,0x17,param_1 + 0x18);
  uVar6 = FUN_004aa0d0(1,uVar1,0x18,(undefined4 *)(param_1 + 0x1c));
  FUN_004a80e0(*(undefined4 *)(param_1 + 0x1c));
  uVar7 = FUN_004aa0d0(1,uVar1,0x50,param_1 + 0x20);
  uVar8 = FUN_004aa0d0(1,uVar1,0x51,param_1 + 0x24);
  uVar9 = FUN_004aa0d0(0,uVar1,0x1a,param_1 + 0x28);
  uVar10 = FUN_004aa0d0(0,uVar1,0x19,param_1 + 0x29);
  uVar11 = FUN_004aa0d0(0,uVar1,0x54,param_1 + 0x2a);
  uVar12 = FUN_004aa0d0(0,uVar1,0x55,param_1 + 0x2b);
  uVar13 = FUN_004aa0d0(0,uVar1,0x56,param_1 + 0x2c);
  uVar14 = FUN_004aa0d0(0,uVar1,0x57,param_1 + 0x2d);
  uVar15 = FUN_004aa0d0(0,uVar1,0x52,param_1 + 0x2e);
  uVar16 = FUN_004aa0d0(0,uVar1,0x53,param_1 + 0x2f);
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16;
}



void FUN_004a80e0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;

  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_004a80f6;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_004a80f6:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



void FUN_004a8120(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_00dfb010)) {
    FUN_0049f200(*(undefined **)(param_1 + 0xc));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x10));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x14));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x18));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x1c));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x20));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x24));
  }
  return;
}



// Library Function - Single Match
//  _strcspn
//
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    pbVar2 = (byte *)((int)&uStack_28 + ((int)(uint)bVar1 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (bVar1 & 7);
  }
  sVar3 = 0xffffffff;
  do {
    sVar3 = sVar3 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar3;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((*(byte *)((int)&uStack_28 + ((int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0);
  return sVar3;
}



undefined4
FUN_004a8490(ushort *param_1,byte **param_2,byte *param_3,undefined4 param_4,int param_5,int param_6
            ,int param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int local_60;
  char *local_5c;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  undefined4 local_30;
  ushort local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  byte *local_26;
  undefined4 local_22;
  char local_1c [23];
  char local_5;

  local_5c = local_1c;
  iVar8 = 0;
  uVar13 = 0;
  uVar7 = 0;
  local_4c = 1;
  local_54 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  bVar6 = false;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_50 = param_3;
  for (pbVar11 = param_3;
      (((bVar10 = *pbVar11, bVar10 == 0x20 || (bVar10 == 9)) || (bVar10 == 10)) ||
      (pbVar14 = param_3, bVar10 == 0xd)); pbVar11 = pbVar11 + 1) {
  }
  do {
    bVar10 = *pbVar11;
    pbVar12 = pbVar11 + 1;
    param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
    switch(iVar8) {
    case 0:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_004a8962;
      }
      if (bVar10 == DAT_004d1fa0) {
        iVar8 = 5;
      }
      else if (bVar10 == 0x2b) {
        iVar8 = 2;
        uVar7 = 0;
      }
      else if (bVar10 == 0x2d) {
        iVar8 = 2;
        uVar7 = 0x8000;
      }
      else {
        if (bVar10 != 0x30) goto switchD_004a8752_caseD_2c;
        iVar8 = 1;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_004a8962;
      }
      if (bVar10 == DAT_004d1fa0) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_004a8752_caseD_2b;
        default:
          goto switchD_004a8752_caseD_2c;
        case 0x30:
switchD_004a85c6_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_004a8752_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_004a8962;
      }
      if (bVar10 == DAT_004d1fa0) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_004a85c6_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_004d1f9c < 2) {
          uVar9 = (byte)PTR_DAT_004d1d90[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_0049f440((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          bVar10 = *pbVar12;
          local_5c = local_5c + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar10 = *pbVar12;
          local_60 = local_60 + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
      }
      local_54 = uVar13;
      if (bVar10 != DAT_004d1fa0) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_004a8752_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_004a8752_caseD_44;
        }
switchD_004a8752_caseD_2c:
        iVar8 = 10;
        goto LAB_004a8962;
      }
      iVar8 = 4;
      break;
    case 4:
      bVar4 = true;
      if (uVar13 == 0) {
        while (bVar10 == 0x30) {
          bVar10 = *pbVar12;
          local_60 = local_60 + -1;
          pbVar12 = pbVar12 + 1;
          param_3._1_3_ = (undefined3)((uint)param_3 >> 8);
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
        }
      }
      while( true ) {
        bVar2 = true;
        if (DAT_004d1f9c < 2) {
          uVar9 = (byte)PTR_DAT_004d1d90[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_0049f440((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          local_5c = local_5c + 1;
          local_60 = local_60 + -1;
        }
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_54 = uVar13;
      switch(bVar10) {
      case 0x2b:
      case 0x2d:
switchD_004a8752_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_004a8752_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_004a8752_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_004d1f9c < 2) {
        uVar9 = (byte)PTR_DAT_004d1d90[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_0049f440(bVar10,4);
      }
      if (uVar9 == 0) {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      else {
        iVar8 = 4;
        pbVar12 = pbVar11;
      }
      break;
    case 6:
      pbVar11 = pbVar11 + -1;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_004a8962;
      }
      if (bVar10 == 0x2b) {
LAB_004a8956:
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_004a8846;
LAB_004a8947:
        iVar8 = 7;
        local_4c = -1;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_004a8962;
      }
LAB_004a8846:
      if (bVar10 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar10 == 0x30) {
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_004a8752_caseD_2c;
      iVar8 = 9;
LAB_004a8962:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_004d1f9c < 2) {
          uVar13 = (byte)PTR_DAT_004d1d90[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_0049f440((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_004a88ca;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_48 = 0x1451;
LAB_004a88ca:
      while( true ) {
        if (DAT_004d1f9c < 2) {
          uVar13 = (byte)PTR_DAT_004d1d90[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_0049f440((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      iVar8 = 10;
      pbVar12 = pbVar12 + -1;
      uVar13 = local_54;
      pbVar14 = local_50;
      break;
    case 0xb:
      if (param_7 == 0) goto switchD_004a8752_caseD_2c;
      if (bVar10 == 0x2b) goto LAB_004a8956;
      if (bVar10 == 0x2d) goto LAB_004a8947;
      iVar8 = 10;
      pbVar12 = pbVar11;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
    }
    pbVar11 = pbVar12;
  } while (iVar8 != 10);
  *param_2 = pbVar12;
  if (bVar2) {
    if (0x18 < uVar13) {
      if ('\x04' < local_5) {
        local_5 = local_5 + '\x01';
      }
      local_5c = local_5c + -1;
      local_60 = local_60 + 1;
      uVar13 = 0x18;
    }
    if (uVar13 == 0) {
      local_2c = 0;
      local_22._0_2_ = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      goto LAB_004a8a34;
    }
    cVar1 = local_5c[-1];
    while (cVar1 == '\0') {
      uVar13 = uVar13 - 1;
      local_60 = local_60 + 1;
      cVar1 = local_5c[-2];
      local_5c = local_5c + -1;
    }
    FUN_004a9c40(local_1c,uVar13,&local_2c);
    if (local_4c < 0) {
      local_48 = -local_48;
    }
    local_48 = local_48 + local_60;
    if (!bVar3) {
      local_48 = local_48 + param_5;
    }
    if (!bVar4) {
      local_48 = local_48 - param_6;
    }
    if (local_48 < 0x1451) {
      if (-0x1451 < local_48) {
        FUN_004aa650(&local_2c,local_48,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,uStack_2a);
        param_3 = local_26;
        goto LAB_004a8a34;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_2c = (ushort)param_3;
  pbVar11 = param_3;
  local_22._0_2_ = local_2c;
LAB_004a8a34:
  if (bVar2) {
    if (bVar5) {
      pbVar11 = (byte *)0x0;
      local_22._0_2_ = 0x7fff;
      param_3 = (byte *)0x80000000;
      local_2c = 0;
      local_30 = 2;
    }
    else if (bVar6) {
      local_2c = 0;
      local_22._0_2_ = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_30 = 1;
    }
  }
  else {
    local_2c = 0;
    local_22._0_2_ = 0;
    param_3 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    local_30 = 4;
  }
  *param_1 = local_2c;
  *(byte **)(param_1 + 1) = pbVar11;
  *(byte **)(param_1 + 3) = param_3;
  param_1[5] = (ushort)local_22 | uVar7;
  return local_30;
}

#endif
