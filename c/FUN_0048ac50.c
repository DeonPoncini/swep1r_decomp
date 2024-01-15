#include "prototype.h"


void FUN_0048ac50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + 0x80);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar3 + 0x80) = 0;
      }
      iVar2 = *(int *)(iVar3 + 0x90);
      *(undefined4 *)(iVar3 + 0x88) = 0;
      *(int *)(iVar3 + 0x90) = 0;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      iVar3 = iVar2;
    } while (iVar2 != 0);
  }
  DAT_0052e630 = 0;
  DAT_0052e634 = 0;
  DAT_0052e62c = 0;
  if (DAT_0052e618 != 0) {
    *(undefined4 *)(DAT_0052e618 + 0x138) = *(undefined4 *)(DAT_0052e618 + 0x134);
  }
  if (DAT_0052e644 != (int *)0x0) {
    (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,1,0);
  }
  DAT_004c98b4 = 1;
  return;
}

