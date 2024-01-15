#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c810(int param_1)

{
  int iVar1;
  float local_20;
  undefined local_1c [4];
  undefined local_18 [12];
  undefined local_c [12];
  
  if (DAT_0050c470 != 0) {
    DAT_0050c930 = 0;
    FUN_0042f7b0(&DAT_0050c9b0,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 8) == 8) {
    DAT_0050c930 = 0;
    return;
  }
  FUN_0042f7d0(local_c,&DAT_00e298f0);
  DAT_0050c9a8 = DAT_0050c9a8 - _DAT_00e22a50 * _DAT_004ad0c4;
  if (_DAT_004ad050 < DAT_0050c9a8) {
    DAT_0050c9a8 = DAT_0050c9a8 - _DAT_004ad050;
  }
  if ((DAT_004c400c == '\0') && (DAT_0050c9cc == '\x05')) {
    iVar1 = FUN_0042f7f0(&DAT_0050c9b0,&DAT_00e29b90);
    if (iVar1 != 0) {
      iVar1 = FUN_0042f7f0(&DAT_0050c9c0,&DAT_00e2b470);
      if (iVar1 != 0) goto LAB_0045c961;
    }
  }
  DAT_004c400c = '\0';
  FUN_0043e210();
  FUN_0044bb10(&DAT_00e29b60,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e2b440,&DAT_00e2af60);
  FUN_0042f7d0(&DAT_0050c9b0,&DAT_00e29b90);
  FUN_0042f7d0(&DAT_0050c9c0,&DAT_00e2b470);
  DAT_0050c9cc = '\x05';
  FUN_004816b0();
  iVar1 = __ftol();
  DAT_0050c9a8 = (float)iVar1 * _DAT_004ad114;
LAB_0045c961:
  FUN_0042f380(DAT_0050c9a8,&local_20,local_1c);
  FUN_0042f7d0(local_18,&DAT_0050c9b0);
  FUN_0042fa80(local_18,local_18,local_20 * _DAT_004ad1f4,&DAT_00e29b60);
  FUN_0042f7d0(&DAT_00e298f0,local_18);
  return;
}

