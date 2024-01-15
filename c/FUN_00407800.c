#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407800(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00ec8830 = 0;
  DAT_00ec8834 = 0;
  DAT_00ec8838 = 0;
  puVar2 = &DAT_00ec8840;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00ec883c = 0;
  puVar2 = &DAT_00ec88a0;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 < 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)&DAT_004d5fc0;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if ((param_1 < 0) || (param_1 == 1)) {
    puVar2 = (undefined4 *)&DAT_004d6518;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if ((param_1 < 0) || (param_1 == 2)) {
    puVar2 = (undefined4 *)&DAT_004d6828;
    for (iVar1 = 0xc3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (param_1 < 0) {
    DAT_004d5e20 = 0;
    DAT_004d5e24 = 0;
    DAT_004d5e28 = 0;
    return;
  }
  (&DAT_004d5e20)[param_1] = 0;
  return;
}

