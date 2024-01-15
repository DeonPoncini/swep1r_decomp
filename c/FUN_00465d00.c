#include "prototype.h"


void FUN_00465d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00445b40();
  uVar2 = FUN_004472e0(*(undefined4 *)(param_1 + 0x1b4));
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  iVar3 = FUN_00445b40();
  DAT_00e288b4 = DAT_00e288b4 + (iVar3 - iVar1);
  FUN_0047f6f0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  FUN_00465cb0(param_1);
  return;
}

