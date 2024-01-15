#include "prototype.h"


void FUN_00466e40(undefined4 param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_2 & 4) == 0) {
    DAT_00e996e0 = DAT_00e996e0 & 0xfd;
    if (DAT_00e287e0 == 0) goto LAB_00466e80;
    uVar2 = 2;
    uVar1 = 3;
  }
  else {
    DAT_00e996e0 = DAT_00e996e0 | 2;
    if (DAT_00e287e0 == 0) goto LAB_00466e80;
    uVar2 = 3;
    uVar1 = 0xfffffffc;
  }
  FUN_00431a50(DAT_00e287e0,2,uVar1,0x10,uVar2);
LAB_00466e80:
  if ((((DAT_0050c048 & 0x200) != 0) && (0 < DAT_0050c040)) && ((DAT_00e98e90 & 0x1100) == 0x1100))
  {
    DAT_00e996e0 = DAT_00e996e0 | 2;
    FUN_00483a60(0,0,0);
  }
  return;
}

