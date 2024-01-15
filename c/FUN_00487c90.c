#include "prototype.h"


void FUN_00487c90(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  if (DAT_0052950c != 0) {
    iVar5 = DAT_0052950c + -1;
    uVar2 = 0xffffffff;
    pcVar7 = &DAT_00513938 + iVar5 * 0x80;
    do {
      pcVar8 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    puVar6 = (undefined4 *)(pcVar8 + -uVar2);
    puVar9 = (undefined4 *)&DAT_005143d8;
    DAT_0052950c = iVar5;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    DAT_00529504 = *(undefined4 *)(&DAT_005284a8 + iVar5 * 4);
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    DAT_005284f8 = *(undefined4 *)(&DAT_00514388 + iVar5 * 4);
    DAT_00ec9e84 = *(undefined4 *)(&DAT_00514338 + iVar5 * 4);
    puVar6 = (undefined4 *)(&DAT_00514458 + iVar5 * 0x1004);
    puVar9 = &DAT_00ec8e80;
    for (iVar4 = 0x401; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

