#include "prototype.h"


undefined4 FUN_00407f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00485880(DAT_004d6b3c * 0x20 + 0x101,0);
  }
  if (param_1 == 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00485880(0x201,0);
  }
  if (param_1 == 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00485880(1,0);
  }
  iVar1 = __ftol();
  if ((((iVar2 == 0) && (iVar4 == 0)) && (iVar3 == 0)) && (iVar1 == 0)) {
    return 0;
  }
  return 1;
}

