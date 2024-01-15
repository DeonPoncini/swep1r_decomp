#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00423210(void)

{
  DAT_004eb410 = 0x2b110;
  DAT_004eb404 = 0;
  DAT_004eb40c = 0;
  DAT_004eb418 = 0;
  DAT_004eb408 = 0;
  DAT_004eb414 = FUN_00484aa0(1,0x5622,0x10,0x2b110,4);
  DAT_004eb400 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  FUN_00423350();
  DAT_004eb478 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&DAT_00423330,
                              (LPVOID)0x0,0,(LPDWORD)&DAT_004eb3f8);
  DAT_004eb3fc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  _DAT_004eb47c = 1;
  DAT_004eb44c = DAT_004eb44c + DAT_004eb410;
  return 1;
}

