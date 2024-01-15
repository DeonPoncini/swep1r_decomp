#include "prototype.h"


void FUN_00423ae0(HWND param_1,int param_2)

{
  if (param_2 != 0) {
    if (DAT_0050b5d0 == 0) {
      if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
        ShowWindow(param_1,3);
      }
      FUN_004238a0();
      FUN_00488100(1);
      FUN_0048ac50();
      FUN_004238a0();
    }
    PTR_FUN_004b7a38 = &LAB_00423580;
    DAT_0050b5d0 = 1;
    FUN_004804b0(0);
    FUN_00485a30(param_2);
    return;
  }
  PTR_FUN_004b7a38 = FUN_00423cb0;
  FUN_00488100(0);
  DAT_0050b5d0 = 0;
  FUN_004804b0(1);
  FUN_00485a30(0);
  return;
}

