#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046aa30(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar1 = -1;
  iVar3 = 0;
  pbVar4 = (byte *)(param_1 + 0x2a0);
  do {
    if ((*pbVar4 & 8) != 0) {
      iVar1 = FUN_004816b0();
      FUN_00474cd0(param_1,iVar3,
                   ((float)iVar1 * _DAT_004ad768 * _DAT_004ad76c - _DAT_004ad770) *
                   (float)_DAT_00e22a40);
      iVar1 = iVar3;
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 4;
  } while (iVar3 < 6);
  if (iVar1 < 0) {
    FUN_004276a0(0,0x40000);
  }
  else {
    iVar1 = FUN_00427670();
    if (iVar1 == 0) {
      FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xc,0xc,0xc,0xc,0xc,
                   param_1 + 0x50);
      FUN_00427690(0,0x40000);
      if (iVar3 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(iVar3 < 6);
      }
      FUN_00409ee0(0x15,0xffffffff,uVar2 * 0xb4 + 0x5a,0xffffffff,0);
      return;
    }
  }
  return;
}

