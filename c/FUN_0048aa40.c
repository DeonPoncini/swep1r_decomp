#include "prototype.h"


void FUN_0048aa40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x20] != 0) {
    FUN_0048ba90(param_1);
    (**(code **)(*(int *)param_1[0x20] + 8))((int *)param_1[0x20]);
  }
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

