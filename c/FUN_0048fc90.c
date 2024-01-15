#include "prototype.h"


undefined4 FUN_0048fc90(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    if (param_1[0x10] == 0x3f800000) {
      param_1[0x13] = (int)&LAB_00490160;
      param_1[0x14] = (int)&LAB_004901a0;
    }
    else {
      param_1[0x13] = (int)&LAB_004900a0;
      param_1[0x14] = (int)&LAB_004900e0;
    }
  }
  else if (param_2 == 1) {
    if (param_1[0x10] == 0x3f800000) {
      param_1[0x13] = (int)&LAB_004902d0;
      param_1[0x14] = (int)&LAB_00490310;
    }
    else {
      param_1[0x13] = (int)&LAB_00490210;
      param_1[0x14] = (int)&LAB_00490250;
    }
  }
  if (param_1[1] != 0) {
    FUN_0048fdc0(param_1);
  }
  return 1;
}

