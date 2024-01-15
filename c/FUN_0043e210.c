#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e210(void)

{
  float10 fVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined local_c [12];
  
  FUN_0042f7d0(local_c,&DAT_00e298f0);
  FUN_0042f860(&local_18,&DAT_00e2af90,&DAT_00e298f0);
  FUN_0042f9b0(&local_18);
  fVar1 = (float10)FUN_0042f560(-local_18,local_14);
  local_1c = (float)fVar1;
  fVar1 = (float10)FUN_0042f3e0(local_10);
  local_20 = (float)fVar1;
  if (local_1c < _DAT_004ac778) {
    local_1c = local_1c - _DAT_004ac7f8;
  }
  if (_DAT_004ac7b0 < local_1c) {
    local_1c = local_1c - _DAT_004ac7b0;
  }
  if (local_20 < _DAT_004ac7d0) {
    local_20 = local_20 - _DAT_004ac7fc;
  }
  if (_DAT_004ac800 < local_20) {
    local_20 = local_20 - _DAT_004ac7ec;
  }
  FUN_00431020(&DAT_00e298c0,local_1c,local_20,0);
  FUN_0042f7d0(&DAT_00e298f0,local_c);
  return;
}

