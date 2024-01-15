#include "prototype.h"


void FUN_00419070(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if ((param_1 & 0x200000) != 0) {
      FUN_00417120(0x3f8,param_2,param_3);
      return;
    }
    if ((param_1 & 0x400000) != 0) {
      FUN_00417120(0xbc1,param_2,param_3);
      return;
    }
    if ((param_1 & 0x800000) != 0) {
      FUN_00417120(0xbc3,param_2,param_3);
      return;
    }
    if ((param_1 & 0x10000) != 0) {
      FUN_00417120(0x7d9,param_2,param_3);
      return;
    }
    if ((param_1 & 0x80000) != 0) {
      FUN_00417120(0x7d5,param_2,param_3);
      return;
    }
    uVar1 = 0x7d1;
    if ((param_1 & 0x100000) == 0) {
      uVar1 = param_1;
    }
    FUN_00417120(uVar1,param_2,param_3);
  }
  return;
}

