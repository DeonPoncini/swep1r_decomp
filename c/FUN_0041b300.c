#include "prototype.h"


void FUN_0041b300(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    do {
      bVar1 = (byte)*(undefined4 *)(iVar2 + 0x18);
      if ((bVar1 & 0xc) == 0xc) {
        if ((bVar1 & 3) != 3) {
          FUN_00412fb0(iVar2,0,0,0,0,0);
          FUN_00412fb0(iVar2,1,0,0,0,0);
          FUN_00412fb0(iVar2,2,0,0,0,0);
        }
        *(uint *)(iVar2 + 0x508) = *(uint *)(iVar2 + 0x508) & 0xfff7ffff;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
    FUN_00417ca0(param_1);
  }
  return;
}

