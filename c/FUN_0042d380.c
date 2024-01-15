#include "prototype.h"


void FUN_0042d380(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)&DAT_00e9a280;
  do {
    if (*piVar1 != -1) {
      FUN_004285d0(*(undefined2 *)piVar1,0);
    }
    (&DAT_00e9a960)[iVar2] = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0xe9a3c0);
  return;
}

