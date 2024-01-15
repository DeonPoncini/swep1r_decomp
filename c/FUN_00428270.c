#include "prototype.h"


void FUN_00428270(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 2) {
    iVar1 = 1;
  }
  else if (param_1 == 1) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x800;
    if (param_1 != 3) {
      iVar1 = param_1;
    }
  }
  iVar2 = 0;
  if (0 < DAT_0050b6fc) {
    puVar3 = &DAT_00e9ec60;
    do {
      FUN_00428030(*puVar3,iVar1,0x3f800000,0x3f800000);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < DAT_0050b6fc);
  }
  if (param_1 == 3) {
    DAT_0050b6fc = 0;
  }
  return;
}

