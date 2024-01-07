#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_00483fc0(undefined4 param_1)

{
  undefined1 *puVar1;

  puVar1 = &DAT_00dfb040;
  do {
    FUN_00431a00(puVar1,param_1);
    puVar1 = puVar1 + 0x16c;
  } while ((int)puVar1 < 0xdfb5f0);
  return;
}



void FUN_00483ff0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;

  puVar1 = &DAT_00dfb040;
  do {
    FUN_00431a10(puVar1,param_1,param_2);
    puVar1 = puVar1 + 0x16c;
  } while ((int)puVar1 < 0xdfb5f0);
  return;
}



void FUN_00484020(short param_1,short param_2,short param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;

  if (DAT_0050cd10 < 0x1f) {
    param_1 = param_1 + -1;
    param_2 = param_2 + -1;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (DAT_00ec86c4 + -1 < (int)param_3) {
      param_3 = (short)DAT_00ec86c4 + -1;
    }
    if (DAT_00ec85e8 + -1 < (int)param_4) {
      param_4 = (short)DAT_00ec85e8 + -1;
    }
    if ((param_1 < param_3) && (param_2 < param_4)) {
      iVar2 = DAT_0050cd10 * 8;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22720 + iVar2) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22722 + iVar2) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22724 + iVar2) = uVar1;
      uVar1 = __ftol();
      DAT_0050cd10 = DAT_0050cd10 + 1;
      *(undefined2 *)(&DAT_00e22726 + iVar2) = uVar1;
    }
  }
  return;
}



void FUN_00484130(void)

{
  DAT_0050cd10 = 0;
  return;
}



int * FUN_00484140(undefined4 param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;

  piVar1 = (int *)(**(code **)(DAT_00ecc420 + 0x20))(0x8c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar1;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  if (-1 < param_2) {
    if (param_2 < 3) {
      FUN_004846e0(piVar1 + 2,0x80,param_1,&DAT_004c7d54);
    }
    else if (param_2 == 3) {
      if (*param_3 == '.') {
        param_3 = param_3 + 1;
      }
      FUN_0049eb80(&DAT_00ecbc20,&DAT_004c7d58,param_3);
      FUN_004846e0(piVar1 + 2,0x80,param_1,&DAT_00ecbc20);
      *piVar1 = 3;
      return piVar1;
    }
  }
  *piVar1 = param_2;
  return piVar1;
}



void FUN_004841e0(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_004a0ec0(*(undefined4 *)(param_1 + 0x88));
    }
    if (param_1 != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1);
    }
  }
  return;
}



