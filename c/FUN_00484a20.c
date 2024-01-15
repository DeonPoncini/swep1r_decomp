#include "prototype.h"


void FUN_00484a20(void)

{
  if (DAT_0050d548 != (int *)0x0) {
    if (DAT_0050d564 != (int *)0x0) {
      (**(code **)(*DAT_0050d564 + 8))(DAT_0050d564);
    }
    if (DAT_0050d560 != (int *)0x0) {
      (**(code **)(*DAT_0050d560 + 8))(DAT_0050d560);
    }
    (**(code **)(*DAT_0050d548 + 8))(DAT_0050d548);
    DAT_0050d564 = (int *)0x0;
    DAT_0050d560 = (int *)0x0;
    DAT_0050d548 = (int *)0x0;
    CoUninitialize();
    return;
  }
  return;
}

