#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e700(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = true;
  uVar4 = 0;
  do {
    iVar2 = FUN_00420f70(uVar4);
    if ((iVar2 != 0) &&
       ((*(uint *)(&DAT_004ea024 + param_1 * 0xc) & 1 << ((byte)uVar4 & 0x1f)) == 0)) {
      bVar1 = false;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  iVar3 = param_1 * 0xc;
  iVar2 = *(int *)(&DAT_004ea020 + iVar3);
  if (bVar1) {
    *(undefined4 *)(&DAT_004ea020 + iVar3) = 2;
  }
  if ((*(int *)(&DAT_004ea020 + iVar3) != iVar2) && (DAT_004eb1c8 != 0)) {
    DAT_00ec7bd0 = *(undefined4 *)(&DAT_004ea024 + iVar3);
    DAT_00ec7bcc = (uint)(*(int *)(&DAT_004ea020 + iVar3) == 2);
    DAT_00ec7bc8 = param_1;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x2e;
    _DAT_00ec7bc0 = 0xc;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,1);
  }
  return;
}

