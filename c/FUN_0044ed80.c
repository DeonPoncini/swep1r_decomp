#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ed80(undefined4 *param_1,int param_2)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined local_54 [12];
  undefined local_48 [12];
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [24];
  undefined local_c [12];
  
  FUN_0044ec40(param_1,local_30);
  fVar1 = (float10)FUN_0042f8c0(local_24);
  if (fVar1 < (float10)_DAT_004accb8) {
    if (_DAT_004accc0 <= (float)param_1[2]) {
      uVar2 = 0x3f7fbe77;
    }
    else {
      uVar2 = 0x3a83126f;
    }
    FUN_0044e660(*param_1,2,uVar2,param_1 + 4,local_30);
  }
  FUN_0042f9f0(local_54,local_24,local_c);
  FUN_0042f9f0(local_48,local_54,local_24);
  FUN_0042f9b0(local_54);
  FUN_0042f9b0(local_48);
  FUN_0042f9b0(local_24);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  FUN_0042fb10(param_2,0,local_54);
  FUN_0042fb10(param_2,1,local_24);
  FUN_0042fb10(param_2,2,local_48);
  FUN_0042fb40(param_2,3,local_3c);
  FUN_0042fb10(param_2,3,local_30);
  return;
}

