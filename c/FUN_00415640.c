#include "prototype.h"


void FUN_00415640(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414e80(PTR_DAT_004b5d74);
  if (iVar1 != 0) {
    FUN_00412630();
    if (DAT_004d8794 != 0) {
      FUN_004151a0(DAT_004d8794,8 - (uint)(param_2 != 0),param_1,0);
      return;
    }
    if (param_2 == 0) {
      FUN_0041b420(param_1);
    }
  }
  return;
}

