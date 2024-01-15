#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484020(short param_1,short param_2,short param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_0050cd10 < 0x1f) {
    param_1 = param_1 + -1;
    param_2 = param_2 + -1;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (DAT_00ec86c4 + -1 < (int)param_3) {
      param_3 = (short)DAT_00ec86c4 + -1;
    }
    if (DAT_00ec85e8 + -1 < (int)param_4) {
      param_4 = (short)DAT_00ec85e8 + -1;
    }
    if ((param_1 < param_3) && (param_2 < param_4)) {
      iVar2 = DAT_0050cd10 * 8;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22720 + iVar2) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22722 + iVar2) = uVar1;
      uVar1 = __ftol();
      *(undefined2 *)(&DAT_00e22724 + iVar2) = uVar1;
      uVar1 = __ftol();
      DAT_0050cd10 = DAT_0050cd10 + 1;
      *(undefined2 *)(&DAT_00e22726 + iVar2) = uVar1;
    }
  }
  return;
}

