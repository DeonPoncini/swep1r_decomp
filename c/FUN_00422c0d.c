#include "prototype.h"


undefined4 FUN_00422c0d(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if ((in_EAX != 0) && ((*(byte *)(in_EAX + 0x24) & 1) != 0)) {
    FUN_00422d10();
  }
  DAT_004eb40c = *(int *)(unaff_ESI + 0x28);
  DAT_004eb404 = unaff_EDI;
  DAT_004eb418 = unaff_ESI;
  (**(code **)(DAT_00ecc420 + 0x4c))();
  iVar1 = FUN_004233a0();
  DAT_004eb40c = DAT_004eb40c - iVar1;
  *(uint *)(unaff_ESI + 0x24) = *(uint *)(unaff_ESI + 0x24) | 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004b7e7e);
  return 1;
}

