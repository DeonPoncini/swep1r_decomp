#include "prototype.h"


void FUN_004a2840(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  undefined local_18 [24];
  
  FUN_004a73d0(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = (char *)((uint)(local_28 == 0x2d) + param_2);
  FUN_004a7330(pcVar3,param_3,&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_004a2780(param_2,param_3,&local_28,1);
    return;
  }
  FUN_004a2610(param_2,param_3,param_4,&local_28,1);
  return;
}

