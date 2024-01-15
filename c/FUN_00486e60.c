#include "prototype.h"


uint FUN_00486e60(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  undefined4 uStack_118;
  undefined *puStack_114;
  undefined local_104 [240];
  int iStack_14;
  
  puStack_114 = local_104;
  uStack_118 = 0;
  uVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254);
  if (uVar1 == 0x8877001e) {
    iVar2 = (**(code **)(DAT_00ecc420 + 0x20))(unaff_EDI);
    uVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,iVar2,&stack0xfffffef0);
    if (-1 < (int)uVar1) {
      *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iStack_14 + 0x10);
      FUN_004a1170(&uStack_118,0x80,u__s__S_004c8680,iStack_14 + 0x58,iStack_14 + 0x98);
      *(undefined4 **)(iVar2 + 0x30) = &uStack_118;
      iVar3 = FUN_004a1150(iStack_14 + 0xb8);
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x34) = iStack_14 + 0xb8;
      }
      *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iStack_14 + 0xf8);
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iStack_14 + 0xfc);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iStack_14 + 0x100);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0xe0c4;
      uVar1 = (**(code **)(*DAT_00510254 + 0x7c))(DAT_00510254,iVar2,0);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}

