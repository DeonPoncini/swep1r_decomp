#include "prototype.h"


void FUN_0044bb10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  puVar1 = param_1;
  do {
    iVar2 = 4;
    do {
      *puVar1 = *(undefined4 *)((param_2 - (int)param_1) + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

