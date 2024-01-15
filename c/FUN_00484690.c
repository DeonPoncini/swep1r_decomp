#include "prototype.h"


char * FUN_00484690(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  uVar3 = uVar2 - 1;
  if (((param_1[uVar2 - 2] != '\\') && ((int)uVar3 < param_3 + -1)) && (*param_1 != '\0')) {
    param_1[uVar3] = '\\';
    param_1[uVar2] = '\0';
    uVar3 = uVar2;
  }
  _strncat(param_1,param_2,(param_3 - uVar3) - 1);
  return param_1;
}

