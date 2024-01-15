#include "prototype.h"


void FUN_00426080(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x118);
  if (*(float *)(param_1 + 0x114) <= *(float *)(*(int *)(param_1 + 0x11c) + 4 + iVar2 * 4)) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar2 * 4);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x120) + iVar2 * 4 + 4);
  }
  piVar3 = *(int **)(param_1 + 0x124);
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      FUN_00431860(iVar2,2,uVar4);
      piVar1 = piVar3 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = *piVar1;
    }
  }
  return;
}

