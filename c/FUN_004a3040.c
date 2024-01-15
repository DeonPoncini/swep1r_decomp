#include "prototype.h"


undefined4 * FUN_004a3040(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_004a1670(2);
  iVar3 = 0;
  if (0 < DAT_00ecd4e0) {
    do {
      iVar1 = *(int *)(DAT_00ecc4c0 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        uVar2 = FUN_0049f270(0x38);
        *(undefined4 *)(DAT_00ecc4c0 + iVar3) = uVar2;
        if (*(int *)(DAT_00ecc4c0 + iVar3) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_00ecc4c0 + iVar3) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_00ecc4c0 + iVar3) + 0x20));
          puVar4 = *(undefined4 **)(DAT_00ecc4c0 + iVar3);
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_004a1750(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00ecc4c0 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_00ecc4c0 + iVar3 * 4);
          break;
        }
        FUN_004a17c0(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00ecd4e0);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[4] = 0xffffffff;
  }
  FUN_004a16f0(2);
  return puVar4;
}

