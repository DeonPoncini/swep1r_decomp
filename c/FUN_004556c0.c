#include "prototype.h"


void FUN_004556c0(void)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  
  iVar2 = 0;
  if (0 < DAT_00e295cc) {
    ppiVar3 = (int **)&DAT_00e29b38;
    do {
      iVar1 = **ppiVar3;
      if (iVar1 != 0) {
        if (iVar2 == DAT_0050c950) {
          *(undefined2 *)(iVar1 + 0xe) = 0;
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
        }
        else {
          *(undefined2 *)(iVar1 + 0xe) = 1;
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
        }
      }
      iVar2 = iVar2 + 1;
      ppiVar3 = ppiVar3 + 1;
    } while (iVar2 < DAT_00e295cc);
  }
  return;
}

