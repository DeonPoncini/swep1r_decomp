#include "prototype.h"


void FUN_00449da0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((DAT_0050c68c != 0) && (DAT_004eb450 != 0)) {
    iVar2 = 0;
    puVar1 = &DAT_00e68078;
    while ((puVar1[-5] != param_1 || (*puVar1 = 0, (int)puVar1[-6] < 0))) {
      puVar1 = puVar1 + 0x11;
      iVar2 = iVar2 + 1;
      if (0xe68297 < (int)puVar1) {
        return;
      }
    }
    FUN_00485070((&DAT_00e68080)[iVar2 * 0x11]);
  }
  return;
}

