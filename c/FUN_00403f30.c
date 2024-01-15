#include "prototype.h"


undefined4 FUN_00403f30(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  if (DAT_004b2910 == 0) {
    return 0;
  }
  iVar2 = _IFLoadProjectFile_8(param_2,DAT_004d55d0);
  *(int *)(unaff_EBX + 0x40) = iVar2;
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  puVar6 = (undefined4 *)(unaff_EBX + 0x1a0);
  do {
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = param_1[-1] + 1;
    }
    puVar6[-1] = iVar3;
    uVar4 = 0xffffffff;
    pcVar8 = *(char **)(param_2 + iVar3 * 4);
    do {
      pcVar9 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    puVar7 = (undefined4 *)(pcVar9 + -uVar4);
    puVar10 = puVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar2 = iVar2 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar10 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar6[6] = *param_1;
    puVar6 = puVar6 + 0x5d;
    param_1 = param_1 + 1;
    if (5 < iVar2) {
      return 6;
    }
  } while( true );
}