undefined4 FUN_00484220(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint local_118 [3];
  undefined4 local_10c;
  char local_104 [260];

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  if (iVar3 == 0) {
    iVar3 = FUN_004a0c70(param_1 + 2,local_118);
    param_1[0x22] = iVar3;
  }
  else {
    iVar3 = FUN_004a0da0(param_1[0x22],local_118);
  }
  if (iVar3 == -1) {
    return 0;
  }
  iVar3 = *param_1;
  if ((((iVar3 == 0) || (iVar3 == 3)) || ((iVar3 == 1 && ((local_118[0] & 0x10) == 0)))) ||
     ((iVar3 == 2 && ((local_118[0] & 0x10) != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)(pcVar8 + -uVar4);
  puVar9 = param_2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar9 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_2[0x41] = local_118[0] & 0x10;
  param_2[0x42] = local_10c;
  return 1;
}



void FUN_00484310(LPCSTR param_1)

{
  CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  return;
}



BOOL FUN_00484330(LPCSTR param_1)

{
  char cVar1;
  byte bVar2;
  HANDLE hFindFile;
  CHAR *pCVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  LPCSTR pCVar12;
  char *pcVar13;
  char *pcVar14;
  CHAR *pCVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 local_244 [65];
  _WIN32_FIND_DATAA local_140;

  uVar5 = 0xffffffff;
  pCVar12 = param_1;
  do {
    pcVar13 = pCVar12;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar13 = pCVar12 + 1;
    cVar1 = *pCVar12;
    pCVar12 = pcVar13;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  puVar11 = (undefined4 *)(pcVar13 + -uVar5);
  puVar16 = local_244;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar16 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar16 = puVar16 + 1;
  }
  iVar8 = 1;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar16 = *(undefined *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  uVar5 = 0xffffffff;
  pcVar13 = &DAT_004c7d60;
  do {
    pcVar14 = pcVar13;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  puVar11 = local_244;
  do {
    puVar16 = puVar11;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    puVar16 = (undefined4 *)((int)puVar11 + 1);
    cVar1 = *(char *)puVar11;
    puVar11 = puVar16;
  } while (cVar1 != '\0');
  puVar11 = (undefined4 *)(pcVar14 + -uVar5);
  puVar16 = (undefined4 *)((int)puVar16 + -1);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar16 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar16 = puVar16 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar16 = *(undefined *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  hFindFile = FindFirstFileA((LPCSTR)local_244,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    iVar8 = 0;
  }
  else {
    do {
      if (local_140.dwFileAttributes == 0x10) {
        puVar9 = &DAT_004b3b2c;
        pCVar3 = local_140.cFileName;
        do {
          bVar2 = *pCVar3;
          bVar17 = bVar2 < *(byte *)puVar9;
          if (bVar2 != *(byte *)puVar9) {
LAB_004843f5:
            iVar7 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_004843fa;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar3[1];
          bVar17 = bVar2 < *(byte *)((int)puVar9 + 1);
          if (bVar2 != *(byte *)((int)puVar9 + 1)) goto LAB_004843f5;
          pCVar3 = pCVar3 + 2;
          puVar9 = puVar9 + 1;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_004843fa:
        if (iVar7 != 0) {
          pbVar10 = &DAT_004b4f44;
          pCVar3 = local_140.cFileName;
          do {
            bVar2 = *pCVar3;
            bVar17 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_00484432:
              iVar7 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_00484437;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar3[1];
            bVar17 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_00484432;
            pCVar3 = pCVar3 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_00484437:
          if (iVar7 != 0) {
            uVar5 = 0xffffffff;
            pCVar12 = param_1;
            do {
              pcVar13 = pCVar12;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar13 = pCVar12 + 1;
              cVar1 = *pCVar12;
              pCVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            puVar11 = (undefined4 *)(pcVar13 + -uVar5);
            puVar16 = local_244;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar16 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar16 = *(undefined *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            uVar5 = 0xffffffff;
            pcVar13 = &DAT_004b3b48;
            do {
              pcVar14 = pcVar13;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            iVar8 = -1;
            puVar11 = local_244;
            do {
              puVar16 = puVar11;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              puVar16 = (undefined4 *)((int)puVar11 + 1);
              cVar1 = *(char *)puVar11;
              puVar11 = puVar16;
            } while (cVar1 != '\0');
            puVar11 = (undefined4 *)(pcVar14 + -uVar5);
            puVar16 = (undefined4 *)((int)puVar16 + -1);
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar16 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar16 = *(undefined *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            uVar5 = 0xffffffff;
            pCVar3 = local_140.cFileName;
            do {
              pCVar15 = pCVar3;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pCVar15 = pCVar3 + 1;
              cVar1 = *pCVar3;
              pCVar3 = pCVar15;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            iVar8 = -1;
            puVar11 = local_244;
            do {
              puVar16 = puVar11;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              puVar16 = (undefined4 *)((int)puVar11 + 1);
              cVar1 = *(char *)puVar11;
              puVar11 = puVar16;
            } while (cVar1 != '\0');
            pCVar3 = pCVar15 + -uVar5;
            puVar11 = (undefined4 *)((int)puVar16 + -1);
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar11 = *(undefined4 *)pCVar3;
              pCVar3 = pCVar3 + 4;
              puVar11 = puVar11 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(CHAR *)puVar11 = *pCVar3;
              pCVar3 = pCVar3 + 1;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            iVar8 = FUN_00484330(local_244);
          }
        }
      }
      else {
        uVar5 = 0xffffffff;
        pCVar12 = param_1;
        do {
          pcVar13 = pCVar12;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar13 = pCVar12 + 1;
          cVar1 = *pCVar12;
          pCVar12 = pcVar13;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        puVar11 = (undefined4 *)(pcVar13 + -uVar5);
        puVar16 = local_244;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar16 = puVar16 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)puVar16 = *(undefined *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        uVar5 = 0xffffffff;
        pcVar13 = &DAT_004b3b48;
        do {
          pcVar14 = pcVar13;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar8 = -1;
        puVar11 = local_244;
        do {
          puVar16 = puVar11;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          puVar16 = (undefined4 *)((int)puVar11 + 1);
          cVar1 = *(char *)puVar11;
          puVar11 = puVar16;
        } while (cVar1 != '\0');
        puVar11 = (undefined4 *)(pcVar14 + -uVar5);
        puVar16 = (undefined4 *)((int)puVar16 + -1);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar16 = puVar16 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)puVar16 = *(undefined *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        uVar5 = 0xffffffff;
        pCVar3 = local_140.cFileName;
        do {
          pCVar15 = pCVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pCVar15 = pCVar3 + 1;
          cVar1 = *pCVar3;
          pCVar3 = pCVar15;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar8 = -1;
        puVar11 = local_244;
        do {
          puVar16 = puVar11;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          puVar16 = (undefined4 *)((int)puVar11 + 1);
          cVar1 = *(char *)puVar11;
          puVar11 = puVar16;
        } while (cVar1 != '\0');
        pCVar3 = pCVar15 + -uVar5;
        puVar11 = (undefined4 *)((int)puVar16 + -1);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *(undefined4 *)pCVar3;
          pCVar3 = pCVar3 + 4;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(CHAR *)puVar11 = *pCVar3;
          pCVar3 = pCVar3 + 1;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        iVar8 = DeleteFileA((LPCSTR)local_244);
      }
      BVar4 = FindNextFileA(hFindFile,&local_140);
    } while ((BVar4 != 0) && (iVar8 == 1));
    FindClose(hFindFile);
    if (iVar8 != 0) {
      BVar4 = RemoveDirectoryA(param_1);
      return BVar4;
    }
  }
  return iVar8;
}



char * FUN_004845b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;

  pcVar3 = _strrchr(param_1,0x5c);
  if (pcVar3 != (char *)0x0) {
    cVar2 = *pcVar3;
    while (cVar2 == '\\') {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    return pcVar3;
  }
  return param_1;
}



char * FUN_004845e0(undefined4 param_1)

{
  char *pcVar1;

  pcVar1 = (char *)FUN_004845b0(param_1);
  pcVar1 = _strrchr(pcVar1,0x2e);
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  return pcVar1 + 1;
}



undefined4 FUN_00484600(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;

  iVar2 = FUN_004845e0(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  puVar6 = &DAT_004b3b2c;
  do {
    puVar7 = puVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    puVar7 = (undefined2 *)((int)puVar6 + 1);
    cVar1 = *(char *)puVar6;
    puVar6 = puVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar8 = param_1;
  do {
    pcVar9 = pcVar8;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  puVar5 = (undefined4 *)((int)puVar7 - uVar3);
  puVar10 = (undefined4 *)(pcVar9 + -1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  uVar3 = 0xffffffff;
  do {
    pcVar8 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  do {
    pcVar9 = param_1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  puVar5 = (undefined4 *)(pcVar8 + -uVar3);
  puVar10 = (undefined4 *)(pcVar9 + -1);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  return 1;
}



void FUN_00484670(undefined4 param_1)

{
  int iVar1;

  iVar1 = FUN_004845e0(param_1);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + -1) = 0;
  }
  return;
}



char * FUN_00484690(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;

  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  uVar3 = uVar2 - 1;
  if (((param_1[uVar2 - 2] != '\\') && ((int)uVar3 < param_3 + -1)) && (*param_1 != '\0')) {
    param_1[uVar3] = '\\';
    param_1[uVar2] = '\0';
    uVar3 = uVar2;
  }
  _strncat(param_1,param_2,(param_3 - uVar3) - 1);
  return param_1;
}



void FUN_004846e0(char *param_1,int param_2,char *param_3,undefined4 param_4)

{
  _strncpy(param_1,param_3,param_2 - 1);
  param_1[param_2 + -1] = '\0';
  FUN_00484690(param_1,param_4,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 FUN_00484720(undefined4 param_1)

{
  undefined2 in_FPUControlWord;

  DAT_00ecc420 = param_1;
  DAT_00ec8c80 = in_FPUControlWord;
  DAT_00ec8c84 = CONCAT11(0xb,(char)in_FPUControlWord);
  DAT_00ec8c82 = CONCAT11(7,(char)in_FPUControlWord);
  _DAT_0050d518 = 1;
  return in_FPUControlWord;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00484760(void)

{
  _DAT_0050d518 = 0;
  return;
}



undefined4 FUN_00484780(code *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  bVar3 = false;
  if (param_1 != (code *)0x0) {
    iVar4 = 0;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      if (cVar2 == '\\') {
        bVar3 = true;
        iVar5 = iVar4;
      }
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_2[iVar1];
    }
    if (bVar3) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = FUN_0049f850(&DAT_0050cd18,0x800,param_2 + iVar5);
    iVar4 = FUN_0049f850(&DAT_0050cd18 + iVar5,0x800 - iVar5,s___d___004c7d68,param_3);
    FUN_004a10e0(&DAT_0050cd18 + iVar5 + iVar4,(0x800 - iVar5) - iVar4,param_4,&stack0x00000014);
    (*param_1)(&DAT_0050cd18);
  }
  return 0;
}



char * FUN_00484860(char *param_1)

{
  char *pcVar1;

  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    return pcVar1 + 1;
  }
  return param_1;
}



int FUN_00484880(int param_1)

{
  int iVar1;

  iVar1 = 0;
  if (1 < param_1) {
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (1 < param_1);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004848a0(void)

{
  int iVar1;
  undefined4 uVar2;

  if (DAT_0050d548 != (int *)0x0) {
    return 0;
  }
  FUN_0049e940();
  iVar1 = FUN_0049e970(0,&DAT_0050d548,0,0x80);
  if ((iVar1 < 0) || (DAT_0050d548 == (int *)0x0)) {
    DAT_004c7d80 = 0;
    DAT_0050d550 = 0;
    if (iVar1 < 0) {
      DAT_0050d548 = (int *)0x0;
      return 0;
    }
  }
  else {
    DAT_0050d550 = 1;
  }
  _DAT_0050d520 = 0x24;
  (**(code **)(*DAT_0050d548 + 0x2c))(DAT_0050d548,&DAT_0050d520);
  DAT_0050d55c = DAT_0050d524 & 0x28;
  DAT_0050d554 = DAT_0050d524 & 2;
  uVar2 = FUN_0048c780();
  iVar1 = (**(code **)(*DAT_0050d548 + 0x4c))(DAT_0050d548,uVar2,1);
  if (iVar1 < 0) {
    (**(code **)(*DAT_0050d548 + 8))(DAT_0050d548);
    DAT_0050d548 = (int *)0x0;
    return 0;
  }
  (**(code **)(*DAT_0050d548 + 0x5c))(DAT_0050d548,0);
  (**(code **)(*DAT_0050d548 + 0x6c))(DAT_0050d548,8);
  (**(code **)(*DAT_0050d548 + 0x68))(DAT_0050d548,&DAT_0050d544);
  FUN_00484a80(DAT_004c7d70);
  if (DAT_0050d550 != 0) {
    iVar1 = (**(code **)*DAT_0050d548)(DAT_0050d548,&DAT_004ae158,&DAT_0050d560);
    if (iVar1 < 0) {
      DAT_004c7d80 = 0;
      DAT_0050d550 = 0;
      DAT_0050d560 = 0;
      return 1;
    }
    (**(code **)(*DAT_0050d548 + 0x80))(DAT_0050d548,0x4051eb85);
    (**(code **)(*DAT_0050d548 + 0x90))(DAT_0050d548,DAT_004c7d78);
    (**(code **)(*DAT_0050d548 + 0x88))(DAT_0050d548,DAT_004c7d74);
  }
  return 1;
}



void FUN_00484a20(void)

{
  if (DAT_0050d548 != (int *)0x0) {
    if (DAT_0050d564 != (int *)0x0) {
      (**(code **)(*DAT_0050d564 + 8))(DAT_0050d564);
    }
    if (DAT_0050d560 != (int *)0x0) {
      (**(code **)(*DAT_0050d560 + 8))(DAT_0050d560);
    }
    (**(code **)(*DAT_0050d548 + 8))(DAT_0050d548);
    DAT_0050d564 = (int *)0x0;
    DAT_0050d560 = (int *)0x0;
    DAT_0050d548 = (int *)0x0;
    CoUninitialize();
    return;
  }
  return;
}



void FUN_00484a80(undefined4 param_1)

{
  if (DAT_0050d548 != (int *)0x0) {
    (**(code **)(*DAT_0050d548 + 100))(DAT_0050d548,param_1);
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int * FUN_00484aa0(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  byte bVar2;
  ushort unaff_retaddr;
  byte param_5;
  undefined2 uStack_20;
  ushort uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  int iStack_4;

  uStack_1c = (undefined2)unaff_EBX;
  uStack_1a = (undefined2)((uint)unaff_EBX >> 0x10);
  uStack_20 = (undefined2)unaff_ESI;
  uStack_1e = (ushort)((uint)unaff_ESI >> 0x10);
  local_18 = 0;
  if (DAT_0050d548 == (int *)0x0) {
    return (int *)0x0;
  }
  bVar2 = param_1 != 0;
  if ((param_5 & 4) != 0) {
    bVar2 = bVar2 | 4;
  }
  iVar1 = (**(code **)(*DAT_0050d548 + 0x44))(DAT_0050d548,bVar2);
  if (-1 < iVar1) {
    if (DAT_0050d550 == 0) {
      iVar1 = (**(code **)(local_18 + 0xd0))(&local_18,0x20);
      if (iVar1 < 0) goto LAB_00484b8b;
    }
    uStack_1e = (param_1 != 0) + 1;
    uStack_1c = (undefined2)iStack_4;
    uStack_1a = (undefined2)((uint)iStack_4 >> 0x10);
    uStack_20 = 1;
    local_18 = (int)((uint)uStack_1e * (uint)unaff_retaddr) >> 3;
    uStack_14 = CONCAT22(unaff_retaddr,(short)local_18);
    uStack_10 = 0;
    local_18 = local_18 * iStack_4;
    iVar1 = (**(code **)(local_18 + 0x1c))(&local_18,&uStack_20);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(local_18 + 0x14))(&local_18,param_1);
      if (-1 < iVar1) {
        return &local_18;
      }
    }
  }
LAB_00484b8b:
  if (&local_18 != (int *)0x0) {
    (**(code **)(local_18 + 8))(&local_18);
  }
  return (int *)0x0;
}



uint FUN_00484bb0(uint param_1)

{
  int iVar1;

  if (DAT_0050d548 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_0050d548 + 0x48))(DAT_0050d548,param_1,&param_1);
  return param_1 & (iVar1 < 0) - 1;
}



bool FUN_00484be0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int unaff_retaddr;

  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return false;
  }
  (**(code **)(*param_1 + 0x28))(param_1,&param_1);
  iVar2 = 1;
  if ((unaff_ESI & 4) == 0) {
    iVar2 = unaff_retaddr;
  }
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,iVar2 != 0);
  return -1 < iVar2;
}



void FUN_00484c30(int *param_1,float param_2)

{
  float local_8;
  float local_4;

  if (DAT_0050d548 != 0) {
    local_8 = 1.0 - param_2;
    local_4 = param_2 - -1.0;
    if (local_8 <= 1.0) {
      if (1.0 < local_4) {
        local_8 = local_8 / local_4;
        local_4 = 1.0;
      }
    }
    else {
      local_4 = local_4 / local_8;
      local_8 = 1.0;
    }
    if (local_8 < -1.0) {
      local_8 = -1.0;
    }
    else if (1.0 < local_8) {
      local_8 = 1.0;
    }
    if (local_4 < -1.0) {
      local_4 = -1.0;
    }
    else if (1.0 < local_4) {
      local_4 = 1.0;
    }
    (**(code **)(*param_1 + 0xe4))(param_1,2,&local_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00484d40(float param_1)

{
  if (param_1 < 0.0) {
    _DAT_004c7d7c = 0.0;
    return;
  }
  if (param_1 <= 10.0) {
    _DAT_004c7d7c = param_1;
    return;
  }
  _DAT_004c7d7c = 10.0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00484d90(int *param_1,float param_2)

{
  uint uVar1;

  if (DAT_0050d548 != 0) {
    uVar1 = FUN_00485040(param_1);
    if ((uVar1 & 0x20) != 0) {
      param_2 = param_2 * _DAT_004c7d7c;
    }
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}



void FUN_00484dd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0050d548 != 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,param_3);
  }
  return;
}



void FUN_00484df0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,1);
  return;
}



void FUN_00484e10(int *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1,*param_2,param_2[2],-(float)param_2[1]);
  return;
}



void FUN_00484e40(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (*param_2 < -340.0) {
    fVar1 = -340.0;
  }
  else if (340.0 < *param_2) {
    fVar1 = 340.0;
  }
  else {
    fVar1 = *param_2;
  }
  *param_2 = fVar1;
  if (param_2[1] < -10.0) {
    fVar2 = -10.0;
  }
  else if (10.0 < param_2[1]) {
    fVar2 = 10.0;
  }
  else {
    fVar2 = param_2[1];
  }
  param_2[1] = fVar2;
  if (param_2[2] < -340.0) {
    fVar3 = -340.0;
  }
  else if (340.0 < param_2[2]) {
    fVar3 = 340.0;
  }
  else {
    fVar3 = param_2[2];
  }
  param_2[2] = fVar3;
  (**(code **)(*param_1 + 0x80))(param_1,fVar1,fVar3,-fVar2);
  return;
}



void FUN_00484f10(undefined4 *param_1)

{
  if (DAT_0050d560 != (int *)0x0) {
    (**(code **)(*DAT_0050d560 + 0x3c))(DAT_0050d560,*param_1,param_1[2],-(float)param_1[1]);
  }
  return;
}



void FUN_00484f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;

  if (DAT_0050d560 != (int *)0x0) {
    puVar1 = (undefined4 *)-(float)param_1[1];
    (**(code **)(*DAT_0050d560 + 0xc))(DAT_0050d560,*param_1,param_1[2]);
    (**(code **)(*DAT_0050d560 + 0x2c))
              (DAT_0050d560,*puVar1,puVar1[2],-(float)puVar1[1],*unaff_ESI,unaff_ESI[2],
               -(float)unaff_ESI[1]);
  }
  return;
}



void FUN_00484fa0(void)

{
  if (DAT_0050d548 != (int *)0x0) {
    (**(code **)(*DAT_0050d548 + 0x34))(DAT_0050d548);
  }
  return;
}



void FUN_00484fb0(int *param_1,float param_2)

{
  if ((DAT_0050d548 != 0) && (param_1 != (int *)0x0)) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    else if (10.0 < param_2) {
      (**(code **)(*param_1 + 0xb8))(param_1,0x41200000);
      return;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  }
  return;
}



void FUN_00485020(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}



int * FUN_00485040(int *param_1)

{
  undefined4 local_4;

  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xd4))(param_1,&local_4);
  return param_1;
}



undefined4 FUN_00485070(int *param_1)

{
  if (DAT_0050d548 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1);
  return 1;
}



void FUN_004850a0(int *param_1)

{
  if (DAT_0050d548 != 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



undefined4 FUN_004850c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  int unaff_retaddr;

  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0xe0))(param_1,&param_1);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((unaff_ESI & 1) == 0) {
    return 0;
  }
  if (unaff_retaddr != 0) {
    (**(code **)(*piVar1 + 0x4c))(piVar1,unaff_retaddr);
  }
  return 1;
}



undefined4 * FUN_00485110(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;

  piVar3 = param_3;
  iVar2 = param_2;
  piVar1 = param_1;
  puVar5 = &local_4;
  local_4 = 0;
  iVar4 = (**(code **)(*param_1 + 0x2c))(param_1,0,param_2,puVar5,param_3,&param_3,&param_1,0);
  if (iVar4 == 0) {
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == *piVar3) {
      return puVar5;
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00485170(piVar1,puVar5,iVar2);
  }
  return (undefined4 *)0x0;
}



bool FUN_00485170(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,0,0);
  return iVar1 == 0;
}



uint FUN_004851a0(undefined4 param_1,undefined4 *param_2,int *param_3,uint *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  uint uStack_14;
  undefined auStack_10 [2];
  ushort uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  uint uStack_4;

  uVar1 = param_1;
  (**(code **)(DAT_00ecc420 + 0x38))(param_1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7eb8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,4,1);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7eb0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,4,1);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,auStack_10,0x10);
  *param_2 = CONCAT22(uStack_a,uStack_c);
  *param_3 = (int)((ulonglong)(uStack_4 & 0xffff) / (ulonglong)(longlong)(int)(uint)uStack_e) << 3;
  *param_4 = (uint)(uStack_e == 2);
  if (0x10 < uStack_14) {
    (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,uStack_14 - 0x10,1);
  }
  (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&param_1,4);
  iVar2 = 4;
  bVar5 = true;
  puVar3 = &param_1;
  pcVar4 = &DAT_004c7ea8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)puVar3 == *pcVar4;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  do {
    if (bVar5) {
      (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
      uVar1 = (**(code **)(DAT_00ecc420 + 0x48))(uVar1);
      *param_5 = uVar1;
      return uStack_14;
    }
    (**(code **)(DAT_00ecc420 + 0x38))(uVar1,&uStack_14,4);
    (**(code **)(DAT_00ecc420 + 0x4c))(uVar1,uStack_14 + 4,1);
    iVar2 = 4;
    bVar5 = true;
    puVar3 = &param_1;
    pcVar4 = &DAT_004c7ea8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *(char *)puVar3 == *pcVar4;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
  } while( true );
}



uint FUN_00485340(void)

{
  return -(uint)(DAT_004c7d80 != 0) & DAT_0050d524;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00485360(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;

  if (DAT_0050fea8 != 0) {
    return 1;
  }
  puVar3 = &DAT_0050e028;
  for (iVar2 = 0x210; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050e868;
  for (iVar2 = 0x210; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050f0a8;
  for (iVar2 = 0x168; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_0050d568;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0050f648 = 0;
  DAT_0050f658 = 0;
  _DAT_0050f64c = 0;
  _DAT_0050f65c = 0;
  _DAT_0050f660 = 0;
  DAT_0050febc = 0;
  uVar6 = 0;
  puVar3 = &DAT_0050d658;
  for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_00ec9ea0;
  for (iVar2 = 0x4e8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar5 = &DAT_0050feb8;
  uVar4 = 0x500;
  puVar3 = &DAT_00ecb240;
  for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_0050f650 = 0;
  DAT_0050fec8 = 0;
  DAT_0050fec0 = 0;
  uVar1 = FUN_0048c7a0(0x500,&DAT_0050feb8,0);
  iVar2 = DirectInputCreateA(uVar1,uVar4,puVar5,uVar6);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_0050feb8 + 0x10))(DAT_0050feb8,0,FUN_00486a10,0,1);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00485f20();
  FUN_00485c40();
  FUN_00486010();
  FUN_004855c0();
  DAT_0050fea8 = 1;
  return 0;
}



void FUN_00485460(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  undefined4 *puVar5;

  if (DAT_0050fea8 != 0) {
    uVar4 = 0;
    DAT_0050fea8 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar3 = (int **)&DAT_00ecb484;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050fec0);
    }
    DAT_0050fec0 = 0;
    puVar5 = &DAT_00ecb240;
    for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar4 = 0;
    if (DAT_0050febc != 0) {
      ppiVar3 = (int **)&DAT_0050d89c;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050febc);
    }
    DAT_0050febc = 0;
    puVar5 = &DAT_0050d658;
    for (iVar2 = 0x274; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar4 = 0;
    if (DAT_0050fec8 != 0) {
      ppiVar3 = (int **)&DAT_00eca0e4;
      do {
        piVar1 = *ppiVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))(piVar1);
          (**(code **)(**ppiVar3 + 8))(*ppiVar3);
        }
        uVar4 = uVar4 + 1;
        ppiVar3 = ppiVar3 + 0x9d;
      } while (uVar4 < DAT_0050fec8);
    }
    DAT_0050fec8 = 0;
    puVar5 = &DAT_00ec9ea0;
    for (iVar2 = 0x4e8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (DAT_0050feb8 != (int *)0x0) {
      (**(code **)(*DAT_0050feb8 + 8))(DAT_0050feb8);
      DAT_0050feb8 = (int *)0x0;
    }
  }
  return;
}



undefined4 FUN_00485570(void)

{
  if (DAT_0050fea8 == 0) {
    return 1;
  }
  DAT_0050feac = 1;
  FUN_00485a30(1);
  return 0;
}



void FUN_004855a0(void)

{
  if (DAT_0050feac != 0) {
    FUN_00485a30(0);
    DAT_0050feac = 0;
  }
  return;
}



void FUN_004855c0(void)

{
  uint *puVar1;
  uint *puVar2;

  DAT_004c8170 = 0;
  DAT_0050fec4 = 0;
  puVar1 = &DAT_0050f0a8;
  do {
    puVar2 = puVar1 + 6;
    *puVar1 = *puVar1 & 0xfffffffd;
    puVar1 = puVar2;
  } while (puVar2 < &DAT_0050f648);
  return;
}



undefined4 FUN_004855f0(uint param_1)

{
  if (0x3b < param_1) {
    return 0;
  }
  if (((&DAT_0050f0a8)[param_1 * 6] & 1) == 0) {
    return 0;
  }
  (&DAT_0050f0a8)[param_1 * 6] = (&DAT_0050f0a8)[param_1 * 6] | 2;
  FUN_00486140(param_1);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00485630(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_0050feb4 != 0) {
    puVar2 = &DAT_0050e028;
    for (iVar1 = 0x210; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_0050f668;
    for (iVar1 = 0x210; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0050feb0 = 1;
    DAT_0050fecc = timeGetTime();
    DAT_0050fed8 = DAT_0050fecc - DAT_0050fed0;
    _DAT_004c8174 = 1.0 / (float)(ulonglong)DAT_0050fed8;
    puVar2 = &DAT_0050d568;
    for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _DAT_004c8178 = _DAT_004c8174 * 1000.0;
    FUN_00486170();
    if (DAT_0050fec4 != 0) {
      FUN_00486340();
    }
    FUN_00486710();
    DAT_0050fed0 = DAT_0050fecc;
  }
  return;
}



float10 FUN_004856e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;

  if (DAT_0050feb4 == 0) {
    return (float10)0.0;
  }
  iVar3 = param_1 * 0x18;
  if (((&DAT_0050f0a8)[param_1 * 6] & 2) == 0) {
    return (float10)0.0;
  }
  iVar1 = (&DAT_0050d568)[param_1] - *(int *)(&DAT_0050f0b4 + iVar3);
  if (iVar1 == 0) {
    return (float10)0.0;
  }
  if ((((&DAT_0050f0a8)[param_1 * 6] & 8) == 0) && (*(int *)(&DAT_0050f0b8 + iVar3) != 0)) {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    if (iVar2 < *(int *)(&DAT_0050f0b8 + iVar3)) {
      return (float10)0.0;
    }
  }
  fVar5 = (float10)iVar1 * (float10)*(float *)(&DAT_0050f0bc + iVar3);
  fVar4 = fVar5;
  if (fVar5 < (float10)0.0) {
    fVar4 = -fVar5;
  }
  if (fVar4 <= (float10)1e-05) {
    fVar5 = (float10)0.0;
  }
  if ((DAT_0050feb0 != 0) && (fVar5 != (float10)0.0)) {
    DAT_0050feb0 = 0;
  }
  return fVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_004857b0(int param_1)

{
  uint uVar1;

  if (DAT_0050feb4 == 0) {
    return (float10)0.0;
  }
  uVar1 = (&DAT_0050e028)[param_1];
  if (((&DAT_0050e028)[param_1] == 0) && (uVar1 = DAT_0050fed8, (&DAT_0050e868)[param_1] == 0)) {
    return (float10)0.0;
  }
  if (DAT_0050fed8 <= uVar1) {
    uVar1 = DAT_0050fed8;
  }
  if ((DAT_0050feb0 != 0) && ((float10)(ulonglong)uVar1 * (float10)_DAT_004c8174 != (float10)0.0)) {
    DAT_0050feb0 = 0;
  }
  return (float10)(ulonglong)uVar1 * (float10)_DAT_004c8174;
}



undefined4 FUN_00485840(undefined4 param_1)

{
  float10 fVar1;

  fVar1 = (float10)FUN_004856e0(param_1);
  if (fVar1 < (float10)0.0) {
    fVar1 = -fVar1;
  }
  if ((float10)0.5 < fVar1) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00485880(int param_1,int *param_2)

{
  if (param_1 < 0) {
    return 0;
  }
  if (DAT_0050feb4 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 + (&DAT_0050f668)[param_1];
  }
  if ((DAT_0050feb0 != 0) && ((&DAT_0050e868)[param_1] != 0)) {
    DAT_0050feb0 = 0;
  }
  return (&DAT_0050e868)[param_1];
}



void FUN_004858e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  local_18 = 0x18;
  local_14 = 0x10;
  if (param_3 == 0) {
    local_10 = param_3;
  }
  else if (param_3 == 1) {
    local_10 = 4;
  }
  else if (param_3 == 2) {
    local_10 = 8;
  }
  else if (param_3 == 3) {
    local_10 = 0xc;
  }
  else if (param_3 == 4) {
    local_10 = 0x10;
  }
  else if (param_3 == 5) {
    local_10 = 0x14;
  }
  local_c = 1;
  iVar1 = (**(code **)(*(int *)(&DAT_00eca0e4)[param_2 * 0x9d] + 0x14))
                    ((int *)(&DAT_00eca0e4)[param_2 * 0x9d],4,&local_18);
  if (-1 < iVar1) {
    FUN_00486970(param_3 + param_2 * 6,local_14,local_10,uStack_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004859a0(float param_1,undefined4 *param_2)

{
  _DAT_004c817c = param_1;
  _DAT_004c8180 = (float)param_2;
  if ((DAT_0050f528 & 1) != 0) {
    param_2 = &param_1;
    param_1 = (float)(int)ROUND(ROUND(param_1 * 250.0));
    FUN_00486970(0x30,-(int)param_1,param_1,0);
  }
  if ((DAT_0050f540 & 1) != 0) {
    param_2 = &param_1;
    param_1 = (float)(int)ROUND(ROUND(_DAT_004c8180 * 200.0));
    FUN_00486970(0x31,-(int)param_1,param_1,0);
  }
  return;
}



void FUN_00485a30(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;

  uVar1 = DAT_0050fed8;
  if (DAT_0050feac != 0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_0050e868 + uVar2) != 0) {
        *(undefined4 *)((int)&DAT_0050e868 + uVar2) = 0;
        if (*(int *)((int)&DAT_0050e028 + uVar2) == 0) {
          *(undefined4 *)((int)&DAT_0050e028 + uVar2) = uVar1;
        }
        *(undefined4 *)((int)&DAT_0050e028 + uVar2) = *(undefined4 *)((int)&DAT_0050e028 + uVar2);
      }
      iVar4 = DAT_004c8170;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x400);
    if ((DAT_004c8170 != 0) && (uVar2 = 0, DAT_0050fec0 != 0)) {
      piVar6 = &DAT_00ecb484;
      do {
        if (*piVar6 != 0) {
          iVar5 = 4;
          iVar3 = uVar2 << 4;
          do {
            if (*(int *)((int)&DAT_0050f068 + iVar3) != 0) {
              *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 0;
              if (*(int *)((int)&DAT_0050e828 + iVar3) == 0) {
                *(undefined4 *)((int)&DAT_0050e828 + iVar3) = uVar1;
              }
              *(undefined4 *)((int)&DAT_0050e828 + iVar3) =
                   *(undefined4 *)((int)&DAT_0050e828 + iVar3);
            }
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        uVar2 = uVar2 + 1;
        piVar6 = piVar6 + 0x9d;
      } while (uVar2 < DAT_0050fec0);
    }
    if (param_1 != 0) {
      if ((iVar4 != 0) && (uVar2 = 0, DAT_0050fec0 != 0)) {
        ppiVar7 = (int **)&DAT_00ecb484;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            iVar4 = (**(code **)(*piVar6 + 0x1c))(piVar6);
            if (iVar4 == 0) {
              ShowCursor(0);
            }
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050fec0);
      }
      uVar2 = 0;
      if (DAT_0050febc != 0) {
        ppiVar7 = (int **)&DAT_0050d89c;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x1c))(piVar6);
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050febc);
      }
      uVar2 = 0;
      if (DAT_0050fec8 != 0) {
        ppiVar7 = (int **)&DAT_00eca0e4;
        do {
          piVar6 = *ppiVar7;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x1c))(piVar6);
          }
          uVar2 = uVar2 + 1;
          ppiVar7 = ppiVar7 + 0x9d;
        } while (uVar2 < DAT_0050fec8);
      }
      DAT_0050feb4 = 1;
      return;
    }
    uVar2 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar7 = (int **)&DAT_00ecb484;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x20))(piVar6);
          if (iVar4 == 0) {
            ShowCursor(1);
          }
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050fec0);
    }
    uVar2 = 0;
    if (DAT_0050febc != 0) {
      ppiVar7 = (int **)&DAT_0050d89c;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))(piVar6);
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050febc);
    }
    uVar2 = 0;
    if (DAT_0050fec8 != 0) {
      ppiVar7 = (int **)&DAT_00eca0e4;
      do {
        piVar6 = *ppiVar7;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))(piVar6);
        }
        uVar2 = uVar2 + 1;
        ppiVar7 = ppiVar7 + 0x9d;
      } while (uVar2 < DAT_0050fec8);
    }
    DAT_0050feb4 = 0;
  }
  return;
}



