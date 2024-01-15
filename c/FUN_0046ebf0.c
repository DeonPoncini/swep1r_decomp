#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ebf0(int param_1)

{
  int iVar1;
  undefined local_40 [48];
  undefined local_10 [16];
  
  if ((DAT_00e28a00 != 0) && (DAT_00e28764 != 0)) {
    iVar1 = FUN_0046d650(DAT_00e28764);
    if (iVar1 != 0) {
      if (DAT_00e28a00 != 0) {
        FUN_00431a50(DAT_00e28a00,2,0xfffffffc,0x10,3);
      }
      *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
      _DAT_00e289f8 = 0xc7435000;
      return;
    }
    FUN_0044bb10(local_40,&DAT_00e289c0);
    if (-1 < *(int *)(param_1 + 0x324)) {
      FUN_0042f7d0(local_10,(*(int *)(param_1 + 0x324) + 0xe) * 0x40 + param_1);
    }
    FUN_0044bb10(&DAT_00e289c0,local_40);
    FUN_00431640(DAT_00e28a00,local_40);
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,3,0x10,2);
    }
  }
  return;
}

