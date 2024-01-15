#include "prototype.h"


void FUN_004a3de0(void)

{
  HANDLE *ppvVar1;
  byte bVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  HANDLE *ppvVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  UINT *pUVar9;
  UINT UStack_48;
  _STARTUPINFOA local_44;
  
  puVar3 = (undefined4 *)FUN_0049f270(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_00ecd600 = 0x20;
  DAT_00ecd500 = puVar3;
  if (puVar3 < puVar3 + 0x120) {
    do {
      *(undefined *)(puVar3 + 1) = 0;
      *puVar3 = 0xffffffff;
      *(undefined *)((int)puVar3 + 5) = 10;
      puVar3[2] = 0;
      puVar3 = puVar3 + 9;
    } while (puVar3 < DAT_00ecd500 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar9 = (UINT *)((int)local_44.lpReserved2 + 4);
    ppvVar5 = (HANDLE *)((int)pUVar9 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_00ecd600 < (int)UStack_48) {
      piVar7 = &DAT_00ecd504;
      do {
        puVar3 = (undefined4 *)FUN_0049f270(0x480);
        if (puVar3 == (undefined4 *)0x0) {
          UStack_48 = DAT_00ecd600;
          break;
        }
        *piVar7 = (int)puVar3;
        DAT_00ecd600 = DAT_00ecd600 + 0x20;
        if (puVar3 < puVar3 + 0x120) {
          do {
            *(undefined *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
            puVar3 = puVar3 + 9;
          } while (puVar3 < (undefined4 *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
      } while ((int)DAT_00ecd600 < (int)UStack_48);
    }
    uVar8 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*ppvVar5 != (HANDLE)0xffffffff) && ((*(byte *)pUVar9 & 1) != 0)) &&
           (((*(byte *)pUVar9 & 8) != 0 || (DVar4 = GetFileType(*ppvVar5), DVar4 != 0)))) {
          ppvVar1 = (HANDLE *)((int)(&DAT_00ecd500)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x24);
          *ppvVar1 = *ppvVar5;
          *(byte *)(ppvVar1 + 1) = *(byte *)pUVar9;
        }
        uVar8 = uVar8 + 1;
        pUVar9 = (UINT *)((int)pUVar9 + 1);
        ppvVar5 = ppvVar5 + 1;
      } while ((int)uVar8 < (int)UStack_48);
    }
  }
  iVar6 = 0;
  do {
    ppvVar5 = (HANDLE *)(DAT_00ecd500 + iVar6 * 9);
    if (DAT_00ecd500[iVar6 * 9] == -1) {
      *(undefined *)(ppvVar5 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile == (HANDLE)0xffffffff) || (DVar4 = GetFileType(hFile), DVar4 == 0)) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 0x40;
        goto LAB_004a3fce;
      }
      *ppvVar5 = hFile;
      if ((DVar4 & 0xff) == 2) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 0x40;
        goto LAB_004a3fce;
      }
      if ((DVar4 & 0xff) == 3) {
        bVar2 = *(byte *)(ppvVar5 + 1) | 8;
        goto LAB_004a3fce;
      }
    }
    else {
      bVar2 = *(byte *)(ppvVar5 + 1) | 0x80;
LAB_004a3fce:
      *(byte *)(ppvVar5 + 1) = bVar2;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_00ecd600);
      return;
    }
  } while( true );
}

