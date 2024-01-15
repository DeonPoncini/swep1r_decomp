#include "prototype.h"


void FUN_004575a0(void)

{
  int iVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)&DAT_00e29900;
  do {
    if ((*ppiVar2 != (int *)0x0) && (iVar1 = **ppiVar2, iVar1 != 0)) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
    ppiVar2 = ppiVar2 + 1;
  } while ((int)ppiVar2 < 0xe29b5c);
  return;
}

