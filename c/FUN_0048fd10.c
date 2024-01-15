#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048fd10(int *param_1,float param_2)

{
  param_1[0x10] = (int)param_2;
  if (*param_1 == 0) {
    if (param_2 == _DAT_004af7b4) {
      param_1[0x13] = (int)&LAB_00490160;
      param_1[0x14] = (int)&LAB_004901a0;
      FUN_0048fdc0(param_1);
      return 1;
    }
    param_1[0x13] = (int)&LAB_004900a0;
    param_1[0x14] = (int)&LAB_004900e0;
  }
  else if (*param_1 == 1) {
    if (param_2 == _DAT_004af7b4) {
      param_1[0x13] = (int)&LAB_004902d0;
      param_1[0x14] = (int)&LAB_00490310;
      FUN_0048fdc0(param_1);
      return 1;
    }
    param_1[0x13] = (int)&LAB_00490210;
    param_1[0x14] = (int)&LAB_00490250;
    FUN_0048fdc0(param_1);
    return 1;
  }
  FUN_0048fdc0(param_1);
  return 1;
}

