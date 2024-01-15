#include "prototype.h"


undefined4 FUN_00440b50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7f0(&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e2af90);
  if (iVar1 != 0) {
    iVar1 = FUN_0042f7f0(&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e2b470);
    if (iVar1 != 0) {
      iVar1 = FUN_0042f7f0(&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20,&DAT_00e29b90);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

