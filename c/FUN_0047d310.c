#include "prototype.h"


int FUN_0047d310(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0047c130(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined **)(iVar1 + 0x18) = &DAT_00e26fc0 + param_3 * 4;
    *(int *)(&DAT_00e259c0 + DAT_00e25df4 * 4) = iVar1;
    DAT_00e25df4 = DAT_00e25df4 + 1;
    FUN_00431a50(iVar1,2,0xf,0x10,3);
    FUN_00431a50(iVar1,2,param_2 & 0xfffffff0,0x10,2);
  }
  return iVar1;
}

