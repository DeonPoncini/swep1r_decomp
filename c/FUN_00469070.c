#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469070(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  iVar1 = param_1 + 0x44;
  FUN_0042f860(local_c,param_1 + 0x50,iVar1);
  FUN_0042f860(local_18,&DAT_00e2af90,&DAT_00e298f0);
  FUN_0042f860(local_24,iVar1,&DAT_00e298f0);
  FUN_0042f9b0(local_c);
  FUN_0042f9b0(local_18);
  FUN_0042f9b0(local_24);
  iVar2 = 0;
  fVar3 = (float10)FUN_0042f890(local_18,local_24);
  if (fVar3 < (float10)_DAT_004ad688) {
    do {
      if (0x27 < iVar2) break;
      FUN_0042fa80(iVar1,iVar1,_DAT_00e22a50 * _DAT_004ad63c,local_c);
      FUN_0042f860(local_18,&DAT_00e2af90,&DAT_00e298f0);
      FUN_0042f860(local_24,iVar1,&DAT_00e298f0);
      FUN_0042f9b0(local_18);
      FUN_0042f9b0(local_24);
      iVar2 = iVar2 + 1;
      fVar3 = (float10)FUN_0042f890(local_18,local_24);
    } while (fVar3 < (float10)_DAT_004ad688);
  }
  if (0 < iVar2) {
    FUN_0044b270(*(undefined4 *)(param_1 + 0x30),iVar1);
  }
  return;
}

