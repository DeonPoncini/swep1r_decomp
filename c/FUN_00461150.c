#include "prototype.h"


void FUN_00461150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d350();
  if (iVar1 == 2) {
    if (param_1 != DAT_00e27820) {
      iVar1 = 0;
      do {
        FUN_004285d0(iVar1 + 0x23,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 6);
      FUN_004285d0(0x29,0);
      FUN_004285d0(0x2a,0);
      return;
    }
    iVar1 = 0;
    do {
      FUN_004285d0(iVar1 + 0x1b,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  else {
    iVar1 = 0;
    do {
      FUN_004285d0(iVar1 + 0x1b,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  FUN_004285d0(0x21,0);
  FUN_004285d0(0x22,0);
  return;
}

