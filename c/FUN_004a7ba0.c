#include "prototype.h"


uint FUN_004a7ba0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_004aa0d0(0,param_1,0x23,&local_4);
  uVar4 = FUN_004aa0d0(0,pcVar7,0x25,&local_8);
  uVar5 = FUN_004aa0d0(1,pcVar7,0x1e,&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined *)FUN_0049f270(0xd);
  *(undefined **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_004a7c3c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_004a7c3c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_004a7c3c:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_0049f200(param_1);
  return 0;
}

