#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fbc0(int param_1,int param_2)

{
  undefined local_18 [8];
  float local_10;
  undefined local_c [12];
  
  if (0x19 < param_2) {
    if (param_2 < 0x1e) {
      FUN_0044afb0(*(undefined4 *)(&DAT_00e29968 + param_2 * 4),local_18);
      if (local_10 == _DAT_004ac890) {
        local_10 = local_10 - _DAT_004ac84c;
      }
      else {
        local_10 = local_10 - _DAT_004ac8ac;
      }
    }
    else {
      if (param_2 != 0x1e) {
        return;
      }
      FUN_0044afb0(DAT_00e29970,local_18);
      local_10 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * (float)_DAT_004ac950
                 - (float)_DAT_004ac958;
    }
    if (DAT_0050c930 == 1) {
      FUN_0045c010(&DAT_00e29b90,local_18,1,0,1);
      return;
    }
    if (DAT_0050c930 == 3) {
      FUN_0045c010(&DAT_00e298f0,local_18,3,1,1);
      return;
    }
    FUN_0042f860(local_c,&DAT_00e298f0,&DAT_00e2af90);
    FUN_0042f7d0(&DAT_00e2af90,local_18);
    FUN_0042f830(&DAT_00e298f0,&DAT_00e2af90,local_c);
  }
  return;
}

