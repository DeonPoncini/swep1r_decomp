#include "prototype.h"


int FUN_00413a30(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0xc;
    FUN_00416890(param_2);
    FUN_00416840(param_1,param_2);
    iVar1 = FUN_004137a0(param_1);
    if (iVar1 == 0) {
      FUN_00413610(param_2,1);
    }
    FUN_00417ca0(param_1);
    return param_2;
  }
  return 0;
}

