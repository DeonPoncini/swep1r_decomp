#include "prototype.h"


void FUN_0041b420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00411810();
  if (((*(int *)(DAT_0050c454 + 8) == 1) &&
      (((param_1 == 9 || ((0x24 < param_1 && (param_1 < 0x29)))) && (DAT_004d87c8 == 0)))) &&
     ((iVar1 != 0 && (*(int *)(iVar1 + 0xc) != 0)))) {
    uVar2 = FUN_0041b3c0(*(int *)(iVar1 + 0xc),1);
    FUN_00414f10(uVar2);
  }
  return;
}

