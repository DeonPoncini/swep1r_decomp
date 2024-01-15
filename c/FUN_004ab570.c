#include "prototype.h"


undefined4 * FUN_004ab570(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = (undefined4 *)FUN_0049f270(~uVar3);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      puVar5 = (undefined4 *)(pcVar6 + -uVar3);
      puVar7 = puVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

