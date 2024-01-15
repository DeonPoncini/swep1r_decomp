#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468d00(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x4c);
  }
  fVar1 = (float10)FUN_0042f950(param_1 + 0x50,param_1 + 0x44);
  if (fVar1 <= (float10)_DAT_004ad668) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}

