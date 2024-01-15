#include "prototype.h"


undefined4 FUN_00486fc0(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  undefined *puStack_110;
  undefined local_104 [246];
  undefined2 uStack_e;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puStack_110 = local_104;
  uVar4 = 0;
  iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,0);
  if (iVar1 == -0x7788ffe2) {
    puVar2 = (undefined *)(**(code **)(DAT_00ecc420 + 0x20))(puStack_110);
    if (puVar2 != (undefined *)0x0) {
      iVar1 = (**(code **)(*DAT_00510254 + 0x58))(DAT_00510254,puVar2,&puStack_110);
      if (-1 < iVar1) {
        if (unaff_retaddr == 0) {
          uVar3 = *(uint *)(puVar2 + 4) | 0x20;
        }
        else {
          uVar3 = *(uint *)(puVar2 + 4) & 0xffffffdf;
        }
        *(uint *)(puVar2 + 4) = uVar3;
        FUN_0049ef50(&stack0xfffffef4,*(undefined4 *)(puVar2 + 0x30),0x7f);
        uStack_e = 0;
        iVar1 = FUN_004a1210(&stack0xfffffef4,0x3a);
        if (iVar1 != 0) {
          FUN_004a1170(iVar1 + 2,0x20,&PTR_DAT_004c868c,uStack_8);
          *(undefined **)(puVar2 + 0x30) = &stack0xfffffef4;
          *(undefined4 *)(puVar2 + 0x28) = uStack_4;
          iVar1 = (**(code **)(*DAT_00510254 + 0x7c))(DAT_00510254,puVar2,0);
          if (-1 < iVar1) goto LAB_004870ab;
        }
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    puVar2 = puStack_110;
  }
LAB_004870ab:
  (**(code **)(DAT_00ecc420 + 0x24))(puVar2);
  return uVar4;
}

