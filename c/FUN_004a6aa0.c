#include "prototype.h"


undefined4 FUN_004a6aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_00ecd60c);
  bVar2 = DAT_00ecd608 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    FUN_004a1670(0x13);
  }
  uVar1 = FUN_004a6b10(param_1,param_2);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_00ecd60c);
    return uVar1;
  }
  FUN_004a16f0(0x13);
  return uVar1;
}

