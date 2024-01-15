#include "prototype.h"


void FUN_004a16f0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4));
  return;
}

