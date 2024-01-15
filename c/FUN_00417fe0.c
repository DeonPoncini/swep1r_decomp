#include "prototype.h"


void FUN_00417fe0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (~uVar5 - 1 == 0) {
    return;
  }
  uVar4 = FUN_0042de30(param_2,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  FUN_0042df70(param_2,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  iVar2 = *(int *)(param_1 + 0x50c);
  iVar3 = *(int *)(param_1 + 0x514);
  while( true ) {
    cVar1 = *param_2;
    pcVar8 = (char *)0x0;
    pcVar7 = param_2;
    for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < ((iVar3 - iVar2) + 1U) / (uVar4 / (~uVar5 - 1) + 1)))
        ; uVar6 = uVar6 + 1) {
      if (cVar1 == ' ') {
        pcVar8 = pcVar7;
      }
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    if ((*pcVar7 != '\0') && (pcVar8 != (char *)0x0)) {
      *pcVar8 = '\0';
    }
    FUN_004138f0(param_1,param_2,-(uint)(param_3 != 0) & 0x10000,0,0);
    if (*pcVar7 != '\0') {
      if (pcVar8 == (char *)0x0) {
        return;
      }
      *pcVar8 = ' ';
    }
    if (pcVar8 == (char *)0x0) break;
    if (*pcVar7 == '\0') {
      return;
    }
    param_2 = pcVar8 + 1;
  }
  return;
}

