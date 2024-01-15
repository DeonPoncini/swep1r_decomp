#include "prototype.h"


undefined4 FUN_004a0da0(HANDLE param_1,uint *param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  undefined local_140 [12];
  undefined auStack_134 [8];
  undefined auStack_12c [12];
  uint uStack_120;
  char acStack_114 [276];
  
  BVar2 = FindNextFileA(param_1,(LPWIN32_FIND_DATAA)local_140);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 2;
      return 0xffffffff;
    default:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0x16;
      return 0xffffffff;
    case 8:
      puVar4 = (undefined4 *)FUN_004a3dc0();
      *puVar4 = 0xc;
      return 0xffffffff;
    }
  }
  *param_2 = -(uint)(local_140._0_4_ != 0x80) & local_140._0_4_;
  uVar5 = FUN_004a0ef0(local_140 + 4);
  param_2[1] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_134);
  param_2[2] = uVar5;
  uVar5 = FUN_004a0ef0(auStack_12c);
  param_2[3] = uVar5;
  uVar5 = 0xffffffff;
  pcVar8 = acStack_114;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  param_2[4] = uStack_120;
  puVar7 = (uint *)(pcVar9 + -uVar5);
  puVar10 = param_2 + 5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar10 = *(undefined *)puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  return 0;
}

