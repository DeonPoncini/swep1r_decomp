#include "prototype.h"


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

