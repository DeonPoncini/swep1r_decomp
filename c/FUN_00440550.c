#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440550(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  float local_4;
  
  uVar1 = 0;
  local_8 = 0x3e000000;
  local_4 = (float)(uint)DAT_00e364a5 * _DAT_004aca1c;
  switch(param_1) {
  case 0x4b:
    uVar1 = 1;
    local_8 = 0x3f000000;
    break;
  default:
    local_8 = 0x3e800000;
    uVar1 = 0;
    break;
  case 0x4d:
    local_8 = 0x3e800000;
    break;
  case 0x4f:
    uVar1 = 1;
    break;
  case 0x54:
    break;
  case 0x58:
    local_4 = local_4 * (float)_DAT_004aca20;
    local_8 = 0x3e800000;
  }
  FUN_00426c80(param_1,6,local_8,local_4,uVar1);
  return;
}

