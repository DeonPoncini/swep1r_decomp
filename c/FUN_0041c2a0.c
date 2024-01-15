#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c2a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = DAT_00ea02b8;
  uVar1 = DAT_00ea02b0;
  if (DAT_004d5e00 != 0) {
    puVar4 = &DAT_00ea0260;
    puVar5 = &DAT_00ec7bc8;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_00ec7c18 = uVar1;
    DAT_00ec7c1c = DAT_00ea02b4;
    DAT_00ec7c20 = uVar2;
    DAT_00ec7c24 = DAT_00ea02bc;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x3a;
    _DAT_00ec7bc0 = 0x60;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
    FUN_00411120(0x3a,&DAT_00ec7bc8);
  }
  return;
}

