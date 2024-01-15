#include "prototype.h"


int FUN_00403fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (DAT_004b2910 == 0) {
    return 0;
  }
  if ((DAT_004d55d0 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar3 = param_1 + 0x48;
    iVar4 = 6;
    do {
      iVar1 = FUN_004040a0(iVar3,iVar3 + 0x158,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x174;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return -1;
}

