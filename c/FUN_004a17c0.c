#include "prototype.h"


void FUN_004a17c0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004a16f0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

