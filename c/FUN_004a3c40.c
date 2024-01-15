#include "prototype.h"


undefined4 FUN_004a3c40(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_004a1640();
  DAT_004d4230 = TlsAlloc();
  if (DAT_004d4230 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_004a8cc0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_004d4230,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004a3ca0(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}

