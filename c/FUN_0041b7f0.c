#include "prototype.h"


int FUN_0041b7f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0041d6b0();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_004e9eb0 == 0) {
    return 0;
  }
  DAT_004e9ea8 = 0;
  do {
    iVar1 = FUN_00404880(&DAT_00ec7ba0);
    if (iVar1 != 1) break;
    iVar2 = iVar2 + 1;
    if (DAT_00ec7bbc == 0) {
      FUN_0041b940(&DAT_00ec7ba0);
    }
    else {
      iVar1 = FUN_0041d350(DAT_00ec7bbc);
      if ((((iVar1 < 0) && (DAT_00ec7bc4 != 0x21)) && (DAT_00ec7bc4 != 0x22)) &&
         ((DAT_00ec7bc4 != 0x28 && (DAT_00ec7bc4 != 0x20)))) {
        if (DAT_004eb1c8 != 0) {
          FUN_0041d2a0(DAT_00ec7bbc);
        }
      }
      else {
        if (DAT_00ec7bc6 != 0) {
          FUN_0041b960(DAT_00ec7bbc,DAT_00ec7bc6);
          iVar1 = FUN_0041b9a0(DAT_00ec7bbc,DAT_00ec7bc6);
          if (iVar1 != 0) goto LAB_0041b8cf;
        }
        FUN_0041b8f0(&DAT_00ec7ba0);
      }
    }
LAB_0041b8cf:
  } while (DAT_004e9ea8 == 0);
  FUN_00426910();
  return iVar2;
}

