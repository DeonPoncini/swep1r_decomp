#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bf20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_24;
  float local_20;
  undefined local_18 [12];
  undefined local_c [12];
  
  iVar1 = (int)param_1;
  FUN_0042f7d0(local_c,&DAT_004c4010 + *(int *)((int)param_1 + 0x34) * 0x20);
  FUN_0042f7d0(&local_24,&DAT_004c401c + *(int *)((int)param_1 + 0x34) * 0x20);
  iVar3 = 0;
  if ('\0' < *(char *)((int)param_1 + 0x70)) {
    param_1 = &DAT_00e29970;
    do {
      FUN_0045cb80(iVar1,iVar3);
      iVar2 = FUN_00450b30(0x456c6d6f,iVar3 + 0x1c);
      if (iVar2 != 0) {
        FUN_0044afb0(*param_1,local_18);
        fVar4 = (float10)FUN_0042f560(_DAT_00e298a0 - local_24,local_20 - _DAT_00e298a4);
        FUN_00468800(iVar3 + 0x1c,0x14,local_18,&DAT_00e298a0,*(undefined4 *)(iVar2 + 0x68),
                     (float)fVar4);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < *(char *)(iVar1 + 0x70));
  }
  return;
}

