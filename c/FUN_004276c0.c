#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004276c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  fVar6 = (float10)FUN_004456a0();
  if ((float10)_DAT_004ac47c < fVar6) {
    DAT_004b85d4 = -1;
  }
  pfVar5 = (float *)&DAT_0050b600;
  iVar4 = DAT_004b85d4;
  do {
    fVar3 = _DAT_004ac47c;
    if (((_DAT_004ac47c <= *pfVar5) &&
        (fVar1 = *pfVar5, fVar2 = (float)_DAT_00e22a40, *pfVar5 = fVar1 - fVar2,
        fVar1 - fVar2 <= fVar3)) && (iVar4 != -1)) {
      FUN_00427410(DAT_004b85d8,DAT_004b85dc,iVar4,0);
      iVar4 = -1;
      DAT_004b85d4 = -1;
    }
    pfVar5 = pfVar5 + 1;
  } while ((int)pfVar5 < 0x50b620);
  pfVar5 = (float *)&DAT_0050b620;
  do {
    fVar3 = _DAT_004ac47c;
    if (((_DAT_004ac47c <= *pfVar5) &&
        (fVar1 = *pfVar5, fVar2 = (float)_DAT_00e22a40, *pfVar5 = fVar1 - fVar2,
        fVar1 - fVar2 <= fVar3)) && (iVar4 != -1)) {
      FUN_00427410(DAT_004b85d8,DAT_004b85dc,iVar4,0);
      iVar4 = -1;
      DAT_004b85d4 = -1;
    }
    pfVar5 = pfVar5 + 1;
  } while ((int)pfVar5 < 0x50b67c);
  return;
}

