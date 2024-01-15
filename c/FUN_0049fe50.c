#include "prototype.h"


int FUN_0049fe50(int param_1)

{
  bool bVar1;
  
  if (DAT_00dfab38 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_00ecd60c);
    bVar1 = DAT_00ecd608 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_00ecd60c);
      FUN_004a1670(0x13);
    }
    param_1 = FUN_0049fee0(param_1);
    if (bVar1) {
      FUN_004a16f0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
  }
  return param_1;
}

