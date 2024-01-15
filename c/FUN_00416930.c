#include "prototype.h"


undefined4 FUN_00416930(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_004b5d84 == 0xffffffff) {
    DAT_004b5d84 = timeGetTime();
  }
  DVar2 = timeGetTime();
  DAT_004d87a8 = 0;
  if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if (uVar1 != 0) {
      uVar3 = DVar2 - DAT_004b5d84;
      if (uVar1 < DVar2 - DAT_004b5d84) {
        uVar3 = uVar1;
      }
      *(uint *)(param_1 + 0x50) = uVar1 - uVar3;
      return DAT_004d87a8;
    }
    iVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x4c);
    if ((iVar4 == 0) && (iVar6 == 0)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
      FUN_004151a0(param_1,0x48,0,1);
      return DAT_004d87a8;
    }
    DAT_004d87a8 = 1;
    iVar5 = iVar4;
    if (iVar4 != 0) {
      iVar5 = iVar4 / 10;
      if (iVar4 / 10 == 0) {
        iVar5 = ((-1 < iVar4) - 1 & 0xfffffffe) + 1;
      }
    }
    iVar4 = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 / 10;
      if (iVar6 / 10 == 0) {
        iVar4 = ((-1 < iVar6) - 1 & 0xfffffffe) + 1;
      }
    }
    FUN_00414b60(param_1,*(int *)(param_1 + 0x24) - iVar5,*(int *)(param_1 + 0x28) - iVar4);
  }
  return DAT_004d87a8;
}

