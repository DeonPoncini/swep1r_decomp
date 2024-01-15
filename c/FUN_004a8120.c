#include "prototype.h"


void FUN_004a8120(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_00dfb010)) {
    FUN_0049f200(*(undefined **)(param_1 + 0xc));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x10));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x14));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x18));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x1c));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x20));
    FUN_0049f200(*(undefined4 *)(param_1 + 0x24));
  }
  return;
}

