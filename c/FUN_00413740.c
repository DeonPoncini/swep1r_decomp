#include "prototype.h"


int FUN_00413740(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return -1;
    }
    if ((*(uint *)(iVar1 + 0x508) & 0x80000) != 0) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

