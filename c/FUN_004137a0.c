#include "prototype.h"


int FUN_004137a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x508) & 0x80000) != 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}

