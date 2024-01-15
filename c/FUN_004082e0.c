#include "prototype.h"


undefined4 FUN_004082e0(int *param_1,int *param_2)

{
  BOOL BVar1;
  tagPOINT local_8;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    *param_1 = 0;
    *param_2 = 0;
    BVar1 = GetCursorPos(&local_8);
    if (BVar1 != 0) {
      if (DAT_00ec86c4 == 0x200) {
        *param_1 = local_8.x + (local_8.x >> 2);
        *param_2 = local_8.y + (local_8.y >> 2);
        return 1;
      }
      *param_1 = local_8.x;
      *param_2 = local_8.y;
      return 1;
    }
  }
  return 0;
}

