#include "prototype.h"


void FUN_00411440(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (param_3 != 0) {
      iVar2 = (iVar2 - *(int *)(param_1 + 0x30)) + 0x1df >> 1;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (param_2 != 0) {
      iVar1 = (iVar1 - *(int *)(param_1 + 0x2c)) + 0x27f >> 1;
    }
    FUN_00414b60(param_1,iVar1,iVar2);
  }
  return;
}

