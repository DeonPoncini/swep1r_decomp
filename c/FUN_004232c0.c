#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004232c0(void)

{
  CloseHandle(DAT_004eb400);
  DAT_004eb400 = (HANDLE)0x0;
  FUN_004850a0(DAT_004eb414);
  DAT_004eb414 = 0;
  if (DAT_004eb3fc != (HANDLE)0x0) {
    CloseHandle(DAT_004eb3fc);
  }
  DAT_004eb3fc = (HANDLE)0x0;
  TerminateThread(DAT_004eb478,0);
  DAT_004eb478 = (HANDLE)0x0;
  _DAT_004eb47c = 0;
  return 1;
}