void FUN_00485c40(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *unaff_ESI;
  int **ppiVar4;
  int **ppiStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int **ppiStack_8;
  undefined4 uStack_4;

  local_34 = 0;
  local_30 = 0;
  if (DAT_0050fec8 != 0) {
    puVar3 = &DAT_0050f0c0;
    ppiVar4 = (int **)&DAT_00eca0e4;
    local_38 = 2;
    do {
      piStack_50 = &local_34;
      ppiStack_4c = (int **)0x0;
      ppiStack_54 = ppiVar4 + -0x90;
      (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8);
      iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_004aefb8,ppiVar4);
      (**(code **)(*piStack_50 + 8))(piStack_50);
      local_34 = 0;
      if (iVar2 < 0) {
LAB_00485e9b:
        ppiStack_4c = (int **)*ppiVar4;
        if (ppiStack_4c != (int **)0x0) {
          piStack_50 = (int *)0x485ea7;
          (**(code **)((int)*ppiStack_4c + 8))();
        }
        uVar1 = puVar3[-6];
        *ppiVar4 = (int *)0x0;
        puVar3[-6] = uVar1 & 0xfffffffe;
        *puVar3 = *puVar3 & 0xfffffffe;
        puVar3[6] = puVar3[6] & 0xfffffffe;
        puVar3[0xc] = puVar3[0xc] & 0xfffffffe;
        puVar3[0x12] = puVar3[0x12] & 0xfffffffe;
        puVar3[0x18] = puVar3[0x18] & 0xfffffffe;
      }
      else {
        ppiStack_4c = ppiVar4 + 1;
        *ppiStack_4c = (int *)0x2c;
        piStack_50 = *ppiVar4;
        ppiStack_54 = (int **)0x485cc1;
        iVar2 = (**(code **)(*piStack_50 + 0xc))();
        if (iVar2 < 0) goto LAB_00485e9b;
        piStack_50 = *ppiVar4;
        ppiStack_4c = (int **)&LAB_0049d670;
        ppiStack_54 = (int **)0x485cd6;
        iVar2 = (**(code **)(*piStack_50 + 0x2c))();
        if (iVar2 < 0) goto LAB_00485e9b;
        ppiStack_4c = (int **)0x9;
        iVar2 = **ppiVar4;
        piStack_50 = (int *)0x485ce9;
        piStack_50 = (int *)FUN_0048c780();
        ppiStack_54 = (int **)*ppiVar4;
        iVar2 = (**(code **)(iVar2 + 0x34))();
        if (iVar2 < 0) goto LAB_00485e9b;
        ppiStack_54 = (int **)*ppiVar4;
        ppiStack_4c = (int **)&uStack_18;
        uStack_18 = 0x18;
        uStack_14 = 0x10;
        uStack_10 = 0;
        uStack_c = 1;
        piStack_50 = (int *)0x4;
        iVar2 = (*(code *)(*ppiStack_54)[5])();
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + -2,uStack_14,uStack_10,0x3e19999a);
        }
        uStack_1c = 4;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&uStack_24);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + -1,uStack_20,uStack_1c,0x3e19999a);
        }
        uStack_28 = 8;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&local_30);
        if (-1 < iVar2) {
          FUN_00486970(unaff_ESI,uStack_2c,uStack_28,0x3e19999a);
        }
        local_34 = 0xc;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&stack0xffffffc4);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + 1,local_38,local_34,0x3e19999a);
        }
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&stack0xffffffb8);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + 2,unaff_ESI,0x10,0x3e19999a);
        }
        ppiStack_4c = (int **)0x14;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&ppiStack_54);
        if (-1 < iVar2) {
          ppiStack_4c = (int **)0x3e19999a;
          piStack_50 = (int *)uStack_4;
          ppiStack_54 = ppiStack_8;
          FUN_00486970(local_38 + 3);
        }
        if (((uint)ppiVar4[2] & 0x100) != 0) {
          ppiStack_54 = (int **)*ppiVar4;
          ppiStack_4c = (int **)&uStack_2c;
          uStack_2c = 0x14;
          uStack_28 = 0x10;
          uStack_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          piStack_50 = (int *)0x9;
          iVar2 = (*(code *)(*ppiStack_54)[6])();
          if (iVar2 < 0) goto LAB_00485e9b;
        }
        ppiStack_4c = (int **)*ppiVar4;
        piStack_50 = (int *)0x485e97;
        iVar2 = (**(code **)((int)*ppiStack_4c + 0x1c))();
        if (iVar2 < 0) goto LAB_00485e9b;
      }
      local_38 = local_38 + 6;
      local_30 = local_30 + 1;
      ppiVar4 = ppiVar4 + 0x9d;
      puVar3 = puVar3 + 0x24;
    } while (local_30 < DAT_0050fec8);
  }
  return;
}



