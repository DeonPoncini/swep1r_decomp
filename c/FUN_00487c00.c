#include "prototype.h"


void FUN_00487c00(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_005143d8;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar6 = (undefined4 *)(pcVar8 + -uVar3);
  puVar9 = (undefined4 *)(&DAT_00513938 + DAT_0052950c * 0x80);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar2 = DAT_005284f8, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar9 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  DAT_005284f8 = 0;
  *(undefined4 *)(&DAT_00514388 + DAT_0052950c * 4) = uVar2;
  uVar2 = DAT_00529504;
  DAT_00529504 = 0;
  *(undefined4 *)(&DAT_00514338 + DAT_0052950c * 4) = DAT_00ec9e84;
  *(undefined4 *)(&DAT_005284a8 + DAT_0052950c * 4) = uVar2;
  puVar6 = &DAT_00ec8e80;
  puVar9 = (undefined4 *)(&DAT_00514458 + DAT_0052950c * 0x1004);
  for (iVar5 = 0x401; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  DAT_0052950c = DAT_0052950c + 1;
  return;
}

