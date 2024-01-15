#include "prototype.h"


char * FUN_00421360(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  char **ppcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_104;
  char local_100 [256];
  
  local_104 = local_100;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_1 != '\0') && (*param_1 == '/')) {
    iVar4 = -1;
    pcVar6 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -3) {
      iVar4 = FUN_0049fb10(param_1 + 1,0x2f);
      if (DAT_004eb3c8 == 0) {
        return (char *)(iVar4 + 1);
      }
      _strncpy(local_100,param_1 + 1,0xfe);
      puVar2 = (undefined *)FUN_0049fb10(local_100,0x2f);
      if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0;
      }
      FUN_004ab5d0(local_100);
      ppcVar3 = (char **)FUN_0049fdb0(&local_104,DAT_004eb3c4,DAT_004eb3cc,4,&LAB_004212f0);
      if (ppcVar3 == (char **)0x0) {
        return (char *)(iVar4 + 1);
      }
      pcVar6 = *ppcVar3;
      uVar5 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (pcVar6[~uVar5] != '\0') {
        return pcVar6 + ~uVar5;
      }
    }
  }
  return param_1;
}

