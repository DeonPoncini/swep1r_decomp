#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457350(void)

{
  int iVar1;
  float fVar2;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];
  
  iVar1 = *DAT_00e29918;
  if (iVar1 != 0) {
    FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    FUN_0043e210();
    FUN_00431020(local_40,0x412147b0,0,0x43340000);
    FUN_0042f7d0(local_4c,&DAT_00e2af90);
    FUN_0042f7d0(local_10,local_4c);
    fVar2 = DAT_00e295a0 * _DAT_004acff0;
    FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
    FUN_00431640(iVar1,local_40);
    FUN_00431a50(iVar1,2,3,0x10,2);
  }
  return;
}

