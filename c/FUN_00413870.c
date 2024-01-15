#include "prototype.h"


void FUN_00413870(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413770(param_1,*(undefined4 *)(param_1 + 0x520));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x51c) == 0) {
      return;
    }
    iVar1 = FUN_004136f0(param_1,*(int *)(param_1 + 0x51c));
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_00413610(iVar1,1);
  return;
}

