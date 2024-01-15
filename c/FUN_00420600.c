#include "prototype.h"


undefined4 FUN_00420600(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00413130(0,0,0x30d41,&LAB_004206b0);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = 0x32;
  local_c = 0x96;
  local_8 = 0x24e;
  local_4 = 0x17c;
  iVar2 = FUN_00413520(iVar1,0x30d42,&local_10,0xffffffff,0x100000,0);
  *(undefined4 *)(iVar2 + 0x524) = 0;
  uVar3 = FUN_00421360(s__MONDOTEXT_H_0510__sReturn_to_lo_004b6c38,0xdc,0x1a4,200,0x19,0x100000,0);
  FUN_004132a0(iVar1,4,6,uVar3);
  return 1;
}

