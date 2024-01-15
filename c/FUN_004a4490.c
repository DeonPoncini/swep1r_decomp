#include "prototype.h"


undefined4 FUN_004a4490(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    uVar1 = FUN_004a4510(param_1,param_2,param_3);
    FUN_004a4aa0(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a3dd0();
  *puVar2 = 0;
  return 0xffffffff;
}