void FUN_00485f20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;

  if ((DAT_0050feb8 != (int *)0x0) && (local_18 = 0, DAT_0050febc != 0)) {
    ppiVar4 = (int **)&DAT_0050d89c;
    do {
      iVar2 = (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8,ppiVar4 + -0x90,ppiVar4,0);
      if (iVar2 < 0) {
LAB_00485fd8:
        piVar1 = *ppiVar4;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *ppiVar4 = (int *)0x0;
      }
      else {
        ppiVar4[1] = (int *)0x2c;
        iVar2 = (**(code **)(**ppiVar4 + 0xc))(*ppiVar4,ppiVar4 + 1);
        if ((iVar2 < 0) ||
           (iVar2 = (**(code **)(**ppiVar4 + 0x2c))(*ppiVar4,&LAB_0049e690), iVar2 < 0))
        goto LAB_00485fd8;
        iVar2 = **ppiVar4;
        uVar3 = FUN_0048c780(6);
        iVar2 = (**(code **)(iVar2 + 0x34))(*ppiVar4,uVar3);
        if (iVar2 < 0) goto LAB_00485fd8;
        uStack_14 = 0x14;
        uStack_10 = 0x10;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0x20;
        iVar2 = (**(code **)(**ppiVar4 + 0x18))(*ppiVar4,1,&uStack_14);
        if (iVar2 < 0) goto LAB_00485fd8;
      }
      local_18 = local_18 + 1;
      ppiVar4 = ppiVar4 + 0x9d;
    } while (local_18 < DAT_0050febc);
  }
  return;
}



