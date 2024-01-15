#include "prototype.h"


void FUN_0041e800(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  piVar2 = &DAT_004eb188;
  while (*piVar2 != 0) {
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + 1;
    if (0x4eb1c3 < (int)piVar2) {
      return;
    }
  }
  uVar4 = 0xffffffff;
  puVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)FUN_0049f270(~uVar4);
  uVar4 = 0xffffffff;
  (&DAT_004eb188)[iVar6] = puVar3;
  puVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  } while (cVar1 != '\0');
  for (uVar5 = ~uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar4 = ~uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar3 = *(undefined *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  (&DAT_004ea940)[iVar6] = 0;
  (&DAT_004e9ed8)[iVar6] = 10000;
  DAT_004eb220 = timeGetTime();
  return;
}

