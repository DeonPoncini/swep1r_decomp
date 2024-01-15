#include "prototype.h"


void FUN_0047e7e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0047e7c0(param_1);
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (&DAT_00e29c44)[param_2 * 0x22];
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar1 = FUN_0047c7d0(iVar1);
    if (iVar1 != 0) {
      FUN_0047ce60(iVar1,iVar2,1);
    }
  }
  return;
}

