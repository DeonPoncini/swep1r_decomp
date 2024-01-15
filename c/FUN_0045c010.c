#include "prototype.h"


void FUN_0045c010(undefined4 param_1,undefined4 param_2,short param_3,int param_4,int param_5)

{
  undefined local_c [12];
  
  if (param_5 == 0) {
    FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
    FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
  }
  FUN_0042f7d0(&DAT_00e29b90,param_1);
  FUN_0042f7d0(&DAT_00e2b470,param_2);
  DAT_0050c930 = param_3;
  if ((param_3 == 3) && (param_4 != 0)) {
    FUN_0042f860(local_c,&DAT_00e298f0,&DAT_00e2af90);
    FUN_0042f830(&DAT_00e29b90,&DAT_00e2b470,local_c);
  }
  return;
}

