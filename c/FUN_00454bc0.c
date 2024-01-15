#include "prototype.h"


void FUN_00454bc0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  (&DAT_00e29900)[param_3] = 0;
  (&DAT_00e29160)[param_3] = 0;
  (&DAT_00e2afa0)[param_3] = 0;
  puVar1 = (undefined4 *)FUN_00448780(param_1);
  if (-1 < param_2) {
    uVar2 = FUN_00448780(param_2);
    FUN_00448c70(puVar1,uVar2);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (0x96 < param_3) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    (&DAT_00e29900)[param_3] = puVar1;
    (&DAT_00e29160)[param_3] = *puVar1;
    if (param_4 != 0) {
      uVar2 = FUN_00448bd0(puVar1);
      (&DAT_00e2afa0)[param_3] = uVar2;
    }
  }
  FUN_00483fc0(&DAT_00e2a660);
  FUN_004337d0();
  return;
}

