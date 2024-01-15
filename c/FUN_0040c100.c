#include "prototype.h"


void FUN_0040c100(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00414d90(param_1,0x59);
  if ((DAT_004b2910 == 0) || (DAT_004b4938 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00414420(uVar1,uVar2);
  uVar1 = FUN_00414d90(param_1,0x5a);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e0);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5b);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e4);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5c);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83e8);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5d);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83ec);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5e);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83f0);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x5f);
  uVar1 = FUN_0041b5e0(uVar1,DAT_00ec83f4);
  FUN_00414420(uVar1,1);
  uVar1 = FUN_00414d90(param_1,0x60);
  FUN_00414420(uVar1,DAT_00ec83f8);
  uVar1 = FUN_00414d90(param_1,0x61);
  FUN_00414420(uVar1,DAT_00ec83fc);
  FUN_0040a680();
  return;
}