void FUN_00486010(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int **ppiVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;

  if (DAT_0050feb8 != (int *)0x0) {
    uVar4 = 0;
    if (DAT_0050fec0 != 0) {
      ppiVar5 = (int **)&DAT_00ecb484;
      do {
        iVar2 = (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8,ppiVar5 + -0x90,ppiVar5,0);
        if (iVar2 < 0) {
LAB_004860c5:
          piVar1 = *ppiVar5;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          *ppiVar5 = (int *)0x0;
        }
        else {
          ppiVar5[1] = (int *)0x2c;
          iVar2 = (**(code **)(**ppiVar5 + 0xc))(*ppiVar5,ppiVar5 + 1);
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(**ppiVar5 + 0x2c))(*ppiVar5,&DAT_0049e720), iVar2 < 0))
          goto LAB_004860c5;
          iVar2 = **ppiVar5;
          uVar3 = FUN_0048c780(6);
          iVar2 = (**(code **)(iVar2 + 0x34))(*ppiVar5,uVar3);
          if (iVar2 < 0) goto LAB_004860c5;
          uStack_14 = 0x14;
          uStack_10 = 0x10;
          uStack_c = 0;
          uStack_8 = 0;
          uStack_4 = 0x20;
          iVar2 = (**(code **)(**ppiVar5 + 0x18))(*ppiVar5,1,&uStack_14);
          if (iVar2 < 0) goto LAB_004860c5;
        }
        uVar4 = uVar4 + 1;
        ppiVar5 = ppiVar5 + 0x9d;
      } while (uVar4 < DAT_0050fec0);
    }
    if (DAT_0050fec0 != 0) {
      FUN_00486970(0x30,0xffffff06,0xfa,0);
      FUN_00486970(0x31,0xffffff38,200,0);
      if (2 < DAT_00ecb494) {
        FUN_00486970(0x32,0xffffffec,0x14,0);
      }
    }
  }
  return;
}



