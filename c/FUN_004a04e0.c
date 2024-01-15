#include "prototype.h"


int FUN_004a04e0(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 < DAT_00ecd600) &&
     ((*(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004a4a30(param_1);
    iVar1 = FUN_004a4070(param_1,0,1);
    if (iVar1 == -1) {
      FUN_004a4aa0(param_1);
      return -1;
    }
    iVar2 = FUN_004a4070(param_1,0,2);
    if (iVar1 != iVar2) {
      FUN_004a4070(param_1,iVar1,0);
    }
    FUN_004a4aa0(param_1);
    return iVar2;
  }
  puVar3 = (undefined4 *)FUN_004a3dc0();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_004a3dd0();
  *puVar3 = 0;
  return -1;
}

