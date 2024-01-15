#include "prototype.h"


undefined4 FUN_00440a20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar2 = param_2;
  uVar1 = param_1;
  cVar5 = (char)param_1;
  cVar3 = (char)param_2;
  param_2._0_1_ = cVar3 * '\x02';
  param_1._0_2_ = (short)(&DAT_00e35a8a)[cVar5] >> ((byte)param_2 & 0x1f) & 3;
  cVar4 = FUN_00440a00(uVar1,uVar2);
  if (((cVar4 != '\x03') || ((ushort)param_1 != 0)) &&
     (('\x02' < cVar5 || (((&DAT_00e35a85)[cVar5] & (byte)(1 << (cVar3 + 1U & 0x1f))) != 0)))) {
    return 0;
  }
  return 1;
}

