#include "prototype.h"


void FUN_00431620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 3;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}

