#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408510(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004d6be4;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d6be4 = 0x7c;
  _DAT_004d6be8 = 7;
  _DAT_004d6bf0 = 8;
  _DAT_004d6bec = 8;
  _DAT_004d6c4c = 0x800;
  iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,&DAT_004d6be4,&DAT_004d6be0,0);
  if (iVar1 != 0) {
    DAT_004b4758 = 1;
    return;
  }
  DAT_004d6b74 = __ftol();
  DAT_004d6b70 = DAT_00ec8cb0 - (DAT_00ec8cb0 >> 3);
  puVar2 = (undefined4 *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d6bd8 = 10;
  DAT_004d6bdc = DAT_004d6b74;
  (**(code **)(*DAT_004d6be0 + 0x14))(DAT_004d6be0,0,0,0,0x1000400,&stack0xffffff8c);
  _DAT_00ec86d4 = 0;
  _DAT_00ec86d0 = 0;
  DAT_004b4758 = 0;
  _DAT_00ec86d8 = 8;
  _DAT_00ec86dc = 8;
  return;
}

