#include "prototype.h"


void FUN_004a24a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_004d1fa0))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  pcVar2 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      pcVar3 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
    }
    cVar1 = pcVar2[-1];
    pcVar3 = pcVar2;
    while (pcVar4 = pcVar3 + -1, cVar1 == '0') {
      cVar1 = pcVar3[-2];
      pcVar3 = pcVar4;
    }
    if (*pcVar4 == DAT_004d1fa0) {
      pcVar4 = pcVar3 + -2;
    }
    cVar1 = *pcVar2;
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
  }
  return;
}

