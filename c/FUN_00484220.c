#include "prototype.h"


undefined4 FUN_00484220(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint local_118 [3];
  undefined4 local_10c;
  char local_104 [260];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  if (iVar3 == 0) {
    iVar3 = FUN_004a0c70(param_1 + 2,local_118);
    param_1[0x22] = iVar3;
  }
  else {
    iVar3 = FUN_004a0da0(param_1[0x22],local_118);
  }
  if (iVar3 == -1) {
    return 0;
  }
  iVar3 = *param_1;
  if ((((iVar3 == 0) || (iVar3 == 3)) || ((iVar3 == 1 && ((local_118[0] & 0x10) == 0)))) ||
     ((iVar3 == 2 && ((local_118[0] & 0x10) != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)(pcVar8 + -uVar4);
  puVar9 = param_2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)puVar9 = *(undefined *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_2[0x41] = local_118[0] & 0x10;
  param_2[0x42] = local_10c;
  return 1;
}

