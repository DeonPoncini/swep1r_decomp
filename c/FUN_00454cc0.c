#include "prototype.h"


void FUN_00454cc0(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  ppiVar3 = (int **)&DAT_00e29914;
  do {
    piVar1 = *ppiVar3;
    if (piVar1 != (int *)0x0) {
      piVar2 = &DAT_00e29160;
      do {
        if (*piVar2 == *piVar1) {
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
      } while ((int)piVar2 < 0xe293bc);
      *ppiVar3 = (int *)0x0;
    }
    ppiVar3 = ppiVar3 + 1;
  } while ((int)ppiVar3 < 0xe29b5c);
  FUN_004258e0();
  return;
}

