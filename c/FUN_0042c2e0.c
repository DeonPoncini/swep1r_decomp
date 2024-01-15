#include "prototype.h"


void FUN_0042c2e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 2)) {
    (&DAT_004b94c8)[param_1] = param_2;
    iVar1 = param_1 * 0xc;
    *(undefined4 *)(&DAT_00e9a3e0 + iVar1) = *param_3;
    *(undefined4 *)(&DAT_00e9a3e4 + iVar1) = param_3[1];
    *(undefined4 *)(&DAT_00e9a3e8 + iVar1) = param_3[2];
    *(undefined4 *)(&DAT_004b94d0 + param_1 * 4) = param_4;
    (&DAT_00e9a598)[param_1] = 0xfffffc18;
    (&DAT_00e9a480)[param_1] = 0xfffffc18;
    (&DAT_00e99c20)[param_1] = 0xfffffc18;
    (&DAT_004b94d8)[param_1 * 4] = param_5;
    (&DAT_004b94d9)[param_1 * 4] = param_6;
    (&DAT_004b94da)[param_1 * 4] = param_7;
    (&DAT_004b94db)[param_1 * 4] = param_8;
  }
  return;
}

