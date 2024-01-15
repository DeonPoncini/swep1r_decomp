#include "prototype.h"


void FUN_0041b4d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_570 [348];
  
  if (param_1 != 0) {
    piVar3 = local_570;
    for (iVar1 = 0x15c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar1 = FUN_004137d0(param_1);
    while (iVar2 = local_570[3], iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = iVar1;
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if ((*(int *)(iVar1 + 0x18) == 0xc) && (*(uint *)(iVar1 + 0x528) < *(uint *)(iVar2 + 0x528))
           ) {
          iVar2 = iVar1;
        }
      }
      FUN_00416890(iVar2);
      FUN_00416840(local_570,iVar2);
      iVar1 = FUN_004137d0(param_1);
    }
    while (iVar2 != 0) {
      local_570[3] = iVar2;
      FUN_00416890(iVar2);
      FUN_00416840(param_1,iVar2);
      iVar2 = local_570[3];
    }
    FUN_00417ca0(param_1);
  }
  return;
}

