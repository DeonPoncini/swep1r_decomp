#include "prototype.h"


int FUN_004137d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (((byte)*(undefined4 *)(iVar1 + 0x18) & 0xc) == 0xc) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

