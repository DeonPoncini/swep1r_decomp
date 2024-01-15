#include "prototype.h"


void FUN_0045ce10(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00450b30(0x456c6d6f,param_2);
  if (iVar1 != 0) {
    (&DAT_00e29600)[param_2] = iVar1;
    FUN_00454bc0(param_1,0xffffffff,param_2,1);
    FUN_004686b0(iVar1,(&DAT_00e29900)[param_2],(&DAT_00e2afa0)[param_2],param_3);
    *(int *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0xbc) = param_4;
    if (param_3 == 1) {
      *(undefined4 *)(iVar1 + 0xbc) = 0x42b40000;
    }
  }
  return;
}

