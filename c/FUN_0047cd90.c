#include "prototype.h"


void FUN_0047cd90(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_40 [64];
  
  iVar2 = FUN_0047bf20(param_2);
  if (iVar2 == 0) {
    FUN_00450e30(param_1);
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + 0x26);
  *puVar1 = *puVar1 | 1;
  FUN_004316a0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),local_40);
  FUN_00431640((&DAT_00e26fe0)[param_2],local_40);
  if ((&DAT_00e26fe0)[param_2] != 0) {
    FUN_00431a50((&DAT_00e26fe0)[param_2],2,3,0x10,2);
  }
  FUN_0047bea0(param_2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_2 == 0) {
    uVar3 = FUN_0047bce0(DAT_00e26fe0);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

