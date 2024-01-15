#include "prototype.h"


void FUN_00445aa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_0050c614 = param_1;
  uVar1 = *(undefined4 *)(&DAT_00e981fc + param_1 * 4);
  (&DAT_00e98200)[param_1] = uVar1;
  FUN_004475d0(uVar1);
  FUN_00426910(1);
  iVar2 = DAT_0050c614;
  if (DAT_0050c614 < 9) {
    puVar3 = &DAT_00e98224;
    iVar4 = 9 - DAT_0050c614;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 9;
  DAT_0050c610 = 0;
  if (iVar2 < 10) {
    do {
      FUN_00408eb0(iVar4);
      iVar4 = iVar4 + -1;
    } while (DAT_0050c614 <= iVar4);
  }
  return;
}

