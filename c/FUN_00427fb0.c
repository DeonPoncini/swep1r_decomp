#include "prototype.h"


void FUN_00427fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00450b00(0x54657374);
  if (0 < iVar1) {
    iVar1 = FUN_0045d350();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004b6d28 == 0) {
      return;
    }
  }
  iVar1 = FUN_00427110(param_1,param_2,param_3);
  if ((iVar1 != -1) &&
     ((iVar1 = FUN_00422a90(iVar1),
      (undefined *)(*(int *)(iVar1 + 0x28) + DAT_004eb44c) <= PTR_IMAGE_DOS_HEADER_004b6d10 ||
      ((*(byte *)(iVar1 + 0x24) & 8) != 0)))) {
    FUN_00422e30(iVar1,1,0);
  }
  return;
}

