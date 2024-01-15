#include "prototype.h"


/* WARNING: Type propagation algorithm not settling */

char * FUN_00418680(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *in_EAX;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar2 = param_2;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (param_2 != -1) {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= param_3) {
      return (char *)0x0;
    }
    pcVar4 = param_1 + param_3;
    iVar5 = param_4 - param_3;
    in_EAX = (char *)0x0;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      if (*pcVar4 == '\0') {
        return in_EAX;
      }
      FUN_0042e0e0(*pcVar4,(&DAT_00e99720)[iVar2],&param_1,&param_2);
      in_EAX = in_EAX + (int)param_1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return in_EAX;
}

