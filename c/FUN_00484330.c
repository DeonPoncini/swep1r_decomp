#include "prototype.h"


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

