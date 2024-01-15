#include "prototype.h"


void FUN_004440e0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined local_40 [64];
  
  uVar2 = FUN_00431770(param_1);
  if (uVar2 != 0x3064) {
    if ((uVar2 & 0x4000) != 0) {
      if ((uVar2 & 0x8000) != 0) {
        if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
          param_3 = param_3 | 3;
        }
        else {
          param_3 = param_3 | 1;
        }
        if (uVar2 == 0xd064) {
          FUN_004316a0(param_1,local_40);
        }
        else {
          FUN_004316a0(param_1,local_40);
        }
        FUN_00445200(local_40);
        DAT_00e98e70 = 1;
      }
      iVar3 = FUN_00431780(param_1);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
          if (((iVar1 != 0) &&
              (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_0050c5dc) == DAT_0050c5dc)) &&
             (uVar4 = FUN_00431b00(iVar1,0), (uVar4 & DAT_004c177c) != 0)) {
            FUN_004440e0(iVar1,param_2,param_3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      if ((uVar2 & 0x8000) != 0) {
        FUN_00445630();
        DAT_00e98e70 = 1;
      }
    }
    return;
  }
  FUN_00443f10(param_1,param_2,param_3);
  return;
}

