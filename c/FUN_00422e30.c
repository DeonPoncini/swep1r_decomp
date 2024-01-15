#include "prototype.h"


int FUN_00422e30(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined local_20 [32];
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    FUN_00422ac0(param_1);
    if ((*(byte *)(param_1 + 0x24) & 8) != 0) {
      DAT_004eb408 = param_2;
    }
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 1;
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    FUN_0049eb80(local_20,&PTR_DAT_004b7588,param_1);
    iVar1 = FUN_00423050(local_20);
    if (iVar1 == 0) {
      *param_3 = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x24) & 8) == 0) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_004850c0(*(undefined4 *)(param_1 + 0x48),0);
    if ((iVar1 == 1) && (*(uint *)(param_1 + 0x20) < DAT_00e9f360)) {
      iVar1 = FUN_00484bb0(*(undefined4 *)(param_1 + 0x48));
      return iVar1;
    }
  }
  return *(int *)(param_1 + 0x48);
}

