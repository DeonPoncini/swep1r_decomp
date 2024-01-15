#include "prototype.h"


undefined4
FUN_004145b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  
  DAT_004b5d7c = 0;
  DAT_004d87ac = 0xffffffff;
  FUN_00414e60(param_1,0);
  iVar1 = FUN_004146c0(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&LAB_00417f50);
  DAT_004d87b4 = iVar1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar2 = FUN_0041b3c0(*(int *)(iVar1 + 0xc));
    if (((byte)*(undefined4 *)(iVar2 + 0x18) & 5) == 5) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    FUN_00414f10(iVar2,1);
  }
  DAT_004d87b8 = param_1;
  if (param_9 != 0) {
    DAT_004d87b0 = 1;
    while (DAT_004b5d7c == 0) {
      thunk_FUN_00423cb0();
    }
    DAT_004d87b0 = 0;
    FUN_00414d00(iVar1);
    DAT_004d87b4 = 0;
    FUN_00414e60(param_1,1);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_0041b3c0(*(int *)(param_1 + 0xc));
      if (((byte)*(undefined4 *)(iVar1 + 0x18) & 5) == 5) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      FUN_00414f10(iVar1,1);
    }
    DAT_004d87b8 = 0;
  }
  return DAT_004d87ac;
}

