#include "prototype.h"


bool FUN_004879a0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((DAT_00529508 == 0) || (param_1 == (char *)0x0)) {
    return false;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(DAT_00529508,param_1,~uVar3 - 1);
  return ~uVar3 - 1 != iVar2;
}

