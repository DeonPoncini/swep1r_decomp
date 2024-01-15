#include "prototype.h"


void FUN_00411820(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_00414d90(0,param_1);
  }
  if (DAT_004d8bd4 != iVar2) {
    if ((&DAT_004d8110)[DAT_004d87a4] != 0) {
      FUN_00414e60((&DAT_004d8110)[DAT_004d87a4],0);
    }
    DAT_004d8bd4 = (&DAT_004d8110)[DAT_004d87a4];
    if (DAT_004d87a4 < 0x14) {
      DAT_004d87a4 = DAT_004d87a4 + 1;
    }
    uVar1 = DAT_004d87a4;
    if ((param_1 != 0) && ((&DAT_004d8110)[DAT_004d87a4] = iVar2, iVar2 != 0)) {
      FUN_004151a0(iVar2,0x46,uVar1,0);
      DAT_004d8be4 = 0;
      return;
    }
    FUN_004118b0(0);
  }
  return;
}

