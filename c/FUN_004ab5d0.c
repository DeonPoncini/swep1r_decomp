#include "prototype.h"


undefined4 * FUN_004ab5d0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  pcVar6 = (char *)0x0;
  if (DAT_00dfab38 == 0) {
    puVar2 = param_1;
    if (*(char *)param_1 != '\0') {
      do {
        cVar1 = *(char *)param_1;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *(char *)param_1 = cVar1 + -0x20;
        }
        pcVar6 = (char *)((int)param_1 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      } while (*pcVar6 != '\0');
      return puVar2;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00ecd60c);
    bVar10 = DAT_00ecd608 != 0;
    if (bVar10) {
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_004a1670(0x13);
    }
    if (DAT_00dfab38 == 0) {
      if (bVar10) {
        FUN_004a16f0(0x13);
      }
      else {
        InterlockedDecrement((LONG *)&DAT_00ecd60c);
      }
      puVar2 = param_1;
      if (*(char *)param_1 != '\0') {
        do {
          cVar1 = *(char *)param_1;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *(char *)param_1 = cVar1 + -0x20;
          }
          pcVar6 = (char *)((int)param_1 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        } while (*pcVar6 != '\0');
        return puVar2;
      }
    }
    else {
      iVar3 = FUN_004a29a0(DAT_00dfab38,0x200,param_1,0xffffffff,0,0,0,1);
      if (((iVar3 != 0) && (pcVar6 = (char *)FUN_0049f270(iVar3), pcVar6 != (char *)0x0)) &&
         (iVar3 = FUN_004a29a0(DAT_00dfab38,0x200,param_1,0xffffffff,pcVar6,iVar3,0,1), iVar3 != 0))
      {
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        puVar2 = (undefined4 *)(pcVar8 + -uVar4);
        puVar9 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar9 = *(undefined *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      if (bVar10) {
        FUN_004a16f0(0x13);
        FUN_0049f200(pcVar6);
        return param_1;
      }
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_0049f200(pcVar6);
    }
  }
  return param_1;
}

