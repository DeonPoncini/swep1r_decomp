#include "prototype.h"


void FUN_00409d00(void)

{
  int iVar1;
  
  iVar1 = 9;
  do {
    FUN_00408eb0(iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if (DAT_0050c6b0 != 0) {
    *(undefined4 *)(DAT_0050c6b0 + 0x44) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x6c) = 0;
    *(undefined4 *)(DAT_0050c6b0 + 0x68) = 0;
    FUN_0048ee40(DAT_0050c6b0);
  }
  FUN_00490bf0(DAT_0050c6b4);
  FUN_00490a00();
  FUN_0048a1c0();
  FUN_00488030();
  FUN_00487e80();
  FUN_00489e40();
  FUN_00487da0();
  return;
}

