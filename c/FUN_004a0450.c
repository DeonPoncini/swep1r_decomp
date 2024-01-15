#include "prototype.h"


undefined4 FUN_004a0450(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_004a49e0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_004a49e0(1);
      iVar2 = FUN_004a49e0(2);
      if (iVar1 == iVar2) goto LAB_004a04a6;
    }
    hObject = (HANDLE)FUN_004a49e0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004a04a8;
    }
  }
LAB_004a04a6:
  DVar4 = 0;
LAB_004a04a8:
  FUN_004a4940(param_1);
  *(undefined *)((&DAT_00ecd500)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_004a3d40(DVar4);
    return 0xffffffff;
  }
  return 0;
}

