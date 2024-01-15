#include "prototype.h"


void FUN_0044bad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 4;
  puVar3 = param_1;
  do {
    iVar4 = 3;
    puVar2 = puVar3;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0xf] = 0x3f800000;
  return;
}

