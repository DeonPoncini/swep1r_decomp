#include "prototype.h"


void FUN_00449e50(void)

{
  int *piVar1;
  
  if ((DAT_0050c68c != 0) && (DAT_004eb450 != 0)) {
    piVar1 = &DAT_00e68068;
    do {
      piVar1[4] = 0;
      if ((*piVar1 == 0) && (-1 < piVar1[-2])) {
        FUN_00485070(piVar1[6]);
      }
      piVar1 = piVar1 + 0x11;
    } while ((int)piVar1 < 0xe68288);
  }
  return;
}

