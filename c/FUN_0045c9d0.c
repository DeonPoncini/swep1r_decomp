#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c9d0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined local_18 [12];
  undefined local_c [12];
  
  if (param_2 == 0) {
    FUN_0042f7d0(&DAT_00e2b470,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
    FUN_0042f7d0(&DAT_00e29b90,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
  }
  else {
    if (DAT_004bfedc != -1) {
      FUN_0042f860(local_18,&DAT_00e2b470,&DAT_00e29b90);
      FUN_0042fa80(&DAT_00e2b470,&DAT_00e2b470,0x41200000,local_18);
    }
    FUN_0042fac0(&DAT_00e29b90,0x3eaaa64c,&DAT_00e29b90,0x3f2aacda,&DAT_00e2b470);
    if (*(int *)(param_1 + 0x34) == 1) {
      FUN_0042f7d0(&DAT_00e29b90,&DAT_004c4558);
      fVar2 = (float10)FUN_0045cf00();
      iVar1 = FUN_004816b0();
      _DAT_00e29b90 =
           ((float)iVar1 * _DAT_004acfa8 * _DAT_004ad0b4 - _DAT_004ad100) * (float)fVar2 +
           _DAT_00e29b90;
      iVar1 = FUN_004816b0();
      _DAT_00e29b94 = ((float)iVar1 * _DAT_004acfa8 * _DAT_004ad1f8 - _DAT_004ad1fc) + _DAT_00e29b94
      ;
      iVar1 = FUN_004816b0();
      _DAT_00e29b98 = (float)iVar1 * _DAT_004acfa8 * _DAT_004ad038 - _DAT_004ad0c4;
      FUN_0042f7d0(&DAT_00e2b470,&DAT_004c4558);
      FUN_0042f860(local_c,&DAT_00e2b470,&DAT_00e29b90);
      FUN_0042f830(&DAT_00e2b470,&DAT_00e2b470,local_c);
    }
  }
  DAT_0050c930 = 1;
  DAT_0050c940 = 1;
  return;
}

