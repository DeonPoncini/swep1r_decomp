#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ba30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_c [12];
  
  if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && (*(int *)(param_1 + 0x31c) == 0)) {
    iVar1 = param_1 + 0x50;
    iVar2 = FUN_004816b0(0x3f800000,iVar1,0,1,0x42480000,0x43fa0000);
    FUN_00426d10(0x87,6,(float)iVar2 * _DAT_004ad768 * (float)_DAT_004ad898 - (float)_DAT_004ad8a0);
    iVar2 = FUN_004816b0(0x3f800000,iVar1,0,1,0x42480000,0x43fa0000);
    FUN_00426d10(0x88,7,(float)iVar2 * _DAT_004ad768 * (float)_DAT_004ad898 - (float)_DAT_004ad8a0);
    *(undefined4 *)(param_1 + 0x268) = 0x41700000;
    FUN_0042f7d0(local_c,iVar1);
    uVar3 = FUN_0046a5f0(8,0,0x41000000,local_c,0x40000000);
    *(undefined4 *)(param_1 + 0x31c) = uVar3;
    FUN_0046a970(uVar3,(undefined4 *)(param_1 + 0x31c));
  }
  return;
}

