#include "prototype.h"


uint FUN_004177b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_4;
  
  uVar2 = 0;
  local_4 = 0;
  uVar3 = 0x96;
  if (param_2 != 0) {
    iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_5]);
    if (0x95 < (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_2,(&DAT_00e99720)[param_5]);
    if (-1 < iVar1) {
      local_4 = FUN_0042df70(param_2,(&DAT_00e99720)[param_5]);
    }
    uVar2 = 1;
  }
  if (param_3 != 0) {
    iVar1 = FUN_0042de30(param_3,(&DAT_00e99720)[param_5]);
    if (uVar3 <= (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_3,(&DAT_00e99720)[param_5]);
    if (local_4 <= iVar1) {
      local_4 = FUN_0042df70(param_3,(&DAT_00e99720)[param_5]);
    }
    uVar2 = uVar2 + 1;
  }
  if (param_4 != 0) {
    iVar1 = FUN_0042de30(param_4,(&DAT_00e99720)[param_5]);
    if (uVar3 <= (uint)(iVar1 * 3)) {
      uVar3 = iVar1 * 3;
    }
    iVar1 = FUN_0042df70(param_4,(&DAT_00e99720)[param_5]);
    if (local_4 <= iVar1) {
      local_4 = FUN_0042df70(param_4,(&DAT_00e99720)[param_5]);
    }
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 3) {
    iVar1 = uVar3 * uVar2;
  }
  else {
    iVar1 = uVar3 << 1;
  }
  local_4 = local_4 + 0x14;
  if (2 < uVar2) {
    local_4 = local_4 * 2;
  }
  param_1[2] = iVar1 + uVar2 * 0x14 + -1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = local_4 + -1;
  return uVar3;
}

