#include "prototype.h"


char * FUN_004845b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = _strrchr(param_1,0x5c);
  if (pcVar3 != (char *)0x0) {
    cVar2 = *pcVar3;
    while (cVar2 == '\\') {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    return pcVar3;
  }
  return param_1;
}

