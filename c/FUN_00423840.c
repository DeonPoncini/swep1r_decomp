#include "prototype.h"


bool FUN_00423840(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == DAT_00ec8600) && (param_3 == DAT_00ec8604)) {
    return false;
  }
  FUN_0048a1c0();
  FUN_00488030();
  iVar1 = FUN_00487f00(*(undefined4 *)(param_1 + 0x14),0);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00489ec0(*(undefined4 *)(param_1 + 0x18));
  return iVar1 == 0;
}

