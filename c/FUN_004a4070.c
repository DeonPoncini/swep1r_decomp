#include "prototype.h"


DWORD FUN_004a4070(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  hFile = (HANDLE)FUN_004a49e0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_004a3dc0();
    *puVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    DVar3 = GetLastError();
  }
  else {
    DVar3 = 0;
  }
  if (DVar3 != 0) {
    FUN_004a3d40(DVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}

