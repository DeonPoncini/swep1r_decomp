#include "prototype.h"


uint FUN_0047c7d0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined local_80 [64];
  undefined local_40 [48];
  undefined local_10 [16];
  
  iVar1 = FUN_00450b00(0x54726967);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00450b30(0x54726967,iVar4);
      if (((uVar2 != 0) && ((*(ushort *)(uVar2 + 6) & 0x100) == 0)) &&
         (*(int *)(uVar2 + 0x4c) == param_1)) {
        return uVar2 & ~-(uint)((*(uint *)(uVar2 + 0xc) & 2) != 0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar2 = FUN_00450d20(0x54726967);
  if (uVar2 == 0) {
    return 0;
  }
  *(int *)(uVar2 + 0x4c) = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(uVar2 + 0x3c) = uVar3;
  *(int *)(uVar2 + 8) = (int)*(short *)(param_1 + 0x24);
  uVar3 = FUN_00426740(uVar3,8);
  *(undefined4 *)(uVar2 + 0x40) = uVar3;
  uVar3 = FUN_00426740(*(undefined4 *)(uVar2 + 0x3c),9);
  *(undefined4 *)(uVar2 + 0x44) = uVar3;
  if (*(int *)(uVar2 + 0x3c) != 0) {
    FUN_004313d0(local_80);
    uVar3 = FUN_00465500();
    FUN_004816f0(*(undefined4 *)(uVar2 + 0x3c),local_40,uVar3,local_80);
    FUN_0042f7d0(uVar2 + 0x30,local_10);
  }
  if (*(int *)(uVar2 + 0x40) != 0) {
    FUN_00426840(*(int *)(uVar2 + 0x40),0);
    FUN_00426880(*(undefined4 *)(uVar2 + 0x40),0);
  }
  if (*(int *)(uVar2 + 0x44) != 0) {
    FUN_00426840(*(int *)(uVar2 + 0x44),0);
    FUN_00426880(*(undefined4 *)(uVar2 + 0x44),0);
  }
  return uVar2;
}

