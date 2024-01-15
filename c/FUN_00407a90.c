#include "prototype.h"


int FUN_00407a90(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = param_2;
  if (*param_2 == -1) {
    return -1;
  }
  do {
    uVar2 = FUN_00421470(piVar4[1]);
    uVar2 = FUN_00421470(param_1,uVar2);
    iVar3 = FUN_0049ec50(uVar2);
    if (iVar3 == 0) {
      return param_2[iVar5 * 2];
    }
    piVar1 = piVar4 + 2;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 2;
  } while (*piVar1 != -1);
  return -1;
}

