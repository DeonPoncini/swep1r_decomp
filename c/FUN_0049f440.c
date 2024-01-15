#include "prototype.h"


uint FUN_0049f440(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_4;
  
  iVar2 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_004d1d90 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_004d1d90[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    uVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._0_3_ = (uint3)(ushort)param_1;
    uVar1 = 2;
  }
  iVar2 = FUN_004a3b00(1,&param_1,uVar1,&local_4,0,0,1);
  if (iVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}