void FUN_00486140(uint param_1)

{
  if ((0x2f < param_1) && (param_1 < 0x33)) {
    DAT_004c8170 = 1;
    return;
  }
  if (param_1 < 0xc) {
    DAT_0050fec4 = 1;
  }
  return;
}



void FUN_00486170(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint local_304;
  char acStack_300 [256];
  int local_200 [128];

  uVar6 = 0;
  local_304 = 0x20;
  if (DAT_0050febc != 0) {
    do {
      iVar3 = (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x28))
                        ((int *)(&DAT_0050d89c)[uVar6 * 0x9d],0x10,local_200,&local_304,0);
      iVar2 = DAT_0050fecc;
      if (iVar3 < -0x7ff8ffe1) {
LAB_004861cd:
        (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x1c))
                  ((int *)(&DAT_0050d89c)[uVar6 * 0x9d]);
      }
      else if (iVar3 == 0) {
        uVar6 = 0;
        if (local_304 != 0) {
          piVar4 = local_200 + 1;
          uVar5 = local_304;
          do {
            iVar3 = piVar4[1];
            iVar1 = piVar4[-1];
            if (*piVar4 == 0) {
LAB_004862cc:
              if ((&DAT_0050e868)[iVar1] != 0) {
                (&DAT_0050e868)[iVar1] = 0;
                if ((&DAT_0050e028)[iVar1] == 0) {
                  (&DAT_0050e028)[iVar1] = DAT_0050fed8;
                }
                (&DAT_0050e028)[iVar1] = (&DAT_0050e028)[iVar1] + (iVar3 - iVar2);
              }
            }
            else if ((&DAT_0050e868)[iVar1] == 0) {
              (&DAT_0050e868)[iVar1] = 1;
              (&DAT_0050e028)[iVar1] = iVar2 - iVar3;
              (&DAT_0050f668)[iVar1] = (&DAT_0050f668)[iVar1] + 1;
            }
            else if (*piVar4 == 0) goto LAB_004862cc;
            piVar4 = piVar4 + 4;
            uVar5 = uVar5 - 1;
            uVar6 = local_304;
          } while (uVar5 != 0);
        }
      }
      else {
        if (iVar3 != 1) goto LAB_004861cd;
        iVar3 = (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x24))
                          ((int *)(&DAT_0050d89c)[uVar6 * 0x9d],0x100,acStack_300);
        iVar2 = DAT_0050fed8;
        if (-1 < iVar3) {
          uVar6 = 0;
          piVar4 = &DAT_0050e028;
          do {
            if (acStack_300[uVar6] == '\0') {
LAB_00486240:
              if ((&DAT_0050e868)[uVar6] != 0) {
                iVar3 = *piVar4;
                (&DAT_0050e868)[uVar6] = 0;
                if (iVar3 == 0) {
                  *piVar4 = iVar2;
                }
                *piVar4 = *piVar4;
              }
            }
            else if ((&DAT_0050e868)[uVar6] == 0) {
              iVar3 = (&DAT_0050f668)[uVar6];
              (&DAT_0050e868)[uVar6] = 1;
              *piVar4 = 0;
              (&DAT_0050f668)[uVar6] = iVar3 + 1;
            }
            else if (acStack_300[uVar6] == '\0') goto LAB_00486240;
            piVar4 = piVar4 + 1;
            uVar6 = uVar6 + 1;
          } while (piVar4 < &DAT_0050e428);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < DAT_0050febc);
  }
  return;
}



