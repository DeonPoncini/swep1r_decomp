#include "prototype.h"


void FUN_00445b90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined local_40 [64];
  
  iVar2 = 1;
  if (DAT_00e98204 != 0) {
    puVar3 = &DAT_00e98204;
    do {
      if (DAT_0050c608 != 0) {
        FUN_0049eb80(local_40,s__DP___d_004c17ec,iVar2);
      }
      piVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != 0);
  }
  if (DAT_00e981e4 <= *(uint *)(&DAT_00e981fc + iVar2 * 4)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

