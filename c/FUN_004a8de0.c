#include "prototype.h"


int FUN_004a8de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00dfaf24 != (FARPROC)0x0) {
LAB_004a8e30:
    if (DAT_00dfaf28 != (FARPROC)0x0) {
      iVar1 = (*DAT_00dfaf28)();
    }
    if ((iVar1 != 0) && (DAT_00dfaf2c != (FARPROC)0x0)) {
      iVar1 = (*DAT_00dfaf2c)(iVar1);
    }
    iVar1 = (*DAT_00dfaf24)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00dfaf24 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_00dfaf24 != (FARPROC)0x0) {
      DAT_00dfaf28 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_00dfaf2c = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_004a8e30;
    }
  }
  return 0;
}

