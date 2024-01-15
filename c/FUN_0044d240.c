#include "prototype.h"


void FUN_0044d240(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  DAT_0050c6e0 = DAT_0050c6e0 + 1;
  if (DAT_0050c6e0 < 0x21) {
    bVar2 = false;
    if (DAT_004c3c04 != 0) {
      FUN_0044b7e0(param_2);
    }
  }
  else {
    bVar2 = true;
  }
  iVar3 = FUN_00431780(param_3);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_3 + 0x18) + iVar6 * 4);
      if (iVar1 != 0) {
        uVar5 = *(uint *)(DAT_00e67c04 + 0x158);
        uVar4 = FUN_00431b00(iVar1,2);
        if ((uVar4 & uVar5) == uVar5) {
          uVar5 = FUN_00431b00(iVar1,2);
          if ((*(uint *)(DAT_00e67c04 + 0x15c) & uVar5) != 0) {
            FUN_0044d7c0(iVar1);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  if ((!bVar2) && (DAT_004c3c04 != 0)) {
    FUN_0044bab0();
  }
  DAT_0050c6e0 = DAT_0050c6e0 + -1;
  return;
}

