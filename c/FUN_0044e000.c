#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar2;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_004c3bd0;
  puVar4 = &DAT_00e37540;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_00e67c00 = 0xffffffff;
  _DAT_00e67c08 = 0xffffffff;
  _DAT_00e37528 = 0xffffffff;
  _DAT_00e37524 = 0;
  _DAT_00e374c4 = 0;
  uVar1 = *param_1;
  if (((byte)DAT_00e996dc & 0x40) == 0) {
    FUN_004094e0(1);
    FUN_00409380(CONCAT22(extraout_var_01,DAT_004c3b90),CONCAT22(extraout_var,DAT_004c3b94));
    FUN_00409450(CONCAT22(extraout_var_03,DAT_004c3b88),CONCAT22(extraout_var_02,DAT_004c3b8a),
                 CONCAT22(extraout_var_00,DAT_004c3b8c),CONCAT22(extraout_var_03,DAT_004c3b8e));
    FUN_00409510(0,1);
    *param_1 = uVar1;
    return;
  }
  FUN_004094e0(0);
  FUN_00409510(0,1);
  *param_1 = uVar1;
  return;
}

