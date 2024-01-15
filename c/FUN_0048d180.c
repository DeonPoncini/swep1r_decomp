#include "prototype.h"


void FUN_0048d180(char *param_1,DWORD param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (DAT_0052ee7c != (short)param_2) {
    FUN_0048d160(param_2);
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  WriteConsoleA(DAT_0052ee78,param_1,~uVar2 - 1,&param_2,(LPVOID)0x0);
  return;
}

