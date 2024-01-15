#include "prototype.h"


undefined * FUN_0048dba0(void)

{
  int iVar1;
  
  if (0x3ff < DAT_006930c8) {
    FUN_0048dce0();
  }
  if (0x14000U - DAT_00deb0f0 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb0f4 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb0f8 < 0x50) {
    return (undefined *)0x0;
  }
  iVar1 = DAT_006930c8 * 0x40;
  *(undefined **)(&DAT_005330d0 + iVar1) = &DAT_009630d0 + DAT_00deb0f0 * 0xc;
  *(undefined **)(&DAT_005330d4 + iVar1) = &DAT_00a530d8 + DAT_00deb0f4 * 8;
  *(undefined **)(&DAT_005330d8 + iVar1) = &DAT_005430c8 + DAT_00deb0f8 * 0x10;
  return &DAT_005330c0 + iVar1;
}

