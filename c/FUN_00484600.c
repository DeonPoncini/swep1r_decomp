#include "prototype.h"


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

