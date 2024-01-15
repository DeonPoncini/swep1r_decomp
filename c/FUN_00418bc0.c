#include "prototype.h"


void FUN_00418bc0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
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
      }
    }
  }
  return;
}

