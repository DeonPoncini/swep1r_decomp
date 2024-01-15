#include "prototype.h"


void FUN_0048ba90(int param_1)

{
  int iVar1;
  
  if (param_1 == DAT_0052e630) {
    DAT_0052e630 = *(int *)(param_1 + 0x90);
    if (DAT_0052e630 == 0) {
      DAT_0052e634 = 0;
    }
    else {
      *(undefined4 *)(DAT_0052e630 + 0x8c) = 0;
      if (*(int *)(DAT_0052e630 + 0x90) == 0) {
        DAT_0052e634 = DAT_0052e630;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (param_1 == DAT_0052e634) {
      DAT_0052e634 = iVar1;
      *(undefined4 *)(iVar1 + 0x90) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    }
  }
  DAT_0052e62c = DAT_0052e62c + -1;
  *(int *)(DAT_0052e618 + 0x138) = *(int *)(DAT_0052e618 + 0x138) + *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

