#include "prototype.h"


uint FUN_00405dd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 == 1) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880(uVar2 + 0x200,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          return uVar2;
        }
        uVar3 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
  }
  else if (param_1 == 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880((DAT_004d6b3c + 8) * 0x20 + uVar2,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          return uVar2;
        }
        uVar3 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x20);
  }
  else if (param_1 == 2) {
    uVar2 = 0;
    do {
      iVar1 = FUN_00485880(uVar2,0);
      if ((iVar1 != 0) && (iVar1 = FUN_00408020(uVar2), iVar1 == 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x100);
  }
  if ((param_2 == 0) || (param_1 == 2)) {
    uVar3 = 0xffff;
  }
  return uVar3;
}

