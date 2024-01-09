#include "prototype.h"

#include "constants.h"
#include "global.h"

#include "kernel32.h"

#include "types.h"

#include <stddef.h>

// functions related to critical sections

void FUN_004a1640(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004d2004);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004d1ff4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004d1fe4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004d1fc4);
  return;
}

// enter a critical section by ID
void FUN_004a1670(int param_1)
{
  LPCRITICAL_SECTION lpCriticalSection;

  // this list stores all the critical sections
  if (*(int *)(&DAT_004d1fc0 + param_1 * 4) == 0) {
      // allocate a new critical section
      // 0x18 is 24 bytes - sizeof(CRITICAL_SECTION)
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_0049f270(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
#if 0
      __amsg_exit(0x11);
#endif
    }
    FUN_004a1670(0x11);
    if (*(int *)(&DAT_004d1fc0 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4) = lpCriticalSection;
    }
    else {
#if 0
      FUN_0049f200();
#endif
    }
    FUN_004a16f0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4));
  return;
}

void FUN_004a16f0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_004d1fc0 + param_1 * 4));
  return;
}

void FUN_004a1710(LPCRITICAL_SECTION param_1)

{
  if ((0x4d45f7 < (int)param_1) && ((int)param_1 < 0x4d4859)) {
    FUN_004a1670(((int)(param_1 - 0x4d45f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


void FUN_004a1750(int param_1,LPCRITICAL_SECTION param_2)
{
  if (param_1 < 0x14) {
    FUN_004a1670(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


void FUN_004a1780(LPCRITICAL_SECTION param_1)
{
  if ((0x4d45f7 < (int)param_1) && ((int)param_1 < 0x4d4859)) {
    FUN_004a16f0(((int)(param_1 - 0x4d45f8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

void FUN_004a17c0(int param_1,LPCRITICAL_SECTION param_2)
{
  if (param_1 < 0x14) {
    FUN_004a16f0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}
