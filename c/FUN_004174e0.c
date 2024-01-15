#include "prototype.h"


char * FUN_004174e0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  size_t _Count;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  if (param_1 != 0) {
    FUN_0049f200(param_1);
  }
  if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Count = ~uVar2 - 1;
    pcVar3 = (char *)FUN_0049f270(~uVar2);
    _strncpy(pcVar3,param_2,_Count);
    pcVar3[_Count] = '\0';
  }
  return pcVar3;
}

