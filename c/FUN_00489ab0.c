#include "prototype.h"


undefined4 FUN_00489ab0(void)

{
  int iVar1;
  HWND hWnd;
  tagPOINT local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_0050b5cc == 1) {
    DAT_0050b5cc = 0;
    return 0;
  }
  while( true ) {
    if (DAT_0052d458 == 0) {
      hWnd = (HWND)FUN_0048c780();
      local_28.y = 0;
      local_28.x = 0;
      ClientToScreen(hWnd,&local_28);
      local_10 = local_28.x;
      local_8 = local_28.x + DAT_00ec8dac;
      local_18 = DAT_00ec8dac;
      local_c = local_28.y;
      local_4 = local_28.y + DAT_00ec8db0;
      local_20 = 0;
      local_1c = 0;
      local_14 = DAT_00ec8db0;
      iVar1 = (**(code **)(*DAT_00ec8d00 + 0x14))
                        (DAT_00ec8d00,&local_10,DAT_00ec8e00,&local_20,0x1000000,0);
    }
    else {
      iVar1 = (**(code **)(*DAT_00ec8d00 + 0x2c))(DAT_00ec8d00,0,0);
    }
    if (iVar1 == 0) break;
    if (((iVar1 == -0x7789fe3e) &&
        ((iVar1 = (**(code **)(*DAT_00ec8d00 + 0x6c))(DAT_00ec8d00), iVar1 != 0 ||
         ((iVar1 = 0, DAT_0052d458 == 0 &&
          (iVar1 = (**(code **)(*DAT_00ec8e00 + 0x6c))(DAT_00ec8e00), iVar1 != 0)))))) ||
       ((iVar1 != -0x7789fde4 && (iVar1 != 0)))) {
      return 1;
    }
  }
  return 0;
}

