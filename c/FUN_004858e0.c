#include "prototype.h"


void FUN_004858e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_18 = 0x18;
  local_14 = 0x10;
  if (param_3 == 0) {
    local_10 = param_3;
  }
  else if (param_3 == 1) {
    local_10 = 4;
  }
  else if (param_3 == 2) {
    local_10 = 8;
  }
  else if (param_3 == 3) {
    local_10 = 0xc;
  }
  else if (param_3 == 4) {
    local_10 = 0x10;
  }
  else if (param_3 == 5) {
    local_10 = 0x14;
  }
  local_c = 1;
  iVar1 = (**(code **)(*(int *)(&DAT_00eca0e4)[param_2 * 0x9d] + 0x14))
                    ((int *)(&DAT_00eca0e4)[param_2 * 0x9d],4,&local_18);
  if (-1 < iVar1) {
    FUN_00486970(param_3 + param_2 * 6,local_14,local_10,uStack_8);
  }
  return;
}

