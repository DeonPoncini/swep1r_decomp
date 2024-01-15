#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407ea0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00485880((DAT_004d6b3c + 8) * 0x20,0);
  }
  if (param_1 == 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00485880(0x200,0);
  }
  if (param_1 == 2) {
    bVar1 = false;
    goto LAB_00407f2d;
  }
  iVar3 = FUN_00485880(0x1c,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00485880(0x9c,0);
    if (iVar3 == 0) {
      iVar3 = FUN_00411720();
      if (iVar3 == 0) {
        iVar3 = FUN_00485880(0x39,0);
        if (iVar3 != 0) goto LAB_00407f28;
      }
      bVar1 = false;
      goto LAB_00407f2d;
    }
  }
LAB_00407f28:
  bVar1 = true;
LAB_00407f2d:
  if (((DAT_004d55d4 == 0) || (param_1 == 0)) || (DAT_004d5e30 <= (float)_DAT_004ac338)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((iVar4 == 0) && (iVar5 == 0)) && ((!bVar1 && (!bVar2)))) {
    return 0;
  }
  return 1;
}

