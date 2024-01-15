#include "prototype.h"


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

