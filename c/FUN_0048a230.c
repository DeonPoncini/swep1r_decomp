#include "prototype.h"


void FUN_0048a230(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 1) {
    *param_3 = *(undefined4 *)(&DAT_0052d5a8 + DAT_0052d568 * 0x60);
    *param_4 = *(undefined4 *)(&DAT_0052d5ac + DAT_0052d568 * 0x60);
    iVar1 = DAT_0052d568;
  }
  else if (param_1 == 2) {
    *param_3 = *(undefined4 *)(&DAT_0052d5a8 + DAT_0052d560 * 0x60);
    *param_4 = *(undefined4 *)(&DAT_0052d5ac + DAT_0052d560 * 0x60);
    iVar1 = DAT_0052d560;
  }
  else {
    *param_3 = 0;
    iVar1 = DAT_0052d564;
  }
  puVar3 = &DAT_0052d570 + iVar1 * 0x18;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

