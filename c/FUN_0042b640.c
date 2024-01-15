#include "prototype.h"


void FUN_0042b640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_00431770(param_1);
    if (iVar1 == 0x3064) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          FUN_0042b5e0(**(undefined4 **)(*(int *)(param_1 + 0x18) + iVar1 * 4),param_2,param_3,
                       param_4,param_5,param_6,param_7);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x14));
        return;
      }
    }
    else {
      uVar2 = FUN_00431770(param_1);
      if ((uVar2 & 0x4000) != 0) {
        iVar3 = 0;
        iVar1 = FUN_00431780(param_1);
        if (0 < iVar1) {
          do {
            FUN_0042b640(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4),param_2,param_3,
                         param_4,param_5,param_6,param_7);
            iVar3 = iVar3 + 1;
            iVar1 = FUN_00431780(param_1);
          } while (iVar3 < iVar1);
        }
      }
    }
  }
  return;
}

