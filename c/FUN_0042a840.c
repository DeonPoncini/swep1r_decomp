#include "prototype.h"


undefined4
FUN_0042a840(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  *param_4 = 0xffffd8f0;
  *param_5 = 0xc61c4000;
  switch(param_1) {
  case 0:
    uVar1 = FUN_00421360(s__SCREENTEXT_535__cContinue_004b9468);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_366___Are_you_sure__004b9448);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 1:
    uVar1 = FUN_00421360(s__SCREENTEXT_536__cRestart_Race_004b93ec);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_367___Yes_004b93d4);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 2:
    uVar1 = FUN_00421360(s__SCREENTEXT_657__cQuit_Race_004b9424);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_368___No_004b940c);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 3:
    uVar1 = FUN_00421360(s__SCREENTEXT_658__cQuit_Game_004b93a8);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      FUN_0049eb80(param_2,&DAT_004d55cc);
    }
    break;
  case 4:
    if (DAT_0050c044 < 1) {
      FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
      return 0;
    }
    FUN_0049eb80(param_2,s__cGame_Cheats_004b93c4);
    return 1;
  default:
    FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
    return 0;
  }
  return 1;
}

