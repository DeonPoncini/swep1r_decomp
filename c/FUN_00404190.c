#include "prototype.h"


int FUN_00404190(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_004b2910 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return iVar1;
  }
  iVar1 = _IFReleaseEffects_8(param_2,iVar1);
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}

