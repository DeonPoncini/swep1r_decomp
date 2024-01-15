#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dd50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (DAT_004d5e00 != 0) {
    DAT_004eb21c = param_1;
    puVar3 = param_2;
    puVar5 = &DAT_00ea0320;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_004eb218 = 1;
    DAT_00ec7bc8 = param_2[2];
    DAT_00ec7bcc = param_2[3];
    DAT_00ec7bd0 = param_2[4];
    DAT_00ec7bd4 = param_2[5];
    DAT_00ec7bd8 = param_2[6];
    DAT_00ec7bdc = param_2[7];
    DAT_00ec7be0 = param_2[8];
    DAT_00ec7be4 = param_2[9];
    iVar2 = 0;
    _DAT_00ec7bc0 = &DAT_00ec7be8;
    if (0 < (int)param_2[2]) {
      do {
        *_DAT_00ec7bc0 = (int)*(char *)(iVar2 + 0x73 + param_1);
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_2[2]);
    }
    iVar2 = 0;
    if (0 < (int)param_2[2]) {
      piVar4 = &DAT_004ea8f0;
      do {
        iVar1 = *piVar4;
        piVar4 = piVar4 + 1;
        *_DAT_00ec7bc0 = iVar1;
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_2[2]);
    }
    _DAT_00ec7bc0 = _DAT_00ec7bc0 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x36;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}

