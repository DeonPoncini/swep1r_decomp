#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a970(int param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    if (DAT_0050c69c == 0) {
      return;
    }
    if (DAT_0050c6a0 != 0) {
      FUN_00485070(DAT_0050c6a0);
      FUN_004850a0(DAT_0050c6a0);
      DAT_0050c6a0 = 0;
    }
    if (DAT_0050c6a4 == 0) {
      DAT_0050c69c = 0;
      return;
    }
    FUN_00485070(DAT_0050c6a4);
    goto LAB_0044ab93;
  }
  if (DAT_0050c69c != 0) goto LAB_0044aa83;
  DAT_0050c69c = 1;
  if (DAT_0050c6a0 == 0) {
    DAT_0050c6a0 = FUN_00423050(param_3);
    if (DAT_0050c6a0 != 0) {
      FUN_00485020(DAT_0050c6a0,0x20);
      goto LAB_0044a9ca;
    }
LAB_0044aa0a:
    if (DAT_0050c6a0 != 0) {
      FUN_00485070(DAT_0050c6a0);
      FUN_004850a0(DAT_0050c6a0);
      DAT_0050c6a0 = 0;
    }
    if (DAT_0050c6a4 == 0) {
      DAT_0050c69c = 0;
      return;
    }
    FUN_00485070(DAT_0050c6a4);
LAB_0044ab93:
    FUN_004850a0(DAT_0050c6a4);
    DAT_0050c6a4 = 0;
    DAT_0050c69c = 0;
    return;
  }
LAB_0044a9ca:
  if (DAT_0050c6a4 == 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0x3f800000;
    DAT_0050c6a4 = FUN_00423050(param_4);
    if (DAT_0050c6a4 == 0) {
      DAT_0050c6a4 = 0;
      goto LAB_0044aa0a;
    }
    FUN_00484e10(DAT_0050c6a4,&local_c);
    FUN_00484fb0(DAT_0050c6a4,0);
    FUN_00484d90(DAT_0050c6a4,0x3f800000);
  }
  FUN_00484fa0();
LAB_0044aa83:
  if (param_2 < _DAT_004acbf8) {
    param_2 = 0.0;
  }
  else if (_DAT_004acbfc < param_2) {
    param_2 = 1.0;
  }
  FUN_00484d40(param_2);
  FUN_00484d90(DAT_0050c6a0,0x3f800000);
  iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  if (iVar1 == 0) {
    FUN_00484be0(DAT_0050c6a0,0);
  }
  FUN_00484fa0();
  iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  while (iVar1 != 0) {
    iVar1 = FUN_004850c0(DAT_0050c6a0,0);
  }
  FUN_00485070(DAT_0050c6a4);
  FUN_00484be0(DAT_0050c6a4,0);
  FUN_00484fa0();
  return;
}

