#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483be0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined local_40 [64];
  
  if (1 < param_1) {
    __ftol();
    uVar1 = __ftol();
    uVar1 = __ftol(uVar1);
    uVar1 = FUN_00421360(s__r_spos___d__d__d_004c7d40,uVar1);
    FUN_0049eb80(local_40,uVar1);
    FUN_00450590(4,0x11d,0xd6,local_40);
    fVar2 = (float10)FUN_0045d390();
    if ((float10)_DAT_004ae080 < fVar2) {
      uVar1 = FUN_00421360(s__r_scomp____5f_004c7d30,(double)fVar2);
      FUN_0049eb80(local_40,uVar1);
      FUN_00450590(4,300,0xc2,local_40);
      return;
    }
  }
  return;
}

