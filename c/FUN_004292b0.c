#include "prototype.h"


void FUN_004292b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_004318c0();
  iVar4 = 0;
  if (iVar1 < 1) {
    FUN_004313d0(param_1);
    return;
  }
  do {
    iVar2 = FUN_004318d0(iVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_00431770(iVar2);
      if ((uVar3 & 1) != 0) {
        iVar1 = FUN_004318b0(iVar2);
        FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar1 * 0x7c + 0x14);
        return;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  FUN_004313d0(param_1);
  return;
}

