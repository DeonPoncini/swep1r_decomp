#include "prototype.h"


void FUN_00428aa0(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = param_1 * 0x7c;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x54) = param_2;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x58) = param_3;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x5c) = param_4;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x60) = param_5;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 100) = param_6;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x68) = param_7;
  return;
}

