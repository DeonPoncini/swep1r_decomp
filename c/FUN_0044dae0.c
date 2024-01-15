#include "prototype.h"


void FUN_0044dae0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar2 = FUN_00431770(param_1);
    uVar3 = FUN_0044c440(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xe));
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x3064) != 0) {
        FUN_0044ceb0(param_1);
      }
    }
    else {
      iVar4 = FUN_00431780(param_1);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
          if (iVar1 != 0) {
            FUN_0044dae0(iVar1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
        FUN_0044c4c0(uVar3);
        return;
      }
    }
    FUN_0044c4c0(uVar3);
  }
  return;
}

