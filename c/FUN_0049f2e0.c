#include "prototype.h"


LPVOID FUN_0049f2e0(int param_1)

{
  LPVOID pvVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_004d422c) {
    FUN_004a1670(9);
    pvVar1 = (LPVOID)FUN_004a34c0(param_1 + 0xfU >> 4);
    FUN_004a16f0(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  pvVar1 = HeapAlloc(DAT_00ecd604,0,dwBytes);
  return pvVar1;
}

