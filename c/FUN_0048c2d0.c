#include "prototype.h"


char * FUN_0048c2d0(char *param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  sVar2 = _strspn(param_1,param_4);
  param_1 = param_1 + sVar2;
  pcVar3 = _strpbrk(param_1,param_4);
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
  }
  else {
    uVar4 = (int)pcVar3 - (int)param_1;
  }
  if (param_3 - 1U <= uVar4) {
    uVar4 = param_3 - 1U;
  }
  if (param_2 != (char *)0x0) {
    _strncpy(param_2,param_1,uVar4);
    param_2[uVar4] = '\0';
  }
  return pcVar3;
}

