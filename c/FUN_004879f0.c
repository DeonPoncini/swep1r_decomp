#include "prototype.h"


bool FUN_004879f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_00529508 != 0) && (param_1 != 0)) {
    iVar1 = FUN_004a10e0(&DAT_00528500,0x1000,param_1,&stack0x00000008);
    iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(DAT_00529508,&DAT_00528500,iVar1);
    return iVar2 != iVar1;
  }
  return true;
}

