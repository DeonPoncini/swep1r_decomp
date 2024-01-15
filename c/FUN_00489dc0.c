#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00489dc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0052d570;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0052d870;
  for (iVar1 = 0x368; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0052e638 = (undefined4 *)FUN_00489260();
  if (DAT_0052e638 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)*DAT_0052e638)(DAT_0052e638,&DAT_004af278,&DAT_0052e640);
  if (iVar1 != 0) {
    return 0;
  }
  DAT_0052d56c = 0;
  iVar1 = (**(code **)(*DAT_0052e640 + 0xc))(DAT_0052e640,&LAB_0048b540,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (DAT_0052d56c == 0) {
    return 0;
  }
  _DAT_0052e64c = 1;
  return 1;
}

