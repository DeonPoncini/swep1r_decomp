#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465310(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_00447300(0x536d6f6b,8);
  FUN_00450db0(0x536d6f6b);
  puVar2 = &DAT_00e278a0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_00448780(0x93);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)&DAT_00e271a0 + iVar3) = 0;
    }
    else {
      FUN_00431b20(puVar2,0xd065);
      *(undefined4 *)(puVar2 + 0x14) = 1;
      *(undefined4 **)(puVar2 + 0x18) = (undefined4 *)((int)&DAT_00e288c0 + iVar3);
      *(undefined4 *)((int)&DAT_00e288c0 + iVar3) = *puVar1;
      *(undefined **)((int)&DAT_00e271a0 + iVar3) = puVar2;
      if (puVar2 != (undefined *)0x0) {
        FUN_00431a50(puVar2,2,0xfffffffc,0x10,3);
      }
    }
    puVar2 = puVar2 + 0x58;
    iVar3 = iVar3 + 4;
  } while ((int)puVar2 < 0xe28660);
  FUN_00431b20(&DAT_00e27180,0x5064);
  _DAT_00e27194 = 0x28;
  _DAT_00e27198 = &DAT_00e271a0;
  _DAT_00e287fc = &DAT_00e27180;
  FUN_0046a5e0(&DAT_00e271a0);
  return;
}

