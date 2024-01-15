#include "prototype.h"


undefined4 FUN_0049f130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x83) != 0) {
    uVar2 = FUN_004a2d30(param_1);
    FUN_004a2cb0(param_1);
    iVar1 = FUN_004a03e0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_0049f200(*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}

