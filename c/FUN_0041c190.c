#include "prototype.h"


void FUN_0041c190(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    pcVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      FUN_0041d0c0(param_1,0xffffffff,DAT_004eb3b4);
      FUN_0041c130(param_1);
    }
  }
  return;
}

