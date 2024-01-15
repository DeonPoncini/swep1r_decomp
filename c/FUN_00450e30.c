#include "prototype.h"


void FUN_00450e30(int param_1)

{
  undefined4 local_20 [8];
  
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 6) & 0x100) == 0)) {
    local_20[0] = 0x46726565;
    FUN_00450c00(param_1,local_20);
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  }
  return;
}

