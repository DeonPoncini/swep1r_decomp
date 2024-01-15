#include "prototype.h"


int FUN_00414d60(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != param_2) {
    if (((*(int *)(param_1 + 0xc) != 0) &&
        (iVar1 = FUN_00414d60(*(int *)(param_1 + 0xc),param_2), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x18) == param_2)) {
      return iVar1;
    }
    param_1 = 0;
  }
  return param_1;
}

