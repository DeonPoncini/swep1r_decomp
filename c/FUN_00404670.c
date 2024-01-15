#include "prototype.h"


undefined4 FUN_00404670(undefined4 param_1)

{
  int iVar1;
  undefined local_134 [16];
  undefined4 local_124 [2];
  undefined uStack_11c;
  undefined *puStack_4;
  
  iVar1 = FUN_00404640(param_1,local_134);
  if (iVar1 == 0) {
    return 0;
  }
  local_124[0] = 0x124;
  iVar1 = (**(code **)(*DAT_004d55d0 + 0x50))(DAT_004d55d0,local_124,local_134);
  if (iVar1 < 0) {
    return 0;
  }
  *puStack_4 = uStack_11c;
  return 1;
}

