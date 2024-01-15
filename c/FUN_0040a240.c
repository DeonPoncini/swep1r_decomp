#include "prototype.h"


undefined4 FUN_0040a240(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  iVar2 = FUN_0040a160(param_1);
  iVar3 = FUN_0040a190(iVar2,param_1);
  if (iVar3 < 0) {
    return 0;
  }
  if (((3 < iVar3) && (param_2 == 0)) &&
     (iVar4 = FUN_00404280(&DAT_004d6da0 + iVar2 * 0x174), iVar4 != 0)) {
    return 0;
  }
  (&DAT_004d6ce8)[(&DAT_004d6ef4)[iVar2 * 0x5d]] = 0;
  (&DAT_004d6c78)[(&DAT_004d6ef4)[iVar2 * 0x5d]] = 0;
  (&DAT_004d6ef4)[iVar2 * 0x5d] = param_1;
  (&DAT_004d6c78)[param_1] = 0;
  if (1 < iVar3) {
    uVar5 = 0xffffffff;
    pcVar8 = (&PTR_s_GForce_004b4940)[param_1];
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar7 = (undefined4 *)(pcVar9 + -uVar5);
    puVar10 = (undefined4 *)(&DAT_004d6ef8 + iVar2 * 0x174);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar10 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = FUN_004040a0(&DAT_004d6da0 + iVar2 * 0x174,(&PTR_s_GForce_004b4940)[param_1],
                         DAT_004d6d98);
    if (iVar2 == 0) {
      return 0;
    }
    (&DAT_004d6ce8)[param_1] = 0;
  }
  return 1;
}

