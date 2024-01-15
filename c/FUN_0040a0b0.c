#include "prototype.h"


undefined4 FUN_0040a0b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040a160(param_1);
  if ((&DAT_004d6ce8)[param_1] != 0) {
    (&DAT_004d6ce8)[param_1] = 0;
  }
  if ((&DAT_004d6da0 + iVar1 * 0x174 != (undefined *)0x0) &&
     (*(int *)(&DAT_004d6da4 + iVar1 * 0x174) != 0)) {
    iVar2 = FUN_0040a190(iVar1,param_1);
    if (iVar2 == 0) {
      FUN_00404230(&DAT_004d6da0 + iVar1 * 0x174);
      return 1;
    }
  }
  return 0;
}

