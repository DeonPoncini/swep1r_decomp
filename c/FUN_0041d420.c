#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d420(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_004eb3b4;
  if (DAT_004d5e00 != 0) {
    iVar2 = param_1 * 0xc;
    if (*(int *)(&DAT_004ea020 + iVar2) != 0) {
      if (param_2 == 0) {
        uVar3 = *(uint *)(&DAT_004ea024 + iVar2) & ~(1 << ((byte)DAT_004eb3b4 & 0x1f));
      }
      else {
        uVar3 = *(uint *)(&DAT_004ea024 + iVar2) | 1 << ((byte)DAT_004eb3b4 & 0x1f);
      }
      *(uint *)(&DAT_004ea024 + iVar2) = uVar3;
      if (DAT_004eb1c8 == 0) {
        DAT_00ec7bc8 = param_1;
        DAT_00ec7bcc = uVar1;
        DAT_00ec7bd0 = param_2;
        _DAT_00ec7ba4 = 0;
        DAT_00ec7bc4 = 0x2d;
        _DAT_00ec7bc0 = 0xc;
        FUN_0041b760(&DAT_00ec7ba0,DAT_00ec7620,1,1);
      }
      FUN_0041e700(param_1);
    }
  }
  return;
}

