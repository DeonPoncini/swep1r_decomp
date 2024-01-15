#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469010(void)

{
  float10 fVar1;
  
  DAT_0050cad8 = DAT_0050cad8 + _DAT_00e22a50;
  if (_DAT_004ad678 < DAT_0050cad8) {
    DAT_0050cad8 = DAT_0050cad8 - _DAT_004ad678;
  }
  fVar1 = (float10)FUN_0045a420(DAT_0050cad8,0x4048887b);
  DAT_004c7074 = (float)(fVar1 * (float10)_DAT_004ad67c - (float10)_DAT_004ad680);
  return;
}

