#include "prototype.h"


void FUN_004a1670(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_004d1fc0 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_0049f270(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_004a1670(0x11);
    if (*(int *)(&DAT_004d1fc0 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_0049f200();
    }
    FUN_004a16f0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4));
  return;
}

