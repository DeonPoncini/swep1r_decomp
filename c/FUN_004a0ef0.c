#include "prototype.h"


undefined4 FUN_004a0ef0(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _FILETIME local_18;
  _SYSTEMTIME _Stack_10;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_18);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_18,&_Stack_10);
      if (BVar1 != 0) {
        uVar2 = FUN_004a5cd0(_Stack_10.wYear,_Stack_10.wMonth,_Stack_10.wDay,_Stack_10.wHour,
                             _Stack_10.wMinute,_Stack_10.wSecond,0xffffffff);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

