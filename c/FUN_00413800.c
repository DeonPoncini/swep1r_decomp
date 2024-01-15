#include "prototype.h"


void FUN_00413800(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((*(uint *)(iVar2 + 0x508) & 0x80000) != 0) {
      *(int *)(param_1 + 0x520) = iVar4;
      uVar3 = FUN_004174e0(*(undefined4 *)(param_1 + 0x51c),*(undefined4 *)(iVar2 + 0x4d4));
      *(undefined4 *)(param_1 + 0x51c) = uVar3;
    }
    if (((byte)*(undefined4 *)(iVar2 + 0x18) & 0xc) == 0xc) {
      FUN_00414d00(iVar2);
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar1;
  }
  return;
}

