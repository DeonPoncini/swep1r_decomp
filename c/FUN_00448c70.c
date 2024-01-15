#include "prototype.h"


void FUN_00448c70(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  while (iVar1 != -1) {
    if (*param_2 != 0) {
      *param_1 = *param_2;
    }
    piVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = *piVar3;
  }
  piVar3 = param_1 + 1;
  if (param_1[1] == 0x44617461) {
    piVar3 = param_1 + 3;
    if (0 < param_1[2]) {
      piVar3 = piVar3 + param_1[2];
    }
  }
  if (*piVar3 == 0x416e696d) {
    do {
      piVar2 = piVar3;
      piVar3 = piVar2 + 1;
    } while (piVar2[1] != 0);
    piVar3 = piVar2 + 2;
  }
  if ((*piVar3 == 0x416c744e) && (param_2[1] == 0x416c744e)) {
    param_2 = param_2 + 2;
    piVar2 = (int *)piVar3[1];
    while (piVar2 != (int *)0x0) {
      *piVar2 = *param_2;
      FUN_004476b0(*param_2);
      param_2 = param_2 + 1;
      piVar2 = (int *)piVar3[2];
      piVar3 = piVar3 + 1;
    }
  }
  return;
}

