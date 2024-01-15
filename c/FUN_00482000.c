#include "prototype.h"


undefined4 FUN_00482000(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined local_40 [64];
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    FUN_004313d0(&DAT_0050cb88);
  }
  uVar1 = FUN_00431770(param_1);
  if ((uVar1 & 0x4000) == 0) {
    if (uVar1 == 0x3064) {
      FUN_00431820(**(undefined4 **)(param_1 + 0x18),param_2);
      FUN_00430a00(param_2,param_2,&DAT_0050cb88);
      FUN_00430a00(param_2 + 0xc,param_2 + 0xc,&DAT_0050cb88);
      return 1;
    }
    return 0;
  }
  if (uVar1 == 0xd065) {
    FUN_004316a0(param_1,local_40);
  }
  else {
    if (uVar1 != 0xd064) goto LAB_00482081;
    FUN_004316a0(param_1,local_40);
  }
  FUN_0042ff80(&DAT_0050cb88,local_40);
LAB_00482081:
  iVar2 = FUN_00431780(param_1);
  iVar4 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  do {
    iVar3 = FUN_00482000(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4),param_2,param_3 | 1);
    if (iVar3 != 0) {
      return 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar2);
  return 0;
}

