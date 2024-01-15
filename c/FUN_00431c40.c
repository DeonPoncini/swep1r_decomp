#include "prototype.h"


void FUN_00431c40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  undefined4 *unaff_retaddr;
  undefined4 local_7c [4];
  undefined4 uStack_6c;
  uint uStack_3c;
  uint *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  piVar1 = (int *)FUN_00488a80();
  puVar3 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c[0] = 0x7c;
  (**(code **)(*piVar1 + 100))(piVar1,0,local_7c,1,0);
  *puStack_c = unaff_EDI;
  *puStack_10 = uStack_3c >> 3;
  *puStack_8 = uStack_6c;
  *puStack_4 = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  *unaff_retaddr = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 8);
  return;
}

