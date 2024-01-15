#include "prototype.h"


char * FUN_00421470(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == '\0') {
    return param_1;
  }
  if (*param_1 != '/') {
    return param_1;
  }
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -3) {
    return param_1;
  }
  iVar2 = FUN_0049fb10(param_1 + 1,0x2f);
  return (char *)(iVar2 + 1);
}

