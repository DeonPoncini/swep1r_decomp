#include "prototype.h"


int * FUN_004a73d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  FUN_004a7460(&local_28,&param_1);
  iVar2 = FUN_004a9d40(local_28,local_24,local_20,0x11,0,&local_1c);
  param_3[2] = iVar2;
  param_3[1] = (int)local_1c;
  *param_3 = (int)local_1a;
  uVar3 = 0xffffffff;
  pcVar6 = local_18;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  puVar5 = (undefined4 *)(pcVar7 + -uVar3);
  puVar8 = param_4;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  param_3[3] = (int)param_4;
  return param_3;
}

