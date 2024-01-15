#include "prototype.h"


void FUN_0045bd90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined *)(param_1 + 0x6c) = 1;
  *(undefined *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined *)(param_1 + 0x6d) = 0;
  *(undefined *)(param_1 + 0x6e) = 0;
  *(undefined *)(param_1 + 0x6f) = 0;
  *(undefined *)(param_1 + 0x72) = 0xc;
  *(undefined *)(param_1 + 0x8f) = 3;
  *(undefined *)(param_1 + 0x90) = 2;
  *(undefined *)(param_1 + 0x91) = 2;
  do {
    *(char *)(iVar1 + 0x73 + param_1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  return;
}

