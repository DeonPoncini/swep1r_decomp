#include "prototype.h"


undefined * FUN_0048dc40(void)

{
  int iVar1;
  int iVar2;
  
  if (0x3ff < DAT_00af30d8) {
    FUN_0048dce0();
    FUN_0048dd80();
  }
  if (0x14000U - DAT_00deb0fc < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb100 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb104 < 0x50) {
    return (undefined *)0x0;
  }
  iVar1 = DAT_00af30d8 * 0x40;
  *(undefined **)(&DAT_006830d8 + iVar1) = &DAT_008730d0 + DAT_00deb0fc * 0xc;
  *(undefined **)(&DAT_006830dc + iVar1) = &DAT_007d30d0 + DAT_00deb100 * 8;
  iVar2 = DAT_00deb104 * 0x10;
  *(undefined4 *)(&DAT_006830d4 + iVar1) = 0;
  *(undefined **)(&DAT_006830e0 + iVar1) = &DAT_006930d0 + iVar2;
  return &DAT_006830c8 + iVar1;
}

