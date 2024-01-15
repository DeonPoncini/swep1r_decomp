#include "prototype.h"


undefined4 FUN_004a49e0(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00ecd500)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_004a3dc0();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004a3dd0();
  *puVar1 = 0;
  return 0xffffffff;
}

