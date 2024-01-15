#include "prototype.h"


int FUN_004138f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_004131c0(param_1,param_4,*(undefined4 *)(param_1 + 0x4dc),param_2,0,0,0,1);
    *(undefined4 *)(iVar1 + 0x508) = param_3;
    FUN_00414be0(iVar1,*(undefined *)(param_1 + 0x4c0),*(undefined *)(param_1 + 0x4c1),
                 *(undefined *)(param_1 + 0x4c2),*(undefined *)(param_1 + 0x4c3));
    FUN_00414ca0(iVar1,*(undefined *)(param_1 + 0x4c4),*(undefined *)(param_1 + 0x4c5),
                 *(undefined *)(param_1 + 0x4c6),*(undefined *)(param_1 + 0x4c7));
    FUN_00414c10(iVar1,*(undefined *)(param_1 + 0x4cc),*(undefined *)(param_1 + 0x4cd),
                 *(undefined *)(param_1 + 0x4ce),*(undefined *)(param_1 + 0x4cf));
    FUN_00414c40(iVar1,*(undefined *)(param_1 + 0x4c8),*(undefined *)(param_1 + 0x4c9),
                 *(undefined *)(param_1 + 0x4ca),*(undefined *)(param_1 + 0x4cb));
    FUN_00414c70(iVar1,*(undefined *)(param_1 + 0x4d0),*(undefined *)(param_1 + 0x4d1),
                 *(undefined *)(param_1 + 0x4d2),*(undefined *)(param_1 + 0x4d3));
    FUN_00414cd0(iVar1,0,param_5);
    *(undefined4 *)(iVar1 + 0x18) = 0xc;
    iVar2 = FUN_004137a0(param_1);
    if (iVar2 == 0) {
      FUN_00413610(iVar1,1);
    }
    FUN_00417ca0(param_1);
    return iVar1;
  }
  return 0;
}

