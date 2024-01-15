#include "prototype.h"


undefined4 FUN_004294e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_004318c0();
  iVar4 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  while (((iVar2 = FUN_004318d0(iVar4), iVar2 == 0 ||
          (uVar3 = FUN_00431770(iVar2), (uVar3 & 1) == 0)) ||
         (iVar2 = FUN_004318b0(iVar2), iVar2 != param_1))) {
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) {
      return 0;
    }
  }
  return 1;
}

