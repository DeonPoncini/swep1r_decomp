#include "prototype.h"


void FUN_00428a60(short param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x7c;
  *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 6) = param_4;
  *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 4) = param_2;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 8) = param_3;
  return;
}