void FUN_00486340(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint local_64;
  int **local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint auStack_30 [4];
  char acStack_20 [32];

  local_64 = 0;
  if (DAT_0050fec8 != 0) {
    local_5c = 0;
    local_58 = &DAT_0050d56c;
    local_60 = (int **)&DAT_00eca0e4;
    while ((iVar4 = (**(code **)(**local_60 + 100))(*local_60), -1 < iVar4 &&
           (iVar4 = (**(code **)(**local_60 + 0x24))(*local_60,0x50,&uStack_50), -1 < iVar4))) {
      local_58[-1] = uStack_50;
      *local_58 = uStack_4c;
      local_58[1] = uStack_48;
      local_58[2] = uStack_44;
      local_58[3] = uStack_40;
      local_58[4] = uStack_3c;
      uVar8 = 0;
      piVar5 = (int *)((int)&DAT_0050e428 + local_5c);
      iVar4 = local_5c;
      do {
        if (acStack_20[uVar8] == '\0') {
LAB_00486408:
          if (*(int *)((int)&DAT_0050ec68 + iVar4) != 0) {
            iVar2 = *piVar5;
            *(undefined4 *)((int)&DAT_0050ec68 + iVar4) = 0;
            if (iVar2 == 0) {
              *piVar5 = DAT_0050fed8;
            }
            *piVar5 = *piVar5;
          }
        }
        else if (*(int *)((int)&DAT_0050ec68 + iVar4) == 0) {
          iVar2 = *(int *)((int)&DAT_0050fa68 + iVar4);
          *(undefined4 *)((int)&DAT_0050ec68 + iVar4) = 1;
          *piVar5 = 0;
          *(int *)((int)&DAT_0050fa68 + iVar4) = iVar2 + 1;
        }
        else if (acStack_20[uVar8] == '\0') goto LAB_00486408;
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 4;
        piVar5 = piVar5 + 1;
      } while (uVar8 < 0x10);
      piVar6 = (int *)0x0;
      piVar5 = local_60[6];
      if (piVar5 != (int *)0x0) {
        puVar7 = auStack_30;
        do {
          if ((int *)0x3 < piVar6) break;
          uVar8 = *puVar7;
          if ((uVar8 < 0x57e4) || (0x7b0c < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          iVar4 = (int)(piVar6 + local_64 * 2) * 4 + 0x110;
          if (bVar3) {
            if ((&DAT_0050e868)[iVar4] == 0) {
              (&DAT_0050e868)[iVar4] = 1;
              (&DAT_0050e028)[iVar4] = 0;
              (&DAT_0050f668)[iVar4] = (&DAT_0050f668)[iVar4] + 1;
            }
            else if (!bVar3) goto LAB_004864c0;
          }
          else {
LAB_004864c0:
            if ((&DAT_0050e868)[iVar4] != 0) {
              (&DAT_0050e868)[iVar4] = 0;
              if ((&DAT_0050e028)[iVar4] == 0) {
                (&DAT_0050e028)[iVar4] = DAT_0050fed8;
              }
              (&DAT_0050e028)[iVar4] = (&DAT_0050e028)[iVar4];
            }
          }
          if (((uVar8 < 0x7b0c) && (0x1194 < uVar8)) || ((short)uVar8 == -1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          piVar1 = piVar6 + local_64 * 2;
          if (bVar3) {
            if (*(int *)(&DAT_0050ecac + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecac + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050faac + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050faac + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_00486551;
          }
          else {
LAB_00486551:
            if (*(int *)(&DAT_0050ecac + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecac + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e46c + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e46c + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10);
            }
          }
          if ((uVar8 < 0x1194) || (0x34bc < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(int *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050fab0 + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050fab0 + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_004865d4;
          }
          else {
LAB_004865d4:
            if (*(int *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e470 + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e470 + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10);
            }
          }
          if ((uVar8 < 0x34bc) || (0x57e4 < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(int *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050fab4 + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050fab4 + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_00486657;
          }
          else {
LAB_00486657:
            if (*(int *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e474 + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e474 + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10);
            }
          }
          piVar6 = (int *)((int)piVar6 + 1);
          puVar7 = puVar7 + 1;
        } while (piVar6 < piVar5);
      }
      local_64 = local_64 + 1;
      local_58 = local_58 + 6;
      local_5c = local_5c + 0x80;
      local_60 = local_60 + 0x9d;
      if (DAT_0050fec8 <= local_64) {
        return;
      }
    }
    (**(code **)(*(int *)(&DAT_00eca0e4)[local_64 * 0x9d] + 0x1c))
              ((int *)(&DAT_00eca0e4)[local_64 * 0x9d]);
  }
  return;
}



void FUN_00486710(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int **ppiVar7;
  uint uVar8;
  uint uVar9;
  int **ppiVar10;
  int local_220;
  int **local_21c;
  int **local_218;
  int *local_214;
  undefined local_210 [4];
  undefined auStack_20c [8];
  char acStack_204 [4];
  uint auStack_200 [128];

  uVar8 = 0;
  local_214 = (int *)0x20;
  if ((DAT_004c8170 != 0) && (DAT_0050fec0 != 0)) {
    local_220 = 0;
    local_21c = (int **)&DAT_00ecb484;
    local_218 = (int **)&DAT_0050d628;
    do {
      ppiVar7 = local_218;
      ppiVar10 = local_21c;
      piVar6 = *local_21c;
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar6 + 0x24))(piVar6,0x10,local_210);
        if (((iVar3 == -0x7ff8fff4) || (iVar3 == -0x7ff8ffe2)) || (iVar3 != 0)) {
          (**(code **)(**ppiVar10 + 0x1c))(*ppiVar10);
        }
        else {
          *ppiVar7 = (int *)local_21c;
          ppiVar7[1] = (int *)local_218;
          ppiVar7[2] = local_214;
          if (DAT_0050fed8 < 0x19) {
            *ppiVar7 = (int *)((&DAT_0050f648)[uVar8] + (int)local_21c >> 1);
            ppiVar7[1] = (int *)((&DAT_0050f658)[uVar8] + (int)local_218 >> 1);
          }
          (&DAT_0050f648)[uVar8] = local_21c;
          (&DAT_0050f658)[uVar8] = local_218;
        }
        iVar4 = (**(code **)(**ppiVar10 + 0x28))(*ppiVar10,0x10,auStack_20c,&local_220,0);
        uVar2 = DAT_0050fed8;
        iVar3 = DAT_0050fecc;
        if (iVar4 == 0) {
          puVar5 = auStack_200;
          for (piVar6 = local_214; piVar6 != (int *)0x0; piVar6 = (int *)((int)piVar6 + -1)) {
            uVar2 = *puVar5;
            if ((0xb < uVar2) && (uVar2 < 0x10)) {
              uVar9 = puVar5[2];
              iVar4 = uVar2 + 500 + uVar8 * 4;
              if (puVar5[1] == 0) {
LAB_004868e7:
                if ((&DAT_0050e868)[iVar4] != 0) {
                  (&DAT_0050e868)[iVar4] = 0;
                  if ((&DAT_0050e028)[iVar4] == 0) {
                    (&DAT_0050e028)[iVar4] = DAT_0050fed8;
                  }
                  (&DAT_0050e028)[iVar4] = (&DAT_0050e028)[iVar4] + (uVar9 - iVar3);
                }
              }
              else if ((&DAT_0050e868)[iVar4] == 0) {
                (&DAT_0050e868)[iVar4] = 1;
                (&DAT_0050e028)[iVar4] = iVar3 - uVar9;
                (&DAT_0050f668)[iVar4] = (&DAT_0050f668)[iVar4] + 1;
              }
              else if (puVar5[1] == 0) goto LAB_004868e7;
            }
            puVar5 = puVar5 + 4;
            ppiVar10 = local_21c;
            ppiVar7 = local_218;
          }
        }
        else if (iVar4 == 1) {
          uVar9 = 0;
          puVar5 = (uint *)((int)&DAT_0050e828 + local_220);
          iVar3 = local_220;
          do {
            if (acStack_204[uVar9] == '\0') {
LAB_00486844:
              if (*(int *)((int)&DAT_0050f068 + iVar3) != 0) {
                uVar1 = *puVar5;
                *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 0;
                if (uVar1 == 0) {
                  *puVar5 = uVar2;
                }
                *puVar5 = *puVar5;
              }
            }
            else if (*(int *)((int)&DAT_0050f068 + iVar3) == 0) {
              iVar4 = *(int *)(&DAT_0050fe68 + iVar3);
              *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 1;
              *puVar5 = 0;
              *(int *)(&DAT_0050fe68 + iVar3) = iVar4 + 1;
            }
            else if (acStack_204[uVar9] == '\0') goto LAB_00486844;
            uVar9 = uVar9 + 1;
            iVar3 = iVar3 + 4;
            puVar5 = puVar5 + 1;
            ppiVar7 = local_218;
            ppiVar10 = local_21c;
          } while (uVar9 < 4);
        }
        else {
          (**(code **)(**ppiVar10 + 0x1c))(*ppiVar10);
        }
      }
      uVar8 = uVar8 + 1;
      local_218 = ppiVar7 + 3;
      local_21c = ppiVar10 + 0x9d;
      local_220 = local_220 + 0x10;
    } while (uVar8 < DAT_0050fec0);
  }
  return;
}



void FUN_00486970(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;

  iVar3 = param_1 * 0x18;
  (&DAT_0050f0a8)[param_1 * 6] = (&DAT_0050f0a8)[param_1 * 6] | 1;
  iVar2 = ((param_3 - param_2) + 1) / 2 + param_2;
  *(int *)(&DAT_0050f0ac + iVar3) = param_2;
  *(int *)(&DAT_0050f0b0 + iVar3) = param_3;
  *(int *)(&DAT_0050f0b4 + iVar3) = iVar2;
  fVar1 = (float)(param_3 - iVar2);
  *(float *)(&DAT_0050f0bc + iVar3) = 1.0 / fVar1;
  if (param_4 != 0.0) {
    *(int *)(&DAT_0050f0b8 + iVar3) = (int)ROUND(ROUND(param_4 * fVar1));
    return;
  }
  *(undefined4 *)(&DAT_0050f0b8 + iVar3) = 0;
  return;
}



undefined4 FUN_00486a10(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x02') {
    if (DAT_0050fec0 < 4) {
      uVar2 = DAT_0050fec0 + 1;
      puVar4 = &DAT_00ecb240 + DAT_0050fec0 * 0x9d;
      for (iVar3 = 0x91; DAT_0050fec0 = uVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else if (cVar1 == '\x03') {
    if (DAT_0050febc < 4) {
      puVar4 = &DAT_0050d658 + DAT_0050febc * 0x9d;
      for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_1;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_0050febc = 1;
      return 1;
    }
  }
  else if ((cVar1 == '\x04') && (DAT_0050fec8 < 8)) {
    puVar4 = &DAT_00ec9ea0 + DAT_0050fec8 * 0x9d;
    for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_0050fec8 = DAT_0050fec8 + 1;
    return 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00486ad0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  CoInitialize((LPVOID)0x0);
  CoCreateInstance((IID *)&DAT_004af4c8,(LPUNKNOWN)0x0,1,(IID *)&DAT_004af4a8,&DAT_00510254);
  DAT_00513868 = 0;
  puVar3 = &DAT_00510260;
  for (iVar2 = 0x460; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0051386c = 0;
  _DAT_00510258 = 0;
  iVar2 = *DAT_00510254;
  uVar1 = FUN_0048c7e0(&LAB_00487370,0,0);
  iVar2 = (**(code **)(iVar2 + 0x8c))(DAT_00510254,uVar1);
  return iVar2 < 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00486b40(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;

  if (DAT_00510254 != (int *)0x0) {
    (**(code **)(*DAT_00510254 + 8))(DAT_00510254);
    DAT_00510254 = (int *)0x0;
  }
  uVar3 = 0;
  if (DAT_00513868 != 0) {
    piVar2 = &DAT_00510370;
    do {
      if (*piVar2 != 0) {
        (**(code **)(DAT_00ecc420 + 0x24))(*piVar2);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x46;
    } while (uVar3 < DAT_00513868);
  }
  DAT_00513868 = 0;
  puVar4 = &DAT_00510260;
  for (iVar1 = 0x460; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_0051386c = 0;
  _DAT_00510258 = 0;
  CoUninitialize();
  return;
}



uint FUN_00486bc0(int param_1)

{
  uint uVar1;

  if (DAT_00510254 == (int *)0x0) {
    return 0x887700fa;
  }
  uVar1 = (**(code **)(*DAT_00510254 + 0x98))(DAT_00510254,(&DAT_00510370)[param_1 * 0x46],0);
  return uVar1 & (-1 < (int)uVar1) - 1;
}



undefined4 FUN_00486c00(void)

{
  return DAT_00513868;
}



int FUN_00486c10(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_00513868 < param_1) {
    return 1;
  }
  puVar2 = &DAT_00510260 + param_1 * 0x46;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return param_1 * 0x23;
}



undefined4 FUN_00486c50(void)

{
  return DAT_00513870;
}



undefined4 FUN_00486c60(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_00513870 < param_1) {
    return 1;
  }
  puVar2 = &DAT_005117e8 + param_1 * 0x41;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}



void FUN_00486ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*DAT_00510254 + 0x68))(DAT_00510254,param_1,param_2,param_5,param_3,param_4);
  return;
}



int FUN_00486cd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = param_3;
  iVar2 = (**(code **)(*DAT_00510254 + 100))(DAT_00510254,param_1,&param_3,1,param_2,param_3);
  while( true ) {
    if (iVar2 < 0) {
      return (iVar2 == -0x7788ff42) - 2;
    }
    if (*param_1 != 0) break;
    iVar2 = FUN_00487550(param_2,param_1);
    if (iVar2 != -1) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_00510254 + 100))
                      (DAT_00510254,param_1,&stack0xfffffff4,1,param_2,uVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00486d40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint local_150 [6];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined *local_120;
  int local_11c;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined local_100 [256];

  puVar3 = local_150;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_150[0] = 0x50;
  local_150[1] = local_150[1] | 0xe0e4;
  puVar1 = (undefined4 *)FUN_0048c7e0();
  local_138 = *puVar1;
  local_134 = puVar1[1];
  local_130 = puVar1[2];
  local_12c = puVar1[3];
  local_128 = *(undefined4 *)(param_1 + 0x10);
  FUN_004a1170(local_100,0x80,u__s__S_004c8680,param_1 + 0x58,param_1 + 0x98);
  local_120 = local_100;
  iVar2 = FUN_004a1150(param_1 + 0xb8);
  if (iVar2 != 0) {
    local_11c = param_1 + 0xb8;
  }
  local_108 = *(undefined4 *)(param_1 + 0xfc);
  local_104 = *(undefined4 *)(param_1 + 0x100);
  local_110 = *(undefined4 *)(param_1 + 0xf8);
  iVar2 = (**(code **)(*DAT_00510254 + 0x60))(DAT_00510254,local_150,2);
  if (iVar2 < 0) {
    (**(code **)(*DAT_00510254 + 0x10))(DAT_00510254);
    _DAT_00510258 = 0;
    DAT_0051386c = 0;
    return iVar2;
  }
  _DAT_00510258 = 1;
  DAT_0051386c = 1;
  return 0;
}

#endif
