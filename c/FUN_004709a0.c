#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004709a0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x1994);
  if (iVar1 != 0) {
    if (((*(byte *)(param_1 + 100) & 0x40) == 0) || ((*(uint *)(param_1 + 0x60) & 0x84000) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e90 & 0x1000) != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      return;
    }
    FUN_00431a50(iVar1,2,3,0x10,2);
    FUN_00431620(*(undefined4 *)(param_1 + 0x1994),0,0,
                 (*(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x188)) - _DAT_004ada44);
  }
  return;
}

