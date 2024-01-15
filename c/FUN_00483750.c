#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483750(int param_1)

{
  undefined2 uVar1;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined local_c0 [48];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined local_80 [64];
  undefined local_40 [64];
  
  param_1 = param_1 * 0x16c;
  FUN_004830e0(&DAT_00dfb040 + param_1);
  FUN_00482f10(&DAT_00dfb040 + param_1);
  FUN_0044bb10(local_c0,&DAT_00dfb0b0 + param_1);
  local_cc = local_90;
  local_c8 = local_8c;
  local_c4 = local_88;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  FUN_00483690(local_80,local_c0);
  FUN_0042fb70(local_40,local_80,&DAT_00dfb130 + param_1);
  FUN_0044b690(local_40,&local_cc);
  if ((float)_DAT_004ae0c0 < *(float *)(&DAT_00dfb17c + param_1)) {
    uVar1 = __ftol();
    *(undefined2 *)(&DAT_00dfb170 + param_1) = uVar1;
  }
  return;
}

