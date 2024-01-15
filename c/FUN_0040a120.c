#include "prototype.h"


void FUN_0040a120(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_004d6ef4;
  do {
    FUN_0040a0b0(*puVar1);
    puVar1 = puVar1 + 0x5d;
  } while ((int)puVar1 < 0x4d77ac);
  if (param_1 != 0) {
    FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
  }
  return;
}

